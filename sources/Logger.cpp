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

void Logger::logd(const char* _msg)
{
	log(E_DEBUG, _msg);	
}

void Logger::logi(const char* _msg)
{
	log(E_INFO, _msg);
}

void Logger::loge(const char* _msg)
{
	log(E_ERROR, _msg);
}

void Logger::logw(const char* _msg)
{
	log(E_WARN, _msg);
}

void Logger::logc(const char* _msg)
{
	log(E_CRITICAL, _msg);
}

void Logger::log(unsigned int _log_lvl, const char* _msg, ...)
{
	switch (_log_lvl) {
		case E_DEBUG:
		//	fprintf(stderr, "%s:%d:%s(): %s",__FILE__, __LINE__, __func__, _msg,__VA_ARGS__);
			break;
		case E_INFO:
		//	fprintf(stderr, "%s:%d:%s(): %s", __FILE__, __LINE__, __func__, _msg, __VA_ARGS__);
			break;
		case E_WARN:
		//	fprintf(stderr, "%s:%d:%s(): %s", __FILE__, __LINE__, __func__, _msg, __VA_ARGS__);
			break;
		case E_ERROR:
		//	fprintf(stderr, "%s:%d:%s(): %s", __FILE__, __LINE__, __func__, _msg, __VA_ARGS__);
			break;
		case E_CRITICAL:
		//	fprintf(stderr, "%s:%d:%s(): %s", __FILE__, __LINE__, __func__, _msg, __VA_ARGS__);
			break;
		default:
			break;
	}
}

