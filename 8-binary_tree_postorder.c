#include "binary_trees.h"

/**
 * binary_tree_postorder - Go through binary tree using post-order traversal
 * @tree: pointer to the root of the tree
 * @func: pointer function to call each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
