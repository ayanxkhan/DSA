#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);  // Read the entire input string

    int v = 0;      // Vowel count
    int con = 0;    // Consonant count
    int sp = 0;     // Special characters count
    int num = 0;    // Number count

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] >= '0' && s1[i] <= '9') {  // Check for digits
            num++;
        }
        else if ((s1[i] >= 'A' && s1[i] <= 'Z') || (s1[i] >= 'a' && s1[i] <= 'z')) {  // Check for alphabets
            char lowerChar = tolower(s1[i]);  // Convert to lowercase to handle both cases
            if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u') {
                v++;  // It's a vowel
            }
            else {
                con++;  // It's a consonant
            }
        }
        else {
            sp++;  // Special character (neither digit nor alphabet)
        }
    }

    cout << v << " " << con << " " << num << " " << sp << endl;  // Print counts

    return 0;
}
