#include <stdlib.h>
#include "hash_tables.h"

void hash_table_cleanup(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node, *temp;

    if (ht == NULL)
        return;

    /* Free the hash nodes */
    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node != NULL)
        {
            temp = node;
            node = node->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
    }

    /* Free the array */
    free(ht->array);

    /* Free the hash table */
    free(ht);
}
