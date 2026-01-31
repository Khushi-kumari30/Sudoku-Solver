#include<iostream>
#include<vector>
using namespace std;
bool issafe(vector<vector<int>>&board,int row,int col,int num){
    //for row
    for(int j=0;j<9;j++){
        if(board[row][j] == num)
        return false;
    }
    //for col
     for(int i=0;i<9;i++){
        if(board[i][col] == num)
        return false;
    }
    // 3 * 3
    int srow = (row /3)*3;
    int scol = (col / 3) *3;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[srow + i][scol + j] == num){
                return false;
            }
        }
    }
    return true;
}

bool solveSuduko(vector<vector<int>>&board){
    for(int row=0;row<9;row++){
        for(int col=0;col<9;col++){
            //check empty cell
            if(board[row][col] == 0){
                for(int num=1;num<=9;num++){
                    if(issafe(board,row,col,num)){
                        board[row][col] = num;
                    if(solveSuduko(board))
                        return true;

                    board[row][col] = 0;
                    }
                    }
                return false;
                }
        }
    }
    return true;
}
int main(){
    vector<vector<int>> board = {
    {5, 3, 0, 0, 7, 0, 0, 0, 0},
    {6, 0, 0, 1, 9, 5, 0, 0, 0},
    {0, 9, 8, 0, 0, 0, 0, 6, 0},
    {8, 0, 0, 0, 6, 0, 0, 0, 3},
    {4, 0, 0, 8, 0, 3, 0, 0, 1},
    {7, 0, 0, 0, 2, 0, 0, 0, 6},
    {0, 6, 0, 0, 0, 0, 2, 8, 0},
    {0, 0, 0, 4, 1, 9, 0, 0, 5},
    {0, 0, 0, 0, 8, 0, 0, 7, 9}
};
if(solveSuduko(board)){
    for(int i=0;i<9;i++){
        if(i % 3 == 0 && i != 0) cout << "---------------------" << endl;
        for(int j=0;j<9;j++){
            if(j % 3 == 0 && j != 0) cout << "| ";
            cout <<board[i][j] <<" ";
        }
        cout<<endl;
    }
}else{
    cout<<"no solution"<<endl;
}
return 0;
}