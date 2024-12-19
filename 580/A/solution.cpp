#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> nums;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    nums.push_back(a);
  }

  int answer = 1;

  int currAns = 1;

  for (int i = 1; i < n; i++) {
    if (nums[i] < nums[i - 1]) {
      answer = max(answer, currAns);
      currAns = 0;
    }
    currAns++;
  }

  answer = max(answer, currAns);

  cout << answer << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
