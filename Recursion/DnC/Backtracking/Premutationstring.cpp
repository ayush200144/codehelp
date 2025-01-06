#include <iostream>
using namespace std;

void premutation(string &str, int i){
    //base condition 
    if(i>= str.length()){
        cout << str << " ";
        return;
    }
    
    for (int j = i; j<str.length(); j++){
      //swap
      swap(str[i], str[j]);
      // recursion
      premutation(str, i+1);
      //backtracbking -> to recreate the original input string
      swap(str[i], str[j]);
    }


}

int main(){
    string str = "abc";
    int i = 0;

    premutation(str, i);
    
    return 0;
}
