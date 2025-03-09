#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'A') {
        c++;
      } else {
        c--;
      }
    }
    cout << ((c > 0) ? "A\n" : "B\n");
  }
  return 0;
}
