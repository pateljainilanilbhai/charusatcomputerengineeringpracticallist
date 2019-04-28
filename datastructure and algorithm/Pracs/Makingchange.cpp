#include<iostream>
using namespace std;
int i;
main()
{
    int n,total=0,d,coins[7]={100,50,25,20,15,10,5},count[7]={0};
    int i;
    cout<<"Enter the amount"<<endl;
    cin>>n;

    while(n>0 && n<=1125)
    {

        while(n>coins[i])
        {

            n=n-coins[i];
            count[i]++;

            if(count[i]>=5)
            {
                break;
            }
        }
        if(n<5)
        {
            break;
        }
        i++;
    }
    if(n==0)
    {
    cout<<endl;
    for(int i=0;i<7;i++){
        total+=count[i];
        cout<<"/n Rupee coins:"<<coins[i]<<count[i];
    }
    cout<<"\n\n Total number of coins"<<total;
    }
    else{
        cout<<"Solution not possible"<<endl;
    }

    return 0;
}
