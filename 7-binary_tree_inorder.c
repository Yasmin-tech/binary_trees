#include "binary_trees.h"

/**
 * binary_tree_inorder -  a function that goes through a binary tree using
 *	in_order traversal
 *@tree: a pointer to the root node of the tree to traverse
 *@func: a pointer to a function to call for each node.
 *the value in the node will be passed as a parameter to this function.
 *
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
