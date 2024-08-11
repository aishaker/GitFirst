#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;


int main(){
    optimize();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n],b[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            b[i] = a[i];
        }

        sort(b,b+n);

        bool f = true;
        for(int i=0; i<n; i++){
            if((a[i]%2 != b[i]%2)){
                f = false;
                break;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

    return 0;
}