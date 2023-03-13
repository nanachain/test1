#include<cstdio>
#include<iostream>
#include <memory>
#include<vector>
#include<cstring>
using namespace std;

// class quadnode_t
// {
//     public:
//       //  quadrect_t rect;				//节点所代表的矩形区�??
//       //  list_t *list_object;			//节点数据, 节点类型一般为链表，可存储多个对象
//         std::vector<std::unique_ptr<quadnode_t>> children;
//         quadnode_t(){
//             children.reserve(4);
//         }

//        // struct quadnode_t *children[4]; //指向节点的四个孩�??
// } quadnode_t;
typedef struct list_t{
  int  jz;
  struct list_t *next;
}list_t;

int main(){
  char s[10]={0},c[10]={0};
  scanf("%s%s",s,c);
  cout<<s<<'\n';
  cout<<c<<'\n';
  if(strcmp(s,c)) cout<<"xinagtong";
  else cout<<"butong";
  cout<<s<<'\n';
  cout<<c<<'\n';
  return 0;
}

    