#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if all the nodes in a tree have two
 *			child nodes.
 * @tree: the binary tree.
 * Return: 1 if it is full, 0 if tree is NULL or not full.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int check, balance;

	if (tree == NULL)
		return (0);
	balance = check_balance(tree);
	if (balance == 0)
		return (0);
	check = check_nodes(tree);
	if (check == 0)
		return (1);
	else
		return (0);
}

/**
 * check_balance - checks if the heights of both wings of a tree are equal
 * @tree: The binary tree.
 * Return: 1 if equal, 0 if not or tree is NULL
 */
int check_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = height_traverser(tree->left);
	right = height_traverser(tree->right);
	if (left == right)
		return (1);
	else
		return (0);
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

/**
 * check_nodes - checks all nodes to decide if the tree is perfect or not.
 * @tree: the tree.
 * Return: the summation of nodes, 0 if NULL.
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
