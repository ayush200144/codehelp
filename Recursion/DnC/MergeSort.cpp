#include <iostream>
using namespace std;

void merge (int* arr, int s, int e){
    
    int mid = (s+e)/2;
    //define the lenght of arr which is create
    int lenL = mid-s+1;
    int lenR = e-mid;
    // create the array of lenght (len1, len2)
    int* arrL = new int [lenL]; 
    int* arrR = new int [lenR];
    // fill the new array 
    int k = s;
    for (int i = 0; i<lenL; i++){
        arrL[i] = arr[k];
        k++;
    }
    int h = mid+1;
    for (int i = 0; i<lenR; i++){
            arrR[i] = arr[h];
            h++;
        }

    // merge and sorting the array
    int left = 0;
    int right = 0;
    int mainindex = s;
    
    while (left<lenL && right<lenR){
     if (arrL[left] < arrR[right]){
        //other way is arr[mainindex++] = arrL[left++];
         arr[mainindex] = arrL[left];
         left++;
         mainindex++;
     } 
        else{
            //other way is arr[mainindex++] = arrR[right++];
            arr[mainindex] = arrR[right];
             right++;
            mainindex++;
        }
    }
    while(left<lenL){
        arr[mainindex] = arrL[left];
         left++;
         mainindex++;
    }
    while(right<lenR){
        arr[mainindex] = arrR[right];
         right++;
        mainindex++;
    }
    return;
}
// *arr == arr[]
void mergesort(int *arr, int n, int s, int e){
    //base condition 
    // s == e
    // s > e
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;

    //left side 
    mergesort(arr, n, s, mid);

    //right side 
    mergesort(arr, n, mid+1, e);

    merge(arr, s, e);
}

int main(){
    int arr[] = {2,4,2,3,3,6,7,10,1,5};
    int n = 10;
    int s = 0;
    int e = n-1;
    mergesort(arr, n, s, e);
    for(auto val:arr){
        cout<<val<<" ";
    }
    

    return 0;
}
