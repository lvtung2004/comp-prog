#include <bits/stdc++.h>
#include <cmath>
typedef long long ll;
using namespace std;

int main() {
    ll n;cin >> n;
    map<int, ll> mp;
    ll a[n]; for (int i=0; i<n; i++) {cin>>a[i];mp[a[i]]++;}
    ll res=0;
    // for (auto &p : mp) {
    //     cout << p.first << " " << p.second << endl;
    // }
    for(auto it1=mp.begin(); it1!=mp.end(); ++it1){
        auto it2=it1;
        ++it2;
        for(;it2!=mp.end();++it2){
            ll x=it1->first;ll cx=it1->second;
            ll y=it2->first;ll cy=it2->second;
            res+=(x-y)*(x-y)*cx*cy;
        }
    }
    cout << res << endl;
    return 0;
}

// int main(){
//     ll n;
//     cin >> n;
//     int a[n]; for (int i=0; i<n; i++) {cin>>a[i];}
//     int res=0;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             //cout<< a[j] << "    " << a[i] <<endl;
//             res+=(abs(a[j]-a[i])*abs(a[j]-a[i]));
//         }
//     }
//     cout<<res<<endl;
//     return 0;
// }