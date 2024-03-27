#include "binary_trees.h"
/**
 * binary_tree_inorder - traverse a binary tree inorderly
 * @tree: the binary tree
 * @func: pointer to a function to call for each node
 *
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left)
		binary_tree_inorder(tree->left, func);
	func(tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
