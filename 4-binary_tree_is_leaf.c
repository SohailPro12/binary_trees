#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - deletes an entire binary tree
 * @node: the binary tree node
 * Return: 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (!node->left && !node->right)
		return (1);

	return (0);
}
