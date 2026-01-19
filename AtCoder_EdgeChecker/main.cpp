#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if(b==a+1 || a==b+1) {
        cout << "Yes";
        return 0;
    }else if(b==a%10+1 || a==b%10+1){
        cout << "Yes";
        return 0;
    }else{
        cout << "No";
        return 0;
    }
    
}