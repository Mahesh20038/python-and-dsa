#include <iostream>
using namespace std;
void max_heap(int *a, int i, int n)
{
	int j, t;
	t = a[i];
    j = 2 * i;
while (j <= n)
{
if (j < n && a[j+1] > a[j])
j = j + 1;
if (t > a[j])
break;
else if (t <= a[j])
{
a[j / 2] = a[j];
j = 2 * j;
}
}
a[j/2] = t;
return;
}
void build_maxheap(int *a,int n)
{
int i;
for(i = n/2; i >= 1; i--)
{
max_heap(a,i,n);
}
}
int main()
{
int n, i;
cout<<"enter no of elements of array\n";
cin>>n;
int a[30];
for (i = 1; i <= n; i++)
{
cout<<"enter elements"<<" "<<(i)<<endl;
cin>>a[i];
}
build_maxheap(a,n);
cout<<"Max Heap\n";

for (i = 1; i <= n; i++)
{
cout<<a[i]<<endl;
}
}
