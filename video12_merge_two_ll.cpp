class ListNode
{
public:
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
	ListNode *head = new ListNode(0);
	ListNode *temp = head;
	while (l1 != nullptr && l2 != nullptr)
	{
		if (l1->val < l2->val)
		{
			temp->next = l1;
			l1 = l1->next;
		}
		else
		{
			temp->next = l2;
			l2 = l2->next;
		}
		temp = temp->next;
	}
	if (l1 != nullptr)
	{
		temp->next = l1;
	}
	else
	{
		temp->next = l2;
	}
	return head->next;
}
