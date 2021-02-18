#include <algorithm>
#include <iostream>
using namespace std;

int kthSmallest(int arr[], int n, int k)
{
	sort(arr, arr + n);
	return arr[k - 1];
}


int main()
{
	int arr[] = { 4, 3, 35, 27, 19 };
	int n = sizeof(arr) / sizeof(arr[0]), k = 4;
	cout << "K'th smallest element in the array is " << kthSmallest(arr, n, k);
	return 0;
}
