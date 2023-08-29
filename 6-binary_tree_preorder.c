#include "binary_trees.h"
/**
 * binary_tree_preorder - traverse through the tree in preorder trasversal
 * @tree: Pointer to the root of the node
 * @func: pointer to fucntoin to call the nodes
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	};
}
