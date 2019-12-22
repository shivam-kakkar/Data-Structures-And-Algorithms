//FINDING LENGTH OF LONGEST COMMON SUBSEQUENCE USING DYNAMIC PROGRAMMING
#include<bits/stdc++.h>
using namespace std;

int max(int a,int b)
{
	return(a>b)?a:b;
}

int lcs(char X[],char Y[],int m,int n)
{
	int L[m+1][n+1];
	
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0 || j==0)
			   L[i][j] = 0;
			else if(X[i-1] == Y[j-1])
			   L[i][j] = 1 + L[i-1][j-1];
			else
			   L[i][j] = max(L[i][j-1],L[i-1][j]);
		}
	}
	
	return L[m][n]; 
}
int main()
{
	char X[]="LONGEST";
	char Y[]="STONE";
	int m = strlen(X);
	int n = strlen(Y);
	cout<<"The length of LCS = "<<lcs(X,Y,m,n);
	
	return 0;
}
