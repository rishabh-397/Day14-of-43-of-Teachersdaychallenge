#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    vector<string> res;
    int i = 0;
    while (i < s.size()) {
        if (i + 2 < s.size() && s.substr(i, 3) == "WUB") {
            i += 3;
        } else {
            string p;
            while (i < s.size() && (i + 2 >= s.size() || s.substr(i, 3) != "WUB")) {
                p += s[i];
                i++;
            }
            if (!p.empty()) {
                res.push_back(p);
            }
        }
    }
    for (int i = 0; i < res.size(); i++) {
        cout << res[i];
        if (i != res.size() - 1) cout << " ";
    }
    return 0;
}
