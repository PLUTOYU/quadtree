#include "stdio.h"
#include "stdlib.h"
#include "treeStructure.h"
#include "buildTree.h"
#include "writeTree.h"
#include "math.h"
#include "nodeValue.h"

int main( int argc, char **argv ) {

  Node *head;

  // make the head node
  head = makeNode( 0.0,0.0, 0 );
  //makeChildren(head);
  growtree(head);
  growtree(head);
  growtree(head);
  //growtree(head);
  //makeChildren(head->child[1]);
  // make a tree

  // print the tree for Gnuplot

  leavevalue(head);
  //change(head);
  //print(head);
  adapt(head);
  //int level;
  //removechild(head->child[1]);
  //destroy(head);
  writeTree( head );
  return 0;
}
