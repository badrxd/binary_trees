#include "binary_trees.h"

/**
* binary_tree_uncle- function
* @node: pointer
*
* Return: return uncle
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *g_parent, *parent;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	g_parent = node->parent->parent;
	parent = node->parent;
	if (g_parent->left && g_parent->right)
	{
	if (g_parent->left == parent)
		return (g_parent->right);
	else
		return (g_parent->left);
	}
	else
		return (NULL);
}
