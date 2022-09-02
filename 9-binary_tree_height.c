#include "binary_trees.h"
/**
* binary_tree_height - measures the height of a binary tree.
*
* @tree: is a pointer to the root node.
*
* Return: height or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		l++;
		binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		r++;
		binary_tree_height(tree->right);
	}
	return (l + r);
}
