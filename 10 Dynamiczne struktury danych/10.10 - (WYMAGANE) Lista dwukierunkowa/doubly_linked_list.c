//
// Created by ronnie on 31.03.2022.
//

#include <stdio.h>
#include <stdlib.h>

#include "doubly_linked_list.h"

struct doubly_linked_list_t* dll_create() {
    struct doubly_linked_list_t *dll = calloc(1, sizeof(struct doubly_linked_list_t));

    return dll;
}

void recursive_linking_push_back(struct node_t **list, struct node_t *node) {
    if ((*list) -> next != NULL) {
        recursive_linking_push_back(&((*list)->next), node);
    } else {
        (*list) -> next = node;
    }
}

int dll_push_back(struct doubly_linked_list_t* dll, int value) {
    if (dll == NULL) return 1;

    struct node_t *node = calloc(1, sizeof(struct node_t));
    if (node == NULL) {
        return 2;
    }

    if (dll_size(dll) == 0) {
        node -> data = value;
        node -> prev = NULL;
        node -> next = NULL;
        dll -> head = node;
        dll -> tail = dll -> head;
    } else {
        node -> data = value;
        node -> next = NULL;

        struct node_t *tmp = dll -> head;
        while (tmp -> next != NULL) {
            tmp = tmp -> next;
        }

        node -> prev = tmp;
        recursive_linking_push_back(&(dll->head), node);

        dll -> tail = node;
    }

    return 0;
}
int dll_push_front(struct doubly_linked_list_t* dll, int value) {
    if (dll == NULL) return 1;

    struct node_t *node = calloc(1, sizeof(struct node_t));
    if (node == NULL) {
        return 2;
    }

    if (dll_size(dll) == 0) {
        node -> data = value;
        node -> prev = NULL;
        node -> next = NULL;
        dll -> head = node;
        dll -> tail = dll -> head;
    } else {
        node -> data = value;
        node -> prev = NULL;

        node -> next = dll -> head;
        dll -> head = node;
        dll -> head -> next -> prev = dll -> head;
    }

    return 0;
}
int dll_pop_front(struct doubly_linked_list_t* dll, int *err_code) {
    if (dll == NULL) {
        if (err_code != NULL) {
            *err_code = 1;
        }
        return 19112000;
    }

    int value = 0;

    if (dll_size(dll) == 0) {
        if (err_code != NULL) {
            *err_code = 1;
        }

        return 19112000;
    } else if (dll_size(dll) == 1) {
        value = dll -> head -> data;
        free(dll -> head);
        dll -> head = NULL;
        dll -> tail = NULL;
    } else {
        value = dll -> head -> data;
        struct node_t *node = dll -> head -> next;
        free(dll -> head);
        dll -> head = node;
    }

    if (err_code != NULL) {
        *err_code = 0;
    }

    return value;
}
int dll_pop_back(struct doubly_linked_list_t* dll, int *err_code) {
    if (dll == NULL) {
        if (err_code != NULL) {
            *err_code = 1;
        }
        return 19112000;
    }

    int value = 0;

    if (dll_size(dll) == 0) {
        if (err_code != NULL) {
            *err_code = 1;
        }

        return 19112000;
    } else if (dll_size(dll) == 1) {
        value = dll -> tail -> data;
        free(dll -> tail);
        dll -> head = NULL;
        dll -> tail = NULL;
    } else {
        value = dll -> tail -> data;
        struct node_t *node = dll -> head;
        while (node -> next -> next != NULL) node = node -> next;

        free(dll -> tail);
        node -> next = NULL;
        dll -> tail = node;
    }

    if (err_code != NULL) {
        *err_code = 0;
    }

    return value;
}

int dll_back(const struct doubly_linked_list_t* dll, int *err_code) {
    if (dll == NULL || dll -> tail == NULL) {
        if (err_code != NULL) {
            *err_code = 1;
        }
        return 19112000;
    }

    int value = dll -> tail -> data;

    if (err_code != NULL) {
        *err_code = 0;
    }

    return value;
}
int dll_front(const struct doubly_linked_list_t* dll, int *err_code) {
    if (dll == NULL || dll -> head == NULL) {
        if (err_code != NULL) {
            *err_code = 1;
        }
        return 19112000;
    }

    int value = dll -> head -> data;

    if (err_code != NULL) {
        *err_code = 0;
    }

    return value;
}

struct node_t* dll_begin(struct doubly_linked_list_t* dll) {
    if (dll == NULL || dll -> head == NULL) return NULL;

    struct node_t *node = dll -> head;
    return node;
}
struct node_t* dll_end(struct doubly_linked_list_t* dll) {
    if (dll == NULL || dll -> tail == NULL) return NULL;

    struct node_t *node = dll -> tail;
    return node;
}

int dll_size(const struct doubly_linked_list_t* dll) {
    if (dll == NULL) return -1;

    int count = 0;
    struct node_t *node = dll -> head;
    while (node != NULL) {
        node = node -> next;
        count += 1;
    }

    return count;
}
int dll_is_empty(const struct doubly_linked_list_t* dll) {
    if (dll == NULL) return -1;

    return dll -> head == NULL;
}

