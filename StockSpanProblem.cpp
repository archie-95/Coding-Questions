/*STOCK SPAN PROBLEM

The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and
we need to calculate span of stock’s price for all n days. The span Si of the stock’s price on a given day i 
is defined as the maximum number of consecutive days just before the given day, for which the price of the 
stock on the current day is less than or equal to its price on the given day. For example, if an array of 7 days 
prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}*/


#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

void span(int p[],int n){
	int s[n]={0};		//Span array
	int i,j;
	for(i=0;i<n;i++){
		for(j=i;j>=0;j--){
			if(p[i]>=p[j]){
				s[i]++;
			}
			else break;
		}
	}
	for(i=0;i<n;i++)
		cout<<s[i]<<"\t";
}

int main(){
	int p[100],n;
	cout<<"Enter number of stock prices:"<<endl;
	cin>>n;
	cout<<"Enter prices:"<<endl;
	for(int i=0;i<n;i++)
		cin>>p[i];
	cout<<"Span of stocks:"<<endl;
	span(p,n);
}
