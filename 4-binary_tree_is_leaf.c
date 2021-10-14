#include "binary_trees.h"
/**
 * binary_tree_is_leaf - returns 1 or zero
 * @node: the node that is being checked to see if it's a leaf
 * Return: 0 or 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left || node->right)
		return (0);
	else
		return (1);
}
