#include "binary_trees.h"
/**
 * binary_tree_postorder - traverse a binary tree postorderly
 * @tree: the binary tree
 * @func: pointer to a function to call for each node
 *
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}