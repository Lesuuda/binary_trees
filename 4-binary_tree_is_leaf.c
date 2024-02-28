#include "binary_trees.h"
/**
 * binary_tree_is_leaf - creates a new_node of a binary tree
 * @node: the node to check if it is root
 * Return: 1 if it is a leaf and 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
