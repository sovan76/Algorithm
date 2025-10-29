#include <bits/stdc++.h>
using namespace std;


bool is_strong_password(const string& password) {
    vector<char> letters;
    vector<char> digits;

    for (char c : password) {
        if (isdigit(c)) {
            digits.push_back(c);
        } else {
            letters.push_back(c);
        }
    }

    if (!is_sorted(letters.begin(), letters.end())) {
        return false;
    }
    if (!is_sorted(digits.begin(), digits.end())) {
        return false;
    }

    for (int  i = 0; i < password.size() - 1; ++i) {
        if (isalpha(password[i]) && isdigit(password[i + 1])) {
            return false;
        }
    }

    return true;
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

   int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string password;
        cin >> password;

        if (is_strong_password(password)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
