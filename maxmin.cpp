#include"bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cout<<"Enter value of n:";
    cin>>n;

    int a[n]={};
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int minno=INT_MAX;
    int maxno=INT_MIN;

    for(int i=0;i<n;i++)
    {
        maxno=max(maxno,a[i]);
        minno=min(minno,a[i]);
    }

    cout<<maxno<<" "<<minno<<endl;
    return 0;
}