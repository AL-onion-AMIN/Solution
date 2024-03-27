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
    for(int i=2;i<=n;i++){
        if(prime[i]==i){
            for(int j=i*i;j<=n;j=j+i){
                  if(prime[j]==j){
                    prime[j]=i;
                  }
            }
        }
    }
    while(n!=1){
        cout<<prime[n]<<" ";
        n=n/prime[n];
    }

}
int main(){
            slove();
}




