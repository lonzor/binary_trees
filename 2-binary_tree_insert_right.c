#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts node to the left
 * @parent: parent node
 * @value: value that gets added to new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);
	new_node->n = value;

	if (parent->right)
	{
		new_node->right = parent->right;
		new_node->parent = parent;
		parent->right->parent = new_node;
		parent->right = new_node;
		new_node->left = NULL;
	}
	else
	{
		parent->right = new_node;
		new_node->parent = parent;
		new_node->right = NULL;
		new_node->left = NULL;
	}
	return (new_node);
}
