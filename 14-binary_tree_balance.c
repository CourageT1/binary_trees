#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 * Return: The height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (tree == NULL)
	return (0);

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

return ((left_height > right_height ? left_height : right_height) +1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 * Return: The balance factor of the tree, or 0 if tree is NULL.
 *
 * Description: This function calculates the balance factor of a binary tree
 * by subtracting the height of the left subtree from the height of the right
 * subtree for the given root node.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height, right_height;

if (tree == NULL)
	return (0);

left_height = (int)binary_tree_height(tree->left);
right_height = (int)binary_tree_height(tree->right);

return (left_height - right_height);
}
