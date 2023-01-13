#include "binary_trees.h"
/**
 *
 *
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t		r;
	binary_tree_t	*p;

	r = 0;
	p = (binary_tree_t *) (void *) tree;
	while (p && p->parent)
	{
		p = p->parent;
		r++;
	}
	return (r);}
