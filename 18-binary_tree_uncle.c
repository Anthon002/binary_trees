#include "binary_trees.h"
/**
 * binary_tree_t *binary_tree_uncle - function to find the uncle of a node
 * node: pointer to the node to find uncle
 * Return: pointer or 0
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent != NULL)
	{
		parent = node->parent;
		if (node == parent->left)
		{
			return parent->right;
		}
		else
		{
			return parent->left;
		}
	}
	return (NULL);
}
