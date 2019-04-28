#include<iostream>
using namespace std;
long long factorial(long long n);
int c=0;
int main()
{
    long long n;
    c++;
    cout << "Enter the number for which we need the factorial for: ";
    c++;
    cin >> n;
    c++;
    cout << "factorial of the number we entered is: "<<n<<" = "<<factorial(n);
    c++;
    cout<<endl;
    c++;
    cout<<"and the count for the code(algorithm) is :"<<c;
    return 0;
}
long long factorial(long long n)
{
    c++;
    if(n > 1)
    {
        c++;
        return n * factorial(n - 1);
        c++;
    }
    else
    {
        return 1;
        c++;
    }
}
