#include "log.h"

#include <stdio.h>
#include <time.h>

int log_mode = DEBUG;
void debug_log(char *output_str) {
    if (log_mode <= DEBUG) {
        char date[32];
        time_t t = time(NULL);
        strftime(date, sizeof(date), "%H:%M:%S", localtime(&t));
        printf("\x1b[32m[DEBUG: %s]\x1b[37m %s\n", date, output_str);
    }
}

void normal_log(char *output_str) {
    if (log_mode <= LOG) {
        char date[32];
        time_t t = time(NULL);
        strftime(date, sizeof(date), "%H:%M:%S", localtime(&t));
        printf("[LOG  : %s] %s\n", date, output_str);
    }
}

void warning_log(char *output_str) {
    if (log_mode <= WARNING) {
        char date[32];
        time_t t = time(NULL);
        strftime(date, sizeof(date), "%H:%M:%S", localtime(&t));
        printf("\x1b[33m[WARN : %s]\x1b[37m %s\n", date, output_str);
    }
}

void error_log(char *output_str) {
    if (log_mode <= ERROR) {
        char date[32];
        time_t t = time(NULL);
        strftime(date, sizeof(date), "%H:%M:%S", localtime(&t));
        printf("\x1b[31m[ERROR: %s]\x1b[37m %s\n", date, output_str);
    }
}
