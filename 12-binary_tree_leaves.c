#include "binary_trees.h"

/**
 * binary_tree_leaves -function to count the leaves in a binary tree.
 * @tree: pointer to root node
 * Return: 0 or leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lvs = 0;

	if (tree)
	{
		lvs += (!tree->left && !tree->right) ? 1 : 0;
		lvs += binary_tree_leaves(tree->left);
		lvs += binary_tree_leaves(tree->right);
	}

	return (lvs);
}
