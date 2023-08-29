#include "binary_trees.h"
/**
 * binary_tree_inorder - traverse through the tree in inorder trasversal
 * @tree: Pointer to the root of the node
 * @func: pointer to fucntoin to call the nodes
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	};
} 
