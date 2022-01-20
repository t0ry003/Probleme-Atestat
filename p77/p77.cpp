#include "iostream"

using namespace std;

int verifMult(int x, int M[], int c) {
    for (int i = 1; i <= c; i++)
        if (x == M[i])
            return 0;
    return 1;
}

int main() {
    int A[101] = {0}, B[101] = {0}, n, m, M[101] = {0}, c = 1;

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> A[i];

    cin >> m;
    for (int j = 1; j <= m; j++)
        cin >> B[j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (A[i] == B[j] && verifMult(A[i], M, c) == 1) {
                M[c] = A[i];
                c++;
            }

    for (int i = 1; i < c; i++)
        cout << M[i] << " ";
}