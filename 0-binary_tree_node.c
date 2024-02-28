#include"binary_trees.h"
/**
 * binary_tree_node - creates a new_node of a binary tree
 * @parent: root node of the binary tree
 * @value: value of the node
 * Return: the newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	return (new_node);
}
