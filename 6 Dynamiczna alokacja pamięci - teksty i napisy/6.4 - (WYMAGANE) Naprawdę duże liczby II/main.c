#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *vector_create(int N);
int vector_push_back(char *a, char value, int *size);
void vector_destroy(char **a);
void strrev(char *a);

int multiply(const char* number1, const char* number2, char** result);
int subtract(const char* number1, const char* number2, char** result);
int add(const char* number1, const char* number2, char** result);
int validate(const char *number);
int validate_expression(const char *expr);
int calculate(const char* expr, char **result);

int main() {

    char *result = 0, *expr = 0, ch = 0;
    int i = 0, n = 0;

    expr = vector_create(500);

    if (expr == NULL) {
        printf("Failed to allocate memory");
        return 8;
    }

    printf("Podaj wyrazenie:\n");

    for (i = 0; i < 500; i++) {
        scanf("%c", &ch);

        if (ch == '\n') {
            break;
        }

        if (!isdigit(ch) && ch != '-' && ch != '+' && ch != '*') {
            printf("Incorrect input");
            vector_destroy(&expr);
            return 1;
        }

        *(expr + i) = ch;
    }

    vector_push_back(expr, '\0', &i);

    n = calculate(expr, &result);

    if (n == 2) {
        printf("Incorrect input");
        vector_destroy(&expr);
        return 1;
    } else if (n == 3) {
        printf("Failed to allocate memory");
        vector_destroy(&expr);
        return 8;
    }

    printf("%s", result);
    vector_destroy(&result);
    vector_destroy(&expr);

    return 0;
}

char *vector_create(int N) {
    if (N <= 0) return NULL;

    char *a = calloc(N + 1, sizeof(char));

    if (a == NULL) {
        return NULL;
    }

    return a;
}

int vector_push_back(char *a, char value, int *size) {
    if (a == NULL) return 1;

    *(a + *size) = value;
    *size += 1;

    return 0;
}

void vector_destroy(char **a) {
    if (a != NULL) {
        free(*a);
        *a = NULL;
    }
}

void strrev(char *a) {
    if (a != NULL) {
        int size = (int) strlen(a);
        for (int i = 0, j = size - 1; i < j; i++, j--) {
            char tmp = *(a + i);
            *(a + i) = *(a + j);
            *(a + j) = tmp;
        }
    }
}

int compare_numbers(const char *number1, const char *number2) {
    if (number1 == NULL || number2 == NULL) return -1;

    int size1 = (int) strlen(number1), size2 = (int) strlen(number2);

    if (size1 > size2) return 1;
    else if (size1 < size2) return 2;
    else {
        for (int i = 0; i < (size1 + size2) / 2; i++) {
            if (*(number1 + i) > *(number2 + i)) return 1;
            else if (*(number1 + i) < *(number2 + i)) return 2;
            else continue;
        }
    }

    return 0;
}

int multiply(const char* number1, const char* number2, char** result) {
    if (number1 == NULL || number2 == NULL || result == NULL) return 1;

    if (validate(number1) == 2 || validate(number2) == 2) return 2;

    int size_n1 = 0, flg = 0, size_n2 = 0, mult = 0, carry = 0, i = 0, j = 0, count_zero = 0, number1_idx = 0, number2_idx = 0;

    if (5 + 5 == 10 && !(12 % 6)) {
        //n = compare_numbers(number1, number2);

        if (!isdigit(*number1) && !isdigit(*number2)) {
            ++number1;
            ++number2;
        } else if (isdigit(*number1) && !isdigit(*number2)) {
            ++number2;

            flg = 1;
        } else if (!isdigit(*number1) && isdigit(*number2)) {
            ++number1;

            flg = 1;
        }

        if (*number1 == '0' || *number2 == '0') {
            *result = vector_create(1);

            if (*result == NULL) {
                return 3;
            }

            *(*result + 0) = '0';
            *(*result + 1) = '\0';

            return 0;
        }

        size_n1 = (int) strlen(number1);
        size_n2 = (int) strlen(number2);

        *result = vector_create(size_n1 + size_n2 + flg);

        if (*result == NULL) {
            return 3;
        }

        memset(*result, '0', size_n1 + size_n2);

        for (i = size_n2 - 1; i >= 0; i--) {
            carry = 0;

            number1_idx = 0;

            for (j = size_n1 - 1; j >= 0; j--) {
                mult = (*(number2 + i) - '0') * (*(number1 + j) - '0') + (*(*result + (number2_idx + number1_idx)) - '0') + carry;

                carry = mult / 10;

                *(*result + (number2_idx + number1_idx)) = (char)((mult % 10) + '0');

                number1_idx += 1;
            }

            if (carry) {
                *(*result + (number2_idx + number1_idx)) += (char)carry;
            }

            number2_idx += 1;
        }
    }

    *(*result + (size_n1 + size_n2 + flg)) = '\0';

    strrev(*result);

    for (i = 0; *(*result + i) == '0'; i++) {
        count_zero += 1;
    }

    if (count_zero) {
        for (i = 0; i < count_zero; i++) {
            for (j = 0; j < (int) strlen(*result); j++) {
                *(*result + j) = *(*result + j + 1);
            }
        }
    }

    if (flg) {
        strrev(*result);

        for (i = 0; isdigit(*(*result + i)); i++);

        *(*result + i) = '-';

        strrev(*result);
    }

    return 0;
}

