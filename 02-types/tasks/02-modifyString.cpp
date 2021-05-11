#include <iostream>
#include <string>

// TODO: Implement modifyString()
// It should modify passed string to text "Other string"
void modifyString(std::string& string_in){
	string_in = "Other string";
}

int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}
