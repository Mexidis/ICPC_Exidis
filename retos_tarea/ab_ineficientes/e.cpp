#include <bits/stdc++.h>
using namespace std;

void dfs(const vector<int>& tree, int index, vector<int>& subtree) {
    if (index >= tree.size()) return; 
    subtree.push_back(tree[index]); 
    dfs(tree, 2 * index, subtree); 
    dfs(tree, 2 * index + 1, subtree); 
}

int main() {
    int T, k;
    cin >> T;

    vector<int> tree(T + 1); 
    for (int i = 1; i <= T; ++i) {
        cin >> tree[i];
    }

    cin >> k;

    int rootIndex = -1;
    for (int i = 1; i <= T; ++i) {
        if (tree[i] == k) {
            rootIndex = i;
            break;
        }
    }

    if (rootIndex == -1) {
        cout << "Nodo no encontrado" << endl;
        return 0;
    }

    vector<int> subtree;
    dfs(tree, rootIndex, subtree);

    for (int val : subtree) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}