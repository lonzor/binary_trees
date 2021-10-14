#include "binary_trees.h"
/**
 * binary_tree_size - finds the size of a binary tree
 * @tree: root of tree
 * Return: size of the tree
 **/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);
	return (size);
}
