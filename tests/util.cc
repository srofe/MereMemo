//
// Created by Simon Rofe on 12/12/2022.
//

#include "util.h"
#include <fstream>
#include <random>

std::string Util::randomString() {
    static bool firstCall = true;
    static std::mt19937 range;
    if (firstCall) {
        firstCall = false;
        unsigned int seed = static_cast<int>(std::chrono::system_clock::now().time_since_epoch().count());
        range.seed(seed);
    }
    std::uniform_int_distribution<std::mt19937::result_type>dist(1, 10000);
    return std::to_string(dist(range));
}

bool Util::isTextInFile(std::string_view text, std::string_view fileName) {
    return false;
}
