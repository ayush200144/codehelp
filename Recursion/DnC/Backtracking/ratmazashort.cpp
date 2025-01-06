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

    int R[4] = {1,0,0,-1};
    int C[4] = {0,-1,1,0};
    char D[4] = {'D','L','R','U'};

    for(int k = 0; k<4; k++){
      int new1 = i + R[k];
      int new2 = j + C[k];
      char newD = D[k];
      if (ifsafe(arr, row, col, new1, new2, visited)){
      visited[new1][new2] = true;
      maze(arr, row, col, new1, new2, visited, path, output + newD);
      //backtrack
      visited[new1][new2] = false;
    }
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
