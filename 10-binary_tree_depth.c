#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a binary tree
 *@tree: a pointer to the root node of the tree to measure the depth of.
 *
 * Return: the depth of the tree from the given root, or 0 if tree is NULL
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *node_parent;

	if (!tree)
		return (depth);

	node_parent = tree->parent;

	while (node_parent)
	{
		depth++;
		node_parent = node_parent->parent;
	}

	return (depth);

}
