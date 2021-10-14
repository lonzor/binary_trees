#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts node to the left
 * @parent: the parent node
 * @value: value to be added to node
 * Return: point to the node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;

	if (parent->left)
	{
		new_node->left = parent->left;
		new_node->parent = parent;
		parent->left->parent = new_node;
		parent->left = new_node;
		new_node->right = NULL;
	}

	else
	{
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
	}
	return (new_node);
}
