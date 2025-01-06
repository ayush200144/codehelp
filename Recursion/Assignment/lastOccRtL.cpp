#include <iostream>
using namespace std;
// in-built function is strrchr().

void findRtL (string& str, int& index, int i, char& traget){
    if(i == 0){
        return;
    }
    
    if(str[i] == traget){
        index = i;
        return;
    }
    
    findRtL(str, index, i-1, traget);

    
}

int main(){
    string str = "abcdbwebf";
    char traget = 'b';
    int index = -1; // Initialize to -1 to indicate "not found"
    int i = str.length() - 1;
    findRtL(str, index, i, traget);
    cout<< index <<endl;

    return 0;
}
