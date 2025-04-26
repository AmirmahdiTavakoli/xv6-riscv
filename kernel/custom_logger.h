#ifndef _CUSTOM_LOGGER_H_
#define _CUSTOM_LOGGER_H_

// Log level definitions
#define INFO  0
#define WARN  1
#define ERROR 2

// Function prototype
void log_message(int level, const char *message);

#endif