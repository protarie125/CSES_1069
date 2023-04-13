#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	auto prev = char{ 0 };
	auto ct = int{ 1 };
	auto mx = int{ 0 };
	for (const auto& x : s) {
		if (x == prev) {
			++ct;
		}
		else {
			if (mx < ct) {
				mx = ct;
			}

			prev = x;
			ct = 1;
		}
	}
	if (mx < ct) {
		mx = ct;
	}

	cout << mx;

	return 0;
}