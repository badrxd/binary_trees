#include "binary_trees.h"

/**
* binary_tree_insert_left - function for insert a child in left
* @parent: pointer of child parent
* @value: child value
* Return: return poinrt of the new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = parent->left;
	node->right = NULL;
	if (parent->left)
		parent->left->parent = node;
	parent->left = node;
	return (node);
}
