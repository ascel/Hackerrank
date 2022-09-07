#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 1e9 + 5

int main(){
    string s;
    getline(cin, s);
    int n = (int)sqrt((double)s.size());
    if(n * n < s.size()) {
        n++;
    }
    vector<string> v(n);
    int cur = 0;
    for(int i = 0; i < n; i++) { 
        for(int j = 0; j < n; j++) {
            v[i] += s[cur++];
            if(cur == s.size()) {
                break;
            }                        
        }
    }
    //for(int i = 0; i < (int)sqrt((double)s.size()) + 1; i++) {
        //cerr << v[i] << endl;
    //}
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(v[j][i] >= 'a' and v[j][i] <= 'z')
                cout << v[j][i];     
        }
        cout << " ";
    }
    return 0;
}
