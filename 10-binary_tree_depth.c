#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: node that is used to find depth
 * Return: size_t depth
 **/
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;

	if (node == NULL)
		return (0);

	depth = 0;
	while (node->parent)
	{
		depth++;
		node = node->parent;
	}
	return (depth);
}
