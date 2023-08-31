#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling.
 * Return: A pointer to the sibling node, or NULL if not found.
 *
 * Description: This function finds the sibling of given node in a binary tree.
 * If the node is NULL, the parent is NULL, or the node has no sibling,
 * the function returns NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
	return (NULL);

/* Determine whether the node is the left or right child of its parent*/
if (node == node->parent->left)
return (node->parent->right);
else
	return (node->parent->left);
}
