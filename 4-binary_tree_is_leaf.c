#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that checks if a node on a tree is a leaf.
 * @node: Node to check.
 *
 * Return: 1 if node is a leaf 0 otherwise.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->left && !node->right)
			return (1);
	}
	return (0);
}
