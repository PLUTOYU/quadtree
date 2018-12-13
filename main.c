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
  makeChildren(head);
  growtree(head);
  growtree(head);
  //growtree(head);
  //growtree(head);
  //makeChildren(head->child[1]);
  // make a tree
  /*makeChildren( head );
  makeChildren( head->child[1] );
  makeChildren( head->child[2]);
  free(head->child[1]->child[0]);
  free(head->child[1]->child[1]);
  free(head->child[1]->child[2]);
  free(head->child[1]->child[3]);
  head->child[1]->child[0]=NULL;
  head->child[1]->child[1]=NULL;
  head->child[1]->child[2]=NULL;
  head->child[1]->child[3]=NULL;*/


  //makeChildren( head->child[1]->child[1] );
  // print the tree for Gnuplot
  //destroy(head);
  leavevalue(head);
  change(head);
  //removechild(head->child[2]->child[1]);
  writeTree( head );
  return 0;
}
