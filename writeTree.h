#ifndef WRITETREE_H_INCLUDED
#define WRITETREE_H_INCLUDED
#include "treeStructure.h"
extern void writeTree( Node *head );
extern void writeNode( FILE *fp, Node *node );
extern void printOut( FILE *fp, Node *node );

#endif // WRITETREE_H_INCLUDED
