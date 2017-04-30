/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/merge-intervals
@Language: C++
@Datetime: 16-12-02 10:57
*/

/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 */
class Solution {
public:
    /**
     * @param intervals: interval list.
     * @return: A new interval list.
     */
    bool myfunc(Interval a,Interval b){
        if(a.start<b.start)return false;
        else return true;
    }
    void SelectionSort(vector<Interval> &array,int start,int end){
	for(int i = 0;i < end - start;i++)
		for(int j = i + 1;j < end - start + 1;j++){
			if(myfunc(array[i],array[j]))
				swap(array[i],array[j]);
		}
    }
    int Partition(vector<Interval>&a,int start,int end){
    Interval x =a[start];
    int i=start;
        for(int j=start + 1;j <= end;j++){
            if(myfunc(x,a[j])){
            i++;
            swap(a[i],a[j]);
            }
        }
        swap(a[i],a[start]);
        return i;
    }
    void QuickSort(vector<Interval>&array,int start,int end){
        if(start<end){
        int q = Partition(array,start,end);
        QuickSort(array,start,q-1);
        QuickSort(array,q+1,end);
    }
    }
    vector<Interval> merge(vector<Interval> &intervals) {
        // write your code here
        QuickSort(intervals,0,intervals.size()-1);
        if(intervals.size()<=1) return intervals;

        for(auto i=intervals.begin()+1;i<intervals.end();){
            while((i!=intervals.end())&&((i-1)->end<i->start)){
                i++;
            }
            if(i==intervals.end()) break;
            if((i-1)->end>=i->start){
                i->start=(i-1)->start;
                if((i-1)->end>i->end) i->end =(i-1)->end;
                intervals.erase(i-1);
                //i++;
            }
        }
        return intervals;
    }
};