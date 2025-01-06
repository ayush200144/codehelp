#include <iostream>
#include <vector>
using namespace std;


bool ifsafe(int arr[][3], int row, int col, int i, int j, vector<vector<bool>> &visited){
  if(((i>=0 && i<row) && (j>=0 && j<col)) 
      && (arr[i][j] == 1) 
      && (visited[i][j] == false)){
    return true;
  }
  else{
    return false;
  }
}
void  maze(int arr[][3], int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output){
    //base condition 
    if(i == row -1 && j == col-1){
        path.push_back(output);
        return;
    }

    //down -> i+1,j
    if (ifsafe(arr, row, col, i+1, j, visited)){
      visited[i+1][j] = true;
      maze(arr, row, col, i+1, j, visited, path, output + 'D');
      //backtrack
      visited[i+1][j] = false;
    }
    //left -> i, j-1
    if (ifsafe(arr, row, col, i, j-1, visited)){
      visited[i][j-1] = true;
      maze(arr, row, col, i, j-1, visited, path, output + 'L');
      //backtrack
      visited[i][j-1] = false;
    }
    //right
    if (ifsafe(arr, row, col, i, j+1, visited)){
      visited[i][j+1] = true;
      maze(arr, row, col, i, j+1, visited, path, output + 'R');
      //backtrack
      visited[i][j+1] = false;
    }
    //up
    if (ifsafe(arr, row, col, i-1, j, visited)){
      visited[i-1][j] = true;
      maze(arr, row, col, i-1, j, visited, path, output + 'U');
      //backtrack
      visited[i-1][j] = false;
    }
}

int main(){
    int arr[3][3] = {{1,0,0},
                     {1,1,0},
                     {1,1,1}};
    if (arr[0][0] == 0){
      cout<<"No Path Eixts"<< endl;
      return 0;
    }
    int row = 3;
    int col = 3;
    vector<vector<bool>> visited(row, vector<bool>(col,false));
    //scr ki value k true mark kredete h
    visited[0][0] = true;
    int i = 0;
    int j = 0;
    vector<string> path;
    string output = "";

    maze(arr, row, col, i, j, visited, path, output);

    for (auto i:path){
      cout<<i<<" ";
    }
    if(path.size() == 0){
      cout<<"No Path Eixts"<< endl;
      return 0;
    }
    return 0;
}
