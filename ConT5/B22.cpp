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

int a[10000000];
int f[10000000];
int n;
int sol(){
    f[n-1] = a[n-1];
    for(int i = n-2; i >= 0; i--){
        if(i+2 >= n) f[i] = max(a[i],f[i+1]);
        else f[i] = max(a[i] + f[i+2], f[i+1]);
    }
    return f[0];
}


int main ()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        cin>>n;
        for(int i = 0; i < n; i++) cin>>a[i];
        cout<<sol()<<endl;
   }
    return 0;
}
//Code by QT