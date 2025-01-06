#include <iostream>
#include <climits>
using namespace std;

//&mini is pass by reference because when we pass by value then mini is chanes 
//and when we pass &mini then main change occur in mini variable.

void print (int arr[], int n, int i, int &mini){
    
    if(i>=n){
        return ;
    }
    // one way 
    // if(arr[i] < mini){
    //     mini = arr[i];
    // }
    //other way
    mini = min(mini, arr[i]);

    print (arr, n, i+1, mini);
    
}

int main(){
    int arr[5] = {11,25,13,434,5};
    int n = 5;
    int i = 0;
    int mini = INT_MAX;
    print(arr, n, i, mini);
    cout<< "Answer -> "<< mini<<endl;
    return 0;
}
