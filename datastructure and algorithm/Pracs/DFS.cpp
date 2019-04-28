#include<iostream>
using namespace std;

int TOP=-1;
int stack[10];
void push(int a);
int pop();

main()
{
int n,in[10][10],i,j,x=0,q,flag=0,start,current,visit[10]={0},connected[10]={0},count=0,path[10];

cout<<"\n Enter The No Of Nodes:";
cin>>n;

cout<<"\n Enter The Start Node:";
cin>>start;

cout<<"\n Enter The Adjacency Matrix :\n\n";
for(i=0;i<n;i++)
    {
cout<<("\t");
for(j=0;j<n;j++)
        {
cin>>in[i][j];
        }
    }

    q=n;

push(start-1);
visit[start-1]=1;
connected[start-1]=1;
while(q>0)
    {
current=pop();
path[x]=current;
x++;
for(i=n-1;i>=0;i--)
        {
if(in[current][i]==1 && visit[i]==0)
            {
visit[i]=1;
connected[i]=1;
push(i);
            }
        }
q--;
    }
while(TOP>=0)
    {
current=pop();
visit[current]=1;
x--;
path[x]=current;
x++;
    }

if(TOP==-1)
    {
for(i=0;i<n;i++)
        {
if(connected[i]==1)
            {
count++;
            }
        }
    }
if(count==n)
    {
cout<<"\n Graph is Connected.\n\n The Sequence is :";

for(i=0;i<n;i++) cout<<path[i];
    }
else
    {
cout<<"\n Graph is Not Connected.";
    }
}
void push(int a)
{
    TOP++;
stack[TOP]=a;
}
int pop()
{
    TOP--;
return stack[TOP+1];
}
