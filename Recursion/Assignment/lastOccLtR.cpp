#include <iostream>
using namespace std;

void findLtR (string& str, int& index, int i, char& traget){
    if(i >= str.length() ){
        return;
    }
    
    if(str[i] == traget){
        index = i;
    }
    
    findLtR(str, index, i+1, traget);

    
}

int main(){
    string str = "abcdbwebf";
    char traget = 'b';
    int index = -1; // Initialize to -1 to indicate "not found"
    int i = 0;
    findLtR(str, index, i, traget);
    cout<< index <<endl;

    return 0;
}
