#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter the age of the Person :";
    cin >> x;
    if(x >= 60){
        cout<< "Senior Citizen ";
    }
    else if(x <= 18){
        cout<< "Teenager ";
    }
    else {
        cout<< "The person is Adult ";
    }
  
}