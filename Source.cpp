#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int main() {
    ll n;
    cin >> n;
    ll sum = 1;
    for (ll i = 1; i <= n; i++) {
        sum *= i % 1000000007;
        sum = sum % 1000000007;
        cout << sum << endl;;
    }

    return 0;
}
