#ifndef LOG_H
#define LOG_H

#define DEBUG 0
#define LOG 1
#define WARNING 2
#define ERROR 3
typedef enum {
    INT,
    SHORT,
    FLOAT,
    DOUBLE,
    CHAR,
    STR,
    LONG,
    LONG_LONG,
    UNSIGNED_INT,
    UNSIGNED_SHORT
} TYPE;
int log_mode;
void debug_log(char *output_str);
void normal_log(char *output_str);
void warning_log(char *output_str);
void error_log(char *output_str);
#endif
