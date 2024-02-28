#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the total numberof nodes in the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t sum = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->left == NULL || tree->right == NULL))
	{
		return (1);
	}
	sum = (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	return (sum);
}

