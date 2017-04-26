// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // binary search problem?
        int mid;
        int start=1,end=n;
        while(1){
            mid = start+(end-start)/2;
            if(start>=end){return mid;}
            if(mid==end)return mid;
            if(isBadVersion(mid)==true){
                // bad version is before or just mid
                end=mid;
            }else{
                start=mid+1;
            }
        }
    }
};//mid = start + (end-start)/2 is very useful to avoid overflow
