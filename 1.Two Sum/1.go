package main
import "fmt"
func twoSum(nums []int, target int) []int {
    mymap:=make(map[int]int)
    ret:= []int{};
    for i:=0;i<len(nums);i++{
        rem:=target-nums[i]
        if p,q:=mymap[rem];q{
            ret=append(ret,p,i)
            return ret
        }
        mymap[nums[i]]=i
    }
    return ret
}