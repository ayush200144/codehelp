#include <iostream>
using namespace std;

void printDigit (int n){
    
    if(n == 0){
        return;
    }
    
    int ans = n / 10;  // Integer division, removes the last digit
     printDigit (ans);

    int digit = n % 10;  // Get the last digit
    cout<< digit <<" ";

    
    
}

int main(){
   int n = 227;  
    if (n == 0)
        cout<<0<<endl;
  printDigit(n);

    return 0;
}
