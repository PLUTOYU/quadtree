#include "math.h"
#include "stdio.h"
#include "stdlib.h"
#include "treeStructure.h"
#include "buildTree.h"
#include "writeTree.h"
#include "nodeValue.h"


//judge each nodes' flag
void leavevalue(Node *node){
  int i;
  float Value;
  double time=0.0;
  if(node->child[0]==NULL){

        Value=nodeValue(node,time);
        if(Value>0.5)
            node->flag=1;
        else if(Value<-0.5)
            node->flag=-1;
  }
  else{
    for(i=0;i<4;++i){
        leavevalue(node->child[i]);
    }
  }
  return;
}
//use flag to add or remove children
void change(Node *parent){
    int i;
    if(parent->child[0]==NULL){
        if(parent->flag==1&&parent->level<maxlevel){
               growtree(parent);
               add=add+4;
            }
    }
    else{
        if(parent->child[0]->flag==-1&&parent->child[1]->flag==-1&&parent->child[2]->flag==-1&&parent->child[3]->flag==-1)
        {
                    removechild(parent);
                    sub=sub+4;
        }
        else {
            for(i=0;i<4;++i)
            change(parent->child[i]);
        }
    }
}
//running task3 until the tree does not change
void adapt( Node *head ){
  do{
        leavevalue(head);
        p(head);
  }while(add!=0&&sub!=0);
}

//print the value of add and remove
void p(Node *head){
  add=0;
  sub=0;
  change(head);
  //adapt(head);
  printf("add nodes:%d\n",add);
  printf("remove nodes:%d\n",sub);
  return;
}


// Evaluate function at centre of quadtree node
double nodeValue( Node *node, double time ) {

  int level = node->level;
  double x = node->xy[0];
  double y = node->xy[1];

  double h = pow(2.0,-level);

  return( value( x+0.5*h, y+0.5*h, time ) );
}

// Data function

double value( double x, double y, double time ) {

  return( 2.0*exp(-8.0*(x-time)*(x-time)) - 1.0 ) ;
}

