#include <limits.h>
#include <stdio.h>

#include "c_logger.h"
#include "c_logger_value.h"
void test() {
    int i_max = INT_MAX, i_min = INT_MIN;
    short s_max = SHRT_MAX, s_min = SHRT_MIN;
    float fl = 3.14;
    double d_max = 3.1415;
    char c_test = 'a';
    long l_max = LONG_MAX, l_min = LONG_MIN;
    long long ll_max = LLONG_MAX, ll_min = LLONG_MIN;
    unsigned int ui_max = UINT_MAX;
    unsigned short us_max = USHRT_MAX;
    char str[] = "string";

    LOG_INT(i_max);
    LOG_INT(i_min);
    LOG_SHORT(s_max);
    LOG_SHORT(s_min);
    LOG_FLOAT(fl);
    LOG_DOUBLE(d_max);
    LOG_CHAR(c_test);
    LOG_LONG(l_max);
    LOG_LONG(l_min);
    LOG_LONG_LONG(ll_max);
    LOG_LONG_LONG(ll_min);
    LOG_UNSIGNED_INT(ui_max);
    LOG_UNSIGNED_SHORT(us_max);
    LOG_STR(str);
}

int main() {
    puts("start test");
    test();
    puts("end   test");
    return 0;
}
