#include "binary_trees.h"
/**
* binary_tree_size - measures the size of a binary tree
*
* @tree: pointer to the root node of the tree
* to measure the size
*
* Return: the size or NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l = binary_tree_size(tree->left);
	if (tree->right)
		r = binary_tree_size(tree->right);
	return ((l + r) + 1);
}
