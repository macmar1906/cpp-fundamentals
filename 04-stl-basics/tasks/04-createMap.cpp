#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <map>

// Implement createMap. It should take a vector and list and
// return a map of merge them as keys from the vector and values from the list
auto createMap(std::vector<int> vec_in,std::list<std::string> list_in){
	std::map<int,std::string> map_out;
	auto it=list_in.begin();
	for(size_t i=0;i<list_in.size();++i){
		map_out.insert({vec_in[i],*(it++)});
	}
	return map_out;
};

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<std::string> list{"One", "Two", "Three", "Four", "Five"};
    auto map = createMap(vec, list);

    for (const auto& pair : map)
        std::cout << pair.first << " | " << pair.second << '\n';

    return 0;
}
