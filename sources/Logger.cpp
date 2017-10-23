#include "Logger.h"

Logger* Logger::mInstance = nullptr;

Logger::Logger()
{

}

Logger* Logger::getInstance()
{
    if (! mInstance)
        mInstance = new Logger();
    return mInstance;
}
