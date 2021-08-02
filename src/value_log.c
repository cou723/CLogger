#include <stdio.h>
#include <time.h>

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

void c_logger_value_log(void *value, char *value_name, C_LOGGER_TYPE format) {
    char buf[1024];
    if (format == C_LOGGER_INT)
        sprintf(buf, "%s (int) : %d", value_name, *(int *)value);
    else if (format == C_LOGGER_SHORT)
        sprintf(buf, "%s (short) : %d", value_name, *(short *)value);
    else if (format == C_LOGGER_FLOAT)
        sprintf(buf, "%s (float) : %f", value_name, *(float *)value);
    else if (format == C_LOGGER_DOUBLE)
        sprintf(buf, "%s (double) : %lf", value_name, *(double *)value);
    else if (format == C_LOGGER_CHAR)
        sprintf(buf, "%s (char) : %c", value_name, *(char *)value);
    else if (format == C_LOGGER_LONG)
        sprintf(buf, "%s (long) : %ld", value_name, *(long *)value);
    else if (format == C_LOGGER_LONG_LONG)
        sprintf(buf, "%s (long long) : %lld", value_name,*(long long *)value);
    else if (format == C_LOGGER_UNSIGNED_INT)
        sprintf(buf, "%s (u int) : %u", value_name,*(unsigned int *)value);
    else if (format == C_LOGGER_UNSIGNED_SHORT)
        sprintf(buf, "%s (u short) : %u", value_name,*(unsigned short *)value);
    else if (format == C_LOGGER_STR)
        sprintf(buf, "%s (string) : %s", value_name, (char *)value);
    c_logger_debug_log(buf);
}
