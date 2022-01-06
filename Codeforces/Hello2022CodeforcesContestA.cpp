#include<iostream>
using namespace std;

int main(){
    int t, n, k, count;

    cin>>t;

    while(t--){
        cin>>n>>k;

         if(n%2==0)
         {
             if(k<=n/2)
             {
                 count = 0;
                 for(int i=0;i<n;i++)
                 {
                     for(int j=0;j<n;j++)
                     {
                         if((i+1)%2 !=0 && (j+1)%2 !=0 && (i==j) && count<k)
                         {
                             cout<<"R";
                             count++;
                         }
                         else
                         {
                             cout<<".";
                         }
                     }
                     cout<<endl;
                 }
             }
              if(k>n/2)
              {
               cout<<"-1"<<endl;
              }

         }

         if(n%2!=0)
         {
             if(k<=(n/2)+1)
             {
                 count = 0;
                 for(int i=0;i<n;i++)
                 {
                     for(int j=0;j<n;j++)
                     {
                         if((i+1)%2 !=0 && (j+1)%2 !=0 && (i==j) && count<k)
                         {
                             cout<<"R";
                             count++;
                         }
                         else
                         {
                             cout<<".";
                         }
                     }
                     cout<<endl;
                 }
             }
              else
              {
               cout<<"-1"<<endl;
              }

         } 

    }

    return 0;
}