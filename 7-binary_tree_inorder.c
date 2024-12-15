#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node. The node's value must
 *        be passed as a parameter to this function
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if the tree or func is NULL, do nothing in that case */
	if (tree == NULL || func == NULL)
		return;

	/* Traverse the left subtree */
	binary_tree_inorder(tree->left, func);

	/* Visit the root node */
	func(tree->n);

	/* Traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}
