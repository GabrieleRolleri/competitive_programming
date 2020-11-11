#include <bits/stdc++.h>

using namespace std;

void createLPS(string, int *);

vector<int> findKMP(string, string);

int main() {
    string S = "", T = "";
    vector<int> sol = findKMP(T, S);
    for (auto i: sol)
        cout << i << "\n";
    return 0;
}

void createLPS(string M, int *LPS) {
    int l = M.size(), i = 1, j;
    LPS[0] = 0;
    j = 0;
    while (i < l) {
        if (M[i] == M[j]) {
            LPS[i] = j + 1;
            ++j;
            ++i;
        } else {
            if (j == 0) {
                LPS[i] = 0;
                j = 0;
                ++i;
            } else {
                j = LPS[j - 1];
            }
        }
    }
}


vector<int> findKMP(string T, string P) {
    vector<int> S;
    int lT = T.size(), lP = P.size();
    int LPS[lP];
    createLPS(P, LPS);
    int i = 0, j = 0;
    while (i < lT) {
        if (T[i] == P[j]) {
            ++i;
            j++;
        } else {
            if (j != 0)
                j = LPS[j - 1];
            else
                ++i;
        }
        if (j == lP) {
            S.push_back(i - j);
            j = LPS[j - 1];
        }
    }
    return S;
}