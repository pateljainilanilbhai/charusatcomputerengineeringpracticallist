#include<iostream>
using namespace std;

int main()
{
    int c=0;
    int fib1 = 0, fib2 = 1, fib3 = 1,n,i=2;
    c++;
    cout<<"Enter n:";
    c++;
    cin>>n;
    c++;
    cout << "The Fibonacci Series is follows : " << endl << fib1 << " " << fib2 << " ";
    c++;
    while (i<n)
    {
        c++;
        fib3 = fib1 + fib2;
        c++;
        fib1 = fib2;
        c++;
        fib2 = fib3;
        c++;
        i++;
        c++;
        cout << fib3 << " ";
        c++;
    }
    cout << endl<<"and the count value is ::"<<c;
    return 0;
}
