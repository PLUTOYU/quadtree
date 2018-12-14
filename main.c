#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "treeStructure.h"
#include "buildTree.h"
#include "writeTree.h"
#include "nodeValue.h"

int main( int argc, char **argv ) {

  Node *head;

  // make the head node
  head = makeNode( 0.0,0.0, 0 );

  // make a tree

  //task1-test1
  growtree(head);
  growtree(head);


  //task1-test2
  /*growtree(head);
  makeChildren(head->child[1]);
  removechild(head->child[1]);*/


  //task2-test1
  /*growtree(head);
  growtree(head);
  removechild(head->child[1]);*/


  //task2-text2
  /*growtree(head);
  makeChildren(head->child[1]);
  removechild(head->child[1]);*/


  //task3
  /*growtree(head);
  growtree(head);
  growtree(head);
  leavevalue(head);
  add=0;
  sub=0;
  change(head);
  printf("add nodes:%d\n",add);
  printf("remove nodes:%d\n",sub);*/

  //task3 extend
  /*growtree(head);
  growtree(head);
  growtree(head);
  adapt(head);*/


  // print the tree for Gnuplot
  writeTree( head );
  destroy(head);
  free(head);
  head=NULL;
  return 0;
}
