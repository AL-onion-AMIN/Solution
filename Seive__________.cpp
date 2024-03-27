//Coder= Al-Amin Bhuiyan
// from DUET
#include<bits/stdc++.h>
using namespace std;
#define nl endl;
#define lli long long int;
void slove(){
    int n;
    cin>>n;
    int prime[100]={0};
    for(int i=2;i<=n;i++){
        prime[i]=i;
    }
     //for(int i=2;i<=n;i++){
     //   cout<<prime[i]<<" "<<i<<endl;
   // }
    for(int i=2;i<=n;i++){
        if(prime[i]==i){
            for(int j=i*i;j<=n;j=j+i){
               if(prime[j]==j){
                 prime[j]=i;
               }
            }
        }
    }
    int element[3],i=0;
    map<int,int>mp;

    while(n!=1){
    element[i]=prime[n];
    n=n/prime[n];
    i++;
    }
       for(int i=0;i<3;i++){
           mp[element[i]]++;
    }
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

}
int main(){

            slove();

}




