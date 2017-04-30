/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/space-replacement
@Language: C++
@Datetime: 16-11-21 07:38
*/

class Solution {
public:
    /**
     * @param string: An array of Char
     * @param length: The true length of the string
     * @return: The true length of new string
     */
    int replaceBlank(char string[], int length) {
        // Write your code here
        if(length==0)return NULL;
        char string2[length*3];
        int i=0,j=0;
        while(i<length){
            if(string[i]!=' '){
                string2[j]=string[i];
                i++;
                j++;
            }
            else{
                string2[j++]='%';
                string2[j++]='2';
                string2[j++]='0';
                i++;
            }
        }
        int temp=0;
        while(temp<=j){
            string[temp]=string2[temp];
            temp++;
        }
        return j;
        
    }
};     