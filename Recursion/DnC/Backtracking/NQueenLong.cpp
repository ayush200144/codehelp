#include <iostream>
#include <vector>
using namespace std;


void printSolution(vector<vector<char>> &arr, int n){
  for (int i = 0; i<n; i++){
    for (int j = 0; j<n ;j++){
      cout<< arr[i][j]<< " ";
    }
    cout<<endl;
  }
  cout<<endl;
}
bool ifSafe(int row, int col, vector<vector<char>> &arr, int n){
  int i = row;
  int j = col; 
  // check in colume
  while(j>=0){
    if (arr[i][j] == 'Q'){
      return false;
    }
    j--;
  }
  i = row;
  j = col;
  // check in upperleft colume
    while(i>=0&&j>=0){
      if (arr[i][j] == 'Q'){
      return false;
    }
    i--;
    j--;
    }
   i = row;
   j = col;
    // check in lowerleft colume
    while(i<n&&j>=0){
      if (arr[i][j] == 'Q'){
      return false;
    }
    i++;
    j--;
    }

    return true;
}
void  solve(vector<vector<char>> &arr, int col, int n){
    //base condition 
    if(col >= n){
        printSolution(arr, n);
        return;
    }

    // 1 case solve, remaining will be solve by recursion

    for (int row = 0; row<n; row++){
      if (ifSafe(row , col, arr, n)){
        // Placing queen on the board on this row and col
        arr[row][col] = 'Q';
        //recursion call
        solve(arr, col+1, n);
        //Backtracking
        arr[row][col] = '-';
      }
    }
    
}

int main(){
    int n = 4;
    vector<vector<char>> board(n, vector<char>(n,'-'));
    int col = 0;
    //0 = empty Cell
    //1 = queen at the cell
    solve(board, col, n);
    return 0;
}
