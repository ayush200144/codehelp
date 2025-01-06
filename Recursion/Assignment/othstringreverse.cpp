#include <iostream>
using namespace std;
//t.c and s.c -> o(n)
void reverse (string& str, int s, int e){
    if(s>=e){
        return;
    }
    swap(str[s], str[e]);
    
    reverse(str, s+1, e-1);
      
}

int main(){
    string str = "abcdbwebf";
    int s = 0;
    int e = str.size()-1;
    reverse(str, s, e);
    
    cout<<str<<" ";

    return 0;
}
