#ifndef NODEVALUE_H_INCLUDED
#define NODEVALUE_H_INCLUDED
extern void leavevalue(Node *node);
extern void change(Node *parent);
extern double nodeValue( Node *node, double time );
extern double value( double x, double y, double time );

#endif // NODEVALUE_H_INCLUDED
