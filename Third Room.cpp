//Coder= Al-Amin Bhuiyan
// from DUET
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define nl endl
#define mod 1000000007
void slove(){
   lli x,y,z;
    cin>>x>>y>>z;
    long long int result;
    result=(x%mod*y%mod)%mod;
    result=(result*z%mod)%mod;
    cout<<result<<nl;
}
int main(){
    int test;
    cin>>test;
    while(test--){
            slove();

    }
}




