/*Given a M x N matrix, calculate maximum sum submatrix of size k x k in a given M x N matrix in O(M*N) time. Here, 0 < k < M, N. 

For example, consider below 5 x 5 matrix

[  3 -4  6 -5  1 ]
[  1 -2  8 -4 -2 ]
[  3 -8  9  3  1 ]
[ -7  3  4  2  7 ]
[ -3  7 -5  7 -6 ]

If k = 2, maximum sum k x k sub-matrix is

[ 9 3 ]
[ 4 2 ]

If k = 3, maximum sum k x k sub-matrix is

[ 8 -4 -2 ]
[ 9  3  1 ]
[ 4  2  7 ]
*/


#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int maxSub(int arr[][100],int m, int n,int k,int maxsum[] )
{
	int i,j,x,a,b;
	for(i=0;i<=n-k;i++)
	{
		for(j=0;j<=m-k;j++)
		{
				int currsum=0;
			for(a=0;a<k;a++)
			{
				for(b=0;b<k;b++)
				{
					currsum=currsum+arr[i+a][j+b];
				}
			}
			if(currsum>maxsum[2])
			{
				maxsum[0]=i;
				maxsum[1]=j;
				maxsum[2]=currsum;
			}
		}
	}
}

int main()
{
	int i,j,in[100][100],a,b,k;
	int maxsum[3]={0,0};
	maxsum[2]=INT_MIN;
	cout<<"enter row";
	cin>>i;
	cout<<"enter column";
	cin>>j;
	cout<<"enter the Window";
	cin>>k;
	cout<<"enter the array";
	for(a=0;a<i;a++)
		for(b=0;b<j;b++)
			cin>>in[a][b];
	maxSub(in,i,j,k,maxsum);
	cout<<"]nmax sum is"<<maxsum[2];
	cout<<"\nwindow is"<<endl;
	for(a=0;a<k;a++)
	{
	
		for(b=0;b<k;b++)
			cout<<in[maxsum[0]+a][maxsum[1]+b]<<"\t";
			cout<<endl;
    }
	return 0;
			
}
