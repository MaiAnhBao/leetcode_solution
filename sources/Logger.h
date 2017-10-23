#ifndef LOGGER_H
#define LOGGER_H


class Logger
{
public:
    Logger* getInstance();

private:
    Logger();
    Logger* mInstance;
};

#endif // LOGGER_H
