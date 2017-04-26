class Solution {
public:
    int findComplement(int num) {
        int flag=0;
        for(int i=31;i>=0;i--){
            if(num&(1<<i))flag=1;
            if(flag==1){
                num^=(1<<i);
            }
        }
        return num;
    }
};//ez
