/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll n; cin >> n;
  string s; cin >> s;
  unordered_map <string, int> umap;
  
  for (int i = 1; i < n; i++)
  {
    string tGram = s.substr(i-1, 2);
    umap[tGram]++;
  }

  string ans;
  int max=INT_MIN;
  for (int i = 1; i < n; i++)
  {
    string tGram = s.substr(i-1, 2);
    if(max <= umap[tGram])  {
      max = umap[tGram];
      ans = tGram;
    }
  }
  
  cout << ans;
  return 0;
}
