#include<iostream>
using namespace std;
int main(){
    cout<< "Enter Intiger";
    int num1, num2;
    cin>>num1 >> num2;


    char operator;
    cin>>operator;

    switch(operator)
    {
        case '+':
        cout<<"Addition of 2 Numbers :"<< num1+num2 << endl;
        break;
    }

}