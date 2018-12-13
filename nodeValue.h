#ifndef NODEVALUE_H_INCLUDED
#define NODEVALUE_H_INCLUDED
#define maxlevel 6
extern void leavevalue(Node *node);
extern void change(Node *parent);
extern double nodeValue( Node *node, double time );
extern double value( double x, double y, double time );
extern void adapt( Node *head );
int add;
int sub;

#endif // NODEVALUE_H_INCLUDED
