#include<iostream>
#define max_int 10000
using namespace std;

int s[10][10];
void matrix(int p[], int n){
int l,i, j, temp;
int m[n][n];
cout<<"n"<<n<<endl;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
    m[i][j] = 0;
    s[i][j] = 0;
    }
 }
for(l=2;l<n;l++){
for(i=1;i<n-l+1;i++){
       	j=i+l-1;
m[i][j] = max_int;
             for(int k=i;k<j;k++){
                temp = m[i][k] + m[k+1][j] + p[i-1] * p[k] * p[j];
                if(temp<m[i][j]){
                    m[i][j] = temp;
                    s[i][j] = k;
                }
            }
        }
    }
    cout<<"\nMatrix:\n";
    for(int i=1;i<n;i++){
for(int k=1;k<n;k++){
    		cout<<m[i][k];
    }
        cout<<endl;
    }
    cout<<"\nK values:\n"<<endl;
    for(i=1;i<n;i++){
    	for(int k=1;k<n;k++){
    		cout<<s[i][k];
    	}
    	cout<<endl;
    }
}
void solution(int i,int j)
{
    if (i == j)
        cout<<"A"<<i;
    else
    {
        cout<<"(";
        solution(i,s[i][j]);
        solution(s[i][j] + 1, j);
        cout<<")";
    }
}
int main(){
    int n,p[5],m,i,k,j;
    cout<<"Enter no. of matrix:"<<endl;
    cin>>m;
    cout<<"Enter no. of p:";
    cin>>k;
    for(i=0;i<k;i++)
        cin>>p[i];
    matrix(p,k);

    cout<<"\nSequence:";
    i=1,j=m;
    solution(i,j);
    return 0;
}

