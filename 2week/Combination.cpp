#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int a[5] = { 1,2,3 };
	vector<int> v;

	for (int i = 0; i < 3; i++)	v.push_back(a[i]);

	for (int i = 1; i <= 3; i++) {
		for (int j = i + 1; j <= 3; j++) {
			cout << i << " " << j <<"\n";
		}
	}
	return 0;
}
