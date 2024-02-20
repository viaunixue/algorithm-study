#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll A, B, C;

ll go(ll a, ll b){
    if(b == 1) return a % C;

    ll ret = go(a, b/2);
    ret = (ret*ret) % C;

    // C++에서 0 : false, 1 : true, -1 : true 
    if(b % 2) ret = (ret * a) % C;
    return ret;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> A >> B >> C;

    cout << go(A, B) << '\n';
    return 0;
}