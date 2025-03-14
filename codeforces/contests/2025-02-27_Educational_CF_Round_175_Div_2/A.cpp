#include <iostream>
using namespace std;

int count_fizzbuzz(long long n) {
    return (n / 15 + 1) + ((n - 1) / 15 + 1) + ((n - 2) / 15 + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        cout << count_fizzbuzz(n) << '\n';
    }

    return 0;
}
