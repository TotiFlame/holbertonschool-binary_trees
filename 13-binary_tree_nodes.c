#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child.
 * @tree: Tree input.
 *
 * Return: Number of nodes with at least one child.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		if (tree->left || tree->right)
		{
			size += 1;
			size += binary_tree_nodes(tree->left);
			size += binary_tree_nodes(tree->right);
		}
	}
	return (size);
}
