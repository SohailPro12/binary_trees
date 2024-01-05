#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: the binary tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
