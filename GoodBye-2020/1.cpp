/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll t;
  cin >> t;
  while(t--) {
    ll n;
    cin >> n;
    vector<ll> x;

    ll k;
    for (ll i = 0; i < n; i++)
    {
      cin >> k;
      x.push_back(k);
    }
    
    set<int> uni;
    for (ll i = 0; i < n; i++)
    {
      for (ll j = i+1; j < n; j++)
      {
        uni.insert(x[j]-x[i]);
      }
    }
    cout << uni.size() << "\n";
  }

  return 0;
}