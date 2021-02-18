#include <bits/stdc++.h>
using namespace std;

int minumumPlatform( vector<int>& arr, vector<int>& dept) {
    sort(arr.begin(), arr.end());
    sort(dept.begin(), dept.end());
    int i = 1, j = 0;
    int currPlatform = 1, minPlatorm = 1;
    while (i < arr.size() && j < dept.size()) {
        if (arr[i] >= dept[j]) {
            
            currPlatform -= 1;
            j++;
        } else {
            
            currPlatform += 1;
            i++;
        }

        minPlatorm = max(minPlatorm, currPlatform);
    }

    return minPlatorm;
}
int main() {
    vector<int> arr{900, 940, 950, 1100, 1500, 1800};
    vector<int> dept{910, 1200, 1120, 1130, 1900, 2000};
    cout<<minumumPlatform(arr,dept)<<endl;
    return 0;
}
