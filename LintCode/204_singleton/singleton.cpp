/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/singleton
@Language: C++
@Datetime: 16-12-01 16:22
*/

class Solution {
    private:
    Solution(){}
    
public:
    /**
     * @return: The same instance of this class every time
     */
    static Solution* getInstance() {
        // write your code here
        static Solution *m_Instance;
        return m_Instance;
    }
};