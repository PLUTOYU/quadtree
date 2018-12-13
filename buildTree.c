#include "stdio.h"
#include "stdlib.h"
#include "treeStructure.h"
#include "buildTree.h"
#include "writeTree.h"
#include "math.h"
#include "nodeValue.h"

void growtree(Node *node){
    int i=0;
    if(node->child[0]!=NULL){
        for(i=0;i<4;i++)
            growtree(node->child[i]);
    }
    else{
            makeChildren(node);
        }
    return;
}
void destroy(Node *node){
    int i=0;
    int level=node->level;
    /*if(level==0){
        free(node);
        node==NULL;
    }*/
    if(node->child[0]==NULL){
       return;
    }
    if(node->child[0]!=NULL){
        for(i=0;i<4;++i){
            destroy(node->child[i]);
            free(node->child[i]);
            node->child[i]=NULL;
        }
        return;
    }
}
void removechild(Node *parent){
    int i=0;
    /*int level=parent->level;
    if(parent->child[0]!=NULL){
        for(i=0;i<4;++i){
            removechild(parent->child[i]);
            free(parent->child[i]);
            parent->child[i]=NULL;
        }
        return;
    }
    if(parent->child[0]==NULL){
        for(i-0;i<4;i++){
            free(parent->child[i]);
            parent->child[i]=NULL;
        }
        return;
    }*/
    for(i=0;i<4;i++){
        free(parent->child[i]);
        parent->child[i]=NULL;
    }
}

// make a node at given location (x,y) and level

Node *makeNode( double x, double y, int level ) {

  int i;

  Node *node = (Node *)malloc(sizeof(Node));

  node->level = level;

  node->xy[0] = x;
  node->xy[1] = y;

  for( i=0;i<4;++i )
    node->child[i] = NULL;

  return node;
}

// split a leaf nodes into 4 children

void makeChildren( Node *parent ) {

  double x = parent->xy[0];
  double y = parent->xy[1];

  int level = parent->level;

  double hChild = pow(2.0,-(level+1));

  parent->child[0] = makeNode( x,y, level+1 );
  parent->child[1] = makeNode( x+hChild,y, level+1 );
  parent->child[2] = makeNode( x+hChild,y+hChild, level+1 );
  parent->child[3] = makeNode( x,y+hChild, level+1 );

  return;
}
