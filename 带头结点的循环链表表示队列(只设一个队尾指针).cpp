//带头结点的循环链表表示队列
//只设一个指针指向队尾结点，不设头指针
//入队，出队算法
LNODE rear;//尾指针
void inqueue(LNODE rear,data x){//data表示类型,x表示入队元素
	//入队
	//链表表示队列不存在队满
	LNODE *P=(LNODE *)malloc(sizeof(LNODE));
	p->next=rear->next;
	p->data=x;
	rear->next=p;
	rear=p;//重定队尾
}
void outqueue(LNODE rear,data &x){//x接收出队元素
	LNODE *p;
	//要判断队列是否为空
	if (rear->next=rear)
		return 0;//队列为空表示出队失败
	else {
		p=rear->next->next;
		rear->next->next=p->next;
		x=p->data;
		if (p==rear)//出队后如果队列为空，则将队尾指针指向头结点
			rear=rear->next;
		free(p);
		return 1;
	}
}