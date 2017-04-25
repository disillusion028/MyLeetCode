// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        if(guess(INT_MAX)==0)return INT_MAX;
        if(n==1)return 1;
        int mid = (n+1)/2;
        return guesshelper(1,n);
    }
private:
    int guesshelper(int start,int end){
        if(start==end){
            return start;
        }
        if(start>end)return -1;
        int mid=start+(end-start)/2;
        if(guess(mid)==0)return mid;
        else if(guess(mid)==-1){return guesshelper(start,mid-1);}
        else if(guess(mid)==1){return guesshelper(mid+1,end);}
    }
};// maybe I should not use a helper function
