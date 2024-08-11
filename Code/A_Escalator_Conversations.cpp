#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;


int main(){
    optimize();
    int t; cin>>t;
    while(t--){
        int n,m,k,h;
        cin>>n>>m>>k>>h;
        int cnt = 0;
        for(int i=0; i<n; i++){
            int a; cin>>a;
            if(a!=h && abs(h-a)%k==0 && abs(h-a)<=(m-1)*k){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}