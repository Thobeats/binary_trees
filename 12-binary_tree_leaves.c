#include "binary_trees.h"
/**
 * binary_tree_leaves - gets the amount of leaves in a tree
 * @tree: the binary tree
 *
 * Return: the no of leaves in a tree, 0 if tree is NULL
 *
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL)
		return (0);
	leaves = leaves_finder(tree);

	return (leaves);
}

/**
 * leaves_finder - finds all the leaves in a tree
 * @tree: the tree
 * Return: the no of leaves in a tree
 */
size_t leaves_finder(const binary_tree_t *tree)
{
	size_t count_left, count_right, leaf;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		leaf = 1;
	else
		leaf = 0;
	count_left = (leaf + leaves_finder(tree->left));
	count_right = (count_left + leaves_finder(tree->right));
	return (count_right);
}
