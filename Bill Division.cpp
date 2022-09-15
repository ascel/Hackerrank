#include <bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define INF (int)(1e9 + 5)
#define MOD (int)(1e9 + 7) 
#define ordered_set tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> 

int main(){ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> bill(n);
    for(int i = 0; i < n; ++i) {
        cin >> bill[i];
    }

    int b;
    cin >> b;

    int total = 0;
    for(int i = 0; i < n; ++i) {
        if(k != i)
            total += bill[i];
    }

    int anna = total / 2;

    if(b == anna) {
        cout << "Bon Appetit" << '\n';
    }
    else {
        cout << b - anna << '\n';
    }

    return 0;
}