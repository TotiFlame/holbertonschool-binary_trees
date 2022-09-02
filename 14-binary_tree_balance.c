#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - Function that calculates balance factor of a tree.
 * @tree: Tree input.
 *
 * Return: Balance factor of tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree)
	{
		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
		return (left - right);
	}
	return (0);
}
