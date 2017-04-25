class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ret;
        int k1=k;
        int x=9,y=0;
        while(k1--){
            y+=x;
            x--;
        }
        if(y<n)return ret;
        search(0,k,n,ret);
        return ret;
    }
private:
    bool isUsed[10]={false};
    void search(int index,const int k,int target,vector<vector<int>>&ret){
        int temp=1;
        for(int i=1;i<=9;i++){
            if(isUsed[i]==true)temp=i;
        }
        for(int i=temp;i<=9;i++){
            if(isUsed[i]==false){
                isUsed[i]=true;
                if((target-i==0)&&(index+1==k)){
                    vector<int> temp;
                    for(int j=1;j<=9;j++){
                        if(isUsed[j]==true){
                            temp.push_back(j);
                        }
                    }
                    ret.push_back(temp);
                    isUsed[i]=false;
                    return;
                }
                else if(target-i>0)
                {
                    search(index+1,k,target-i,ret);
                }else if(target-i<0||index+1>k){
                    isUsed[i]=false;
                    return;
                }
                isUsed[i]=false;
            }
        }
    }
};//backtracking 0ms
