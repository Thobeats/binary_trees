#include "binary_trees.h"
/**
 * binary_tree_levelorder - traverse a binary tree via levels
 * @tree: the binary tree
 * @func: pointer to a function to call for each node
 *
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;
	if (tree == NULL || func == NULL)
		return;
	height = height_traverser(tree);
	for (i = 0; i <= height; i++)
	{
		binary_tree_levelorder_traverse(tree, i, func);
	}
}

/**
 * binary_tree_levelorder_travers - traverse a binary tree via levels
 * @tree: the binary tree
 * @level: the current level of the node
 * @func: pointer to a function to call for each node
 *
 */

void binary_tree_levelorder_traverse(const binary_tree_t *tree, size_t level, void (*func)(int))
{
	size_t depth;
	if (tree == NULL || func == NULL)
		return;
	depth = depth_traverser(tree);
	if (level == depth)
	{
		func(tree->n);
	}else
	{
		if (tree->left)
			binary_tree_levelorder_traverse(tree->left, level, func);
		if (tree->right)
			binary_tree_levelorder_traverse(tree->right, level, func);
	}
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
