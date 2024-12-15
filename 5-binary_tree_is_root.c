#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is the root of the tree
 * @node: Pointer to the node to check
 *
 * Return: 1 if the node is the root, otherwise 0. Returns 0 if node is NULL.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* If node is NULL, return 0 */
	if (node == NULL)
		return (0);

	/* If the node has no parent, it is the root */
	if (node->parent == NULL)
		return (1);

	/* Otherwise, return 0 */
	return (0);
}
