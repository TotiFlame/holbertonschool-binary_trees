#include "binary_trees.h"
/**
* binary_tree_uncle - finds the uncle of a node
*
* @node: pointer to the node to find the uncle
*
* Return: uncle node or NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL, *grandpa = NULL;

	if (!node || !node->parent)
		return (NULL);
	parent = node->parent;
	if (!parent->parent)
		return (NULL);
	grandpa = parent->parent;
	if (grandpa->left)
	{
		if (grandpa->left == parent)
		{
			if (grandpa->right)
				return (grandpa->right);
			else
				return (NULL);
		}
		else
			return (grandpa->left);
	}
	return (NULL);
}
