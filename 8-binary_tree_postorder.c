#include "binary_trees.h"
/**
 * binary_tree_inorder - moves through binary tree via postorder
 * @tree: tree that needs to be printed
 * @func: function that is passed through that needs to be ran
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
