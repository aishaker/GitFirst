#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
typedef long long ll;


int main(){
    optimize();
    int t; cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans = 0;
        
        if(a>=c){
            if(a>c){
                ans++;
                if(b<d){
                    ans--;
                }
            }
            else{
                if(b>d) ans++;
            }
        }
        if(a>=d){
            if(a>d){
                ans++;
                if(b<c){
                    ans--;
                }
            }
            else{
                if(b>c) ans++;
            }
        }

        if(b>=c){
            if(b>c){
                ans++;
                if(a<d){
                    ans--;
                }
            }
            else{
                if(a>d) ans++;
            }
        }
        if(b>=d){
            if(b>d){
                ans++;
                if(a<c){
                    ans--;
                }
            }
            else{
                if(a>c) ans++;
            }
        }

        if(ans>0){
            cout<<ans<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }

    return 0;
}