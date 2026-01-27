#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll n; cin>>n; //3
    ll a[n];
    for(int i=0; i<n; i++){
        cin >> a[i]; //3 5 2
    }
    ll x;cin >> x;//26
    ll sum=0;
    for(int i=0; i<n; i++) {
        sum+=a[i]; // sum = 10
    }
    ll p=x/sum; //p=26/10=2
    ll ans = p*n; // ans=2*3=6
    ll sumb=sum*p;//sumb=20
    for(int i=0; i<n; i++) {
        sumb+=a[i]; //sumb= 23,28,30
        ans++;//ans= 7,8
        if(sumb > x){
            cout << ans;
            return 0;
        }
    }
    return 0;
}