//CPP
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int res=0,odcnt=0;
    for(int i=0;i<k;i++){
        if(a[i]%2==1)odcnt++;
    }if(odcnt%2==0)res++;
    for(int i=k;i<n;i++){
        if(a[i-k]%2==1)odcnt--;
        if(a[i]%2==1)odcnt++;
        if(odcnt%2==0)res++;
    }
    cout<<res;
    return 0;
}
