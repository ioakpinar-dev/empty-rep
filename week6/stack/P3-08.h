/*	================= pushStack ================	This function pushes an item onto the stack.	   Pre     stack is a pointer to the stack	           dataPtr pointer to data to be inserted	   Post    Data inserted into stack	   Return  true  if successful	           false if underflow*/bool pushList (LIST* list, void* dataInPtr){//	Local Definitions	LIST_NODE* newPtr;//	Statements	newPtr = (LIST_NODE* ) malloc(sizeof( LIST_NODE));	if (!newPtr)	    return false;    if(listCount(list)== 0)
    {list->front = newPtr;
    list->rear = newPtr;
    }	newPtr->dataPtr = dataInPtr;
	list->rear->link     = newPtr;
	list->rear = newPtr;

	(list->count)++;	return true;}	// pushStack