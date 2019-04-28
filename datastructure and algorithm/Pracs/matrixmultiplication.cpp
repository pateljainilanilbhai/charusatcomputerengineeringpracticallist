#include <iostream>
using namespace std;
int C=0;
int main()
{
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
C++;
cout<<"enter the number of row=";
C++;
cin>>r;
C++;
cout<<"enter the number of column=";
C++;
cin>>c;
C++;
cout<<"enter the first matrix element=\n";
C++;
for(i=0;i<r;i++)
{
    C++;
for(j=0;j<c;j++)
{
    C++;
cin>>a[i][j];
C++;
}
}
cout<<"enter the second matrix element=\n";
C++;
for(i=0;i<r;i++)
{
    C++;
for(j=0;j<c;j++)
{
    C++;
cin>>b[i][j];
C++;
}
}
cout<<"multiply of the matrix=\n";
C++;
for(i=0;i<r;i++)
{
    C++;
for(j=0;j<c;j++)
{
    C++;
mul[i][j]=0;
C++;
for(k=0;k<c;k++)
{
    C++;
mul[i][j]+=a[i][k]*b[k][j];
C++;
}
}
}
//for printing result
for(i=0;i<r;i++)
{
    C++;
for(j=0;j<c;j++)
{
    C++;
cout<<mul[i][j]<<" ";
C++;
}
cout<<"\n";
C++;
}
cout<<" and the count value is:"<<C;
return 0;
}
