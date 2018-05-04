#include <iostream>
int median(int v1, int v2,int v3)
{
	int r1=v1-v2;
	int r2=v1-v3;
	if((r1>0) && (r2>0))
		{
			if(r1>r2) return v3;
			else return v2;
		}
	else if((r1>0) && (r2<0)) ||((r1<0)&&(r2>0)) return v1;
		 else {
		 	if(r1>r2) return v2;
		 	else return v3;
		 }
		
}
unsigned count_of_bits(unsigned value)
{
	int k=0;
    while(value>1)
    {
    	k+=value0%2;
    	value/=2;
	}
	if(value==1) k+=1;
	return k;
}
struct node_t {
    node_t * next;
    int value;
};
node_t * node_from_back( node_t * head, unsigned int idx )
{
	unsigned int k=1;
	node_t * node =head;
	while(node!=nullptr) {
		node=node->next;
		k+=1;
	}   
	idx=(k-1-idx);
	for(int i=0;i<k-idx;++i)
	{
		head=head->next;
	}
	return head;
}
bool has_cycle( node_t * head )
{
    if (!head || !head->next)
	return false;
	node_t* slow = head;
	node_t* fast = head->next;
	while (slow && fast)
	{
		if (slow == fast)
		return true;
		slow = slow->next;
		fast = fast->next;
		if(fast)
		fast = fast->next;
	}
return false;
}
struct node2_t
{
    node_t * left;
    node_t * right;
    int value;
};

node2_t * mirror( node2_t * root )
{
    node2_t * mir=root;
    mirror(mir);
    return mir;
}
void mirror(node2_t * node)
{
  swap(node->left,node->right);
  if(node->left!=nullptr) mirror(node->left);
  if(node->right!=nullptr) mirror(node->right);
}
int main(int argc, char** argv) {
	return 0;
}
