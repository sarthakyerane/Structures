#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> alpha(26, 0);
        for (int i = 0; i < sentence.size(); i++) {
            alpha[sentence[i] - 'a'] = 1;
        }
        for (int i = 0; i < 26; i++) {
            if (alpha[i] == 0)
                return false;
        }
        return true;
    }
};

int main() {
    Solution solution;
    string testSentence = "thequickbrownfoxjumpsoverthelazydog";
    bool result = solution.checkIfPangram(testSentence);

    cout << "Is the sentence a pangram? ";
    if (result){
        cout << "Yes" << endl;}
    else
       { cout << "No" << endl;
     }        
               return 0;
}
