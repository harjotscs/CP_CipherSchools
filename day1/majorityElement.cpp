#include <bits/stdc++.h>
using namespace std;

void findMajorityElement(int arr[], int n)
{
	int maxCount = 0;
	int index = -1;
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (arr[i] == arr[j])
				count++;
		}

		if (count > maxCount) {
			maxCount = count;
			index = i;
		}
	}

	if (maxCount > n / 2)
		cout << arr[index] << endl;

	else
		cout << "Majority Element Not Found" << endl;
}

int main()
{
	int arr[]={ 3, 3, 2, 3, 3, 5, 3,1, 3, 3, 3, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	findMajorityElement(arr, n);
	return 0;
}
