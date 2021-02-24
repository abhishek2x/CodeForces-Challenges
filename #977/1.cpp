/*!
* Copyright (c) 2020 Abhishek Srivastava
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  ios :: sync_with_stdio(false);
  cin.tie(0);

  ll n, k; cin >> n >> k;
  while(k) {
    if(n%10 != 0) n = n-1;
    else n /= 10;
    k--;
  }

  cout << n;

  return 0;
}