#include <iostream>
using namespace std;

void reverse(int n){
    //base case
    if(n == 0){
        return;
    } 
    
    //resursive relation
    reverse(n-1);

    //Proccessing
    cout<<n<<" ";
}
    


int main(){
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    reverse(n);
    return 0;
}
