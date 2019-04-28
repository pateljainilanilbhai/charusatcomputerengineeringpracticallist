

#include<iostream>
using namespace std;

int main()
{
    int W,n;
    cout<<"Enter the total weight:"<<endl;
    cin>>W;
    cout<<"Enter the no. of objects:"<<endl;
    cin>>n;
  float w[n],p[n];
    float r[n];
    float z[n];
    int q[n];
    cout<<"Enter the individual weight:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
        q[i]=i+1;
    }
    cout<<"Enter the profit values:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        z[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        r[i]=p[i]/w[i];
    }
    for(int m=0;m<n-1;m++)
    {
        float t1,t2,t3;
        float t;
        float f=r[m];
        for(int l=m+1;l<n;l++)
        {
            if(r[l]>f)
            {
                t=f;
                f=r[l];
                r[l]=t;
                t1=w[m];
                w[m]=w[l];
                w[l]=t1;
                t2=p[m];
                p[m]=p[l];
                p[l]=t2;

                t3=q[m];
                q[m]=q[l];
                q[l]=t3;
            }
        }
    }
    float x=0,remain=W;
    int i=0;
    while(remain!=0 && n>=i)
    {
        if(remain>=w[i]){
                z[q[i]]=1;
            remain=remain-w[i];
            x+=p[i];

        }
        else{
            z[q[i]]=remain/w[i];
            x+=(p[i]*(remain/w[i]));
            break;
        }
        i++;
    }
 for(int i=1;i<=n;i++)
    {
        cout<<" "<<z[i];
    }
    cout<<endl;
    cout<<" "<<x;
    return 0;
}

