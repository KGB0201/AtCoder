#include <bits/stdc++.h>
using namespace std;

int main() {
  int A;
  int B;
  cin >> A >> B;
  if (A >= B && A % B == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
