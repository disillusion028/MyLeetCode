class Solution {
public:
    int mySqrt(int x) {
        // use binary search
        if(x<0)return -1;
        long long temp=x/2;
        while(1){
            if(temp*temp>x){
                temp=temp/2;
            }else if(temp*temp<x){
                if((temp+1)*(temp+1)>x)return static_cast<int>(temp);
                temp++;
            }else return static_cast<int>(temp);
        }
    }
};//丢人啦，这题的二分没写好，也没有用啥牛顿迭代法来搞
//看看别人的二分，标准！
class Solution {
public:
    int mySqrt(int x) {
        long high = x;
        long low = 1;
        if (x<=0) {return 0;}
        if (x==1) {return 1;}
        while (low<high-1)  // prevent the infinite loop "high=low+1" such that mid=low always
        {
            long mid = low + (high-low)/2;
            if(mid*mid==x)
                return mid;
            else if (mid*mid<x)
                low = mid;
            else 
                high = mid;
        }
        return low;
    }
}; 
