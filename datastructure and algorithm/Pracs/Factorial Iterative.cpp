#include<iostream>

using namespace std;

main()
{
    long long n,f=1,c=0;
    c++;
    cout<<"Enter the number for which we need the factorial for:"<<endl;
    c++;
    cin>>n;
    c++;
    for(int i=1;i<=n;i++)
    {
        c++;
        f*=i;
        c++;
    }
    cout<<"factorial of the number we entered is:"<<f<<endl;
    c++;
    cout<<"and the count for the code(algorithm) is "<<c;
    return 0;
}
