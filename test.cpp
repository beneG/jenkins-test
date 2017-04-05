#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<std::string, std::string> m = {{"1", "one"}, {"2", "two"}, {"3", "three"}, {"4", "four"}};
    m["10"] = "ten";
    std::cout << m["4"] << std::endl;
    std::cout << m["10"] << std::endl;
    return 0;
}
