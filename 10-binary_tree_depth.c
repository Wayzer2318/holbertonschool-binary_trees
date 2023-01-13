#include "binary_trees.h"
/**
 *
 *
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
	{
		int ldepth = binary_tree_depth(tree->left);
		int rdepth = binary_tree_depth(tree->right);

		if(ldepth > rdepth)
			return (ldepth + 1);
		else
			return (rdepth + 1);
	}
}
