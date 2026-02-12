#include <bits/stdc++.h>
#include <unordered_set>
typedef long long ll;
using namespace std;
int main(){
    ll N;cin>>N;
    unordered_set<ll> set;
    for(int b=2;b<34;b++){
        for(int a=2; ;a++){
            ll val=pow(a,b);
            if(val>N){
                break;
            }
            set.insert(val);
        }
    }
    int res;res=N-set.size();
    cout<<res;    
    return 0;
}