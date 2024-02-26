#include "binary_trees.h"
/**
 * binary_tree_is_root - creates a new_node of a binary tree
 * @node: the node to check if it is root
 * Return: 1 if it is a root and 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	return (node->parent == NULL);
}
