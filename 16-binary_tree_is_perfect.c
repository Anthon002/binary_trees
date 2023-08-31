#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 or 0 ir perfect not perfect or Null
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t ht = 0;
	size_t nds = 0;
	size_t pow = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	ht = binary_tree_height(tree);
	nds = binary_tree_size(tree);

	pow = (size_t)_pow_recursion(2, ht + 1);
	return (pow - 1 == nds);
}

/**
 *_pow_recursion - helper fuction to return the power
 *@a: base value
 *@b: power value
 *Return: power
 */

int _pow_recursion(int a, int b)
{
	if (a < 0)
		return (-1);
	if (b == 0)
		return (1);
	else
		return (a * _pow_recursion(a, b - 1));

}

/**
 * binary_tree_size -function to measure the size of a binary tree
 * @tree: pointer to tree to measure the size of
 * Return:0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height -function to  measure the height of a binary tree
 * @tree: pointer tree to measure the height 
 * Return:0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ht_l = 0;
	size_t ht_r = 0;

	if (!tree)
		return (0);

	ht_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	ht_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (ht_l > ht_r ? ht_l : ht_r);
}
