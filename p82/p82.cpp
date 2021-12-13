#include "iostream"

using namespace std;

int main() {
    int v1[101], v2[101], n, m = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v1[i];
        if (v1[i] % 2 == 0) {
            v2[m] = v1[i];
            m++;
        }
    }

    for (int i = 1; i < m; i++)
        cout << v2[i] << " ";
}