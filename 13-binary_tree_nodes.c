#include "binary_trees.h"
/**
 * binary_tree_nodes - gets the amount of nodes in a tree
 * @tree: the binary tree
 *
 * Return: the no of nodes in a tree, 0 if tree is NULL
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
		return (0);
	nodes = nodes_finder(tree);

	return (nodes);
}

/**
 * nodes_finder - finds all the nodes in a tree
 * @tree: the tree
 * Return: the no of nodes in a tree
 */
size_t nodes_finder(const binary_tree_t *tree)
{
	size_t count_left, count_right, node;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		node = 1;
	else
		node = 0;
	count_left = (node + nodes_finder(tree->left));
	count_right = (count_left + nodes_finder(tree->right));
	return (count_right);
}
