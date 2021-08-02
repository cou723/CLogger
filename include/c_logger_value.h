#ifndef C_LOGGER_VALUE_H
#define C_LOGGER_VALUE_H

#include <stdio.h>

#include "c_logger.h"
#define LOG_INT(x) c_logger_value_log(&x, #x, C_LOGGER_INT)
#define LOG_SHORT(x) c_logger_value_log(&x, #x, C_LOGGER_SHORT)
#define LOG_FLOAT(x) c_logger_value_log(&x, #x, C_LOGGER_FLOAT)
#define LOG_DOUBLE(x) c_logger_value_log(&x, #x, C_LOGGER_DOUBLE)
#define LOG_CHAR(x) c_logger_value_log(&x, #x, C_LOGGER_CHAR)
#define LOG_STR(x) c_logger_value_log(&x, #x, C_LOGGER_STR)
#define LOG_LONG(x) c_logger_value_log(&x, #x, C_LOGGER_LONG)
#define LOG_LONG_LONG(x) c_logger_value_log(&x, #x, C_LOGGER_LONG_LONG)
#define LOG_UNSIGNED_INT(x) c_logger_value_log(&x, #x, C_LOGGER_UNSIGNED_INT)
#define LOG_UNSIGNED_SHORT(x) c_logger_value_log(&x, #x, C_LOGGER_UNSIGNED_SHORT)
void c_logger_value_log(void *value, char *value_name, C_LOGGER_TYPE format);

#endif
