#include <iostream>
#include <vector>

using namespace std;

int main() {
long long n;
cin >> n;

int sum = (n * (n + 1)) / 2;

vector<long long> v(n - 1);
for (int i = 0; i < n - 1; ++i) {
  cin >> v[i];
  sum -= v[i];
}

cout << sum << endl;

}