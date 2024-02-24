#include <iostream>
#include <string>
using namespace std;
class ValidateString {
private:
    string str;

public:
    
    ValidateString(const string& s) : str(s) {}
    bool isValid() const {
        for (char c : str) {
            if (!isalpha(c)) {
                return false; 
            }
        }
        return true; 
    }
};

int main() {
    ValidateString myString("HelloWorld");
    if (myString.isValid()) {
        cout << "The string is valid." << std::endl;
    } else {
        cout << "The string is invalid." << std::endl;
    }

    return 0;
}
