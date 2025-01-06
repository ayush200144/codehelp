#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
unordered_map<int, bool> rowcheck;
unordered_map<int, bool> upperleftdiagonal;
unordered_map<int, bool> lowerleftdiagonal;

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
  if(rowcheck[row] == true){
    return false;
  };
  if(upperleftdiagonal[row+col] == true){
    return false;
  };
  if(lowerleftdiagonal[n-1+col-row] == true){
    return false;
  };

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
        rowcheck[row] = true;
        upperleftdiagonal[row+col] = true;
        lowerleftdiagonal[n-1+col-row] = true;
        //recursion call
        solve(arr, col+1, n);
        //Backtracking
        arr[row][col] = '-';
        rowcheck[row] = false;
        upperleftdiagonal[row+col] = false;
        lowerleftdiagonal[n-1+col-row] = false;
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
