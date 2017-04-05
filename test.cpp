#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<std::string, std::string> m = {{"1", "one"}, {"2", "two"}, {"3", "three"}, {"4", "four"}};
    m["10"] = "ten";
    std::cout << m["10"] << std::endl;
    m["10"] = "dec";
    std::cout << m["10"] << std::endl;
    return 0;
}
