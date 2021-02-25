/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int getLowerRange(int n, int a) {
  while(n>a) {
    if(n%a == 0) a = (n/a)*a;
    else a = (n/a + 1)*(a);
  }
  return a;
}

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll t;
  cin >> t;
  while(t--) {
    ll p, a, b, c; cin >> p >> a >> b >> c;

    ll a1 = abs(getLowerRange(p, a) - p);
    ll b1 = abs(getLowerRange(p, b) - p);
    ll c1 = abs(getLowerRange(p, c) - p);
    
    cout << min(a1, min(b1, c1)) << "\n"; 
  }

  return 0;
}