
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cout<<"Enter total activity : ";
    cin>>n;
    int a[n][2],x=0,b[n],y=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0];
        cin>>a[i][1];
        if(x<=a[i][0])
        {
            b[y]=i;
            y++;
            x=a[i][1];
        }
    }
    cout<<endl;
    cout<<"Starting Time : "<<a[0][0]<<"   Ending Time : "<<a[b[y-1]][1];
    return 0;
}
