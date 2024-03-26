#include "binary_trees.h"

/**
 *binary_tree_node - This creates a new node on a parent
 *@parent: The parent node for the new node
 *@value: The value of the new node
 *
 * Return: A pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
