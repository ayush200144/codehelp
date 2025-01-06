#include <iostream>
#include <vector>
using namespace std;

void find (string& str, int& n, int i, char key, int & count){
    
    if(i>=n){
        return;
    }
    if(str[i] == key){
        count++;
    }
    
    return find (str, n, i+1, key, count);
    
}

int main(){
    string str = "ayusuhuryu";
    int n = str.length();
    int i = 0;
    int key = 'u';

    int count = 0;

  find(str, n, i, key, count);

    cout<<"Answer -> "<< count<<endl;
    return 0;
}
