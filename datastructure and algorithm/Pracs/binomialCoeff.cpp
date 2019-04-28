#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n,k;
    cout<<"Enter the value of n and k : ";
    cin>>n>>k;
    int a[n+1][k+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=k;j++)
        {
            if(i<j)
            {
                a[i][j]=0;
            }
            else if(i==0 || j==0 || i==j)
            {
                a[i][j]=1;
                //cout<<a[i][j]<<" ";
            }
            else
            {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=k && j<=i;j++)
        {
            cout<<setw(2)<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    if(n>k)
    {
        cout<<endl<<endl<<"|-------------------|"<<endl;
        cout<<"|   Answer is : "<<a[n][k]<<"   |"<<endl;
        cout<<"|-------------------|"<<endl;
    }
    else
    {
        cout<<endl<<endl<<"|------------------------|"<<endl;
        cout<<"|   Answer is : "<<"invalid"<<"  |"<<endl;
        cout<<"|------------------------|"<<endl;
    }
    return 0;
}
