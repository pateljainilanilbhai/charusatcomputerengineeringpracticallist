#include<iostream>

using namespace std;
int c=0;
int fibonacci(int n)
{
    c++;
    if((n==1)||(n==0))
    {
        c++;
        return(n);
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
        c++;
    }
}

int main()
{
    int n,i=0;
    c++;
    cout<<"Input the number of terms for Fibonacci Series:";
      c++;
    cin>>n;
      c++;
    cout<<"\nFibonacci Series is as follows\n";
  c++;
    while(i<n)
    {
          c++;
        cout<<" "<<fibonacci(i);
          c++;
        i++;
          c++;
    }
 cout<<endl<<"and the count value is::"<<c;
    return 0;
}
