/*Given a string check if it is Pangram or not. A pangram is a sentence containing every letter in the English Alphabet.

Examples : The quick brown fox jumps over the lazy dog ” is a Pangram [Contains all the characters from ‘a’ to ‘z’]
“The quick brown fox jumps over the dog” is not a Pangram [Doesn’t contains all the characters from ‘a’ to ‘z’, as ‘l’, ‘z’, ‘y’ are missing]
*/


#include<iostream>
#include<string>
#include<stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
	std::string s;
	int ar[26]={0},i,len,flag=0;
	cout<<"enter te string";
	getline(cin,s);
	
	len=s.size();
	for(i=0;i<len;i++)
	{
		s[i]=tolower(s[i]);
		
		ar[(int(s[i]))-97]=1;
	}
	
	for(i=0;i<26;i++)
	{
		if(ar[i]==0)
		{
			flag=1;
			cout<<"\nnot a Panagram";
			break;
		}
	}
	if(flag==0)
	cout<<"\nPanagram";
}
	
