#include<iostream>
using namespace std;
int main(){
    int i =1 , n , sum = 0 ;
    cout<< "Enter the value :";
    cin >> n;
    cout << endl;
    // while(i<=n){
    //     sum  = sum +i;
    //     i++;
    // }
    //  cout << sum ;

    for (i = 1 ; i <= n  ; i++ ){
        sum =  sum + i;
    }

    cout << sum ;
}