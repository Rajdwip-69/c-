#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter the Number :";
    cin >> x;
    cout << endl;
    // if(x>0){
    //     cout << "The Number is Posative ";
    // }
    // else{
    //     if(x<0){
    //         cout << "The number is negative ";
    //     }
    //     else{
    //         cout << "The number is Zero ";
    //     }

    if(x>0){
        cout<<"+ve";

    }
    else if(x<0){
        cout<< "-ve";

    }
    else {
        cout<< "Zero";
    }

    }

    
