#include "binary_trees.h"
/**
 *
 *
 *
 *
*/size_t binary_tree_height(const binary_tree_t *tree)
{
    if (!tree)
        return (0);
    size_t heightLeft = binary_tree_height(tree->left);
    size_t heightRight = binary_tree_height(tree->right);
    if (heightLeft >= heightRight)
        return heightLeft + 1;
    else
        return heightRight + 1;

}
