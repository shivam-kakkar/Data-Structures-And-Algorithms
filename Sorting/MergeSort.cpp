#include<bits/stdc++.h>
using namespace std;

void Merge(int a[],int low,int high,int mid)
{
	int i,j,k,temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
	while(i<=mid && j<=high)
	{
		if(a[i] < a[j])
		{
			temp[k] = a[i];
			i++;
			k++;
		}
		else
		{
			temp[k] = a[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		temp[k] = a[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		temp[k] = a[j];
		j++;
		k++;
	}
	for(i=low;i<=high;i++)
	{
		a[i] = temp[i-low];
	}
}

void MergeSort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid = (low + high)/2;
		MergeSort(a,low,mid);
		MergeSort(a,mid+1,high);
		Merge(a,low,high,mid);
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
	MergeSort(a,0,n-1);
	cout<<"Sorted Array: ";
	printArray(a,n);
	return 0;
}
