#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,arr[1000];
    cin>>t;
    while(t--)
    {
       cin>>n;
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       sort(arr,arr+n);
       cout<<arr[n-1]-arr[0]<<endl;
         

    }




    return 0;

}