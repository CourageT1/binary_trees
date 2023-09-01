#include "binary_trees.h"

/**
 * binary_tree_postorder - Performs a post-order traversal on a binary tree.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each visited node.
 *
 * Description: This function traverses binary tree using postorder traversal,
 * which means it visits the left subtree, then right subtree, and finally the
 * root node. It calls the provided function for each visited node, passing the
 * value of the node as a parameter to the function.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}

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
