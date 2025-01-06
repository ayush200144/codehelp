#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void nonadj (vector<int>&arr, int sum, int &maxi, int i){
    if(i >= arr.size() ){
        //maxi update;
        maxi = max(sum, maxi);
        return;
    }
    //include
    nonadj(arr, sum+arr[i], maxi, i+2);
    //exclude
    nonadj(arr, sum, maxi, i+1); 
}

int main(){
    vector <int> arr{2,1,4,9};
    int sum = 0; 
    int maxi = INT_MIN;
    int i = 0;
     nonadj(arr, sum, maxi, i);
    cout<< maxi<<endl;

    return 0;
}
