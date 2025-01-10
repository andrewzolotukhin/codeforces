#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int a = 0, b = 0, n;
  cin >> n;
  vector<int> nums;
  while (n--) {
    int t;
    cin >> t;
    nums.push_back(t);
  }

  bool aTurn = true;
  while (!nums.empty()) {
    int val;
    if (nums.size() > 1) {
      if (nums[0] > nums.back()) {
        val = nums[0];
        nums.erase(nums.begin());
      } else {
        val = nums.back();
        nums.pop_back();
      }
    } else {
      val = nums.front();
      nums.pop_back();
    }

    if (aTurn) {
      a += val;
    } else {
      b += val;
    }

    aTurn = !aTurn;
  }

  cout << a << " " << b << '\n';
}
