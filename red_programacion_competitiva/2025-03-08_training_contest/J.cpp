//
// Created by pac61 on 08/03/2025.
//

#include <bits/stdc++.h>
using namespace std;

int main (){
    pair <int, int> score;
    pair <int, int> temp(0 , 0);
    vector<pair<int, int>> stored;
    bool crono = false;

    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> score.first >> score.second;
        stored.push_back(score);
    }

    for (int i = 0; i < n; ++i) {
        if (temp.first <= stored[i].first &&
            temp.second <= stored[i].second) {
            crono = true;
        } else {
            crono = false;
            break;
        }
        temp.first = stored[i].first;
        temp.second = stored[i].second;
    }

    if (crono) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}

