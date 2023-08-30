#include "binary_trees.h"

/**
 * binary_tree_inorder - Through binary tree usingbin-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer function to each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
