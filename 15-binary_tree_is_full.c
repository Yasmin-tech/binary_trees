#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 *@tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* if the left and right children are NULL, tree is full */

	if (!tree->left && !tree->right)
		return (1);

	/* if both children exist, check that they're full */
	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	}

	/* if only one child is NULL, the tree is not full */
	return (0);
}

