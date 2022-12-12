#include "../MereMemo/Log.h"
#include "lib/MereTDD.h"
#include "util.h"
#include "LogTags.h"

TEST("Message can be tagged in log") {
    std::string message = "simple tag ";
    message += Util::randomString();
    MereMemo::log(error) << message;
    std::string taggedMessage = " log_level=\"error\" ";
    taggedMessage += message;
    bool result = Util::isTextInFile(taggedMessage, "application.log");
    CONFIRM_TRUE(result);
}

TEST("Log needs no namespace when used with LogLevel") {
    log(error) << "no namespace";
}
