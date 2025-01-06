#include <iostream>
#include <vector>
using namespace std;

bool sort (vector<int>& arr, int& n, int i){

    if(i==n-1){
        return true ;
    }
    if(arr[i+1] <= arr[i]){
        return false;
    }
    return sort (arr, n, i+1);

}

int main(){
    vector<int> v{1,2,3,4,5};
    int n = v.size();
    int i = 0;
    bool ans = sort(v, n, i);
    if(ans){
        cout<< "Array is Sorted"<<endl;
    }
    else{
        cout<< "Array is Unsorted"<<endl;
    }
    
    return 0;
}
