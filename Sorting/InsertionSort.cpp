#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[],int n)
{
	int i,hole,value;
	for(i=1;i<n;i++)
	{
		value = a[i];
		hole = i;
		while(hole>0 && a[hole-1]>value)
		{
			a[hole]=a[hole-1];
			hole = hole-1;
		}
		a[hole] = value;
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
	insertionSort(a,n);
	cout<<"Sorted Array: ";
	printArray(a,n);
	
	return 0;
}

