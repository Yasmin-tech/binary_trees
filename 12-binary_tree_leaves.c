#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 *@tree: a pointer to the node to count the leaves nodes for.
 *
 * Return: the number of leaves. or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (tree->left)
		leaves = 0 + binary_tree_leaves(tree->left);
	if (tree->right)
		leaves = leaves + binary_tree_leaves(tree->right);
	else
		return (1);

	return (leaves);
}
