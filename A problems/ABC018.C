#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  int b;
  int c;
  cin >> a >> b >> c;
  
  cout << 3 -(b < a) - (c < a) << endl;
  cout << 3 -(a < b) - (c < b) << endl;
  cout << 3 -(a < c) - (b < c) << endl;
}
