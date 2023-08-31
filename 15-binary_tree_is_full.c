#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 1 if the tree is full, 0 otherwise.
 *
 * Description: This function recursively checks if a binary tree is full,
 * which means every node in the tree has either zero or two children.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
/*Base case: An empty tree is considered full*/
if (tree == NULL)
	return (1);

/* If a node has only one child, the tree is not full*/
if ((tree->left == NULL && tree->right != NULL) ||
		(tree->left != NULL && tree->right == NULL))
		return (0);

/* Recursively check left and right subtrees*/
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
