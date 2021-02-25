/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll n, m; cin >> n >> m;
  vector<ll> a, b;
  a.resize(n+1); b.resize(m);
  a.push_back(0);

  for(int i=1; i<=n; i++) cin >> a[i];
  for(int i=0; i<m; i++) cin >> b[i];

  for(int i=0; i<n; i++) a[i+1] += a[i];

  ll last = -1;
  for (ll i = 1; i < n+1; i++)
  {
    for (ll j = last+1; j < m; j++)
    {
      // cout << "--" << i << " " << j << "\n";
      if(b[j] > a[i])
        break;
      else {
        cout << i << " " << b[j]-a[i-1] << "\n";
        last = j;
      }
    }
  }
  
  return 0;
}