#include "binary_trees.h"
/**
 * binary_tree_height - gets the height of the tree
 * @tree: the binary tree
 *
 * Return: the height of the tree, 0 if tree is NULL
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);
	height = height_traverser(tree);

	return (height);
}

/**
 * height_traverser - gets the height of the tree
 * @tree: the tree
 * Return: the height of the tree
 */
size_t height_traverser(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left = (1 + height_traverser(tree->left));
	else
		left = 0;
	if (tree->right)
		right = (1 + height_traverser(tree->right));
	else
		right = 0;
	if (left > right)
		return (left);
	return (right);
}
