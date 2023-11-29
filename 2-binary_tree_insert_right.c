#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right child of another node
 * @parent: a pointer to the node to insert the right child in
 * @value value to store in the new node
 * 
 * Description: if parent already has a right child, the new node must take its
 * place, and the old right child must be set as the right-child of the new node
 *
 * Return: return a pointer to the created node or NULL on failure or if
 * parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *temp_node;

	if (!parent)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	if (parent->right)
	{
		temp_node = parent->right;
		parent->right = newnode;
		newnode->parent = parent;
		newnode->right = temp_node;
		temp_node->parent = newnode;
	}
	else
	{
		parent->right = newnode;
		newnode->parent = parent;
	}
	return (newnode);
}
