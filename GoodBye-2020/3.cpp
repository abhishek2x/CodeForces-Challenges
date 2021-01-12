/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool isPallin(string s) {
  string s1 = s;
  reverse(s.begin(), s.end());
  return (s1 == s);
}
int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll t; cin >> t;
  while(t--) {
    string s; cin >> s; int ans=0;
    for (int i = 0; i < s.length(); i++) {
      for (int len = 1; len <= s.length() - i; len++){
        if(s.substr(i, len).length() > 1){
          if(isPallin(s.substr(i, len))){
            ans++;
          }
        }
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
