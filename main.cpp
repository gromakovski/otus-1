#include "lib.h"

#include <iostream>

//#include <spdlog/spdlog.h>

int main (int argc, char *argv[])
{
    std::cout<<"Hello world"<<std::endl;
    auto logger = spdlog::stdout_logger_mt("console");
    logger->info("version {} was started", version());
    std::system("pause");
    return 0;
}
