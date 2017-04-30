/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/insert-interval
@Language: C++
@Datetime: 16-12-02 11:05
*/

/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */
class Solution {
public:
    /**
     * Insert newInterval into intervals.
     * @param intervals: Sorted interval list.
     * @param newInterval: new interval.
     * @return: A new interval list.
     */
    bool myfunc(Interval a,Interval b){
        if(a.start<b.start)return false;
        else return true;
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
    vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
        // write your code here
    //is the intervals empty? if empty,it is easy to insert
        if(intervals.empty()){
            intervals.push_back(newInterval);
            return intervals;
        }
        intervals.push_back(newInterval);
        return merge(intervals);
    }
};