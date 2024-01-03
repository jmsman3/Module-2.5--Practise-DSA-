#include <bits/stdc++.h>
using namespace std;

int main() {
  
    string S;
    cin >> S;

   
    vector<int> charCount(26, 0);

    
    for (int i = 0; i < S.length(); i++) {
        char ch = S[i];
        charCount[ch - 'a']++;
    }

  
    for (int i = 0; i < 26; i++) {
        if (charCount[i] > 0) {
            cout << char('a' + i) << " : " << charCount[i] << endl;
        }
    }

    return 0;
}
