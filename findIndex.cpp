#include <bits/stdc++.h>
using namespace std;

void findFirstAndLast(int arr[], int n, int x)
{
	int first = -1, last = -1;
	for (int i = 0; i < n; i++) {
		if (x != arr[i])
			continue;
		if (first == -1)
			first = i;
		last = i;
	}
	if (first != -1)
		cout << "First Occurrence at: " << first<<"\t"
			<< "Last Occurrence at: " << last;
	else
		cout << "404 Not Found";
}

int main()
{
	int arr[] = { 2, 2, 2, 2, 1, 4, 3, 7, 8, 8 };
	int n = sizeof(arr) / sizeof(int);
	int x = 8;
	findFirstAndLast(arr, n, x);
	return 0;
}
