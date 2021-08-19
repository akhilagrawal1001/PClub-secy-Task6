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
using namespace std;
 
int main(void)
{
    ifstream fin;
    fin.open("input.txt");
    
    // Code from solution
    ll n;
    fin >> n;
    ll arr[n+1];
    
    for(ll i = 0; i < n; i++){
        fin >> arr[i];
    }
    fin.close();

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

    ofstream fout;
    fout.open("output.txt");

    if(p > q) fout << "P\n" << p-q;
    else if (p == q) fout << "Draw\n" << p-q;
    else fout << "Q\n" << q-p;
    fout.close();
    
    return 0;
}