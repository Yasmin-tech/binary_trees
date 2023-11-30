#include "binary_trees.h"

/**
 * binary_tree_size -  a function that measures the size of a binary tree
 *@tree: a pointer to the root node of the tree to measure the size of.
 *
 * Return: the size of the tree from the given root, or 0 if tree is NULL
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size = 1 + binary_tree_size(tree->left);
	size = size + binary_tree_size(tree->right);

	return (size);

}

/**
 *  binary_tree_is_perfect - a function that checks if a binary tree is perfect
 *@tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size_left = 0;
	size_t size_right = 0;

	if (!tree)
		return (0);

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	if (size_left == size_right)
		return (1);
	return (0);

}

