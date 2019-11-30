#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  int b;
  int c;
  cin >> a >> b >> c;
  cout << a + b + c - min({a,b,c}) - max({a,b,c}) << endl;
                                         }
