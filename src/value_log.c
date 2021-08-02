#include <stdio.h>
#include <time.h>

#include "log.h"
#define LOG_INT(x) value_log(&x, #x, INT)
#define LOG_SHORT(x) value_log(&x, #x, SHORT)
#define LOG_FLOAT(x) value_log(&x, #x, FLOAT)
#define LOG_DOUBLE(x) value_log(&x, #x, DOUBLE)
#define LOG_CHAR(x) value_log(&x, #x, CHAR)
#define LOG_STR(x) value_log(&x, #x, STR)
#define LOG_LONG(x) value_log(&x, #x, LONG)
#define LOG_LONG_LONG(x) value_log(&x, #x, LONG_LONG)
#define LOG_UNSIGNED_INT(x) value_log(&x, #x, UNSIGEND_INT)
#define LOG_UNSIGNED_SHORT(x) value_log(&x, #x, UNSIGNED_SHORT)

void value_log(void *value, char *value_name, TYPE format) {
    char buf[1024];
    if (format == INT)
        sprintf(buf, "%s (int) : %d", value_name, *(int *)value);
    else if (format == SHORT)
        sprintf(buf, "%s (short) : %d", value_name, *(short *)value);
    else if (format == FLOAT)
        sprintf(buf, "%s (float) : %f", value_name, *(float *)value);
    else if (format == DOUBLE)
        sprintf(buf, "%s (double) : %lf", value_name, *(double *)value);
    else if (format == CHAR)
        sprintf(buf, "%s (char) : %c", value_name, *(char *)value);
    else if (format == LONG)
        sprintf(buf, "%s (long) : %ld", value_name, *(long *)value);
    else if (format == LONG_LONG)
        sprintf(buf, "%s (long long) : %lld", value_name,*(long long *)value);
    else if (format == UNSIGNED_INT)
        sprintf(buf, "%s (u int) : %u", value_name,*(unsigned int *)value);
    else if (format == UNSIGNED_SHORT)
        sprintf(buf, "%s (u short) : %u", value_name,*(unsigned short *)value);
    else if (format == STR)
        sprintf(buf, "%s (string) : %s", value_name, (char *)value);
    debug_log(buf);
}
