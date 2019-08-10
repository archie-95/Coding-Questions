#include <iostream>
#include <cstdio>
#include<algorithm>
using namespace std;

int main() {
    int M[6],n,i,a=0,j,k,count=0;
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
        cin>>M[i];
        sort(M,M+n);
    for(i=0;i<n;i++)
        cout<<M[i]<<" ";
    for(i=a;i<n;i++){
        for(j=i+1;j<n;j++){
            for(k=j+1;k<n;k++){
                       if(M[i]+M[j]>M[k]&&M[j]+M[k]>M[i]&&M[k]+M[i]>M[j])
                    count++;
            }
        }
    }
    cout<<"\ncount:"<<count;
    return 0;
}
