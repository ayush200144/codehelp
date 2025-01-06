#include <iostream>
#include <climits>
using namespace std;

//&maxi is pass by reference because when we pass by value then maxi is chanes 
//and when we pass &maxi then main change occur in maxi variable.
void print (int arr[], int n, int i, int &maxi){
    
    if(i>=n){
        return ;
    }
    if(arr[i] > maxi){
        maxi = arr[i];
    }
    print (arr, n, i+1, maxi);
    
}

int main(){
    int arr[5] = {11,25,13,434,5};
    int n = 5;
    int i = 0;
    int maxi = INT_MIN;
    print(arr, n, i, maxi);
    cout<< "Answer -> "<< maxi<<endl;
    return 0;
}
