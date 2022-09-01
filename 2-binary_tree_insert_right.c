#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the
* right-child of another node.
*
* @parent: is a pointer to the node to insert
* the right-child in.
* @value: is the value to store in the new node
*
* Return: pointer to the created node, or NULL on failure
* or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL, *rightnode = NULL;

	if (!parent)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);
	if (parent->right)
	{
		rightnode = parent->right;
		newnode->right = rightnode;
		rightnode->parent = newnode;
	}
	else
		newnode->right = NULL;
	parent->right = newnode;
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;

	return (newnode);
}
