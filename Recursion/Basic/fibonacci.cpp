#include <iostream>
using namespace std;

int fab(int n){
    if(n == 1){
        return 0;
    };
    if(n == 2){
        return 1;
    };
    

    int ans = fab(n-1) + fab(n-2);

    return ans;
}

int main(){
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int ans = fab(n);

    cout << ans << "n th iterm is" << endl;
    return 0;
}
