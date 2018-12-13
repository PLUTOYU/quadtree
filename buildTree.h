#ifndef BUILDTREE_H_INCLUDED
#define BUILDTREE_H_INCLUDED
#include "treeStructure.h"
extern void growtree(Node *node);
extern Node *makeNode( double x, double y, int level );
extern void makeChildren( Node *parent );
extern void destroy(Node *node);
extern void removechild(Node *parent);
#endif // BUILDTREE_H_INCLUDED
