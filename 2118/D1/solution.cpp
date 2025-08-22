#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  long long k;
  cin >> n >> k;
  vector<long long> p(n), d(n);

  for (auto &x : p)
    cin >> x;
  for (auto &x : d)
    cin >> x;

  int nq;
  cin >> nq;

  while (nq--) {
    long long initPosition;
    cin >> initPosition;

    int currentSignal =
        lower_bound(p.begin(), p.end(), initPosition) - p.begin();
    bool direction = true;

    if (currentSignal == n) {
      cout << "YES\n";
      continue;
    }

    long long currentTime = (p[currentSignal] - initPosition) % k;

    if (currentTime == d[currentSignal])
      direction = false;

    set<pair<long long, int>> visited;

    while (true) {
      pair<long long, int> key = {(((long long)currentTime << 50) | direction),
                                  (currentSignal)};
      if (visited.count(key)) {
        cout << "NO\n";
        break;
      }
      visited.insert(key);
      if (direction) {
        int nextSignal = currentSignal + 1;
        if (nextSignal == n) {
          cout << "YES\n";
          break;
        }
        int timeAtNextSignal =
            (currentTime + p[nextSignal] - p[currentSignal]) % k;
        if (timeAtNextSignal == d[nextSignal]) {
          direction = false;
          currentTime = timeAtNextSignal;
          currentSignal = nextSignal;
        } else {
          currentTime = timeAtNextSignal;
          currentSignal = nextSignal;
        }
      } else {
        int nextSignal = currentSignal - 1;
        if (nextSignal < 0) {
          cout << "YES\n";
          break;
        }
        long long dist = p[currentSignal] - p[nextSignal];
        int timeAtNextSignal = (currentTime + dist) % k;
        if (timeAtNextSignal == d[nextSignal]) {
          direction = true;
          currentTime = timeAtNextSignal;
          currentSignal = nextSignal;
        } else {
          currentTime = timeAtNextSignal;
          currentSignal = nextSignal;
        }
      }
    }
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}
