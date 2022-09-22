#include <iostream>
#include <nlohmann/json.hpp>

int main() {
    auto j = nlohmann::json::parse(R"({"hello": "world"})");
    std::cout << j["hello"];
    return 0;
}
