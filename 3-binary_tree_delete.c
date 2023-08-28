#include "binary_trees.h"
/**
 * binary_tree_delete - delets an entire binary tree
 * @tree: the tree to be deleted
 * Return: NULL
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	};
}
