#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
typedef long long ll;

int main()
{
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        int n, s, m;
        cin >> n >> s >> m;
        int a[n][2];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }

        if ((a[0][0] - 0) >= s)
        {
            cout << "YES" << endl;
        }
        else
        {
            int min = 0;
            bool f = false;
            for (int i = 1; i < n; i++)
            {
                int b = a[i][0];
                int c = a[i - 1][1];
                if ((b - c) >= s)
                {
                    f = true;
                    break;
                }
            }

            if (f)
            {
                cout << "YES" << endl;
            }
            else
            {
                int d = a[n-1][1];
                if((m-d)>=s){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }

    return 0;
}