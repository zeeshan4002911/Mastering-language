#include "reverse_string.h"
#include<string>
using namespace std;

namespace reverse_string {
    string reverse_string(string s) {
        string result{""};
        for (int i = s.length() - 1; i >= 0; i--) {
            result += s[i];
        }
        return result;
        // std::reverse(s.begin(), s.end()); // Using reverse method
    }

}  // namespace reverse_string
