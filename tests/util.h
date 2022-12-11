//
// Created by Simon Rofe on 12/12/2022.
//

#ifndef MEREMEMO_UTIL_H
#define MEREMEMO_UTIL_H

#include <string>
#include <string_view>

struct Util {
    static std::string randomString();
    static bool isTextInFile(std::string_view text, std::string_view fileName);
};

#endif //MEREMEMO_UTIL_H
