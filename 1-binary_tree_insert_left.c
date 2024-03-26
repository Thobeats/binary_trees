#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a new node in the left path of the parent
 * @parent: The parent node of the new node
 * @value: The value of the new node
 *
 * Return: a pointer to the new node or NULL if it fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	parent->left = new_node;
	return (new_node);
}
