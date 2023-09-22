#include <iostream>
#include <string>
#include <vector>
using namespace std;

class StudentCombinations {
    public:
        vector<string> solve() {
            vector<string> v;
            string currStr = "";

            backtrack(v, currStr);

            return v;
        }

        void backtrack(vector<string>& v, string currStr) {
            if (currStr.length() == 3) {
                v.push_back(currStr);
                return;
            }

            for (char c:students) {
                if (currStr.find(c) == string::npos) {
                    backtrack(v, currStr+c);
                }
            }
        }

    private:
        char students[3] = {'O', 'T', 'G'};
};

int main() {
    StudentCombinations stdComb;
    vector<string> v = stdComb.solve();

    for (string s:v) {
        cout << s << endl;
    }

    return 0;
}