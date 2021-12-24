#include <limits.h>
#include <stdio.h>

#include "c_logger.h"
#include "c_logger_value.h"
void test() {
    c_logger_debug_log("this is a log");
    c_logger_warning_log("this is a warning");
    c_logger_error_log("this is a error");
}

int main() {
    puts("start test");
    test();
    puts("end   test");
    return 0;
}
