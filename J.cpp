#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s, res = "";
        cin >> n;
        cin >> s;
        
        set<char> unique_chars(s.begin(), s.end());
        
        vector<char> list_s(unique_chars.begin(), unique_chars.end());
        sort(list_s.begin(), list_s.end());
        
        map<char, char> mp;
        int left = 0, right = list_s.size() - 1;
        
        while (left < right) {
            mp[list_s[left]] = list_s[right];
            mp[list_s[right]] = list_s[left];
            left++;
            right--;
        }
        
        if (left == right) {
            mp[list_s[left]] = list_s[left];
        }
        
        for (char c : s) {
            res += mp[c];
        }
        
        cout << res << endl;
    }
    
    return 0;
}
