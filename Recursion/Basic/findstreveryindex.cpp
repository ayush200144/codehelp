#include <iostream>
using namespace std;

void find (string& str, int& n, int i, char key){
    
    if(i>=n){
        return;
    }
    if(str[i] == key){
        cout<<i<<" ";
    }
    
    return find (str, n, i+1, key);
    
}

int main(){
    string str = "ayusuhuryu";
    int n = str.length();
    int i = 0;
    int key = 'u';

     find(str, n, i, key);
    return 0;
}
