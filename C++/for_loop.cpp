#include<iostream>
using namespace std;
int main(){
    int a,b,j,i;
cout<<"How many rows you want";
cin>>a;
for ( i = 0; i < a; i++)
{
    for ( j = 0; j < i; j++)
    {
        cout<<"*";
    }
    cout<<"\n";
}

return 0;
}