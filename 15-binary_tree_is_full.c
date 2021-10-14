#include "binary_trees.c"
/**
 * binary_tree_is_full - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 or 9
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));
	else
		return (0);
}
