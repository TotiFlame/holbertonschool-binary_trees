#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as the
* left-child of another node.
*
* @parent: is a pointer to the node to insert
* the left-child in.
* @value: is the value to store in the new node
*
* Return: pointer to the created node, or NULL on failure
* or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL, *leftnode = NULL;

	if (!parent)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);
	if (parent->left)
	{
		leftnode = parent->left;
		newnode->left = leftnode;
		leftnode->parent = newnode;
	}
	else
		newnode->left = NULL;
	parent->left = newnode;
	newnode->n = value;
	newnode->parent = parent;
	newnode->right = NULL;

	return (newnode);
}