int subtract(const char* number1, const char* number2, char** result) {
    if (number1 == NULL || number2 == NULL || result == NULL) return 1;

    if (validate(number1) == 2 || validate(number2) == 2) return 2;

    int vector_size = 0, size_n1 = 0, size_n2 = 0, n = 0, diff = 0, carry = 0, i = 0, j = 0, flg = 0, count_zero = 0;

    if (isdigit(*number1) && isdigit(*number2)) {
        n = compare_numbers(number1, number2);

        if (n == 1) {
            size_n1 = (int)strlen(number1);
            size_n2 = (int)strlen(number2);

            *result = vector_create(size_n1 + 1);

            if (*result == NULL) {
                return 3;
            }

            for (i = size_n2 - 1, j = size_n1 - 1; i >= 0; i--, j--) {
                diff = (*(number1 + j) - '0') - (*(number2 + i) - '0') - carry;

                if (diff < 0) {
                    diff += 10;
                    carry = 1;
                } else {
                    carry = 0;
                }

                n = vector_push_back(*result, (char)(diff + '0'), &vector_size);

                if (n) {
                    vector_destroy(result);
                    return 3;
                }
            }

            for (i = j; i >= 0; i--) {
                diff = (*(number1 + i) - '0') - carry;

                if (diff < 0) {
                    diff += 10;
                    carry = 1;
                } else {
                    carry = 0;
                }

                n = vector_push_back(*result, (char)(diff + '0'), &vector_size);

                if (n) {
                    vector_destroy(result);
                    return 3;
                }
            }
        } else if (n == 2) {
            flg = 1;

            size_n1 = (int)strlen(number1);
            size_n2 = (int)strlen(number2);

            *result = vector_create(size_n2 + 2);

            if (*result == NULL) {
                return 3;
            }

            for (i = size_n1 - 1, j = size_n2 - 1; i >= 0; i--, j--) {
                diff = (*(number2 + j) - '0') - (*(number1 + i) - '0') - carry;

                if (diff < 0) {
                    diff += 10;
                    carry = 1;
                } else {
                    carry = 0;
                }

                n = vector_push_back(*result, (char)(diff + '0'), &vector_size);

                if (n) {
                    vector_destroy(result);
                    return 3;
                }
            }

            for (i = j; i >= 0; i--) {
                diff = (*(number2 + i) - '0') - carry;

                if (diff < 0) {
                    diff += 10;
                    carry = 1;
                } else {
                    carry = 0;
                }

                n = vector_push_back(*result, (char)(diff + '0'), &vector_size);

                if (n) {
                    vector_destroy(result);
                    return 3;
                }
            }
        } else {
            *result = vector_create(1);

            if (*result == NULL) {
                return 3;
            }

            n = vector_push_back(*result, '0', &vector_size);

            if (n) {
                vector_destroy(result);
                return 3;
            }

            *(*result + vector_size) = '\0';

            return 0;
        }
    } else if (!isdigit(*number1) && !isdigit(*number2)) {
        ++number1;
        ++number2;

        n = compare_numbers(number1, number2);

        if (n == 1) {
            flg = 1;

            size_n1 = (int)strlen(number1);
            size_n2 = (int)strlen(number2);

            *result = vector_create(size_n1 + 2);

            if (*result == NULL) {
                return 3;
            }

            for (i = size_n2 - 1, j = size_n1 - 1; i >= 0; i--, j--) {
                diff = (*(number1 + j) - '0') - (*(number2 + i) - '0') - carry;

                if (diff < 0) {
                    diff += 10;
                    carry = 1;
                } else {
                    carry = 0;
                }

                n = vector_push_back(*result, (char)(diff + '0'), &vector_size);

                if (n) {
                    vector_destroy(result);
                    return 3;
                }
            }

            for (i = j; i >= 0; i--) {
                diff = (*(number1 + i) - '0') - carry;

                if (diff < 0) {
                    diff += 10;
                    carry = 1;
                } else {
                    carry = 0;
                }

                n = vector_push_back(*result, (char)(diff + '0'), &vector_size);

                if (n) {
                    vector_destroy(result);
                    return 3;
                }
            }
        } else if (n == 2) {
            size_n1 = (int)strlen(number1);
            size_n2 = (int)strlen(number2);

            *result = vector_create(size_n2 + 1);

            if (*result == NULL) {
                return 3;
            }

            for (i = size_n1 - 1, j = size_n2 - 1; i >= 0; i--, j--) {
                diff = (*(number2 + j) - '0') - (*(number1 + i) - '0') - carry;

                if (diff < 0) {
                    diff += 10;
                    carry = 1;
                } else {
                    carry = 0;
                }

                n = vector_push_back(*result, (char)(diff + '0'), &vector_size);

                if (n) {
                    vector_destroy(result);
                    return 3;
                }
            }

            for (i = j; i >= 0; i--) {
                diff = (*(number2 + i) - '0') - carry;

                if (diff < 0) {
                    diff += 10;
                    carry = 1;
                } else {
                    carry = 0;
                }

                n = vector_push_back(*result, (char)(diff + '0'), &vector_size);

                if (n) {
                    vector_destroy(result);
                    return 3;
                }
            }
        } else {
            *result = vector_create(1);

            if (*result == NULL) {
                return 3;
            }

            n = vector_push_back(*result, '0', &vector_size);

            if (n) {
                vector_destroy(result);
                return 3;
            }

            return 0;
        }

        --number1;
        --number2;
    } else if (isdigit(*number1) && !isdigit(*number2)) {
        ++number2;

        n = add(number1, number2, result);

        if (n) {
            return n;
        }

        --number2;

        return 0;
    } else if (!isdigit(*number1) && isdigit(*number2)) {
        ++number1;

        n = add(number1, number2, result);

        if (n) {
            return n;
        }

        --number1;

        vector_size = (int) strlen(*result);

        char *tmp = realloc(*result, sizeof(char) * vector_size + 2);

        *result = tmp;

        strrev(*result);

        n = vector_push_back(*result, '-', &vector_size);

        if (n) {
            vector_destroy(result);
            return 3;
        }

        *(*result + vector_size) = '\0';

        strrev(*result);

        return 0;
    }

    *(*result + vector_size) = '\0';

    strrev(*result);

    for (i = 0; *(*result + i) == '0'; i++) {
        count_zero += 1;
    }

    if (count_zero) {
        int terminator = (flg ? 2 : 1);
        for (i = 0; i < count_zero; i++) {
            for (j = 0; j < (int) strlen(*result); j++) {
                *(*result + j) = *(*result + j + 1);
            }
        }

        char *tmp = realloc(*result, sizeof(char) * (vector_size - count_zero) + terminator);

        if (tmp == NULL) {
            vector_destroy(result);
            return 3;
        }

        *result = tmp;

        vector_size -= count_zero;
    }

    *(*result + vector_size) = '\0';

    strrev(*result);

    if (flg) {
        n = vector_push_back(*result, '-', &vector_size);

        if (n) {
            vector_destroy(result);
            return 3;
        }
    }

    strrev(*result);

    return 0;
}

