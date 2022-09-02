#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using post-order traversal.
 * @tree: Tree input.
 * @func: Function to execute with each node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		binary_tree_inorder(tree->right, func);	
		(*func)(tree->n);
	}
}
