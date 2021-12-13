#include "iostream"

using namespace std;

int main() {
    int v[101], n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i += 2)
        if (v[i] % 2 == 0)
            cout << v[i];
}