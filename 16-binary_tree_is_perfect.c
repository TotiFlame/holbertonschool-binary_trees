#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "15-binary_tree_is_full.c"
#include "12-binary_tree_leaves.c"

/**
 * binary_tree_is_perfect - Function that checks if a Btree is full.
 * @tree: Tree input.
 *
 * Return: 1 if tree is perfect, 0 otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_is_full(tree))
	{
		if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		{
			return (binary_tree_leaves(tree->left) == binary_tree_leaves(tree->right));
		}
	}
	return (0);
}
