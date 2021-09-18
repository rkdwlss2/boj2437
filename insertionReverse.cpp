////
////  insertionReverse.cpp
////  boj2437
////
////  Created by 강명진 on 2021/09/04.
////
//
//#include <iostream>
//#include <map>
//#include <vector>
//using namespace std;
//
//
//
//struct Node{
//    int key;
//    int priority,size;
//    Node *left,*right;
//    Node(const int& _key):key(_key),priority(rand()),size(1),left(NULL),right(NULL){
//    }
//    void setLeft(Node* newLeft){
//        left=newLeft;
//        calcsize();
//    }
//    void setRight(Node* newRight){
//        right=newRight;
//        calcsize();
//    }
//    void calcsize(){
//        size=1;
//        if (left)size+=left->size;
//        if (right)size+=right->size;
//    }
//};
//
//typedef pair<Node*,Node*> NodePair;
//
//NodePair split(Node* root, int key){
//    if (root==NULL)return NodePair(NULL,NULL); //root가  null이면 아무것도 없는 것임
//
//    if (root->key<key){//root의 키가 key보다 작으면
//        NodePair rs =split(root->right,key);//오른쪽을 분해해서 key보다 작은 것은 root에 right에 붙이고
//        root->setRight(rs.first);//
//        return NodePair(root,rs.second);//반환할때 key보다 작은것을 붙인 root와, 나머지를 반환한다
//    }
//    NodePair ls=split(root->left,key);
//    root->setLeft(ls.second);
//    return NodePair(ls.first,root);
//}
//
//
//Node* insert(Node* root,Node* node){ // insert할때 root와 node를 입력한다
//    if (root==NULL)return node;
//    if (root->priority<node->priority){//root보다 insert 할 node의 priority가 높을 경우
//        NodePair splitted=split(root,node->key); //두개를 node의 key로 나누고
//        node->setLeft(splitted.first);
//        node->setRight(splitted.second);
//        return node;//return
//    }
//    else if (node->key<root->key){//priority로 구분후 작을 경우는 node의 키가 root보다 작을 경우에는
//        root->setLeft(insert(root->left,node));//left에 넣고
//    }else{
//        root->setRight(insert(root->right,node));//root의 키보다 node의 키가 크보다 같으면 오른쪽에 넣는다
//    }
//    return root;
//}
//
//Node* merge(Node* a,Node* b){// 두 노드를 합칠때
//    if (a==NULL)return b;
//    if (b==NULL)return a;
//    if (a->priority<b->priority){//a의priority가 b보다 작을때는
//        b->setLeft(merge(a,b->left));//b에 왼쪽에 넣기 때문에 b의 왼쪽과 a와 머지한것을 넣는다
//        return b;
//    }
//    a->setRight(merge(a->right,b));
//    return a;
//}
//
//Node* erase(Node* root,int key){
//    if (root==NULL)return root;
//    if (root->key==key){ //key node를 찾으면
//        Node* ret=merge(root->left,root->right);//합치고
//        delete root;
//        return ret;//반환한다.
//    }
//    if (key<root->key){//key보다 루트의 키가 더 크면
//        root->setLeft(erase(root->left,key));//key는 root의 왼쪽에 있기 때문에 더 탐색한다.
//    }else{
//        root->setRight(erase(root->right,key));//위의 반대
//    }
//    return root;
//}
//
//Node* kth(Node* root,int k){
//    int leftSize=0;
//    if (root->left!=NULL)leftSize=root->left->size;//왼쪽이 있으면 leftSize는 자기 왼쪽 사이즈를 바로 반환해서 저장
//    if (k<=leftSize) return kth(root->left,k);//left보다 작을때
//    if (k==leftSize+1) return root;
//    return kth(root->right,k-leftSize-1);//이제 나머지를 찾아야 해서 이렇게 구현
//}
//
//
//int n,shifted[50000];
//int A[50000];
//void solve(){
//    Node* can=NULL;
//    for (int i = 0 ; i<n;++i){
//        can=insert(can,new Node(i+1));
//    }
//    for (int i = n-1;i>=0;i--){
//        int lar=shifted[i];
//        Node* k=kth(can,i+1-lar);
//        A[i]=k->key;
//        can=erase(can,k->key);
//    }
//}
//
//
//int main(){
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int tc;
//    cin>>tc;
//    while(tc--){
//        cin>>n;
//        for (int i = 0 ;i<n;i++){
//            cin>>shifted[i];
//        }
//        solve();
//        for (int i = 0 ; i<n;i++){
//            cout<<A[i]<<' ';
//        }
//        cout<<'\n';
//    }
//}
