#include "types.h"
#include "riscv.h"
#include "defs.h"
#include "spinlock.h"
#include "logger.h"

void log_message(int level, const char *message) {
    char *level_str;  // Only keep this variable
    
    switch(level) {
        case LOG_INFO:  level_str = "INFO"; break;
        case LOG_WARN:  level_str = "WARN"; break;
        case LOG_ERROR: level_str = "ERROR"; break;
        default:        level_str = "UNKNOWN";
    }
    
    printf("[%s] %s\n", level_str, message);
}