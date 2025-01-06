#include <iostream>
using namespace std;
//t.c and s.c -> o(n)
void reverse (string& str, int i){
    if(i >= str.length()){
        return;
    }
    reverse(str, i+1);
     cout<< str[i]<< " ";   
}

int main(){
    string str = "abcdbwebf";
    int i = 0;
    reverse(str, i);
    

    return 0;
}
