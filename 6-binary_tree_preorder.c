#include "binary_trees.h"
/**
 * binary_tree_preorder - moves through a tree via pre-order trav
 * @tree: tree that needs to be printed
 * @func: the function passed through and needed to execute
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
