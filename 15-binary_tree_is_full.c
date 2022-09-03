#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a Btree is full.
 * @tree: Tree input.
 *
 * Return: 1 if tree is full, 0 otherwise.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int isFull = 0;

	if (tree)
	{
		if (tree->left && tree->right)
		{
			isFull = 1;
			isFull *= binary_tree_is_full(tree->left);
			isFull *= binary_tree_is_full(tree->right);
		}
		else if (!tree->left && !tree->right)
			isFull = 1;
	}
	return (isFull);
}
