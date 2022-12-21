#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool cmp(string x, string y) {
	if (x.length() == y.length())
		return x < y;
	return x.length() < y.length();
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	vector<string> orig;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		if (find(orig.begin(), orig.end(), s) == orig.end())
			orig.push_back(s);
	}
	sort(orig.begin(), orig.end(), cmp);
	for (int i = 0; i < orig.size(); i++) {
		cout << orig[i] << '\n';
	}
}