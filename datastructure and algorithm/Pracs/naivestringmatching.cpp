#include<iostream>
#include<conio.h>
#include<string.h>

main()
{
char text[30],pat[30];
int i,j,m,n,l,cnt=0,cn=0;

cout<<"Enter your text:";
cin>>text;
cout<<"Enter your pattern:";
ci>>pat;
m=strlen(text);
n=strlen(pat);
for(i=0;i<=m-n;i++)
{
  j=0;
  while(j<=m && text[i+j]==pat[j])
  {

j++;
  }
  if(j>=n)
  {
    l=i+n-1;
    cn++;
    cout<<"\n%d Match Found"<<cn;
    cout<<"\nStarting index:%d"<<i;
    cout<<"\nEnding index:%d"<<l;
    cnt++;
  }
}
if(cnt==0)
{
cout<<"Match not found"<<endl;
}
return 0;
}
