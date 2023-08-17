#include "main.h"

int convert_day(int month, int day)
{
    int days_in_month[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

    return days_in_month[month - 1] + day;
}
