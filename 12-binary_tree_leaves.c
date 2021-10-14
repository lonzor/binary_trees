#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the amount of leaves in binary tree
 * @tree: the tree that is counted from
 * Return: count of leaves
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t cnt;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	cnt = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	return (cnt);
}
