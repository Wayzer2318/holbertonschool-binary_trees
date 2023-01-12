#include "binary_trees.h"
/**
 * binary_tree_postorder - post order the tree
 * @tree: tree to inorder
 * @func: function to execute
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
