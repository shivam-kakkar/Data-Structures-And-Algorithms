#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void BubbleSort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			   swap(a[j],a[j+1]);
		}
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
	BubbleSort(a,n);
	cout<<"Sorted Array: ";
	printArray(a,n);
	
	return 0;
}
