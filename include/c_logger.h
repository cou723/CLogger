#ifndef C_LOGGER_H
#define C_LOGGER_H

#define C_LOGGER_DEBUG 0
#define C_LOGGER_LOG 1
#define C_LOGGER_WARNING 2
#define C_LOGGER_ERROR 3
typedef enum {
    C_LOGGER_INT,
    C_LOGGER_SHORT,
    C_LOGGER_FLOAT,
    C_LOGGER_DOUBLE,
    C_LOGGER_CHAR,
    C_LOGGER_STR,
    C_LOGGER_LONG,
    C_LOGGER_LONG_LONG,
    C_LOGGER_UNSIGNED_INT,
    C_LOGGER_UNSIGNED_SHORT
} C_LOGGER_TYPE;
int c_logger_log_mode;
void c_logger_debug_log(char *output_str);
void c_logger_log(char *output_str);
void c_logger_warning_log(char *output_str);
void c_logger_error_log(char *output_str);
#endif
