#include<bits/stdc++.h>
using namespace std;
int solve(int ara[], int n,int item){
    int l,r,mid,answer;

    l = 0 ;
    r = n -1;
    while(l<=r){
        mid = (l+r) / 2 ;
        if(ara[mid] == item){
            answer = mid ;
            l = mid+1 ;
        }
        if(ara[mid] < item ) r = mid-1 ;
        else l = mid+1;
    }

    return answer;
}
int main(){
    int n,answer,x;
    cin >> n>>x;   

    int ara[n+1];
    for(int i = 0; i< n; i ++){
        cin >> ara[i];
    }

    answer = solve(ara,n,x);
    cout<<answer<<'\n';
    return 0;
}
