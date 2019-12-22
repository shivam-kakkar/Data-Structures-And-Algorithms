#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void SelectionSort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int imin = i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[imin])
			   imin = j;
		}
		swap(a[i],a[imin]);
	}
}

void printArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int a[]={88,9,42,56,7,6,37,16,28,73,67,4,18,49};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<"Unsorted Array: ";
	printArray(a,n);
	SelectionSort(a,n);
	cout<<"Sorted Array: ";
	printArray(a,n);
	
	return 0;
}
