
#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height_factor(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			l = tree->left ? 1 + binary_tree_height_factor(tree->left) : 1;
			r = tree->right ? 1 + binary_tree_height_factor(tree->right) : 1;
		}
		return ((l > r) ? l : r);
	}
}
#include "binary_trees.h"
int binary_tree_balance(const binary_tree_t *tree)
{
    int left = 0, right = 0, total = 0;

    if (tree == NULL)
    {
        return (0);
    }
    if (tree)
    {
        left = (int) binary_tree_height_factor(tree->left);
        right = (int) binary_tree_height_factor(tree->right);
        total  = left - right;
    }
    return (total);
}