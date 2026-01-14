#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter your two Numbers:";
    cin>>num1>>num2;

    int result= max(num1 , num2);
    cout<<"The Maximum of two numbers is = "<<result<<endl;
    return 0;
}
