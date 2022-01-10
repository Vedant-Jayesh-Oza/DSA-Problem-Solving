#include<bits/stdc++.h>
#define ll long long
using namespace std;


void outputdikhaao(){
    ll a, b, c;
    cin>>a>>b>>c;
    if(b-a==c-b || (a==b && b==c))
    {
        cout<<"YES"<<endl;
    }
    else if((2*b-c)%a == 0 && 2*b-c>0)
    {
        cout<<"YES"<<endl;
    }
    else if((2*b-a)%c==0 && 2*b-a>0)
    {
        cout<<"YES"<<endl;
    }
    else if((a+c)%(2*b)==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        outputdikhaao();
    }
    
return 0;
}