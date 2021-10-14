#include "binary_trees.h"
/**
 * binary_tree_height - finds the height of the binary tree (max)
 * @tree: the root
 * Return: size of the max height
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h > right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}
