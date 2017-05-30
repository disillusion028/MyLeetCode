class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0)
            return false;
            
        int reversed = rev(x);
        if(reversed==x)
            return true;
            
        return false;
    }    
    int rev(int x)
    {
        int sum=0;
        while(x!=0)
        {
            int rem = x%10;
            sum=sum*10+rem;
            x=x/10;
        }
        
        return sum;
    }
};