int dll_at(const struct doubly_linked_list_t* dll, unsigned int index, int *err_code) {
    if (dll == NULL || (int) index >= dll_size(dll)) {
        if (err_code != NULL) {
            *err_code = 1;
        }

        return 19112000;
    }

    unsigned int i = 0;
    struct node_t *node = dll -> head;
    while (node != NULL && i != index) {
        node = node -> next;
        i += 1;
    }

    if (err_code != NULL) {
        *err_code = 0;
    }

    int value = node -> data;

    return value;
}

void recursive_insert(struct node_t **list, struct node_t **node, struct doubly_linked_list_t **dll, int index, unsigned int *i) {
    if ((int) *i != index) {
        *i += 1;
        recursive_insert(&((*list) -> next), node, dll, index, i);
    } else {
        (*node) -> next = (*list);
        if (dll_size(*dll) == index) {
            (*node) -> prev = (*dll) -> tail;
            (*dll) -> tail -> next = (*node);
            //(*dll) -> tail = (*node);
        } else {
            (*node) -> prev = (*list) -> prev;
            (*list) -> prev = (*node);
            (*list) = (*node);
        }
    }
}

int dll_insert(struct doubly_linked_list_t* dll, unsigned int index, int value) {
    if (dll == NULL || (int) index > dll_size(dll) || (int) index < 0) return 1;

    unsigned int i = 0;
    struct node_t *node = calloc(1, sizeof(struct node_t));
    if (node == NULL) {
        return 2;
    }

    node -> data = value;

    if (dll_size(dll) == 0) {
        dll -> head = node;
        dll -> tail = node;
    } else {
        i = 0;
        recursive_insert(&(dll -> head), &node, &dll, (int) index, &i);

        struct node_t *tmp = dll -> head;
        while (tmp -> next != NULL) {
            tmp = tmp -> next;
        }

        dll -> tail = tmp;
    }

    return 0;
}

void recursive_remove(struct node_t **list, struct doubly_linked_list_t **dll, int index, unsigned int *i, int *value) {
    if ((int) *i != index) {
        *i += 1;
        recursive_remove(&((*list) -> next), dll, index, i, value);
    } else {
        if (index == 0) {
            *value = (*dll) -> head -> data;
            struct node_t *node = (*dll) -> head -> next;
            node -> prev = NULL;
            free((*dll) -> head);
            (*dll) -> head = node;
        } else {
            *value = (*list) -> data;
            struct node_t *node = (*list) -> next;
            node -> prev = (*list) -> prev;
            free(*list);
            (*list) = node;
        }
    }
}

int dll_remove(struct doubly_linked_list_t* dll, unsigned int index, int *err_code) {
    if (dll == NULL || (int) index >= dll_size(dll) || (int) index < 0 || dll_size(dll) == 0) {
        if (err_code != NULL) {
            *err_code = 1;
        }
        return 19112000;
    }

    unsigned int i = 0;
    int value = 0;
    if (dll_size(dll) == 1) {
        value = dll -> head -> data;
        free(dll -> head);
        dll -> head = NULL;
        dll -> tail = NULL;
    } else if ((int) index == dll_size(dll) - 1) {
        value = dll -> tail -> data;
        struct node_t *node = dll -> tail -> prev;
        node -> next = NULL;
        node -> prev = node -> prev;
        free(dll -> tail);
        dll -> tail = node;
    } else if (dll_size(dll) > 1 && (int) index < dll_size(dll) - 1) {
        recursive_remove(&(dll -> head), &dll, (int) index, &i, &value);

        struct node_t *tmp = dll -> head;
        while (tmp != NULL && tmp -> next != NULL) {
            tmp = tmp -> next;
        }

        dll -> tail = tmp;
    } else {
        if (err_code != NULL) {
            *err_code = 1;
        }
        return 19112000;
    }

    if (err_code != NULL) {
        *err_code = 0;
    }

    return value;
}

void recursive_clear(struct node_t **list) {
    if ((*list) != NULL) {
        recursive_clear(&((*list) -> next));
        free((*list) -> next);
    } else {
        return;
    }
}

void dll_clear(struct doubly_linked_list_t* dll) {
    if (dll != NULL && dll -> head != NULL && dll -> tail != NULL) {
        recursive_clear(&(dll -> head));
        free(dll -> head);
        dll -> head = NULL;
    }
}

void recursive_display(struct node_t *list) {
    if (list != NULL) {
        printf("%d ", list -> data);
        recursive_display(list -> next);
    }
}

void dll_display(const struct doubly_linked_list_t* dll) {
    if (dll != NULL && dll -> head != NULL && dll -> tail != NULL) {
        recursive_display(dll -> head);
        printf("\n");
    }
}

void recursive_display_reverse(struct node_t *list) {
    if (list != NULL) {
        recursive_display_reverse(list -> next);
        printf("%d ", list -> data);
    }
}

void dll_display_reverse(const struct doubly_linked_list_t* dll) {
    if (dll != NULL && dll -> head != NULL && dll -> tail != NULL) {
        recursive_display_reverse(dll -> head);
        printf("\n");
    }
}

