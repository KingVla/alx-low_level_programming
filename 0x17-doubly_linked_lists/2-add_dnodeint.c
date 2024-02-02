
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 *
 **/
#include <stdlib.h>

/* Definition of a doubly linked list node */
typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Function to add a new node at the beginning of a dlistint_t list */
dlistint_t *add_dnodeint(dlistint_t **head, const int n) {
    /* Allocate memory for the new node */
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        return NULL; /* Return NULL if memory allocation failed */
    }

    /* Initialize the new node */
    new_node->n = n;
    new_node->prev = NULL;

    /* If the list is empty, set the new node as the head */
    if (*head == NULL) {
        new_node->next = NULL;
    } else {
        /* Otherwise, set the next of the new node to the current head */
        new_node->next = *head;
        /* Update the previous of the current head to point to the new node */
        (*head)->prev = new_node;
    }

    /* Update the head to point to the new node */
    *head = new_node;

    return new_node; /* Return the address of the new element */
}

