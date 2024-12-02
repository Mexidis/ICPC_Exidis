#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, E, T;
    cin >> N >> E >> T;

    vector<vector<int>> adj(N + 1); // Lista de adyacencia

    // Leer las interconexiones
    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Dijkstra desde la salida de emergencia (nodo N)
    vector<int> dist(N + 1, INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    dist[N] = 0;
    pq.push({0, N});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d > dist[u]) continue;

        for (int v : adj[u]) {
            if (dist[u] + 1 < dist[v]) {
                dist[v] = dist[u] + 1;
                pq.push({dist[v], v});
            }
        }
    }

    // Contar cuántos marineros pueden llegar a la salida en menos de T unidades de tiempo
    int count = 0;
    for (int i = 1; i <= N; ++i) {
        if (i != N && dist[i] < T) {
            ++count;
        }
    }

    cout << count << endl;
    return 0;
}
