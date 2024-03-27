//Coder= Al-Amin Bhuiyan
// from DUET
#include<bits/stdc++.h>
using namespace std;
#define nl endl;
#define lli long long int;
void slove(){
    int n;
    cin>>n;
    set<int>st;
    int ans=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
               st.insert(i);
             //  ans++;
                while(n%i==0){
                    n/=i;


                }
        }
        if(n>1){
        st.insert(n);
       //  ans++;
         break;
        }
    }
    cout<<ans<<endl;
    cout<<st.size()<<endl;

}
int main(){
            slove();

}




