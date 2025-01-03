#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l;
  vector<int> a;

  cin >> n >> l;

  while (n--) {
    int b;
    cin >> b;
    a.push_back(b);
  }

  sort(a.begin(), a.end());

  int maxDiff = -100;
  for (int i = 1; i < a.size(); i++) {
    if (a[i] - a[i - 1] > maxDiff) {
      maxDiff = a[i] - a[i - 1];
    }
  }

  int edgeDiffStart = a[0];
  int edgeDiffEnd = l - a[n - 1];

  double result = (double)maxDiff / 2;

  if (edgeDiffStart > result) {
    result = edgeDiffStart;
  }

  if (edgeDiffEnd > result) {
    result = edgeDiffEnd;
  }

  printf("%.10f\n", result);
}
