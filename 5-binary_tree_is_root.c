#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if the node is a root
 * @node: The node
 *
 * Return: 1 if the node is a root, 0 if otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!node->parent)
		return (1);
	else
		return (0);
}
