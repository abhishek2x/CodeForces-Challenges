/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll t; cin >> t;
  while(t--) {
    ll n, d; cin >> n >> d;
    vector<ll> v;

    ll k; 
    for (ll i = 0; i < n; i++){
      cin >> k;
      v.push_back(k);
    }

    sort(v.begin(), v.end());

    // finding position of number which is 
    // greater than d
    ll l=0, h=n-1, mid, pos=-1;
    while(l<h) {
      mid = (l+h)/2;
      if(v[mid] > d) {
        h = mid-1;
        pos = mid;
      } else {
        l = mid+1;
      }
    }    

    cout << pos;

    
  }

  return 0;
}