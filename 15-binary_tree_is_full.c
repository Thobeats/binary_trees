#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if all the nodes in a tree have two
 *			or zero child nodes.
 * @tree: the binary tree
 *
 * Return: 1 if it is full, 0 if tree is NULL or not full
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int check;

	if (tree == NULL)
		return (0);
	check = check_nodes(tree);
	if (check == 0)
		return (1);
	else
		return (0);
}

/**
 * check_nodes - checks all nodes to decide if the tree is full or not.
 * @tree: the tree
 * Return: the summation of nodes, 0 if NULL
*/
int check_nodes(const binary_tree_t *tree)
{
	int left, right, node_count;

	if (tree == NULL)
		return (0);
	if ((!tree->left && !tree->right) || (tree->left && tree->right))
		node_count = 0;
	else
		node_count = 1;
	left = node_count + check_nodes(tree->left);
	right = left + check_nodes(tree->right);

	return (right);
}
