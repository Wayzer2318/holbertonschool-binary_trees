#include "binary_trees.h"
/**
 * binary_tree_insert_left - fuction that insert a new node at the left
 *
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if(!newnode)
		return (NULL);
	if(!parent)
		return (NULL);
	newnode->parent = parent;
	newnode->n = value;
	parent->left = newnode;
	return (newnode);
}
