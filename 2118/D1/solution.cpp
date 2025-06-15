#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
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

    vector<vector<vector<bool>>> visited(
        n, vector<vector<bool>>(2, vector<bool>(k, false)));

    while (true) {
      if (visited[currentSignal][direction][currentTime]) {
        cout << "NO\n";
        break;
      }
      visited[currentSignal][direction][currentTime] = true;
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
