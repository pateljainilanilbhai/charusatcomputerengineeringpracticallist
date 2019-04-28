#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int b[20][20]={0},c[20][20]={0};
void LCS_length(char x[],char y[])
{
    int m=strlen(x),n=strlen(y);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(x[i-1]==y[j-1]){
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]=3;
            }
            else{
                if(c[i-1][j]>=c[i][j-1]) {
                    c[i][j]=c[i-1][j];
                    b[i][j]=1;
             }
             else{
                    c[i][j]=c[i][j-1];
                    b[i][j]=2;
                }
            }
        }
    }
}
void print_LCS(char x[],int i,int j)
{
    if(i<=0&&j<=0)
        return;
    if(b[i][j]==3) {
        print_LCS(x,i-1,j-1);
        cout<<x[i-1];
    }
    else if(b[i][j]==1) {
        print_LCS(x,i-1,j);
    }
    else {
        print_LCS(x,i,j-1);
    }
}
int main()
{
    char x[20],y[20];
    cout<<"Enter the string:"<<endl;
    cin>>x;
    cout<<"Enter the sub-string:"<<endl;
    cin>>y;
    LCS_length(x,y);
    for(int i=0;i<=strlen(x);i++) {
        for(int j=0;j<=strlen(y);j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    print_LCS(x,strlen(x),strlen(y));
}

