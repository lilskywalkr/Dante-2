#ifndef BIT_SET
#define BIT_SET

union bit_set {
    unsigned int a;
    unsigned short arr1[sizeof(short)];
    unsigned char arr2[sizeof(unsigned int)];
    struct {
        unsigned char b1: 1;
        unsigned char b2: 1;
        unsigned char b3: 1;
        unsigned char b4: 1;
        unsigned char b5: 1;
        unsigned char b6: 1;
        unsigned char b7: 1;
        unsigned char b8: 1;
    } arr3[4];
};

#endif