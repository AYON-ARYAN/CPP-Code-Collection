// #include<iostream>
// using namespace std;

// int sum(){

//     int a =53,b=77;
//     return a+b;
// }
// int main(){
// int s = sum();
// cout<<s<<endl;
//     return 0;
// }


#include <iostream>
using namespace std;


int sum(int a, int b);

int main()
{
    cout << "What is the first number\n";
    int n1;
    cin >> n1;
    cout << "What is the second number\n";
    int n2;
    cin >> n2;


    int result = sum(n1, n2);


    cout << "The sum of " << n1 << " and " << n2 << " is: " << result << "\n";

    return 0;
}


int sum(int a, int b)
{
    int c = a + b;
    return c;
}
