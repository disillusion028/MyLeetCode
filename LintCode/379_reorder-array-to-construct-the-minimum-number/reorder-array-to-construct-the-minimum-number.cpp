/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/reorder-array-to-construct-the-minimum-number
@Language: C++
@Datetime: 17-02-12 10:33
*/

class Solution {
public:
    /**
     * @param nums n non-negative integer array
     * @return a string
     */
    bool myfunc(string &a,string &b){
        if(a==b)return true;
        int x=a.length()<b.length()?a.length():b.length();
        for(int i=0;i<x;i++){
            if(a[i]<b[i])return true;
            if(a[i]>b[i])return false;
        }
        if(a.length()>b.length()&&a[x]<b[x-1])return true;
        if(a.length()>b.length()&&a[x]>=b[x-1])return false;
        if(a.length()<b.length()&&a[x-1]<b[x])return true;
        else return false;
    }
    void SelectionSort(vector<string> &array,int start,int end){
	for(int i = 0;i < end - start;i++)
		for(int j = i + 1;j < end - start + 1;j++){
			if(myfunc(array[i],array[j]))
				swap(array[i],array[j]);
		}
    }
    string minNumber(vector<int>& nums) {
        // Write your code here
        vector<string> numstr;
        for(auto i:nums){
            numstr.push_back(to_string(i));
        }
        int begin=0;
        int end=numstr.size();
        SelectionSort(numstr,begin,end-1);
        string ret;
        int flag=0;
        for(int i=numstr.size()-1;i>=0;i--){
            ret=ret+numstr[i];
        }
        int x;
        for(x=0;x<ret.size();x++){
            if(ret[x]!='0') {
                flag=1;
                break;
            }
        }
        
        if(flag==0)return "0";
        string ret2(ret.begin()+x,ret.end());
        
        return ret2;
    }
    
};