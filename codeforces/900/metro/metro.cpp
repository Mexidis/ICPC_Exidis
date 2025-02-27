//
// Created by pac61, Serch on 26/02/2025.
//


#include <bits/stdc++.h>
using namespace std;

// Function to add an edge to the adjacency list
void addEdge(vector<vector<int>> &adj, int s, int t){
    // Add edge from vertex s to t
    adj[s].push_back(t);
}

// Recursive function for DFS traversal
void DFSRec(vector<vector<int>> &adj, vector<bool> &visited, int s, int targ, bool* encont){
    // Mark the current vertex as visited
    visited[s] = true;

    if( s == targ ){
        *encont = true;
    }

    // Recursively visit all adjacent vertices that are not visited yet
    for (int i : adj[s])
        if (visited[i] == false)
            DFSRec(adj, visited, i, targ, encont);
}

// Main DFS function that initializes the visited array
// and call DFSRec
void DFS(vector<vector<int>> &adj, int s, int targ){
    vector<bool> visited(adj.size(), false);
    // Call the recursive DFS function
    bool encont = false;
    DFSRec(adj, visited, s, targ, &encont);
    if (encont)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}



int main(){
    int n, search, a, b, aux=0;
    scanf("%d %d", &n,&search);
    vector<vector<int>> adj(n+2);
    for (int i = 1; i <= n; ++i) {
        cin >> a;
        if( a ) {
            addEdge(adj, aux, i);
            //                  0 ----> 1
            //                  000...
            //                  1 ----> 5
            aux = i;
        }
    }
    aux=n+1;
    for (int i = 1; i <= n; ++i) {
        cin >> a;
        if( a ){
            addEdge(adj, i, aux);
            //                  2 <--- 6
            //                  3 <--- 2
            //                  4 <--- 3
            //                  4 <--- 5
            aux = i;
        }
    }

//    for(auto vec : adj) {
//        cout << "[ ";
//        for (auto in: vec)
//            cout << in << ", ";
//        cout << " ]\n";
//    }

    DFS(adj, 1, search);

    return 0;
}
