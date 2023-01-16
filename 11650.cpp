#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> locate;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		locate.push_back(make_pair(x, y));
	}
	sort(locate.begin(),locate.end());
	for (int i = 0; i < N; i++) {
		cout << locate[i].first << " " << locate[i].second << '\n';
	}
}