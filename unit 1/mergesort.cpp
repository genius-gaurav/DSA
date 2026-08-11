// Merge Sort implementation
#include <iostream>
using namespace std;

void merge(vector<int>& a, int l, int m, int r) {
	int n1 = m - l + 1;
	int n2 = r - m;
	vector<int> L(n1), R(n2);
	for (int i = 0; i < n1; ++i) L[i] = a[l + i];
	for (int j = 0; j < n2; ++j) R[j] = a[m + 1 + j];

	int i = 0, j = 0, k = l;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) a[k++] = L[i++];
		else a[k++] = R[j++];
	}
	while (i < n1) a[k++] = L[i++];
	while (j < n2) a[k++] = R[j++];
}

void mergeSort(vector<int>& a, int l, int r) {
	if (l >= r) return;
	int m = l + (r - l) / 2;
	mergeSort(a, l, m);
	mergeSort(a, m + 1, r);
	merge(a, l, m, r);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	if (!(cin >> n)) {
		// demo
		vector<int> a = {38, 27, 43, 3, 9, 82, 10};
		mergeSort(a, 0, (int)a.size() - 1);
		for (size_t i = 0; i < a.size(); ++i) {
			if (i) cout << ' ';
			cout << a[i];
		}
		cout << '\n';
		return 0;
	}

	vector<int> a(n);
	for (int i = 0; i < n; ++i) cin >> a[i];
	if (n > 0) mergeSort(a, 0, n - 1);
	for (int i = 0; i < n; ++i) {
		if (i) cout << ' ';
		cout << a[i];
	}
	cout << '\n';
	return 0;
}

