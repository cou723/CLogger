#include "c_logger.h"

#include <stdio.h>
#include <time.h>

int c_logger_log_mode = C_LOGGER_DEBUG;
void c_logger_debug_log(char *output_str) {
    if (c_logger_log_mode <= C_LOGGER_DEBUG) {
        char date[32];
        time_t t = time(NULL);
        strftime(date, sizeof(date), "%H:%M:%S", localtime(&t));
        printf("\x1b[32m[C_LOGGER_DEBUG: %s]\x1b[37m %s\n", date, output_str);
    }
}

void c_logger_log(char *output_str) {
    if (c_logger_log_mode <= C_LOGGER_LOG) {
        char date[32];
        time_t t = time(NULL);
        strftime(date, sizeof(date), "%H:%M:%S", localtime(&t));
        printf("[C_LOGGER_LOG  : %s] %s\n", date, output_str);
    }
}

void c_logger_warning_log(char *output_str) {
    if (c_logger_log_mode <= C_LOGGER_WARNING) {
        char date[32];
        time_t t = time(NULL);
        strftime(date, sizeof(date), "%H:%M:%S", localtime(&t));
        printf("\x1b[33m[WARN : %s]\x1b[37m %s\n", date, output_str);
    }
}

void c_logger_error_log(char *output_str) {
    if (c_logger_log_mode <= C_LOGGER_ERROR) {
        char date[32];
        time_t t = time(NULL);
        strftime(date, sizeof(date), "%H:%M:%S", localtime(&t));
        printf("\x1b[31m[C_LOGGER_ERROR: %s]\x1b[37m %s\n", date, output_str);
    }
}
