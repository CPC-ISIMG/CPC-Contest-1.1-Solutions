#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string s, res = "";
    cin >> n;
    cin >> s;
    
    vector<string> lst = {"", "", "2", "3", "322", "5", "53", "7", "2227", "7332"};
    
    s.erase(remove(s.begin(), s.end(), '0'), s.end());
    s.erase(remove(s.begin(), s.end(), '1'), s.end());

    for (char c : s) {
        res += lst[c - '0'];
    }

    sort(res.begin(), res.end(), greater<char>());
    cout << res << endl;

    return 0;
}
