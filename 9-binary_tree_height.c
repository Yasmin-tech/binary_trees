#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 *@tree: a pointer to the root node of the tree to measure the height of.
 *
 * Return: the height of the tree from the given root, or 0 if tree is NULL
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		height_right = 1 + binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left);

	return (height_right);
}
