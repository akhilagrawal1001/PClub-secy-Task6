#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <utility>
#include <stdlib.h>
#define ll long long int
#define ld long double
#define vv vector<ll>
using namespace std;
 
 
#define deb(x) cout << #x << " = " << x << endl;
 
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define minv(a) *min_element(all(a))
#define maxv(a) *max_element(all(a))
 
#define vect(v, n) vv v(n); for(ll i = 0; i < n; i++) cin >> v[i]
#define print(v) for(auto prvec:v) cout<<prvec<<" "
 
#define pb push_back
 
 
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
const ll MOD = 1e9+7;
const ld PI = acos(-1);
const ld EPS = 1e-9;
const ll INF = 1e18;
 
 
void solve(void){
    ll n;
    cin >> n;
    ll arr[n+1];
    
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    arr[n] = -1;

    multiset <ll> s;
    
    ll temp = 1;
    for(ll i = 1; i <= n; i++){
        if(arr[i] == arr[i-1]) temp++;
        else{
            s.insert(temp * arr[i-1]);
            temp = 1;
        }
    }

    int p = 0, q = 0, count = 1;
    ll num = s.size();
    while(num--){
        if(count%2) p += *--s.end();
        else q += *--s.end();
        count++;

        auto it = s.end();
        --it;

        s.erase(it);
    }
    
    if(p > q) cout << "P\n" << p-q;
    else if (p == q) cout << "Draw\n" << p-q;
    else cout << "Q\n" << q-p;
}
 
 
int main(void)
{
    
    FAST
 
    solve();
 
    return 0;
}