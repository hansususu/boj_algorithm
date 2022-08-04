#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string str, tmp;
    cin >> n;

    cin.ignore();
    while(n--) {
        getline(cin, str);

        int len = str.size();
        bool isPalindrome = true;

        for (int j = 0; j < len/2; j++){
            char left = tolower(str[j]);
            char right = tolower(str[len-1-j]);
            if (left != right) {
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome) cout << "Yes\n";
        else cout << "No\n";
    }
}