#include <bits/stdc++.h>
using namespace std;


void v(string &s){
    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case 'b':
            s[i] = 'p'; 
            break;
        case 'd':
            s[i] = 'q'; 
            break;
        case 'p':
            s[i] = 'b';
            break;
        case 'q':
            s[i] = 'd';
            break;
        }
    }
}

void h(string &s){
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case 'b':
            s[i] = 'd'; 
            break;
        case 'd':
            s[i] = 'b'; 
            break;
        case 'p':
            s[i] = 'q';
            break;
        case 'q':
            s[i] = 'p';
            break;
        }
    }
}

void r(string &s){
    v(s);
    h(s);
}
int main(){
    string s, t;
    cin >> s >> t;
    int a[3] = {0}; //{h, v, r}
    //int h, v, r = 0;
    
    for (int i = 0; i < t.size(); i++)
    {
        switch (t[i])
        {
        case 'h':
            a[0] ++; 
            break;
        case 'v':
            a[1] ++;
            break;
        case 'r':
            a[2] ++;
            break;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        a[i] %= 2;
    }
    
    if(a[0] == 1 && a[1] == 1 && a[2] == 1){
        cout << s << endl;
    } else {
        if (a[0]){
            h(s);
        }
        if (a[1]){
            v(s);
        }
        if (a[2]){
            r(s);
        }
        cout << s << endl;
    }


    

    

    return 0;
}