//Coder= Al-Amin Bhuiyan
// from DUET
#include<bits/stdc++.h>
using namespace std;
#define nl endl
#define lli long long int
#define PI 3.1416

void slove(){
    int  n;
    cin>>n;
    int sum,x1=0,x2=0,y21=0,y1=0;
      int x,y;
   for(int i=0;i<n;i++){

    cin>>x>>y;
    x1=min(x1,x);
    x2=max(x2,x);
    y21=min(y21,y);
    y1=max(y1,y);


   }
   cout<<abs(x1*2)+x2*2+abs(y21*2)+y1*2<<endl;

}
int main(){
    int test;
    cin>>test;
    while(test--){
            slove();

    }
}




