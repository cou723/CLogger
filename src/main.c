#include "log.h"
#include "value_log.h"
int main() {
    log_mode = WARNING;
    int x = 0;
    LOG_INT(x);
    double z = 100.2;
    LOG_DOUBLE(z);
    char string1[]="error test";
    char string2[]="warning test";
    error_log(string1);
    warning_log(string2);

    return 0;
}
