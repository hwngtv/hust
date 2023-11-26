#include<bits/stdc++.h>
using namespace std;

int s[100001] = {}, kommen[100001], num_trans = 0, gesamt_geld = 0, m, n, gefunden = 0, p = 0;
bool besucht[100001];
set<string> li;
map<string, int> mp;
vector<int> ss[100001];

void dfs(int k){
    if(gefunden){
        return;
    }
    if(k == m){
        for(int i : ss[kommen[k-1]])
            if(i == n)
                gefunden = 1;
        return;
    }
    for(int i : ss[kommen[k - 1]]){
        if(!besucht[i]){
            kommen[k] = i;
            besucht[i] = true;
            dfs(k+1);
            besucht[i] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string x, y, z;
    cin >> x;
    while(x[0] != '#'){
        cin >> y >> m >> z >> z;
        num_trans++;
        gesamt_geld += m;
        if(li.find(x) == li.end()){
            mp[x] = p++;
        }
        if(li.find(y) == li.end()){
            mp[y] = p++;
        }
        s[mp[x]] += m;
        li.insert(x);
        li.insert(y);
        ss[mp[x]].push_back(mp[y]);
        cin >> x;
    }
    cin >> x;

    while(x[0] != '#'){
        if(x[1] == 't'){
            if(x[24] == '_'){
                cin >> x;
                if(li.find(x) != li.end()){
                    cout << s[mp[x]] << endl;
                }
                else
                    cout << 0 << endl;
            }
            else{
                cout << gesamt_geld << endl;
            }
        }
        else if(x[1] == 'i'){
            cin >> x >> m;
            gefunden = 0;
            n = mp[x];
            kommen[0] = n;
            besucht[n] = true;
            dfs(1);
            besucht[n] = false;
            if(gefunden){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
        else if(x[1] == 'l'){
            for(string i : li)
                cout << i << " ";
            cout << endl;
        }
        else if(x[1] == 'n'){
            cout << num_trans << endl;
        }
        cin >> x;
    }
}