int add(const char* number1, const char* number2, char** result) {
    if (number1 == NULL || number2 == NULL || result == NULL) return 1;

    if (validate(number1) == 2 || validate(number2) == 2) return 2;

    int vector_size = 0, size_n1 = 0, size_n2 = 0, n = 0, sum = 0, carry = 0, i = 0, j = 0, flg = 0;

    if (isdigit(*number1) && isdigit(*number2)) {
        n = compare_numbers(number1, number2);

        // first number is larger => start with the smaller one
        if (n == 1) {
            size_n1 = (int)strlen(number1);
            size_n2 = (int)strlen(number2);

            *result = vector_create(size_n1 + 1);

            if (*result == NULL) {
                return 3;
            }

            for (i = size_n2 - 1, j = size_n1 - 1; i >= 0; i--, j--) {
                sum = (*(number2 + i) - '0') + (*(number1 + j) - '0') + carry;

                n = vector_push_back(*result, (char)(sum % 10 + '0'), &vector_size);

                if (n) {
                    vector_destroy(result);
                    return 3;
                }

                carry = sum / 10;
            }

            for (i = j; i >= 0; i--) {
                sum = (*(number1 + i) - '0') + carry;

                n = vector_push_back(*result, (char)(sum % 10 + '0'), &vector_size);

                if (n) {
                    vector_destroy(result);
                    return 3;
                }

                carry = sum / 10;
            }
        } else if (n == 2 || n == 0) { // second number is larger => start with the smaller one
            size_n1 = (int)strlen(number1);
            size_n2 = (int)strlen(number2);

            *result = vector_create(size_n2 + 1);

            if (*result == NULL) {
                return 3;
            }

            for (i = size_n1 - 1, j = size_n2 - 1; i >= 0; i--, j--) {
                sum = (*(number1 + i) - '0') + (*(number2 + j) - '0') + carry;

                n = vector_push_back(*result, (char)(sum % 10 + '0'), &vector_size);

                if (n) {
                    vector_destroy(result);
                    return 3;
                }

                carry = sum / 10;
            }

            for (i = j; i >= 0; i--) {
                sum = (*(number2 + i) - '0') + carry;

                n = vector_push_back(*result, (char)(sum % 10 + '0'), &vector_size);

                if (n) {
                    vector_destroy(result);
                    return 3;
                }

                carry = sum / 10;
            }
        }
    } else if (!isdigit(*number1) && !isdigit(*number2)) {
        flg = 1;

        ++number1;
        ++number2;

        n = compare_numbers(number1, number2);

        // first number is larger => start with the smaller one
        if (n == 1) {
            size_n1 = (int)strlen(number1);
            size_n2 = (int)strlen(number2);

            *result = vector_create(size_n1 + 2);

            if (*result == NULL) {
                return 3;
            }

            for (i = size_n2 - 1, j = size_n1 - 1; i >= 0; i--, j--) {
                sum = (*(number2 + i) - '0') + (*(number1 + j) - '0') + carry;

                n = vector_push_back(*result, (char)(sum % 10 + '0'), &vector_size);

                if (n) {
                    vector_destroy(result);
                    return 3;
                }

                carry = sum / 10;
            }

            for (i = j; i >= 0; i--) {
                sum = (*(number1 + i) - '0') + carry;

                n = vector_push_back(*result, (char)(sum % 10 + '0'), &vector_size);

                if (n) {
                    vector_destroy(result);
                    return 3;
                }

                carry = sum / 10;
            }
        } else if (n == 2 || n == 0) { // second number is larger => start with the smaller one
            size_n1 = (int)strlen(number1);
            size_n2 = (int)strlen(number2);

            *result = vector_create(size_n2 + 1);

            if (*result == NULL) {
                return 3;
            }

            for (i = size_n1 - 1, j = size_n2 - 1; i >= 0; i--, j--) {
                sum = (*(number1 + i) - '0') + (*(number2 + j) - '0') + carry;

                n = vector_push_back(*result, (char)(sum % 10 + '0'), &vector_size);

                if (n) {
                    vector_destroy(result);
                    return 3;
                }

                carry = sum / 10;
            }

            for (i = j; i >= 0; i--) {
                sum = (*(number2 + i) - '0') + carry;

                n = vector_push_back(*result, (char)(sum % 10 + '0'), &vector_size);

                if (n) {
                    vector_destroy(result);
                    return 3;
                }

                carry = sum / 10;
            }
        }
    } else if (isdigit(*number1) && !isdigit(*number2)) {
        ++number2;

        n = subtract(number1, number2, result);

        if (n) {
            return n;
        }

        --number2;

        return 0;
    } else if (!isdigit(*number1) && isdigit(*number2)) {
        ++number1;

        n = subtract(number2, number1, result);

        if (n) {
            return n;
        }

        --number1;

        return 0;
    }

    if (carry) {
        int terminator = (flg ? 3 : 2);
        char *tmp = realloc(*result, sizeof(char) * (vector_size + terminator));

        if (tmp == NULL) {
            vector_destroy(result);
            return 3;
        }

        *result = tmp;

        n = vector_push_back(*result, (char)(carry + '0'), &vector_size);

        if (n) {
            vector_destroy(result);
            return 3;
        }
    }

    if (flg) {
        --number1;
        --number2;

        n = vector_push_back(*result, '-', &vector_size);

        if (n) {
            vector_destroy(result);
            return 3;
        }
    }

    *(*result + vector_size) = '\0';
    strrev(*result);

    return 0;
}

