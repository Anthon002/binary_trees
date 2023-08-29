#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check is a node is a leaf
 * @node: pointer to the node
 * Return: 1 or 0 if leaf or not respectively
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	};
	if (node->left == NULL || node->right == NULL)
	{
		return(1);
	}
	return (0);
}
