#include <stdlib.h>
#include "hash_tables.h"

void hash_table_cleanup(hash_table_t *ht)
{
    if (ht == NULL)
        return;

    /* Free the array */
    free(ht->array);

    /* Free the hash table */
    free(ht);
}
