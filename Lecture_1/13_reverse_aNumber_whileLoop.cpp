#include<iostream>
using namespace std;
int main ()
{
    int n, reversed_number = 0, remainder;
    cout<<"Enter an Positive integer: ";
    cin>>n;

    int original_n = n;
    while(n != 0){
        remainder = n% 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }
    cout<<"Reversed number of "<<original_n <<" = "<< reversed_number <<endl;
   return 0;
}