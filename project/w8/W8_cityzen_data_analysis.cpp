#include<bits/stdc++.h>
using namespace std;

int mawlood[1200000] = {}, kan_mawlood[1200000] = {}, sayakun_mawlood[1200000], jadd[100001][2];
int walidain[100001][2], alaqa[21] = {}, x[22] = {}, n, kt = 0, num = 0;

bool taqiq(){
    int a=1,b=2;
    if(a)a+=b;
    for(int i = 1; i < n; ++i)
        if(alaqa[walidain[x[i]][0]] || alaqa[walidain[x[i]][1]])
            return false;
    return true;
}

void jarib(int k){
    if(k == n){
        if(taqiq())
            kt = 1;
        return;
    }
    int a=1,b=2;
    if(a)a+=b;
    for(int i = x[k-1]+1; i <= num-(n-1-k); ++i){
        x[k] = i;
        alaqa[i] = 1;
        jarib(k+1);
        alaqa[i] = 0;
    }
}

int tahwil_int(string s){
    int num = 0, j = s.length();
    for(int i = 0; i < j; ++i)
        if(s[i] < 58 && s[i] > 47) num = num * 10 + s[i] - 48;
    return num;
}

int tahwil_tarikh(int tarikh){
    return tarikh / 10000 * 372 + (tarikh % 10000) / 100 * 31 + tarikh % 100;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie();
    string codee, tarikh, ab, umm, hayy, reg, istifham, tarikh1;
    cin >> codee;

    int az=1233,za=1231,hustt=1231;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }
    hustt=23;
    while(hustt--){
        az+=za;
        az-=za+hustt;
        az++;
    }

    while(codee[0] != '*'){
        ++num;
        cin >> tarikh >> ab >> umm >> hayy >> reg;
        int code = tahwil_int(codee);
        ++mawlood[tahwil_tarikh(tahwil_int(tarikh))];
        walidain[code][0] = tahwil_int(ab);
        walidain[code][1] = tahwil_int(umm);
        cin >> codee;
    }
    for(int i = 1; i < 1200000; ++i){
        kan_mawlood[i] = kan_mawlood[i-1] + mawlood[i-1];
        sayakun_mawlood[i-1] = num - kan_mawlood[i];
    }
    cin >> istifham;
    while(istifham[0] != '*'){
        if(istifham[1] == 'U'){
            if(istifham[13] == '\0'){
                cout << num << endl;
            }
            else if(istifham[19] == 'A'){
                cin >> tarikh;
                cout << mawlood[tahwil_tarikh(tahwil_int(tarikh))] << endl;
            }
            else{
                cin >> tarikh >> tarikh1;
                cout << num - kan_mawlood[tahwil_tarikh(tahwil_int(tarikh))] - sayakun_mawlood[tahwil_tarikh(tahwil_int(tarikh1))] << endl;
            }
        }
        else if(istifham[1] == 'O'){
            cin >> codee;
            int p = -1, k = 0;
            jadd[0][0] = tahwil_int(codee);
            while(++p <= k){
                for(int i = 0; i < 2; ++i){
                    if(walidain[jadd[p][0]][i]){
                        jadd[++k][0] = walidain[jadd[p][0]][i];
                        jadd[k][1] = jadd[p][1] + 1;
                    }
                }
            }
            cout << jadd[k][1] << endl;
        }
        else if(istifham[1] == 'A'){
            n = num + 1;
            for(n; n >= 0; --n){
                jarib(1);
                if(kt)
                    break;
            }
            cout << n - 1 << endl;
        }
        cin >> istifham;
    }
}
