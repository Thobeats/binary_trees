#include "binary_trees.h"
/**
 * binary_tree_sibling - gets the sibling of a node
 * @node: the node
 *
 * Return: a pointer to the sibling node
 *	NULL if the node or parent is NULL
 *	NULL if there is no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	sibling = malloc(sizeof(binary_tree_t));
	if (!sibling)
	{
		free(sibling);
		return (NULL);
	}
	sibling = find_sibling(node);

	return (sibling);
}

/**
 * find_sibling - gets the sibling of the node
 * @node: the node
 * Return: a pointer to the sibling
 */
binary_tree_t *find_sibling(const binary_tree_t *node)
{
	if (node->parent->left == node)
	{
		if (node->parent->right)
			return (node->parent->right);
	}
	else
	{
		if (node->parent->left)
			return (node->parent->left);
	}

	return (NULL);
}
