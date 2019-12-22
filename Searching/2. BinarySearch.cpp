#include<bits/stdc++.h>
using namespace std;

void binarySearch(int a[],int n,int item)
{
	int beg,end,mid,pos;
	beg=0;
	end=n;
	
	while(beg<=end || mid!=item)
	{
		mid = (beg+end)/2;
		if(a[mid] == item)
		{
			pos = mid+1;
			break;
		}
		else if(item<a[mid])
		  end = mid-1;
		else if(item>a[mid])
		  beg = mid+1;
	}
	
	cout<<"The number is found at "<<pos<<" position";
}

int main()
{
	int item,a[] = {4,6,7,9,16,18,28,37,42,56,67,73,88};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<"Enter the number you want to Search: ";
	cin>>item;
	binarySearch(a,n,item);
	
	return 0;
}
