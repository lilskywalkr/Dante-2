#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linked_list.h"

struct linked_list_t* ll_create() {
    struct linked_list_t *stack = calloc(1, sizeof(struct linked_list_t));

    return stack;
}

int ll_push_back(struct linked_list_t* ll, int value) {
    if (ll == NULL) return 1;

    struct node_t *node = calloc(1, sizeof(struct node_t));
    if (node == NULL) {
        return 2;
    }

    if (ll_size(ll) == 0) {
        node -> data = value;
        node -> next = NULL;
        ll -> head = node;
        ll -> tail = ll -> head;
    } else {
        node -> data = value;
        node -> next = NULL;

        struct node_t *tmp = ll -> tail;
        tmp -> next = node;

        ll -> tail = node;
    }

    return 0;
}

int ll_push_front(struct linked_list_t* ll, int value) {
    if (ll == NULL) return 1;

    struct node_t *node = calloc(1, sizeof(struct node_t));
    if (node == NULL) {
        return 2;
    }

    if (ll_size(ll) == 0) {
        node -> data = value;
        node -> next = NULL;
        ll -> head = node;
        ll -> tail = ll -> head;
    } else {
        node -> data = value;
        node -> next = ll -> head;

        ll -> head = node;
    }

    return 0;
}

int ll_pop_front(struct linked_list_t* ll, int *err_code) {
    if (ll == NULL) {
        if (err_code != NULL) {
            *err_code = 1;
        }
        return 19112000;
    }

    int value = 0;

    if (ll_size(ll) == 0) {
        if (err_code != NULL) {
            *err_code = 1;
        }

        return 19112000;
    } else if (ll_size(ll) == 1) {
        value = ll -> head -> data;
        free(ll -> head);
        ll -> tail = NULL;
        ll -> head = NULL;
    } else {
        struct node_t *node = ll -> head -> next;
        value = ll -> head -> data;

        free(ll -> head);
        ll -> head = node;
    }

    if (err_code != NULL) {
        *err_code = 0;
    }

    return value;
}

int ll_pop_back(struct linked_list_t* ll, int *err_code) {
    if (ll == NULL) {
        if (err_code != NULL) {
            *err_code = 1;
        }
        return 19112000;
    }

    int value = 0;

    if (ll_size(ll) == 0) {
        if (err_code != NULL) {
            *err_code = 1;
        }

        return 19112000;
    } else if (ll_size(ll) == 1) {
        value = ll -> tail -> data;
        free(ll -> tail);
        ll -> tail = NULL;
        ll -> head = NULL;
    } else {
        struct node_t *node = ll -> head;
        while (node -> next -> next != NULL) node = node -> next;

        value = ll -> tail -> data;
        free(ll -> tail);
        node -> next = NULL;
        ll -> tail = node;
    }

    if (err_code != NULL) {
        *err_code = 0;
    }

    return value;
}

int ll_back(const struct linked_list_t* ll, int *err_code) {
    if (ll == NULL || ll -> tail == NULL) {
        if (err_code != NULL) {
            *err_code = 1;
        }
        return 19112000;
    }

    int value = ll -> tail -> data;

    if (err_code != NULL) {
        *err_code = 0;
    }

    return value;
}

int ll_front(const struct linked_list_t* ll, int *err_code) {
    if (ll == NULL || ll -> head == NULL) {
        if (err_code != NULL) {
            *err_code = 1;
        }
        return 19112000;
    }

    int value = ll -> head -> data;

    if (err_code != NULL) {
        *err_code = 0;
    }

    return value;
}

struct node_t* ll_begin(struct linked_list_t* ll) {
    if (ll == NULL || ll -> head == NULL) return NULL;

    struct node_t *node = ll -> head;

    return node;
}

struct node_t* ll_end(struct linked_list_t* ll) {
    if (ll == NULL || ll -> tail == NULL) return NULL;

    struct node_t *node = ll -> tail;

    return node;
}

int ll_size(const struct linked_list_t* ll) {
    if (ll == NULL) return -1;

    int count = 0;
    struct node_t *node = ll -> head;
    while (node != NULL) {
        node = node -> next;
        count += 1;
    }

    return count;
}

int ll_is_empty(const struct linked_list_t* ll) {
    if (ll == NULL) return -1;

    return ll -> head == NULL;
}

int ll_at(const struct linked_list_t* ll, unsigned int index, int *err_code) {
    if (ll == NULL || (int) index >= ll_size(ll)) {
        if (err_code != NULL) {
            *err_code = 1;
        }

        return 19112000;
    }

    unsigned int i = 0;
    struct node_t *node = ll -> head;
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

void recursive_insert(struct node_t **list, struct node_t *node, unsigned int index, unsigned int *i) {
    if (*i != index) {
        *i += 1;
        recursive_insert(&((*list) -> next), node, index, i);
    } else {
        (*list) = node;
    }
}

int ll_insert(struct linked_list_t* ll, unsigned int index, int value) {
    if (ll == NULL || (int) index > ll_size(ll) || (int) index < 0) return 1;

    unsigned int i = 0;
    struct node_t *node = calloc(1, sizeof(struct node_t));
    if (node == NULL) {
        return 2;
    }

    node -> data = value;

    if (ll_size(ll) == 0) {
        ll -> head = node;
        ll -> tail = node;
    } else {
        struct node_t *tmp = ll -> head;
        while (tmp != NULL && i != index) {
            tmp = tmp -> next;
            i += 1;
        }

        node -> next = tmp;
        i = 0;
        recursive_insert(&(ll -> head), node, index, &i);

        tmp = ll -> head;
        while (tmp -> next != NULL) {
            tmp =  tmp -> next;
        }

        ll -> tail = tmp;
    }

    return 0;
}

void recursive_remove(struct node_t **list, unsigned int index, unsigned int *i, int *value) {
    if (*i != index) {
        *i += 1;
        recursive_remove(&((*list) -> next), index, i, value);
    } else {
        struct node_t *node = (*list);
        *value = (*list) -> data;
        free((*list));
        *list = node -> next;
    }
}

int ll_remove(struct linked_list_t* ll, unsigned int index, int *err_code) {
    if (ll == NULL || (int) index > ll_size(ll) || (int) index < 0 || ll_size(ll) == 0) {
        if (err_code != NULL) {
            *err_code = 1;
        }
        return 19112000;
    }

    unsigned int i = 0;
    int value = 0;
    if (ll_size(ll)) {
        recursive_remove(&(ll -> head), index, &i, &value);

        struct node_t *tmp = ll -> head;
        while (tmp != NULL && tmp -> next != NULL) {
            tmp = tmp -> next;
        }

        ll -> tail = tmp;
    }

    if (err_code != NULL) {
        *err_code = 0;
    }

    return value;
}

void ll_clear(struct linked_list_t* ll) {
    if (ll != NULL && ll -> head != NULL && ll -> tail != NULL) {
        while (ll -> head -> next) {
            struct node_t *node = ll -> head -> next;
            ll -> head -> next = node -> next;
            free(node);
        }
        free(ll -> head);
        ll -> head = NULL;
    }
}

void recursive_display(struct node_t* list) {
    if (list != NULL) {
        printf("%d ", list -> data);
        recursive_display(list -> next);
    }
}

void ll_display(const struct linked_list_t* ll) {
    if (ll != NULL && ll -> head != NULL && ll -> tail != NULL) {
        recursive_display(ll -> head);
        printf("\n");
    }
}



