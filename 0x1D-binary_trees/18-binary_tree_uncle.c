#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the sibling of a node
 * @node: is a pointer to the node to find the sibling.
 * Return: sibling node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || !node->parent->parent)
		return (NULL);

	if (node->n < node->parent->n)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}
