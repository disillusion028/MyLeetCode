package SortAnArray

// 1. merge sort top down
func sortArray(nums []int) []int {
    if len(nums) <=1 {
        return nums
    }
    pivot := len(nums) / 2
    leftNums := sortArray(nums[0:pivot])
    rightNums := sortArray(nums[pivot:])
    return merge(leftNums, rightNums)
}

func merge(leftNums, rightNums []int) []int{
	leftIter := 0
	rightIter := 0
    var ret []int
	
	for leftIter < len(leftNums) && rightIter < len(rightNums) {	
		if leftNums[leftIter] < rightNums[rightIter]{
			ret = append(ret, leftNums[leftIter])
			leftIter ++
		} else {
			ret = append(ret, rightNums[rightIter])
			rightIter ++
		}
	}
	for leftIter < len(leftNums){
		ret = append(ret, leftNums[leftIter])
		leftIter++
	}
	
	for rightIter < len(rightNums){
		ret = append(ret, rightNums[rightIter])
		rightIter++
	}
	return ret
}