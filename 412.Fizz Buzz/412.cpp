class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ret;
        ret.reserve(n);
        for(int i=1;i<=n;i++){
            if(i%5==0&&i%3==0)ret.push_back("FizzBuzz");
            else if(i%5==0)ret.push_back("Buzz");
            else if(i%3==0)ret.push_back("Fizz");
            else ret.push_back(to_string(i));
        }
        return ret;
    }
};//有点儿想用move，发现自己有些天真了，不过reserve还是得用的
