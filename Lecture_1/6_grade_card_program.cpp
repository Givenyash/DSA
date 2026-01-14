#include<iostream>
using namespace std;
int main(){
    int maths,science,sst,hindi,english;

    cout<<"Enter your marks in each subjects respectively : "<<endl;
    cin>>maths>>science>>sst>>hindi>>english;
    if(maths<101 && science<101 && sst<101 && hindi<101 && english<101) {
        cout<<"Valid input"<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;
    }

    cout<<"Marks in maths is : "<<maths<<endl;
    cout<<"Marks in science is : "<<science<<endl;
    cout<<"Marks in sst is : "<<sst<<endl;
    cout<<"Marks in hindi is : "<<hindi<<endl;
    cout<<"Marks in english is : "<<english<<endl;

    int total = maths + science + sst + hindi + english;
    cout<<"The Grand total of all subjects is : "<<total<<endl;

    float percentage = (total*100)/500;
    cout<<"The percentage of Grade Card " <<percentage<<endl;

    if(86>=percentage<=100) {
        cout<<"The student got A+ grades with "<<percentage<<"%"<<endl;
    }

    else if(76>=percentage<=85) {
        cout<<"The student got A grades with "<<percentage<<"%"<<endl;
    }
    else if (61>=percentage<=75) {
        cout<<"The student got B grades with "<<percentage<<"%"<<endl;
    }
    else if (46>=percentage<=60) {
        cout<<"The student got C grades with "<<percentage<<"%"<<endl;
    }
    else if (33>=percentage<=45) {
        cout<<"The student got D grades with "<<percentage<<"%"<<endl;
    }
    else if (1>=percentage<=32) {
        cout<<"The student got Failed with "<<percentage<<"%"<<endl;
    }
    else{
        cout<<"The student was Absent "<<percentage<<"%"<<endl;
    }
    return 0;    
}