int validate(const char *number) {
    if (number == NULL) return -1;

    int size = (int)strlen(number);

    if (size == 0) return 2;

    if (size == 1) {
        if (*number < '0' || *number > '9') return 2;
    } else if (size >= 2) {
        if ((*number != '-' && (*(number + 1) < '0' || *(number + 1) > '9')) || (*number == '-' && *(number + 1) == '0') || *number == '0') return 2;
    }

    for (int i = 1; i < size; i++) {
        if (*(number + i) < '0' || *(number + i) > '9') return 2;
    }

    return 0;
}

int validate_expression(const char *expr) {
    if (expr == NULL) return 2;

    int size = (int) strlen(expr);

    if (size >= 3) {
        if ((*expr  == '-' && !isdigit(*(expr + 1))) || (!isdigit(*expr) && *expr != '-')) return 1;

        for (int i = 1; i < size; i++) {
            if (*(expr + i) == '-' && (*(expr + i + 1) != '-' && !isdigit(*(expr + i + 1)))) {
                return 1;
            }
            if (*(expr + i) == '+' && (*(expr + i + 1) != '-' && !isdigit(*(expr + i + 1)))) {
                return 1;
            }
            if (*(expr + i) == '*' && (*(expr + i + 1) != '-' && !isdigit(*(expr + i + 1)))) {
                return 1;
            }
            if (!isdigit(*(expr + i)) && *(expr + i) != '-' && *(expr + i) != '+' && *(expr + i) != '*') {
                return 1;
            }
        }
    } else {
        if (!isdigit(*expr) && *expr != '-') return 1;
    }

    return 0;
}

