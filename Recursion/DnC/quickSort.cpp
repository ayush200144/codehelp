#include <iostream>
#include <vector>
using namespace std;

int partition (int arr[], int n, int s, int e){
    // step 1 :  Choose pivot element 
    int pivotindex = s;
    int pivotElement = arr[s];

    // step 2: find the correct position of pivot element and place it there
    int count = 0;
    for (int i = s+1; i <=e; i++){
        if(arr[i]<= pivotElement){
            count++;
        }
    }
    // jab main loop se bahr hua, toh mere pass pivot ki right position ka index ready h
    int rightindex = s+count;
    swap(arr[pivotindex], arr[rightindex] );
    pivotindex = rightindex;

    // step3: left me chote and right me bade
    int i = s;
    int j = e;

    while(i < pivotindex && j > pivotindex ){
        while(arr[i] <= pivotElement){
            i++;
        }
        while(arr[j]> pivotElement){
            j++;
        }
    }
    // 2 case ho sakte h ->
    //A-> Found the element to swap
    //B-> no need to swap
    if(i < pivotindex && j > pivotindex){
        swap (arr[i],arr[j]);
    }
    return pivotindex;
}
void quicksort(int arr[], int n, int s, int e){
    //base condition 
    // s == e -> Single Element 
    // s > e -> invalid array
    if(s>=e){
        return;
    }
    // partition logic , return pivot Index
    int p = partition (arr,  n,  s,  e);

    //pivot element -> left side 
    quicksort(arr, n, s, p-1);

    //pivot element -> right side 
    quicksort(arr, n, p+1, e);
    

}

int main(){
    int arr[] = {8,1,3,4,20,50,30};
    int n = 7;
    int s = 0;
    int e = n-1;
    quicksort(arr, n, s, e);
    for(auto val:arr){
        cout<<val<<" ";
    }
    

    return 0;
}
