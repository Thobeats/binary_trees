#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a new node in the right path of the parent
 * @parent: The parent node of the new node
 * @value: The value of the new node
 *
 * Return: a pointer to the new node or NULL if it fails
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	new_node->parent = parent;
	parent->left = new_node;
	return (new_node);
}
