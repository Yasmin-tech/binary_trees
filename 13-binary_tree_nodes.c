#include "binary_trees.h"

/**
 * binary_tree_nodes - count the nodes with at least 1 child
 * in a binary tree
 * @tree: a pointer to the root node of the tree to count the
 * number of nodes
 *
 * Return: return the number of nodes of 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_parent = 0, right_parent = 0;

	if (!tree)
		return (0);
	left_parent = binary_tree_nodes(tree->left);
	right_parent = binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		return (1 + right_parent + left_parent);
	return (right_parent + left_parent);
}
