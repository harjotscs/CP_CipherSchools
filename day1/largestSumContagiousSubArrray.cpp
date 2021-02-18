#include <bits/stdc++.h>
using namespace std;

int largestContiguousArraySum(vector<int> vec) {
    int cs = vec[0], ms = vec[0];
    int si = 0, msi = 0;

    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] > vec[i] + cs) {
            cs = vec[i];
            si = i;
        } else {
            cs = vec[i] + cs;
        }

        if (cs >= ms) {
            ms = cs;
            msi = si;
        }
    }

    return ms;
}
int main(){
    vector <int> v{4, -5, 1, 8, 19, -30};
    cout<<largestContiguousArraySum(v);
    return 0;
}