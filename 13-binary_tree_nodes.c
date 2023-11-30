#include "binary_trees.h"

/**
 * binary_tree_nodes -  a function that counts the nodes
 *	with at least 1 child in a binary tree
 *@tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: the numbers of nodes wiht at least 1 child, 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t has_child = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		has_child = 1 + binary_tree_nodes(tree->left);
	}
	if (tree->right)
	{
		if (has_child)
			has_child = has_child + binary_tree_nodes(tree->right);
		else
			has_child = 1 + binary_tree_nodes(tree->right);
	}
	else
		return (0);

	return (has_child);
}
