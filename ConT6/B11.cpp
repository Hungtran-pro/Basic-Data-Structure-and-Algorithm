#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define QT NN

using namespace std;

typedef double ld;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> II;

const ld pi=2*acos(0);
const int im = INT_MAX;
const int in = INT_MIN;
const int limit = 1e5+5;
const ll M = 1e9+7;

int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        int n,tmp;
        cin>>n;
        vi a;
        for(int i = 0; i < n ; i++){
            cin>>tmp;
            a.pb(tmp);
        }
        int minn = im;
        int res;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++) if(abs(a[i]+a[j]) < minn){
                res = a[i]+a[j];
                minn = abs(a[i]+a[j]);
            }
        }
        cout<<res<<endl;
   }
    return 0;
}
//Code by QT