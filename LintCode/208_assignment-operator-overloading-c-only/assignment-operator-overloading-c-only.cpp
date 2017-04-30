/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/assignment-operator-overloading-c-only
@Language: C++
@Datetime: 17-02-12 09:17
*/

class Solution {
public:
    char *m_pData;
    Solution() {
        this->m_pData = NULL;
    }
    Solution(char *pData) {
        this->m_pData = pData;
    }

    // Implement an assignment operator
    Solution operator=(const Solution &object) {
        // write your code here
        if(this==&object) return *this;
        if(object.m_pData==NULL){
            delete m_pData;
            m_pData=NULL;
            return *this;
        }
        delete m_pData;
        m_pData=new char[strlen(object.m_pData)];
        strcpy(m_pData,object.m_pData);
        return *this;
    }
};