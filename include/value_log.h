#ifndef VALUE_LOG_H
#define VALUE_LOG_H

#include <stdio.h>

#include "log.h"
#define LOG_INT(x) value_log(&x, #x, log_mode, INT)
#define LOG_SHORT(x) value_log(&x, #x, log_mode, SHORT)
#define LOG_FLOAT(x) value_log(&x, #x, log_mode, FLOAT)
#define LOG_DOUBLE(x) value_log(&x, #x, log_mode, DOUBLE)
#define LOG_CHAR(x) value_log(&x, #x, log_mode, CHAR)
#define LOG_STR(x) value_log(&x, #x, log_mode, STR)
#define LOG_LONG(x) value_log(&x, #x, log_mode, LONG)
#define LOG_LONG_LONG(x) value_log(&x, #x, log_mode, LONG_LONG)
#define LOG_UNSIGNED_INT(x) value_log(&x, #x, log_mode, UNSIGNED_INT)
#define LOG_UNSIGNED_SHORT(x) value_log(&x, #x, log_mode, UNSIGNED_SHORT)
void value_log(void *value, char *value_name, int log_mode, TYPE format);

#endif
