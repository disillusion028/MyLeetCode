class Solution {
public:
    int integerReplacement(int n) {
        int ret=0;
        if(n==INT_MAX)return 32;
        while(1){
        if(n==0)return ret+1;
        if(n==1)return ret;
        if(n==3)return ret+2;
        if(n%2==0){
            n=n/2;
            ret++;
        }
        else if((n+1)%4==0){
            n=n+1;
            ret++;
        }
        else{
            n=n-1;
            ret++;
        }
        }
    }
};//When (n+1)%4==0,means that a integer could use +1 and double /2 manipulation instead of -1;
