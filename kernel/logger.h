// kernel/logger.h
#ifndef _LOGGER_H_
#define _LOGGER_H_

// Log levels
enum {
    LOG_INFO,
    LOG_WARN,
    LOG_ERROR
};

void log_message(int level, const char *message);

#endif