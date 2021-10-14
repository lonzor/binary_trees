#include "binary_trees.h"
/**
 * diff_heights - finds difference between the heights of left and right nodes
 * @tree: root of binary tree
 * Return: the height of the branches in binary tree
 **/
int diff_heights(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (-1);

	left_h = diff_heights(tree->left) + 1;
	right_h = diff_heights(tree->right) + 1;
	if (left_h > right_h)
		return (left_h);
	else
		return (right_h);
}
/**
 * binary_tree_balance - measures balance in binary tree
 * @tree: where balance measuring starts (root)
 * Return: the balance of binary tree
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
	int tree_left, tree_right, balance;

	if (tree == NULL)
		return (0);

	tree_left = diff_heights(tree->left);
	tree_right = diff_heights(tree->right);
	balance = tree_left - tree_right;
	return (balance);
}
