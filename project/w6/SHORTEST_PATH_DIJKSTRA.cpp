#include <bits/stdc++.h>
using namespace std;
#define MAXN 100009
vector<pair<int,int>> gurafu[MAXN];
long long kyori[MAXN];
bool houmon[MAXN]={};
void saitankeiro(int kaishi){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> saishouhipu;
    saishouhipu.push({0,kaishi});
    kyori[kaishi]=0;
    while(!saishouhipu.empty()){
        int nodo=saishouhipu.top().second;
        saishouhipu.pop();
        if(houmon[nodo])continue;
        houmon[nodo]=true;
        for(auto &enji:gurafu[nodo]){
            int tsuginodo=enji.first,omosa=enji.second;
            if(kyori[nodo]+omosa<kyori[tsuginodo]){
                kyori[tsuginodo]=kyori[nodo]+omosa;
                saishouhipu.push({kyori[tsuginodo],tsuginodo});
            }
        }

    }

}
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(0);
    int nodosuu, enjisuu, nodo1, nodo2, enjiomosa;cin>>nodosuu>>enjisuu;
    for(int i=1;i<=nodosuu;i++)kyori[i]=LLONG_MAX;
    while(enjisuu--){
        cin>>nodo1>>nodo2>>enjiomosa;
        gurafu[nodo1].push_back({nodo2,enjiomosa});
    }

    int kaishi,mokuteki;
    cin>>kaishi>>mokuteki;
    saitankeiro(kaishi);
    cout<<kyori[mokuteki];
}
