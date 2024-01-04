#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: the binary tree nodes
 * @value: the value of the node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		perror("Failed to allocate memory for new node");
		return (NULL);
	}
	struct binary_tree_s  *temp;

	new_node->parent = parent;
	new_node->n = value;
	if (parent->left)
	{
		temp = parent->left;
		parent->left = new_node;
		new_node->left = temp;
	}
	new_node->right = NULL;
	return (new_node);
}
