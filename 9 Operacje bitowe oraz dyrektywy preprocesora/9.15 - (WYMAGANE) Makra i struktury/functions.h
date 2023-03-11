//
// Created by root on 3/20/22.
//

#ifndef EMPTY_PROJECT_FUNCTIONS_H
#define EMPTY_PROJECT_FUNCTIONS_H

#define DEFINE_ARRAY(TYPE)  \
  struct array_##TYPE##_t { \
  \
    int size;               \
    \
    int capacity;           \
    \
    TYPE *data;                 \
    }  ;                     \


#define CREATE_ARRAY(TYPE)        \
\
  struct array_##TYPE##_t* create_array_##TYPE (int size) { \
  \
    if (size <= 0)     { \
        return NULL;                  \
    }\
                                                          \
    struct array_##TYPE##_t *arr = calloc(1, sizeof(struct array_##TYPE##_t));\
    if (arr == NULL)                      {           \
        return NULL;      \
        }                         \
        TYPE *tmp = calloc(size, sizeof(TYPE));            \
    if(tmp == NULL){                                       \
      free(arr);                                          \
      return NULL;                                        \
    }                                 \
    arr -> data = tmp;      \
    \
    \
    \
    arr -> size = 0;                                        \
    arr -> capacity = size;       \
    \
    return arr;                                           \
  }                            \


#define FREE_ARRAY(TYPE) \
    void free_array_##TYPE(struct array_##TYPE##_t *array) { \
    if (array != NULL && array -> data != NULL) { \
        free(array -> data) ;                       \
        free(array);                     \
    }\
    }\
\

#define SAVE_ARRAY(TYPE) \
    int save_array_##TYPE(const struct array_##TYPE##_t *array, const char *filename) { \
        if (array == NULL || filename == NULL || array -> data == NULL || array -> capacity <= 0 || array -> size <= 0 || array -> capacity < array -> size) return 1;                          \
                         \
        FILE *f_p = fopen(filename, "wb");                                        \
        if (f_p == NULL) {                                                        \
            return 2;                 \
        }                \
                         \
        fwrite(&(array -> size), sizeof(int), 1, f_p);                               \
        for (int i = 0; i < array -> size; i++) {                                       \
               fwrite((array -> data + i), sizeof(TYPE), 1, f_p);                \
        }                 \
        fclose(f_p);\
        return 0;\
    }\
\

#define LOAD_ARRAY(TYPE) \
        int load_array_##TYPE(struct array_##TYPE##_t **array, const char *filename) { \
            if (array == NULL || filename == NULL) return 1;                            \
                 FILE *f_p = fopen(filename, "rb");                                    \
                 if (f_p == NULL) return 2;\
                         \
                 int size = 0;                                                         \
                 fread(&size, sizeof(int), 1, f_p);                                    \
                         \
                 if (size <= 0) {    \
                    fclose(f_p);\
                    return 3;                                                             \
                 }\
                         \
                 *array = create_array_##TYPE(size);             \
                         \
                 if (*array == NULL) {                                                    \
                    fclose(f_p);      \
                    return 4;                                                             \
                 }       \
                         \
                 (*array) -> size = size;        \
                         \
                 for (int i = 0; i < size && !feof(f_p); i++) {                        \
                   \
                   if (fread(((*array) -> data + i), sizeof(TYPE), 1, f_p) != 1) {                                                  \
                    fclose(f_p);                                                       \
                    free_array_##TYPE(*array);\
                    return 3;      \
                   }\
                 }       \
                 fclose(f_p);\
                return 0;\
        }\
\

#define SORT_ARRAY(TYPE) \
    int sort_array_##TYPE(struct array_##TYPE##_t *array) { \
        if (array == NULL || array -> data == NULL || array -> capacity <= 0 || array -> size <= 0 || array -> capacity < array -> size) { \
            return 1;                 \
        }                \
                         \
        for (int i = 0; i < array -> size - 1; i++) {     \
            for (int j = 0; j < array -> size - i - 1; j++) {                                                                               \
                if (*(array -> data + j) > *(array -> data + j + 1)) {                                                                      \
                  TYPE tmp = *(array -> data + j);   \
                   *(array -> data + j) = *(array -> data + j + 1);                                                                         \
                   *(array -> data + j + 1) = tmp;       \
                }\
            }         \
        }\
                         \
        return 0;\
    }\
\

#endif //EMPTY_PROJECT_FUNCTIONS_H
