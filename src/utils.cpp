#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::string::size_type start = 0, end = 0;
    while ((end = str.find(delimiter, start)) != std::string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
    }
    tokens.push_back(str.substr(start));
    return tokens;
}

int main() {
    std::string s = "one,two,three";
    std::vector<std::string> res = split(s, ',');
    std::cout << "Split results size: " << res.size() << std::endl;
    return 0;
}
