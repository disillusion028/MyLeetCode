class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // it is easy to use k+k-1 extra space
        /*
        vector<int> ret={1};
        if(rowIndex==0)return ret;
        ret.push_back(1);
        if(rowIndex==1)
            return ret;
        ret={1,2,1};
        if(rowIndex==2)
        return ret;
        vector<int> temp;
        for(int i=2;i<rowIndex;i++){
            vector<int>().swap(temp);
            temp.push_back(1);
            for(int j=1;j<=i;j++){
                temp.push_back((ret[j-1]+ret[j]));
            }
            temp.push_back(1);
            ret.swap(temp);
        }
        return ret;
        */
        //well another one use only k+1 extraspace
        vector<int>ret(rowIndex+1,0);
        ret[0]=1;
        for(int i=0;i<=rowIndex;i++){
            for(int j=i;j>0;j--){
                ret[j]+=ret[j-1];
            }
        }
        return ret;
    }
};
