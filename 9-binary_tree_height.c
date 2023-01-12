#include "binary_trees.h"
/**
 *
 *
 *
 *
*/size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    int leftHeight = binary_tree_height(tree->left);
    int rightHeight = binary_tree_height(tree->right);
    if (leftHeight >= rightHeight)
        return (leftHeight + 1);
    else
        return (rightHeight + 1);

}
