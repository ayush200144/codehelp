#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int s, int e, int& target){
    //Base Case
    //Case 1 
    if(s>e){
        return -1;
    }
    // Case 2
    int mid = (s+e)/2;
    if(arr[mid] == target){
        return mid;
    }
    // Relation -> when mid is small than target, s = mid + 1 and mid is larger than target, e = mid - 1;
    if (arr[mid]<target){
        return binarySearch (arr, mid+1, e, target);
    }
    else{
        return binarySearch (arr, s, mid-1, target);
    }

}

int main(){
    vector<int> v{1,2,3,4,5};
    int n = v.size();
    int s = 0;
    int e = n-1;
    int target = 4;
    int ans = binarySearch(v,s,e, target);
    cout<< "Answer "<<ans<<endl;
    return 0;
}
