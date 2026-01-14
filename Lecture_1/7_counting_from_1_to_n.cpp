#include<iostream>
using namespace std;
int main ()
{
    int num,i,counter=0;
    cout<<"Enter your number : "<<endl;
    cin>>num;

    for (i=1; i<=num; i++){
        cout<<"The number are : "<<i<<endl;
       counter++;
    } 
    cout<<"Counting of numbers are : "<<counter<<endl;
    
   return 0;
}