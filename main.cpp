#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

typedef int64_t ll;
using namespace std;

int main() {
    freopen("output.txt", "w", stdout);

    int64_t n, k;
    cin >> n >> k;

    // prime case
    if ((n+1)/2 >= k) {
        cout << (k*2-1) << endl;
    } else {
        k = abs(k-(n+1)/2);
        cout << k*2 << endl;
    }

    return 0;
}