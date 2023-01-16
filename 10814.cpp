#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <iterator>
#include <map>

using namespace std;

multimap<int, string> member;
multimap<int, string>::iterator it;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		string b;
		cin >> a >> b;
		member.insert(make_pair(a, b));
	}
	for (auto it = member.begin(); it != member.end(); it++) {
		cout << it->first << " " << it->second << '\n';
	}
}