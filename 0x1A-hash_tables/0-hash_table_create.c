#include <stdlib.h>
#include <stdio.h>

typedef struct hash_node
{
    char *key;
    char *value;
    struct hash_node *next;
} hash_node_t;

typedef struct hash_table
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table, or NULL if an error occurred.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table;
    unsigned long int i;

    /* Allocate memory for the hash table structure */
    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
        return NULL;

    /* Allocate memory for the array */
    hash_table->array = malloc(size * sizeof(hash_node_t *));
    if (hash_table->array == NULL)
    {
        free(hash_table);
        return NULL;
    }

    /* Initialize the elements of the array to NULL */
    for (i = 0; i < size; i++)
        hash_table->array[i] = NULL;

    hash_table->size = size;

    return hash_table;
}

int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);

    /* Use the hash table */

    /* Free the hash table */
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

    return 0;
}
