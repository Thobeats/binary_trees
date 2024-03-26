#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if the node is a leaf
 * @node: The node
 *
 * Return: 1 if the node is a leaf, 0 if otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
