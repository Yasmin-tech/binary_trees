#include "binary_trees.h"

/**
 * binary_tree_delete - delte an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 *
 * Description: if tree is NULL do nothing.
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/*binary_tree_t *temp_node;*/

	if (!tree)
		return;
	binary_tree_delete(tree->left);
	/*ee(tree);*/
	binary_tree_delete(tree->right);
	free(tree);
}
