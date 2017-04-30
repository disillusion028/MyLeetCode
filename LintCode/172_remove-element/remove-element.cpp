/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/remove-element
@Language: C++
@Datetime: 16-11-24 03:07
*/

class Solution {
public:
    /** 
     *@param A: A list of integers
     *@param elem: An integer
     *@return: The new length after remove
     */
    int removeElement(vector<int> &A, int elem) {
        // write your code here
        for (auto i=A.begin();i!=A.end();){
            if(*i==elem) i=A.erase(i);
            else i++;
        }
        return A.size();
    }
};