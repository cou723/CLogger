#include "c_logger.h"
#include "c_logger_value.h"
int main() {
    c_logger_log_mode = C_LOGGER_WARNING;
    int x = 0;
    LOG_INT(x);
    double z = 100.2;
    LOG_DOUBLE(z);
    char string1[]="error test";
    char string2[]="warning test";
    c_logger_error_log(string1);
    c_logger_warning_log(string2);

    return 0;
}
