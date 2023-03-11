#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "tested_declarations.h"
#include "rdebug.h"

struct date_t {
    int day;
    int month;
    int year;
};

struct date_t* set_date(struct date_t* d, int day, int month, int year, int *err_code);
struct date_t* read(struct date_t* d, int *err_code);
int validate(const struct date_t* d);
void show(const struct date_t* d);

int main() {
    struct date_t d;
    struct date_t *d_p = &d;
    int err_code = 0;
    int *err_code_p = &err_code;

    read(d_p, err_code_p);
    if (err_code == 2) {
        printf("Incorrect input");
        return 1;
    }

    if(!validate(d_p)) {
        printf("Incorrect");
    } else {
        show(d_p);
        printf("Correct");
    }

    return 0;
}

struct date_t* set_date(struct date_t* d, int day, int month, int year, int *err_code) {
    if (d == NULL) {
        if (err_code != NULL) *err_code = 1;
        return NULL;
    }
    if (err_code != NULL) *err_code = 0;

    d -> day = day;
    d -> month = month;
    d -> year = year;

    return d;
}

struct date_t* read(struct date_t* d, int *err_code) {
    if (d == NULL) {
        if (err_code != NULL) *err_code = 1;
        return NULL;
    }
    if (err_code != NULL) *err_code = 0;

    int day = 0, month = 0, year = 0;

    printf("Enter a date (formatted as dd-mm-yyyy):");
    if (scanf("%d-%d-%d", &day, &month, &year) != 3) {
        if (err_code != NULL) *err_code = 2;
    }
    if (err_code != NULL && *err_code != 2) set_date(d, day, month, year, err_code);

    return d;
}

int year_leap(int year) {
    if ((year & 3) == 0 && ((year % 25) != 0 || (year & 15) == 0)) return 1;
    return 0;
}

int validate(const struct date_t* d) {
    if (d == NULL) return -1;

    int day = d -> day, month = d -> month, year = d -> year;

    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day > 31) && (year > 0)) {
        return 0;
    } else if ((month == 4 || month == 6 || month == 9 || month == 11) && (day > 30) && (year > 0)) {
        return 0;
    } else if (month == 2 && day > 28 && !year_leap(year)) {
        return 0;
    } else if (month <= 0 || month > 12 || day <= 0 || year < 0) {
        return 0;
    } else {
        return 1;
    }
}

void show(const struct date_t* d) {
    if (d != NULL) {
        int days = d -> day;
        int months = d -> month;
        int years = d -> year;

        if (days < 10 && months < 10 && years < 10) printf("Given date: 0%d-0%d-000%d\n", days, months, years);
        else if (days < 10 && months < 10 && years < 100) printf("Given date: 0%d-0%d-00%d\n", days, months, years);
        else if (days < 10 && months < 10 && years < 1000) printf("Given date: 0%d-0%d-0%d\n", days, months, years);
        else if (days < 10 && months < 10 && years >= 1000) printf("Given date: 0%d-0%d-%d\n", days, months, years);

        else if (days < 10 && months >= 10 && years < 10) printf("Given date: 0%d-%d-000%d\n", days, months, years);
        else if (days < 10 && months >= 10 && years < 100) printf("Given date: 0%d-%d-00%d\n", days, months, years);
        else if (days < 10 && months >= 10 && years < 1000) printf("Given date: 0%d-%d-0%d\n", days, months, years);
        else if (days < 10 && months >= 10 && years >= 1000) printf("Given date: 0%d-%d-%d\n", days, months, years);

        else if (days >= 10 && months < 10 && years < 10) printf("Given date: %d-0%d-000%d\n", days, months, years);
        else if (days >= 10 && months < 10 && years < 100) printf("Given date: %d-0%d-00%d\n", days, months, years);
        else if (days >= 10 && months < 10 && years < 1000) printf("Given date: %d-0%d-0%d\n", days, months, years);
        else if (days >= 10 && months < 10 && years >= 1000) printf("Given date: %d-0%d-%d\n", days, months, years);

        else if (days >= 10 && months >= 10 && years < 10) printf("Given date: %d-%d-000%d\n", days, months, years);
        else if (days >= 10 && months >= 10 && years < 100) printf("Given date: %d-%d-00%d\n", days, months, years);
        else if (days >= 10 && months >= 10 && years < 1000) printf("Given date: %d-%d-0%d\n", days, months, years);
        else if (days >= 10 && months >= 10 && years >= 1000) printf("Given date: %d-%d-%d\n", days, months, years);
    }
}
