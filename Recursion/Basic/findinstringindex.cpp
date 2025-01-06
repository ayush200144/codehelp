#include <iostream>
using namespace std;

int find (string& str, int& n, int i, char key){
    
    if(i>=n){
        return -1;
    }
    if(str[i] == key){
        return i;
    }
    
    return find (str, n, i+1, key);
    
}

int main(){
    string str = "ayush";
    int n = str.length();
    int i = 0;
    int key = 'u';

   int ans = find(str, n, i, key);
    cout<< "Answer -> "<< ans <<endl;
    return 0;
}
