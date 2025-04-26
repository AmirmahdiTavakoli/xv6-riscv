#include "types.h"
#include "riscv.h"
#include "defs.h"
#include "logger.h"

uint64
sys_trigger(void)
{
  log_message(LOG_INFO, "This is a log to test a new xv6 system call");
  return 0;
}