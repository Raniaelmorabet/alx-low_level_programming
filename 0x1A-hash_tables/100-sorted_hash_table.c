#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = NULL;
	unsigned long int i = 0;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; ++i)
		new_table->array[i] = NULL;
	new_table->shead = NULL;
	new_table->stail = NULL;
	return (new_table);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: sorted hash table to add or update the key/value to
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value) {}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: sorted hash table to look into
 * @key: key to look for
 * Return: value associated with the element, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	temp = ht->shead;
	while (temp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	temp = ht->stail;
	while (temp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp = NULL, *temp2 = NULL;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; ++i)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			temp2 = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp2;
		}
	}
	free(ht->array);
	free(ht);
}
