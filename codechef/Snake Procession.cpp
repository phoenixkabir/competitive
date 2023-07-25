// https://www.codechef.com/problems/SNAKPROC?tab=statement

#include <iostream>
using namespace std;

int main() {
    int r;
    cin >> r;
    while (r--) {
        int l;
        cin >> l;
        string s;
        cin >> s;

        int count = 0;
        bool isValid = true;

        for (int i = 0; i < l; ++i) {
            if (count != 1 && s[i] == 'T') {
                isValid = false;
                break;
            }

            if (s[i] == 'H') {
                count += 1;
                if (count > 1) {
                    isValid = false;
                    break;
                }
            } else if (s[i] == 'T') {
                count -= 1;
            }
        }

        if (count != 0) {
            isValid = false;
        }

        if (isValid) {
            cout << "Valid" << endl;
        } else {
            cout << "Invalid" << endl;
        }
    }
}
