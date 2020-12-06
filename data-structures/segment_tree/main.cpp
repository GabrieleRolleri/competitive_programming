#include <bits/stdc++.h>

using namespace std;

void build_st(int *V, int *st, int i, int l, int r) {
    if (l == r)
        st[i] = V[l];
    else {
        build_st(V, st, 2 * i, l, (l + r) / 2);
        build_st(V, st, 2 * i + 1, (l + r) / 2 + 1, r);
        st[i] = st[2 * i] + st[2 * i + 1];
    }
}

int query_st(int *st, int i, int l, int r, int tl, int tr) {
    int m = (tl + tr) / 2;
    if (l == tl && r == tr)
        return st[i];
    if (l > m)
        return query_st(st, 2 * i + 1, l, r, m + 1, tr);
    if (r <= m)
        return query_st(st, 2 * i, l, r, tl, m);
    return query_st(st, 2 * i, l, m, tl, m) + query_st(st, 2 * i + 1, m + 1, r, m + 1, tr);
}

void update_st(int *st, int i, int iu, int u, int tl, int tr) {
    if (tl == tr)
        st[i] = u;
    else {
        int m = (tl + tr) / 2;
        if (iu > m)
            update_st(st, 2 * i + 1, iu, u, m + 1, tr);
        else
            update_st(st, 2 * i, iu, u, tl, m);
        st[i] = st[2 * i] + st[2 * i + 1];
    }
}

int main() {
    int n;
    cout << "Inserisci il numero di elementi: ";
    cin >> n;
    cout << "\n";
    int *V = (int *) malloc(n * sizeof(int)), *st = (int *) malloc(4 * n * sizeof(int));
    cout << "Inserisci i valori del vettore: ";
    for (int i = 0; i < n; ++i)
        cin >> V[i];
    build_st(V, st, 1, 0, n - 1);

    cout << query_st(st, 1, 1, 4, 0, n - 1)<<'\n';
    update_st(st, 1, 5, 45, 0, n - 1);
    cout << query_st(st, 1, 0, 5, 0, n - 1);

    return 0;
}