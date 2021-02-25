/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  int n; cin >> n;
  vector<int>v; v.resize(n);
  vector<int>ans;
  for(int i=0; i<n; i++) cin >> v[i];

  for(int i=n-1; i>=0; i--) {
    if(find(ans.begin(), ans.end(), v[i]) == ans.end())
      ans.push_back(v[i]);
  }

  cout << ans.size() << "\n";
  reverse(ans.begin(), ans.end());
  for(auto i: ans) {
    cout << i << " ";
  }

  return 0;
}