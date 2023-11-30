#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 *@node: a pointer to the node to find the sibling
 *
 * Return: If node is NULL or the parent is NULL, return NULL
 *	If node has no sibling, return NULL
 */


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->right != node)
	{
		if (node->parent->right != NULL)
		{
			return (node->parent->right);
		}
		else
			return (NULL);
	}

	return (node->parent->left);
}
