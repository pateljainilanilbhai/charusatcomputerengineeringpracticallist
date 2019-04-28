#include<iostream>

using namespace std;

int main()
{
    int *a,n,i,j,temp,c=0,p=0;
    cout<<"Enter the size of array: ";
    c++;
    cin>>n;
    c++;
    a=new int[n];
    c++;
    for(i=0;i<n;++i){
     c++;
        cin>>a[i];
        c++;
    }
    for(i=1;i<n;++i)
    {
        c++;
        for(j=0;j<(n-i);++j){
            c++;

            if(a[j]>a[j+1])
            {
                p++;
                c++;
                temp=a[j];
                c++;
                a[j]=a[j+1];
                c++;
                a[j+1]=temp;
                c++;
            }
        }
        if(p==0)
        {
            break;
        }
        p=0;
    }

    cout<<"Array after bubble sort:";
    c++;
    for(i=0;i<n;++i){
            c++;
        cout<<" "<<a[i];

    }
    cout<<endl;
    cout<<"and the value of count is"<<c;

    return 0;
}
