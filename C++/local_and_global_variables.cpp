#include<iostream>

using namespace std;
int c=44;
int main(){
int a,b,c;
cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of b:";
cin>>b;
c=a+b;
cout<<"The sum of a+b is "<<c;


cout<<"\nThe value of global variable is "<<::c;
    return 0;
}