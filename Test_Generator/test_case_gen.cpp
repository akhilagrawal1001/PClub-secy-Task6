#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

const ll MAXN = 200000;
const ll MAXM = 100000000;

int main(){

    srand(time(NULL));

    ll n = rand() % MAXN;

    ll breaks = rand() % n;

    set <ll> s;

    ll temp = breaks;
    while(breaks--){
        ll x = rand() % n;
        if(breaks > temp / 2) {
            if(x >= n/2) s.insert(x);
            else s.insert(x + n/2); 
        }else{
            if(x >= n/2) s.insert(x - n/2);
            else s.insert(x); 
        }
    }

    // cout << n << " " << s.size() << " " ;

    ll arr[n];
    ll prev = rand() % MAXM;
    // cout << prev << " ";
    auto it = s.begin();

    for(ll i = 0; i < n; i++){
        if(it != s.end() && i == *it){
            prev = rand() % MAXM;
            ++it;
        }
        arr[i] = prev;
    }

    ofstream fout;
    fout.open("input.txt");
    
    fout << n << endl;
    for(ll i = 0; i < n; i++){
        fout << arr[i] << " "; 
    }
    fout.close();
    return 0;
}
