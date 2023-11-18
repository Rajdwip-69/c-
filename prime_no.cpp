#include<iostream>
using namespace std;
int main(){
    int i ,num;
    cout<<"Enter the number :";
    cin>> num;
    for(i=2;i<=num-1;i++){
        if(num%i==0){
            cout<< "Not Prime";
        }
        else{
        cout<< "Prime" <<endl ;
       
        }
}
}