#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int Partition(int a[],int low,int high)
{
	int pivot,index,i;
	index = low;
	pivot = high;
	for(i=low;i<high;i++)
	{
		if(a[i]< a[pivot])
		{
			swap(&a[i],&a[index]);
			index++;
		}
	}
	swap(&a[pivot],&a[index]);
	
	return index;
}

int RandomPartition(int a[],int low,int high)
{
	int pvt,n;
	n = rand();
	pvt = low + n%(high-low+1);
	swap(&a[high],&a[pvt]);
	
	return Partition(a,low,high);
}

void QuickSort(int a[],int low,int high)
{
	int pindex;
	if(low<high)
	{
		pindex = RandomPartition(a,low,high);
		QuickSort(a,low,pindex-1);
		QuickSort(a,pindex+1,high);
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
	QuickSort(a,0,n-1);
	cout<<"Sorted Array: ";
	printArray(a,n);
	
	return 0;
}
