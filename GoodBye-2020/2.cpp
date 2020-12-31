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
    ll n; cin >> n;
    ll k;
    unordered_set<ll> st;
    
    for (ll i = 0; i < n; i++)
    { 
      cin >> k;

      if(st.find(k) == st.end())
        st.insert(k);
      else if(st.find(k+1) == st.end())
        st.insert(k+1);
    }
    cout << st.size() << "\n";
  }

  return 0;
}