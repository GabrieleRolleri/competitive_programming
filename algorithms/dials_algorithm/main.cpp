#include <bits/stdc++.h>

using namespace std;

int dial(list<pair<int, int>> *, int, int, int, int);

int main() {

    int V, E, K;
    cin >> V >> E >> K;
    list<pair<int, int>> graph[E];
    int vert1, vert2, w;
    for (int i = 0; i < E; ++i) {
        cin >> vert1 >> vert2 >> w;
        graph[vert1].push_back({vert2, w});
        graph[vert2].push_back({vert1, w});
    }
    cout << dial(graph, 0, 8, V, 3);

    return 0;
}

int dial(list<pair<int, int>> *G, int S, int E, int V, int K) {
    list<int> buckets[K + 1];
    int d[V];
    for (int i = 0; i < V; ++i)
        d[V] = -1;
    d[0] = 0;
    buckets[0].push_back(S);
    int j = 0;
    int v, adj, w;
    while (!buckets[j].empty()) {
        v = buckets[j].front();
        buckets[j].pop_front();
        for (auto i: G[v]) {
            adj = i.first;
            w = i.second;
            if (d[adj] == -1 || d[v] + w < d[adj]) {
                d[adj] = d[v] + w;
                buckets[(j + w) % (K + 1)].push_back(adj);
            }
        }


        if (buckets[j].empty()) {
            j = (j + 1) % (K + 1);
        }
    }
    return d[E];

}