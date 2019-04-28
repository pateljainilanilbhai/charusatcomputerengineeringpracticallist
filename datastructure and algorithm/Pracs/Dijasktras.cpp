
#include<iostream>
using namespace std;

main()
{
int in[10][10], i, j, k=0, n, src, q, select[10], ans[10], dist=0,
solution[10][10], l=0, min=10000, p, count=0, f, flag=0, temp, count1=0;

cout<<" Enter number Of Nodes:";
cin>>n;
src=0;
cout<<"\nEnter The Adjacency Matrix:\n\n";

for(i=0; i<n; i++){
cout<<"\t";
for(j=0; j<n; j++){
cin>>in[i][j];
solution[i][j]=-5;
    }
}
q=n;
for(i=0; i<n; i++){
solution[l][i]=-1;
select[i]=0;
}
select[src]=1;
solution[l][src]=0;
l++;
ans[k]=src+1;
k++;
while(q>0){
for(i=0;i<n;i++){
if(in[src][i]>0){
if(select[i]==0){

temp = dist + in[src][i];
if(temp<min){
min=temp;
p=i;
}
solution[l][i]=temp;
}
}
else{
count++;
if(solution[l-1][i]==-1){
solution[l][i]=-1;
}
else if(select[i]==0){
solution[l][i]=solution[l-1][i];
                }
            }
        }
ans[k]=p+1;
min=1000;
for(f=0;f<n;f++){
if(select[f]==1){
count1++;
            }
        }
if(count==n && count1==n-2){
src=ans[k-2]-1;
select[src]=0;
dist=dist-in[l-2][ans[k]-1];
count=0;
flag=1;
        }
else{
src=p;
dist=solution[l][p];
k++;
l++;
        }
if(flag==0){
select[p]=1;
flag=0;
        }
else{
select[src]=1;
        }
count=0;
        count1=0;
q--;
    }
cout<<"\n\nSolution:\n";
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(solution[i][j]!=-5){
cout<<"%4d"<<solution[i][j];
            }
else{
cout<<"    ";
    }
        }
cout<<"\n";
    }
cout<<"\n\n Path:";
for(i=0;i<n;i++){
cout<<"%d ",ans[i];
    }
}
