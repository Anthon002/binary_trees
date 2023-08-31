#include "binary_trees.h"

/**
 * binary_tree_size -function to measures the size of a binary tree.
 * @tree:pointer to root node of the tree.
 * Return: 0 or size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t si = 0;

	if (tree)
	{
		si += 1;
		si += binary_tree_size(tree->left);
		si += binary_tree_size(tree->right);
	}

	return (si);
}
