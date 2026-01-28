#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

// int main(){
//     ll n; cin>>n;
//     //ktra so chu so cua n
//     int count=0;
//     for(int i=1; i<n/2; i++){
//         string s = to_string(i); // chuyen i thanh string
//         //cout << "s: " << s << endl;
//         ll len = s.length(); //bien do dai cua i
//         if (len%2==0) {
//             string left = s.substr(0, len/2); // lay nua dau
//             //cout << "   left: " << left << endl;
//             string right = s.substr(len/2, len/2); //lay nua sau
//             //cout << "   right: " << right << endl;
//             if (left==right){ // so sanh
//                 count++;
//             }
//         }
//     }
//     cout << count << endl;
// }

int main(){
    ll n;
    cin >> n;
    for(int i=1; ;i++){
        if(stoll(to_string(i) + to_string(i)) > n) {
            cout << i-1 <<endl;
            return 0;
        }
    }
}

