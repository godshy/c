#ifndef _List_H_

struct Node;                         //创建了一个数据类型叫Node
typedef struct Node *Pointer2Node;  //创建了一个指向这个结构体的指针变量 *Pointer2Node ，注意再struct中不能含有
                                   //未声明的ALIAS。在这里不是alias, 这里相当于int *Pointer2Node -> Node
typedef Pointer2Node List;
typedef Pointer2Node Position;

List MakeEmpty( List L);
int IsEmpty( List L);
int IsLast( Position P, List L);
Position Find( int X, List L);
void Delet( int X, List L);
Position FindPrevious( int X, List L);
void Insert( int X, List L, Position P);
void DeleteList( List L);
Position Header( List L);
Position First( List L);
Position Advance( Position P);
int Retrieve( Position P);


#endif


