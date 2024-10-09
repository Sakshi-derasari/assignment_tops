#include <iostream>
#include <cstring>  
using namespace std;

class String {
private:
    char* str;
    int length;

public:
    // Constructor to initialize the string
    String() {
        length = 0;
        str = new char[length + 1];
        str[0] = '\0';
    }

    // Constructor to initialize the string with a given character array
    String(const char* s) {
        length = strlen(s);
        str = new char[length + 1];  // Allocate memory for the string
        strcpy(str, s);  // Copy the given string to the class member
    }

    String operator+(const String& s) {
        String temp;
        temp.length = length + s.length;  // Calculate the length of the new concatenated string
        temp.str = new char[temp.length + 1];  // Allocate memory for the concatenated string

        strcpy(temp.str, str);  // Copy the first string
        strcat(temp.str, s.str);  // Concatenate the second string

        return temp;
    }

    void display() const {
        cout << str << endl;
    }

    // Destructor to deallocate memory
    ~String() {
        delete[] str;
    }
};

int main() {
    String str1("Hello, ");
    String str2("World!");

    String result = str1 + str2;
    cout << "Concatenated String: ";
    result.display();
}