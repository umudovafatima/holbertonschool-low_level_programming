#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * print_list - Main
 * @h: Clone of struct
 * Return: Count of nodes
 */


size_t list_len(const list_t *h)
{
  int len = 0;
  
  while (h != NULL)
    {
    len++;
    h = h->next;
  }
  return (len);
}

