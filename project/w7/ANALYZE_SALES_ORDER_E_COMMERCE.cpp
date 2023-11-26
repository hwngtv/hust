#include<bits/stdc++.h>
using namespace std;

int chuyen_so(char *s){
    int so = 0;
    char *i = s - 1;
    while(*(++i) != 0)
        if(*i < 58 && *i > 47) so = so * 10 + *i - 48;
    return so;
}

int chuyen_thoi_gian(char *s){
    return (*s * 10 + *(s+1)) * 3600 + (*(s+3) * 10 + *(s+4)) * 60 + *(s+6) * 10 + *(s+7) - 1933008;
}

int cs[1001][1001] = {}, m[1001], p[86401] = {};

int main(){
    int so_luong = 0, chi_phi = 0, r;
    char s[10], x[10], truy_van[50];
    scanf("%s", truy_van);
    while(truy_van[0] != '#'){
        scanf("%s%d%s%s", s, &r, s, x);
        ++so_luong;
        chi_phi += r;
        cs[chuyen_so(truy_van)][chuyen_so(s)] += r;
        m[chuyen_so(s)] += r;
        p[chuyen_thoi_gian(x)] += r;
        scanf("%s", truy_van);
    }
    for(int i = 1; i < 86401; ++i)
        p[i] += p[i-1];

    scanf("%s", truy_van);
    while(truy_van[0] != '#'){
        if(truy_van[7] == 'n')
            printf("%d\n", so_luong);
        else if(truy_van[7] == 'e'){
            scanf("%s", s);
            printf("%d\n", m[chuyen_so(s)]);
        }
        else if(truy_van[7] == 'c'){
            scanf("%s%s", x, s);
            printf("%d\n", cs[chuyen_so(x)][chuyen_so(s)]);
        }
        else if(truy_van[7] == 'r'){
            if(truy_van[14] == 0)
                printf("%d\n", chi_phi);
            else{
                scanf("%s%s", x, s);
                printf("%d\n", p[chuyen_thoi_gian(s)] - p[chuyen_thoi_gian(x) - 1]);
            }
        }
        scanf("%s", truy_van);
    }
}
