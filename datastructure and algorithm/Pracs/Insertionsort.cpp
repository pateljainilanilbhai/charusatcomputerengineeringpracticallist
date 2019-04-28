#include<iostream>

using namespace std;
int c=0;
int main()
{
    int i,j,n,temp,a[30];
    c++;
    cout<<"Enter the number of elements:";
    c++;
    cin>>n;
    c++;
    cout<<"\nEnter the elements\n";
    c++;

    for(i=0;i<n;i++)
    {
        c++;
        cin>>a[i];
        c++;
    }

    for(i=1;i<=n-1;i++)
    {
        c++;
        temp=a[i];
        c++;
        j=i-1;
        c++;

        while((temp<a[j])&&(j>=0))
        {
            c++;
            a[j+1]=a[j];
            c++;
            j=j-1;
            c++;
        }

        a[j+1]=temp;
    }


    cout<<"\nSorted list is as follows\n";
    c++;
    for(i=0;i<n;i++)
    {
        c++;
        cout<<a[i]<<" ";
        c++;
    }
cout<<"and the count value is :"<<c;
    return 0;
}
