#include "binary_trees.h"
/**
 * binary_tree_preorder - preorder the tree
 * @tree: tree to order
 * @func: function to execute
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		bianry_tree_preorder(tree->right, func);
	}
	
}