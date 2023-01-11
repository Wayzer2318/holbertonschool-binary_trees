#include "binary_trees.h"
/**
 * binary_tree_insert_left - fuction that insert a new node at the left
 * @value: value of node
 * @parent: parent of the node
 * Return: new node on the left of parent
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);
	newnode->parent = parent;
	newnode->n = value;
	newnode->right = NULL;
	newnode->left = NULL;

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		parent->left->parent = newnode;
	}
	parent->left = newnode;
	return (newnode);
}
