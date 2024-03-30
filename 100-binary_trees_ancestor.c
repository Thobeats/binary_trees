#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor for both
 *			nodes.
 * @first: the first node.
 * @second: the second node.
 *
 * Return: a pointer to the ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	if ((first == NULL) || (second == NULL))
		return (NULL);
	return (find_ancestor(first, second));
}
/**
 * find_ancestor - finds the common ancestor
 *					-> if a->parent == b->parent => a->parent
 *					-> if a == b->parent => a
 *					-> if a->parent == b => b
 * @firstNode: the first Node
 * @secondNode: the econd Node
 *
 * Return: the ancestor
 */

binary_tree_t *find_ancestor(const binary_tree_t *firstNode,
							const binary_tree_t *secondNode)
{
	if (firstNode->parent == NULL && secondNode->parent == NULL)
	{
		return (NULL);
	}

	if (firstNode == secondNode)
	{
		return ((binary_tree_t *)firstNode);
	}

	if (firstNode->parent == NULL || firstNode == secondNode->parent
		|| (!firstNode->parent->parent && secondNode->parent))
	{
		return (find_ancestor(firstNode, secondNode->parent));
	}

	if (secondNode->parent == NULL || secondNode == firstNode->parent
		|| (!secondNode->parent->parent && firstNode->parent))
	{
		return (find_ancestor(secondNode, firstNode->parent));
	}

	return (find_ancestor(firstNode->parent, secondNode->parent));

}
