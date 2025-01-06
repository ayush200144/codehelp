#include <iostream>
using namespace std;

bool find (string str, int n, int i, char key){
    
    if(i>=n){
        return false;
    }
    if(str[i] == key){
        return true;
    }
    
    return find (str, n, i+1, key);
    
}

int main(){
    string str = "ayush";
    int n = str.length();
    int i = 0;
    int key = 'w';

   bool ans = find(str, n, i, key);
    cout<< "Answer -> "<< ans <<endl;
    return 0;
}
