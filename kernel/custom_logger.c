#include "types.h"
#include "riscv.h"
#include "defs.h"
#include "custom_logger.h"

void log_message(int level, const char *message) {
  char *level_str;
  switch(level) {
    case INFO:
      level_str = "INFO";
      break;
    case WARN:
      level_str = "WARNING";
      break;
    case ERROR:
      level_str = "ERROR";
      break;
    default:
      level_str = "UNKNOWN";
  }
  printf("%s - %s\n", level_str, message);
}
