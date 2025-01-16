#include <iostream>
using namespace std;

void solve(int n) {
  cout << "Division ";
  if (n <= 1399) {
    cout << 4;
  } else if (n <= 1599) {
    cout << 3;
  } else if (n <= 1899) {
    cout << 2;
  } else {
    cout << 1;
  }
  cout << '\n';
}
int main() {
  int t, i;
  cin >> t;
  while (t--) {
    cin >> i;
    solve(i);
  }
}
