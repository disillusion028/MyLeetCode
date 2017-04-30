/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/valid-sudoku
@Language: C++
@Datetime: 16-12-07 07:50
*/

class Solution {
public:
    /**
      * @param board: the board
      * @return: wether the Sudoku is valid
      */
    bool isValidSudoku(const vector<vector<char>>& board) {
        if(board.size()!=9)return false;
        
        for(int i=0;i<board.size();i++){
            vector<char>myvec=board[i];
            if(false==isvalid(myvec))return false;
        }
        for(int i=0;i<board.size();i++){
            if(board[i].size()!=9)return false;
            vector<char>myvec;
            for(int j=0;j<9;j++){
                myvec.push_back(board[j][i]);
            }
            if(false==isvalid(myvec))return false;
        }
        int p=0;
        int q=0;
        
        while(q<=6){
        p=0;
        while(p<=6){
        vector<char>myvec;
        for(int i=p;i<3+p;i++){
            for(int j=q;j<3+q;j++){
                myvec.push_back(board[i][j]);
            }
        }
        if(false==isvalid(myvec))return false;
        myvec.clear();
        p+=3;
        }
        q+=3;
        }
        
        return true;
    }
    bool isvalid(vector<char> myvec){
        if(myvec.size()!=9)return false;
        sort(myvec.begin(),myvec.end());
        for(int i=0;i<9;i++){
            if(myvec[i]!='.'){
                if(myvec[i]<'0'||myvec[i]>'9')return false;
                if(i>0&&myvec[i]>='0'&&myvec[i]<='9'){
                    if(myvec[i]==myvec[i-1])return false;
                }
            }
        }
        
        return true;
    }
};