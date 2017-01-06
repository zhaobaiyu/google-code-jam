#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  int n, c, I, tmp;
  cin >> n;
  unordered_multimap<int, int> p;
  for (int i = 1; i <= n; ++i) {
    p.clear();
    cin >> c >> I;
    for (int j = 1; j <= I; ++j) {
      cin >> tmp;
      p.insert({tmp, j});
    }
    for (auto pr : p) {
      auto find_ans = p.find(c - pr.first);
      if (find_ans != p.end() && *find_ans != pr) {
        if (pr.second > find_ans->second) {
          swap(pr.second, find_ans->second);
        }
        cout << "Case #" << i << ": " << pr.second << ' ' << find_ans->second << endl;
        break;
      }
    }
  }
  return 0;
}
