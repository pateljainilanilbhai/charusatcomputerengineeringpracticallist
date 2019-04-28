#include<iostream>
using namespace std;

int c=0;
int recursiveLinearSearch(int array[],int key,int size) {
    c++;
	size=size-1;
	c++;
	if(size <0) {
            c++;
		return -1;
    c++;
	} else if(array[size]==key) {
	    c++;
		return 1;
		c++;
	} else {
	    c++;
		return recursiveLinearSearch(array,key,size);
		c++;
	}
}
int main() {
	cout<<"Enter The Size Of Array:   ";
	c++;
	int size;
	c++;
	cin>>size;
	c++;
	int array[size], key,i;
	c++;
	// Taking Input In Array
	for (int j=0;j<size;j++) {
            c++;
		cout<<"Enter "<<j<<" Element : ";
    c++;
		cin>>array[j];
		c++;
	}
	//Your Entered Array Is
	for (int a=0;a<size;a++) {
            c++;
		cout<<"array[ "<<a<<" ]  =  ";
    c++;
		cout<<array[a]<<endl;
		c++;
	}
	cout<<"Enter Key To Search  in Array";
	c++;
	cin>>key;
	c++;
	int result;
	c++;
	result=recursiveLinearSearch(array,key,size--);
	c++;
	if(result==1) {
            c++;
		cout<<"Key Found in Array  ";
    c++;
	} else {
	    c++;
		cout<<"Key NOT Found in Array  ";
		c++;
	}
	cout<<"and the count value is:"<<c;
	return 0;
}
