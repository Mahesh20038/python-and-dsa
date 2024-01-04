#include <iostream>
using namespace std;

void Sorted(int *a, int low, int high, int mid)
{
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
	while (i <= mid && j <= high)
{
	if (a[i] < a[j])
{
	temp[k] = a[i];
	k++;
	i++;
}
	else
{
	temp[k] = a[j];
	k++;
	j++;
}
}
	while (i <= mid)
{
	temp[k] = a[i];
	k++;
	i++;
}
	while (j <= high)
{
	temp[k] = a[j];
	k++;
	j++;
}
	for (i = low; i <= high; i++)
{
	a[i] = temp[i-low];
}
}
	void Sort(int *a, int low, int high)
{
	int mid;

	if (low < high)
{
	mid=(low+high)/2;
	Sort(a, low, mid);
	Sort(a, mid+1, high);
	Sorted(a, low, high, mid);
}
}
int main()
{
	int n, i;
	cout<<"\nEnter the unsorted array of elements: ";
	cin>>n;
	int arr[n];
	for(i = 0; i < n; i++)
{
	cout<<"Enter element "<<i+1<<": ";
	cin>>arr[i];
}
	Sort(arr, 0, n-1);
	cout<<"\nMaxelement ";
	cout<<"->"<<arr[n-1];
	cout<<"\nMinelement ";
	cout<<"->"<<arr[0];
	return 0;
}
