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
  string s; cin >> s;
  int toDelete = 0;
  for (int i = 0; i < n; i++)
  {
    if(s[i] == 'x') {
      int cnt = 0;
      
      for (int j = i; j < n; j++){
        if(s[j] == 'x') cnt++;
        else break;
      }
      if(cnt > 2){
        toDelete += cnt-2;
      }
      // cout << cnt << " " << i  << " " << toDelete << "\n";
      i += cnt-1;
    }
  }
  cout << toDelete;

  return 0;
}