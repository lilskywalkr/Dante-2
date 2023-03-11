#ifndef BYTE_SET
#define BYTE_SET

union byte_set {
    int a;
    unsigned char arr[sizeof(int)];
};

#endif