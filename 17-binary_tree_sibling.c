#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a leaf
 * @node: aka leaf, that will be finding a sibling to
 * Return: pointer to sibling node
 **/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->right == NULL)
		return (NULL);
	else if (node->parent->left->n == node->n)
		return (node->parent->right);
	else
		return (node->parent->left);
}
