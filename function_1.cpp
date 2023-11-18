#include<iostream>
using namespace std;

int add(int num1, int num2){
    int sum = num1+num2;
    return sum;
}
 float add  (float f1, float f2){
    float sum = f1+f2;
    return sum;
}

int main(){

    // int a,b;
    float x = 2.2;
    float y = 2.7;
    // cin>> a >> b;



    //   cout <<"The value of a and b is :"<< add(a,b) << endl;
      
      cout <<"The value of x and y is :"<< add(x,y) << endl;

    return 0;
}