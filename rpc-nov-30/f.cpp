#include <bits/stdc++.h>
using namespace std;
unordered_map<string, int> p;



void algo(unordered_map<string, int> &pred, const vector<string> &final, int i){
    int max=INT_MIN, pos, dif;
    string winner;

    for(int j=i; j<final.size(); ++j){
        pos =pred[final[j]];
        dif = pos - j;
        if(dif>max){
            max=dif;
            winner=final[j];
        }
    }
    cout << winner << endl;
}

void solve(vector<pair<string, int>> &vi, vector<string> &final, int n){
    for (int i = 0; i < n; i++)
    {
        if(vi[i].first != final[i]){
            //cout << p.first <<":" << final[i];
            return 
            algo(p, final, i);
        }
    }
    cout << "suspicious\n";        

}
int main(){
    int n;
    cin >> n;
    vector<string> final(n+1);
    vector<pair<string, int>> ordenado(n+1);


    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        p[s]=i;
        ordenado[i] = {s,i};
    }

/*
    for(const pair<string, int> &par : p){
        int i=0;
        cout << par.first << ":"<< par.second << endl;
        i=i +1;
        //cout << "suspicious\n";        
    }
*/
    for (int i = 0; i < n; i++)
    {
        cin >> final[i];
    }

/*
    for (int i = 0; i < n; i++)
    {
        cout << final[i] << endl;
    }
  */  

    solve(ordenado, final, n);
    

    return 0;
}