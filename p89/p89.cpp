#include "iostream"

using namespace std;

int main() {
    int v[101], n, p, q;

    cin >> n >> p >> q;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    swap(v[p], v[q]);

    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
}