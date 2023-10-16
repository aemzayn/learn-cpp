#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

// More popular than typedef
using text_t = std::string;
using number_t = int; 

int main() {
  pairlist_t list;
  list.push_back(std::make_pair("Bro", 1));
  list.push_back(std::make_pair("Sis", 2));

  for (auto& pair : list) {
    std::cout << pair.first << " " << pair.second << '\n';
  }

  text_t firstName =  "bro";
  text_t lastName = "sis";

  number_t age = 21;

  return 0;
}
