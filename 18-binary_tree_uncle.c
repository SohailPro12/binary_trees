#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent && node->parent->parent)
	{
		if (node->parent->parent->left && node->parent->parent->right)
		{
			if (node->parent == node->parent->parent->left)
				return (node->parent->parent->right);
			else
				return (node->parent->parent->left);
		}
	}
	return (NULL);
}
