#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 * Return: The size of the tree, or 0 if tree is NULL.
 *
 * Description: This function recursively measures the size of a binary tree,
 * which is the total number of nodes in the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);

return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
