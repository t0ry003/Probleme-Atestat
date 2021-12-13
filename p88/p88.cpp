#include "iostream"

using namespace std;

int main() {
    int v[101], n, p;

    cin >> n >> p;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = p; i < n; i++)
        v[i] = v[i + 1];

    for (int i = 1; i < n; i++)
        cout << v[i] << " ";
}