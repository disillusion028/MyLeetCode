/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> merge(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(),[](Interval a,Interval b){
        if(a.start<b.start)return true;
        else if(a.start>b.start)return false;
        else return a.end<b.end;
    });
        vector<Interval> ret;
        if(intervals.empty())return ret;
        int x=0;
        for(auto b=intervals.begin();b!=intervals.end();){
            bool flag=false;
            Interval temp;
            temp.start=b->start;
            temp.end=b->end;
            x=b->end;
            while((b+1!=intervals.end())&&(x>=(b+1)->start)){
                temp.end=max((b+1)->end,temp.end);
                x=temp.end;
                b++;
                flag=true;
            }
            ret.push_back(temp);
            b++;
        }
        return ret;
    }
};
