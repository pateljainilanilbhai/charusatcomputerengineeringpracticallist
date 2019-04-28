#include<iostream>
using namespace std;

int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;
void BFS(int v)
{
for(i=1;i<=n;i++)
if(a[v][i] && !visited[i])
q[++r]=i;
if(f<=r)
        {
visited[q[f]]=1;
BFS(q[f++]);
        }
}
main()
{
int v;
cout<<"\n Enter the number of vertices:";
cin>>n;

for(i=1;i<=n;i++)
    {
      q[i]=0;
      visited[i]=0;
    }
cout<<"\n Enter adjacency Matrix:\n\n";
for(i=1;i<=n;i++)
    {
cout<<"\t";
for(j=1;j<=n;j++)
cin>>a[i][j];
    }
cout<<"\n Enter the starting vertex:";
cin>>v;

BFS(v);

cout<<"\n The sequence is:\n";
for(i=1;i<=n;i++)
if(visited[i])
cout<<i;
else
cout<<"\n BFS is not possible";
return 0;
}
