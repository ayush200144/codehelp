#include <iostream>
#include <vector>
using namespace std;

void subsequence(string str, string output, int i, vector<string>& ans){

    if(i>= str.length()){
        ans.push_back(output);
        return;
    }
    //exclude
    subsequence(str, output, i+1, ans);
    //include
    // concatiating the output string with the ith character of the input string (output = output + str[i])
    output.push_back(str[i]);
    subsequence(str, output, i+1, ans);

}

int main(){
    string str = "abc";
    string output = " ";
    int i = 0;
    vector <string> ans;
    subsequence(str, output,i, ans);
    cout<<"All element in the subsequence are: "<<endl;
    for (auto val: ans){
        cout<<val<<" ";
    }
    cout<< endl;
    cout <<endl<< "Size of Array -> "<< ans.size() << endl;
    return 0;
}
