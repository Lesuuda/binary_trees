#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the total numberof nodes in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left || tree->right)
	{
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
	}
	return (0);

}
