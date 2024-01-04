#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
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
	bubbleSort(arr,n);
	cout<<"sorted array:";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
cout<<endl;
return 0;
}

 
