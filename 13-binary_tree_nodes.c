#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts no of nodes with children in binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: The number of nodes with at least one child in the tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t rnodes, lnodes, nodes;

	if (tree == NULL)
		return (0);
	else if (tree->left != NULL || tree->right != NULL)
	{
		lnodes = binary_tree_nodes(tree->left);
		rnodes = binary_tree_nodes(tree->right);
		nodes = 1 + lnodes + rnodes;
		return (nodes);
	}
	else
	{
		lnodes = binary_tree_nodes(tree->left);
		rnodes = binary_tree_nodes(tree->right);
		return (lnodes + rnodes);
	}
}
