#include "binary_trees.h"
/**
* binary_tree_leaves - counts the leaves
* in a binary tree
*
* @tree: pointer to the root node of the tree
* to count the number of leaves
*
* Return: leaves or NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (0);
	if (tree->left)
		i += 1;
	if (tree->right)
		i += 1;
	if (i == 0)
		i += 1;
	return (i);
}
