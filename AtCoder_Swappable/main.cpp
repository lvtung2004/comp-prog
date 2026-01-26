#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n; cin >> n; //3
    //int a[n];
    map<ll ,ll> map;
    for(int i=0; i<n; ++i) {
        ll x;
        cin>>x;
        map[x]++;
    }
    // sort(a, a+n); // 1 1 7
    // //for(int i=0; i<n; ++i) cout<<a[i]<<" ";
    // map<ll, ll> map; //create a map 
    // long long count=1; //counter
    // for(int i=1; i<n; ++i) { //
    //     if(a[i]==a[i-1]) {
    //         count++;
    //         map[a[i]]=count;
    //     }else {
    //         count = 1;
    //         map[a[i]]=count;
    //     }
    // }
    /*for (auto p : map) {
        cout << p.first << "   " << p.second << endl;
    }*/
    ll fin = n*(n-1)/2;
    ll rem = 0;
    for(auto p : map) {
        int temp = p.second;
        rem += temp*(temp-1)/2;
    }
    fin = fin - rem;
    cout << fin;
    return 0;
}