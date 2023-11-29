#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Description: The node created must not have any child
 * Return: a pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = NULL;
	if (parent)
		newnode->parent = parent;

	return (newnode);
}

