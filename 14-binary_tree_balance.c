#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * 			i.e the difference between the height of the 
 * 			children node (left node - right node)
 * @tree: the binary tree
 *
 * Return: the height of the tree, 0 if tree is NULL
 *
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance;

	if (tree == NULL)
		return (0);
	balance = height_traverser(tree->left) - height_traverser(tree->right);

	return (balance);
}

/**
 * height_traverser - gets the height of the tree
 * @tree: the tree
 * Return: the height of the tree
i */
size_t height_traverser(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left = (1 + height_traverser(tree->left));
	else
		left = 1;
	if (tree->right)
		right = (1 + height_traverser(tree->right));
	else
		right = 1;
	if (left > right)
		return (left);
	return (right);
}
