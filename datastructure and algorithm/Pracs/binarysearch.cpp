#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int low,int high,int x);
int c=0;
int main()
{
	int arr[50], i, num, n,high,low;
	cout<<"Enter the array size : ";
	cin>>n;
	cout<<"Enter Array Elements : ";

	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number to be search : ";
	cin>>num;
	high=n-1;
	low=0;
	if(binary_search(arr,n,low,high,num)==-1)
    {
        cout<<endl<<"not found";
    }
    else
    {
        cout<<endl<<"found at position:: "<<binary_search(arr,n,low,high,num)+1;
    }
    cout<<endl<<"Counter:: "<<c;
}
int binary_search(int arr[],int n,int low,int high,int x)
{
    c++;
    int mid=(low+high)/2;
    if(x==arr[mid])
    {
        return mid;
    }
    else if(x<arr[mid])
    {
        binary_search(arr,n,low,mid+1,x);
    }
    else if(x>arr[mid])
    {
        binary_search(arr,n,mid-1,high,x);
    }
}
