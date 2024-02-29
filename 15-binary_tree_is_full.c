#include "binary_trees.h"
/**
 * binary_tree_is_full - finds the sibling of a node.
 *@tree: pointer to the node to find the sibling.
 * Return: true or false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	return ((left == 0  && right == 0) || (left && right));
}
