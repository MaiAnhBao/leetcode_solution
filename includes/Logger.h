#ifndef LOGGER_H
#define LOGGER_H

#include <chrono>
#include <string>

#ifdef DEBUG
#define debug(fmt, ARGS...) fprintf(stderr, "%s:%d " fmt "\n", __FUNCTION__, __LINE__, ## ARGS); 
#else
#define debug(fmt, ...) do {} while (0)
#endif


enum typelog {
    E_DEBUG,
    E_INFO,
    E_WARN,
    E_ERROR,
    E_CRITICAL
};


class Logger
{
public:
    Logger* getInstance();

    void logd(const char* _msg);
    void logi(const char* _msg);
    void loge(const char* _msg);
    void logw(const char* _msg);
    void logc(const char* _msg);

private:
    Logger();
    static Logger* mInstance;

    void log(unsigned int _log_lvl, const char* _msg, ...);
};

#endif // LOGGER_H
