#include<bits/stdc++.h>
using namespace std;

void linearSearch(int a[],int n,int item)
{
	int flag=0,pos;
	for(int i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			pos = i+1;
			flag = 1;
			break;
		}
	}
	if(flag==1)
	  cout<<"The number is found at "<<pos<<" position";
	else
	  cout<<"Number not found";
}
int main()
{
	int a[]={6,9,42,56,7,88,37,16,28,73,67,4,18,49},item;
	int n = sizeof(a)/sizeof(a[0]);
	cout<<"Enter the number you want to Search: ";
	cin>>item;
	linearSearch(a,n,item);
	
	return 0;
}
