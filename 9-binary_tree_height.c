#include "binary_trees.h"
/**
 *
 *
 *
 *
*/size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t heightLeft = 0;
    size_t heightRight = 0;
    if (!tree)
        return (0);
    heightLeft = binary_tree_height(tree->left);
    heightRight = binary_tree_height(tree->right);
    if (leftHeight >= rightHeight)
        return (leftHeight + 1);
    else
        return (rightHeight + 1);

}