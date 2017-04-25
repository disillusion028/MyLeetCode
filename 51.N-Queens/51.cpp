class Solution {
public:
bool isValid(int x,int y,vector<vector<int>> &board){
        int m=x,n=y;
        while(m>=0&&n>=0){
            if(board[m][n]==1)return false;
            m--;n--;
        }
         m=x,n=y;
        while(m>=0&&n<board.size()){
            if(board[m][n]==1)return false;
            m--;n++;
        }
        m=board.size()-1;n=y;
        while(m>=0){
            if(board[m][n]==1)return false;
            m--;
        }
        m=x;n=board.size()-1;
        while(n>=0){
            if(board[m][n]==1)return false;
            n--;
        }
        return true;
    }
    void search(int x,const int n,vector<vector<int>> &board,vector<vector<string>>&ret){
        for(int i=0;i<n;i++){
            if(isValid(x,i,board)){
                board[x][i]=1;
                if(x+1==n){
                    vector<string>tvec;
                    for(size_t j=0;j<board.size();j++){
                        string temp;
                        for(size_t k=0;k<board.size();k++){
                            if(board[j][k]==1)temp.push_back('Q');
                            else temp.push_back('.');
                        }
                        tvec.push_back(temp);
                    }
                    ret.push_back(tvec);
                    board[x][i]=0;
                    return;
                }
                search(x+1,n,board,ret);
                board[x][i]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>> board;
        vector<vector<string>>ret;
        board.resize(n,vector<int>(n,0));
        search(0,n,board,ret);
        return ret;
    }
};//there is an opt way to solve this by use O(n) capacity(n numbers to represent the board),and isValid() function could be more concise.  
