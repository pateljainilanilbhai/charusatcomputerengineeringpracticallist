#include<iostream>

using namespace std;

int main()
{
    int i,j,n,loc,temp,min,a[50],c=0;
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

    for(i=0;i<n-1;i++)
    {
        c++;
        min=a[i];
         c++;
        loc=i;
         c++;
        for(j=i+1;j<n;j++)
        {
                 c++;
            if(min>a[j])
            {
                 c++;
                min=a[j];
         c++;
                loc=j;
                 c++;
            }
        }
        temp=a[i];
         c++;
        a[i]=a[loc];
         c++;
        a[loc]=temp;
         c++;
    }
    cout<<"\nSorted list is as follows\n";
     c++;
    for(i=0;i<n;i++)
    {
         c++;
        cout<<a[i]<<" ";

    }
    cout<<"and the count value is: "<<c;
    cout<<endl;
    return 0;
}
