/*	=================== popStack ==================	This function pops item on the top of the stack.	   Pre  stack is pointer to a stack	   Post Returns pointer to user data if successful	                NULL if underflow*/void* popList (LIST* list){//	Local Definitions	void*       dataOutPtr;	LIST_NODE* temp;//	Statements	if (list->count == 0)	    dataOutPtr = NULL;	else	   {	    temp       = list->front;
	    dataOutPtr = list->front->dataPtr;
        list->front = list->front->link;
	    free (temp);
	    (list->count)--;	   } // else	return dataOutPtr;}	// popStack