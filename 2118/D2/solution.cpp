#include <algorithm>
#include <functional>
#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>
using namespace std;
using LL = long long;

const int MAXN = 2e5 + 5;

int to[2 * MAXN];
LL R_val[MAXN], L_val[MAXN];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    LL k;
    cin >> n >> k;
    vector<LL> p(n), d(n);

    for (auto &x : p)
      cin >> x;
    for (auto &x : d)
      cin >> x;

    // Предвычисление значений состояний
    for (int i = 0; i < n; i++) {
      R_val[i] = ((d[i] - p[i]) % k + k) % k;
      L_val[i] = ((d[i] + p[i]) % k + k) % k;
    }

    // Инициализация переходов
    fill(to, to + 2 * n, -1);
    unordered_map<LL, stack<int>> next_right, next_left;

    // Построение графа справа налево
    for (int i = n - 1; i >= 0; i--) {
      // Обработка состояния "выход вправо" (i<<1)
      auto &st_r = next_right[R_val[i]];
      if (!st_r.empty()) {
        to[i << 1] = st_r.top();
      }
      st_r.push(i << 1);

      // Обработка состояния "выход влево" (i<<1|1)
      auto &st_l = next_left[L_val[i]];
      if (!st_l.empty()) {
        to[i << 1 | 1] = st_l.top();
      }
      st_l.push(i << 1 | 1);
    }

    // Определение состояний выхода
    vector<bool> can_leave(2 * n, false);
    vector<bool> visited(2 * n, false);

    function<bool(int)> dfs = [&](int u) {
      if (visited[u])
        return can_leave[u];
      visited[u] = true;
      if (to[u] == -1)
        return can_leave[u] = true;
      return can_leave[u] = dfs(to[u]);
    };

    for (int i = 0; i < 2 * n; i++) {
      if (!visited[i])
        dfs(i);
    }

    // Обработка запросов
    int q;
    cin >> q;
    while (q--) {
      LL x;
      cin >> x;
      int i = lower_bound(p.begin(), p.end(), x) - p.begin();
      int state;

      if (i == n) {
        cout << "YES\n";
        continue;
      }

      if (p[i] == x) {
        // На светофоре
        state = (0 == d[i]) ? (i << 1 | 1) : (i << 1);
      } else {
        // Между светофорами
        LL time = (p[i] - x) % k;
        if (time < 0)
          time += k;
        state = (time == d[i]) ? (i << 1 | 1) : (i << 1);
      }

      cout << (can_leave[state] ? "YES" : "NO") << "\n";
    }
  }
  return 0;
}
