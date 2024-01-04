#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{
	int i,j,key;
	for(i=1; i<n; i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j] > key)
		{
		arr[j+1]=arr[j];
		j=j-1;	
		}
		arr[j+1]=key;
	}
}
int main()
{

	int n;
	int arr[n];
	cout<<"enter number array elements";
	cin>>n;
	cout<<"enter array elements";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"original array:";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	insertionsort(arr,n);
	cout<<"sorted array:";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
cout<<endl;
return 0;
}