int calculate(const char* expr, char **result) {
    if (expr == NULL || result == NULL) return 1;

    int n = validate_expression(expr), largest_number_size = 0, /*count_operation = 0,*/ count_numbers = 0, i = 0, j = 0;/*, k = 0, flg = 1;*/
    char *number1 = 0, *number2 = 0, operation = 0;

    if (n) {
        return 2;
    }

    do {
        if (isdigit(*(expr + i))) {
            j++;
        } else {
            if (j > largest_number_size) {
                largest_number_size = j;
            }

            if (j) {
                count_numbers += 1;
            }

            j = 0;
        }
    } while (*(expr + i++) != '\0');

    if (count_numbers == 1) {
        *result = strdup(expr);

        if (result == NULL) {
            return 3;
        }

        return 0;
    }

    number1 = vector_create(largest_number_size + 1);

    if (number1 == NULL) {
        return 3;
    }

    number2 = vector_create(largest_number_size + 1);

    if (number2 == NULL) {
        vector_destroy(&number1);
        return 3;
    }

    i = 0, j = 0;

    *number1 = *(expr + i);

    i++;

    for (j = 1; isdigit(*(expr + i)); i++, j++) {
        *(number1 + j) = *(expr + i);
    }

    *(number1 + j) = '\0';

    operation = *(expr + i);

    i++;

    *number2 = *(expr + i);

    i++;

    for (j = 1; isdigit(*(expr + i)); i++, j++) {
        *(number2 + j) = *(expr + i);
    }

    *(number2 + j) = '\0';

    if (operation == '+') {
        n = add(number1, number2, result);

        if (n) {
            vector_destroy(&number1);
            vector_destroy(&number2);
            return 3;
        }
    } else if (operation == '-') {
        n = subtract(number1, number2, result);

        if (n) {
            vector_destroy(&number1);
            vector_destroy(&number2);
            return 3;
        }
    } else {
        n = multiply(number1, number2, result);

        if (n) {
            vector_destroy(&number1);
            vector_destroy(&number2);
            return 3;
        }
    }

    do {
        if (*(expr + i) != '\0') {
            memset(number1, 0, largest_number_size + 1);
            vector_destroy(&number2);

            j = 0;

            operation = *(expr + i);

            i++;

            *number1 = *(expr + i);

            i++;

            for (j = 1; isdigit(*(expr + i)); i++, j++) {
                *(number1 + j) = *(expr + i);
            }

            *(number1 + j) = '\0';

            if (operation == '+') {
                n = add(*result, number1, &number2);

                if (n) {
                    vector_destroy(&number1);
                    return 3;
                }
            } else if (operation == '-') {
                n = subtract(*result, number1, &number2);

                if (n) {
                    vector_destroy(&number1);
                    return 3;
                }
            } else {
                n = multiply(*result, number1, &number2);

                if (n) {
                    vector_destroy(&number1);
                    return 3;
                }
            }

            vector_destroy(result);
            *result = strdup(number2);
        } else {
            break;
        }
    } while (1);

    vector_destroy(&number1);
    vector_destroy(&number2);
    return 0;
}

//"1223+32644-233"

