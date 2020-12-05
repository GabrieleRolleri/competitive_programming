#include <bits/stdc++.h>

using namespace std;


void build_st(int *v, vector<int> st[], int n, int K) {
    for (int i = 0; i < n; ++i)
        st[i][0] = v[i];
    for (int j = 1; j < K; ++j)
        for (int i = 0; i + (1 << j) <= n; ++i)
            st[i][j] = st[i][j - 1] + st[i + (1 << (j - 1))][j - 1];
}

int query(int l, int r, vector<int> st[]) {
    int j = r - l;
    int i = 0, S = 0;
    while (j > 0) {
        if (j % 2)
            S += st[l + (r - l) % (1 << i)][i];
        ++i;
        j = j / 2;
    }
    return S;
}


int main() {
    constexpr int K = 30;
    int n;
    cout << "Inserisci la lunghezza dell'array: ";
    cin >> n;
    cout << "\n";
    int V[n];
    vector<int> st[n];
    cout << "Inserisci gli elementi dell'array: ";
    for (int i = 0; i < n; ++i) {
        cin >> V[i];
        st[i].resize(K);
    }
    build_st(V, st, n, K);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < K; ++j)
            cout << st[i][j] << ' ';
        cout << endl;
    }

    cout << query(1, 5, st);

    return 0;
}