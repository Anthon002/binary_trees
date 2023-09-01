#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a  binary tree node
 * @parent: pointer to the parent node
 * @value: value of the node
 * Return: Null or pointer to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node != NULL)
	{
		new_node->parent = parent;
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;

		return (new_node);
	}
	else
	{
		return (NULL);
	};
}
