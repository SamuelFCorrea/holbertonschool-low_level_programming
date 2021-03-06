#ifndef LISTS_H
#define LISTS_H


/****************************************************************************/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/****************************************************************************/

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/****************************************************************************/

/*			print dlistint values			*/
size_t print_dlistint(const dlistint_t *);

/*			return the length of the list		*/
size_t dlistint_len(const dlistint_t *);

/*			add a new node to the list		*/
dlistint_t *add_dnodeint(dlistint_t **, const int);

/* 		add a new node to the end of the list		*/
dlistint_t *add_dnodeint_end(dlistint_t **, const int);

/*			free the list				*/
void free_dlistint(dlistint_t *head);

/*		return the direction of a selected node		*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/*		return the sum of the list data			*/
int sum_dlistint(dlistint_t *head);

/*		inserts a new node at a given position.		*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/*			deletes the node at index		*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

/****************************************************************************/

#endif
