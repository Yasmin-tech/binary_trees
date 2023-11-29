#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as the left child of another node
 * @parent: a pointer to the node to insert the left-child
 * @value: value to store in the new node
 *
 * Description: if parent already has a left-child, the new node
 * must take its place, and the old left-child must be set as
 * the left child of the nw node.
 *
 * Return: return a pointer to the created node or NULL on failure or if
 * parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *temp_node;

	if (!parent)
		return NULL;
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return NULL;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	if (parent->left)
	{
		temp_node = parent->left;
		parent->left = newnode;
		newnode->left = temp_node;
		temp_node->parent = newnode;
		newnode->parent = parent;
	}
	else
	{
		parent->left = newnode;
		newnode->parent = parent;
	}
	return (newnode);
}

