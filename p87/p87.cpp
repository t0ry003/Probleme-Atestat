#include "iostream"

using namespace std;

int sum(int x) {
    int s = 0;
    while (x) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main() {
    int v[101], n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i < n; i++)
        if (sum(v[i]) == v[i + 1])
            cout << v[i] << " " << v[i + 1];
}