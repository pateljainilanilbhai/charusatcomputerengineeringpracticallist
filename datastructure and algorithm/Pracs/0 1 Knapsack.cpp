#include<iostream>
using namespace std;

struct item
{
    int wt;
    int val;
    int id;
};

int main()
{
    int n,w;
    cout<<"Enter no of Items : ";
    cin>>n;
    item t[n];
    cout<<"Enter weight and value : ";
    for(int i=0;i<n;i++)
    {
        cin>>t[i].wt;
        cin>>t[i].val;
        t[i].id=0;
    }
    cout<<"Enter total weight : ";
    cin>>w;
    int tab[n+1][w+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            if(i==0 || j==0)
            {
                tab[i][j]=0;
            }
            else
            {
                if(j>=t[i-1].wt)
                {
                    tab[i][j]=max(t[i-1].val+tab[i-1][j-t[i-1].wt],tab[i-1][j]);

                }
                else
                {
                    tab[i][j]=tab[i-1][j];
                }
            }
        }

    }
    int x=n;
    int y=w;
    while(x>0 && y>0)
    {
        if(tab[x][y]!=tab[x-1][y])
        {
            t[x-1].id=1;
            x--;
            y-=t[x-1].wt;
        }
        else
        {
            x--;
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"[ ";
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
            cout<<t[i].id;
        else
            cout<<t[i].id<<", ";
    }
    cout<<" ]";
    cout<<endl<<"Total Profit : "<<tab[n][w];
}
