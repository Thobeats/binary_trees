#include "binary_trees.h"
/**
 * binary_tree_depth - gets the depth of the tree
 * @tree: the binary tree
 *
 * Return: the depth of the tree, 0 if tree is NULL
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	depth = depth_traverser(tree);

	return (depth);
}

/**
 * depth_traverser - gets the depth of the tree
 * @tree: the tree
 * Return: the depth of the tree
 */
size_t depth_traverser(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	count = (1 + depth_traverser(tree->parent));
	return (count);
}
