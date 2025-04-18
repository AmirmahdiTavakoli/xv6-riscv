#ifndef _CUSTOM_LOGGER_H_
#define _CUSTOM_LOGGER_H_

// Log level definitions
#define LOG_LEVEL_INFO  1
#define LOG_LEVEL_WARN  2
#define LOG_LEVEL_ERROR 3

// Function prototype
void log_message(int level, const char *message);

#endif