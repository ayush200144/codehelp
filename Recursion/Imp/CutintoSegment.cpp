#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int segment (int n, int x, int y, int z){
    if(n == 0){
        return 0;
    }
    if(n < 0 ){
        return INT_MIN;
    }
    // when x is use to reduce then a is called and traget is reduce by n-x.
    int a = segment(n-x, x, y, z) + 1;
    // when y is use to reduce then b is called and traget is reduce by n-y.
    int b = segment(n-y, x, y, z) + 1;
    // when z is use to reduce then c is called and traget is reduce by n-z.
    int c = segment(n-z, x, y, z) + 1;
    
    
    int ans = max(a, max(b,c));
    return ans;
}

int main(){
    int traget = 7;
    int x = 5;
    int y = 2;
    int z = 2;
    
    int ans = segment(traget, x, y, z);
    // if ans is valid then ans is return, when ans is invalid then ans return 0.
    if(ans < 0) {
        ans = 0;
    }

    cout <<endl<< "Maximum Answer -> "<< ans << endl;
    return 0;
}
