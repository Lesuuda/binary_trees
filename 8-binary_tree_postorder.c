#include "binary_trees.h"
/**
 * binary_tree_postorder - deletes an entire binary tree
 * @tree: binary tree to delete
 * @func: function to call for each node
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
