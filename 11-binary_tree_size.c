#include "binary_trees.h"
/**
 * binary_tree_size - gets the depth of the tree
 * @tree: the binary tree
 *
 * Return: the size of the tree, 0 if tree is NULL
 *
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);
	size = size_traverser(tree);

	return (size);
}

/**
 * size_traverser - gets the depth of the tree
 * @tree: the tree
 * Return: the size of the tree
 */
size_t size_traverser(const binary_tree_t *tree)
{
	size_t count_left, count_right;

	if (tree == NULL)
		return (0);
	count_left = (1 + size_traverser(tree->left));
	count_right = (count_left + size_traverser(tree->right));
	return (count_right);
}
