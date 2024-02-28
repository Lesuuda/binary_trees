#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the total numberof nodes in the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
