#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling.
 * Return: A pointer to the sibling node, or NULL if not found.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
	return (NULL);

if (node == node->parent->left)
	return (node->parent->right);
else
	return (node->parent->left);
}

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: A pointer to the node to find the uncle.
 * Return: A pointer to the uncle node, or NULL if not found.
 *
 * Description: This function finds the uncle of a given node in a binary tree.
 * The uncle is the sibling of the parent of the node. If the node is NULL,
 * the parent is NULL, or the node has no uncle, the function returns NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
	return (NULL);

return (binary_tree_sibling(node->parent));
}
