#include <iostream>
#include <string>
#include <set>

bool checkSubstring(std::string s) {
    int n = s.length();
    std::set<std::string> substrings;
    
    // Generate all substrings of length 2
    for (int i = 0; i < n - 1; i++) {
        substrings.insert(s.substr(i, 2));
    }
    
    // Check if any substring is present in the reverse of s
    for (int i = 0; i < n - 1; i++) {
        if (substrings.find(s.substr(i, 2)) != substrings.end()) {
            return true;
        }
    }
    
    return false;
}

int main() {
    std::string s = "leetcode";
    std::cout << (checkSubstring(s) ? "true" : "false") << std::endl;
    
    s = "abcba";
    std::cout << (checkSubstring(s) ? "true" : "false") << std::endl;
    
    s = "abcd";
    std::cout << (checkSubstring(s) ? "true" : "false") << std::endl;
    
    return 0;
}