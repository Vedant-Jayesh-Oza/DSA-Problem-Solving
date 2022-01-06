#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    queue<char> q;
    for(int i=0;i<s.length();++i)
    {
        char a=tolower(s[i]);
        if(a != 'a' && a !='e' && a !='i' && a!='o' && a!='u' && a!='y' )
        {
            q.push(a);
        }
    }
    while(!q.empty())
    {
        cout<<"."<<q.front();
        q.pop();
    }
    return 0;
}