#include<bits/stdc++.h>
using namespace std;

int tahwil_int(string s){
    int num = 0, j = s.length();
    for(int i = 0; i < j; ++i)
        if(s[i] < 58 && s[i] > 47) num = num * 10 + s[i] - 48;
    return num;
}

int tahwil_waqt(int waqt){
    return waqt / 10000 * 3600 + (waqt % 10000) / 100 * 60 + waqt % 100;
}

int masalah_alistikhdam[10005][105] = {}, khata_alistikhdam[10005] = {}, points_alistikhdam[10005] = {}, waqt_tahwil[86405] = {}, kan_tahwil[86405] = {}, sayakun_tahwil[86405] = {};

int main(){
    ios::sync_with_stdio(false);
    cin.tie();
    int num_tahwil = 0, num_khata = 0, point;
    string userID, masalahID, waqt, status, query, waqt1;
    cin >> userID;
    while(userID[0] != '#'){
        ++num_tahwil;
        cin >> masalahID >> waqt >> status >> point;
        ++waqt_tahwil[tahwil_waqt(tahwil_int(waqt))];
        if(status == "ERR"){
            ++khata_alistikhdam[tahwil_int(userID)];
            ++num_khata;
        }
        else{
            int uID = tahwil_int(userID), pID = tahwil_int(masalahID);
            masalah_alistikhdam[uID][pID] = max(masalah_alistikhdam[uID][pID], point);
        }
        cin >> userID;
    }
    for(int i = 1; i < 86403; ++i){
        kan_tahwil[i] = kan_tahwil[i-1] + waqt_tahwil[i-1];
        sayakun_tahwil[i-1] = num_tahwil - kan_tahwil[i];
    }

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

    cin >> query;
    while(query[0] != '#'){
        if(query[8] == 's'){
            cin >> waqt >> waqt1;
            cout << num_tahwil - kan_tahwil[tahwil_waqt(tahwil_int(waqt))] - sayakun_tahwil[tahwil_waqt(tahwil_int(waqt1))] << endl;
        }
        else if(query[1] == 'n'){
            if(query[23] != '\0'){
                cin >> userID;
                cout << khata_alistikhdam[tahwil_int(userID)] << endl;
            }
            else{
                cout << num_khata << endl;
            }
        }

        else if(query[7] == 'p'){
            cin >> userID;
            int uID = tahwil_int(userID);
            if(!points_alistikhdam[uID]){
                for(int i = 0; i < 105; i++){
                    points_alistikhdam[uID] += masalah_alistikhdam[uID][i];
                }
            }
            cout << points_alistikhdam[uID] << endl;
        }
        else if(query[7] == 'n'){
            cout << num_tahwil << endl;
        }
        cin >> query;
    }
}
