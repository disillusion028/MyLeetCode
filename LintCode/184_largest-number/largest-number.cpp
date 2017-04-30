/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/largest-number
@Language: C++
@Datetime: 16-12-02 09:44
*/

class Solution {
public:
    /**
     *@param num: A list of non negative integers
     *@return: A string
     */
     
    bool myfunc(string &a,string &b){
        if(a==b)return false;
        int x=a.length()<b.length()?a.length():b.length();
        for(int i=0;i<x;i++){
            if(a[i]<b[i])return false;
            if(a[i]>b[i])return true;
        }
        if(a.length()>b.length()&&a[x]<b[x-1])return false;
        if(a.length()>b.length()&&a[x]>=b[x-1])return true;
        if(a.length()<b.length()&&a[x-1]<b[x])return false;
        else return true;
    }
    void SelectionSort(vector<string> &array,int start,int end){
	for(int i = 0;i < end - start;i++)
		for(int j = i + 1;j < end - start + 1;j++){
			if(myfunc(array[i],array[j]))
				swap(array[i],array[j]);
		}
    }
    string largestNumber(vector<int> &num) {
        // write your code here
        vector<string> numstr;
        for(auto i:num){
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
        for(auto i:ret){
            if(i!='0') {
                flag=1;
                break;
            }
        }
        if(flag==0)return "0";
        return ret;
    }
};