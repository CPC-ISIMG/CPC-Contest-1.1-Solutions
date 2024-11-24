#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;

        int len_str1 = str1.length();
        string sorted_str1 = str1;
        sort(sorted_str1.begin(), sorted_str1.end());

        bool find = false;

        for (int i = 0; i <= str2.length() - len_str1; ++i) {
            string temp = str2.substr(i, len_str1);
            sort(temp.begin(), temp.end());

            if (temp == sorted_str1) {
                find = true;
                break;
            }
        }

        if (find) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
