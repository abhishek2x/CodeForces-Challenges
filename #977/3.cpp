/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll n, k, i, p; cin >> n >> k;
  vector<int> arr;

  for (int i = 0; i < n; i++){
    cin >> p; 
    arr.push_back(p);
  }

  sort(arr.begin(), arr.end());
  int ans;

  if(k == 0) ans = arr[0]-1;
  else ans = arr[k-1];

  ll cnt=0;
  for (int i = 0; i < n; i++)
    if(arr[i]<=ans) cnt++;
  

  if(cnt != k || ans < 1)
    cout << -1;
  else cout << ans;

  return 0;
}