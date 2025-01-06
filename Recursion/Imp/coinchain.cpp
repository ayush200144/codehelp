#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int findmini(vector<int>arr, int traget){
    //when traget reach to 0 then it means that to make 0 we donot add any thing.
    if(traget == 0){
        return 0;
    }
    if(traget<0){
        return INT_MAX;
    }
    
    int mini = INT_MAX;
    for (int i = 0; i<arr.size(); i++){
        int value = findmini(arr, traget-arr[i]);
        if (value != INT_MAX)
        mini = min(mini, value+1);
    }
    return mini;
}

int main(){
    vector<int> arr{1,2};
    int traget = 5;
    
    int ans = findmini(arr, traget);

    cout <<endl<< "Miniumn Answer -> "<< ans << endl;
    return 0;
}
