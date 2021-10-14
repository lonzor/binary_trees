#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is the root
 * @node: node that is being checked to see if it's the root
 * Return: 1 or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!(node->parent))
		return (1);
	return (0);
}
