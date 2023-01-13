#include "binary_trees.h"
/**
 * binary_tree_is_leaf - func
 * @node: node to check
 * Return: nothing
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == 0)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
