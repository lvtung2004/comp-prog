#include<bits/stdc++.h>
/* 
for(int i=0;i<n;i++){
    res2+=(n-mp[a[i]]);
}
```

**Không phải** là có 2 vòng lặp i và j riêng biệt. Mà là:

### Mỗi cặp (i, j) được tính 2 lần trong CÙNG 1 vòng lặp:
```
Mảng: [1, 2, 1, 3]
       i=0 i=1 i=2 i=3

Khi i=0 (a[0]=1):
  - Đếm cặp với i=1 (giá trị 2) ✓
  - Đếm cặp với i=3 (giá trị 3) ✓
  - KHÔNG đếm với i=2 (cùng giá trị 1)
  → Cộng 2

Khi i=1 (a[1]=2):
  - Đếm cặp với i=0 (giá trị 1) ✓ ← CẶP NÀY ĐÃ ĐẾM RỒI!
  - Đếm cặp với i=2 (giá trị 1) ✓
  - Đếm cặp với i=3 (giá trị 3) ✓
  → Cộng 3

Khi i=2 (a[2]=1):
  - Đếm cặp với i=1 (giá trị 2) ✓ ← ĐÃ ĐẾM RỒI!
  - Đếm cặp với i=3 (giá trị 3) ✓
  → Cộng 2

Khi i=3 (a[3]=3):
  - Đếm cặp với i=0 (giá trị 1) ✓ ← ĐÃ ĐẾM RỒI!
  - Đếm cặp với i=1 (giá trị 2) ✓ ← ĐÃ ĐẾM RỒI!
  - Đếm cặp với i=2 (giá trị 1) ✓ ← ĐÃ ĐẾM RỒI!
  → Cộng 3

*/
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto &nx : a) {
    cin >> nx;
  }
  map<int, long long> mp;
  for(int i=0; i<n; i++) {
    mp[a[i]]++;
  }
  long long res2 = 0;
  for(int i=0; i<n; i++) {
    res2 += (n - mp[a[i]]);
  }
  cout << res2 / 2 << endl;
  return 0;
}