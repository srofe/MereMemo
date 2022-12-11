#include "../MereMemo/Log.h"
#include "lib/MereTDD.h"
#include "util.h"

TEST("Simple message can be logged") {
    std::string message = "simple";
    message += Util::randomString();
    MereMemo::log("simple");
    bool result = Util::isTextInFile(message, "application.log");
    CONFIRM_TRUE(result);
}
