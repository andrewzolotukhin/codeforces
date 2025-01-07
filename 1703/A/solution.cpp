#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;
  cin >> n;

  while (n--) {
    string s;
    cin >> s;

    cout << ((s.size() == 3 && tolower((char)s[0]) == 'y' &&
              tolower((char)s[1]) == 'e' && tolower((char)s[2]) == 's')
                 ? "YES"
                 : "NO")
         << '\n';
  }
}
