#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count nodes.
 * Return: The number of nodes with at least 1 child, or 0 if tree is NULL.
 *
 * Description: This function recursively counts number of nodes in binary tree
 * that have at least one child (either left or right child or both).
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);

if (tree->left != NULL || tree->right != NULL)
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

return (0); /*The node has no children, so it's not counted*/
}