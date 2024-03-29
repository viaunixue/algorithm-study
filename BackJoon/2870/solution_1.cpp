#include <bits/stdc++.h>
using namespace std;

int n;
string s, ret;
vector<string> v;

void go(){
    while(true){
        if(ret.size() && ret.front() == '0') ret.erase(ret.begin());
        else break;
    }
    if(ret.size() == 0) ret = "0";
    v.push_back(ret);
    ret = "";
}

bool cmp(string a, string b){
    if(a.size() == b.size()) return a < b;
    return a.size() < b.size();
}

int main() {
    cin >> n;
    for(int i=0 ; i<n ; i++){
        cin >> s;
        ret = "";
        for(int j=0 ; j<s.size() ; j++){
            if(s[j] < 65) ret += s[j];
            else if(ret.size()) go();
        }
        if(ret.size()) go();
    }
    
    // string 값을 비교해야 하므로 사용자 정의 비교 함수 cmp 사용
    sort(v.begin(), v.end(), cmp);
    for(string s : v) cout << s << "\n";

    return 0;
}