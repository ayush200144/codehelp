#include <iostream>
#include <vector>
using namespace std;

void find (string& str, int& n, int i, char key, vector<int> & ans){
    
    if(i>=n){
        return;
    }
    if(str[i] == key){
        ans.push_back(i);
    }
    
    return find (str, n, i+1, key, ans);
    
}

int main(){
    string str = "ayusuhuryu";
    int n = str.length();
    int i = 0;
    int key = 'u';

    vector<int> ans;

     find(str, n, i, key, ans);

    cout<<"Answer"<<endl;
    for(auto val: ans){
         cout<< val<<" ";
    }
    cout<<endl;
    return 0;
}

