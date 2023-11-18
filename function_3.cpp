#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 0;
    for(int i=1;i<=n;i++){
        int fact = fact *i;
    } 
    return fact;
    
}

int main() {
    
    int x;
    cout << "Enter the Number :";
    cin>>x;
    int res = factorial(x);
    
    cout<< res;
    
 

    return 0;
}