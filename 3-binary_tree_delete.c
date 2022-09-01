#include "binary_trees.h"

/**
 * binary_tree_delete - Function that deletes an entire binary tree.
 * @tree: Tree to delete.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left_child, *right_child;

	if (tree)
	{
		left_child = tree->left;
		right_child = tree->right;
		free(tree);
		binary_tree_delete(left_child);
		binary_tree_delete(right_child);
	}
}
