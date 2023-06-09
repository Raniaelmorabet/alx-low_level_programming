#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_cleanup - Frees the allocated memory for the hash table.
 * @ht: The hash table to free.
 */
void hash_table_cleanup(hash_table_t *ht)
{
    unsigned long int i;
    for (i = 0; i < ht->size; i++)
    {
        hash_node_t *node = ht->array[i];
        while (node != NULL)
        {
            hash_node_t *temp = node;
            node = node->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
    }
    free(ht->array);
    free(ht);
}

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);

    /* Use the hash table */

    /* Clean up and free the hash table */
    hash_table_cleanup(ht);

    return EXIT_SUCCESS;
}
