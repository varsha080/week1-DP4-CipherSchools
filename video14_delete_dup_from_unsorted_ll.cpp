ListNode* deleteDuplicatesUnsorted(ListNode* head)
{
	unordered_set<int> s;
	ListNode* temp = head;
	ListNode* prev = nullptr;
	while (temp != nullptr)
	{
		if (s.find(temp->val) != s.end())
		{
			prev->next = temp->next;
		}
		else
		{
			s.insert(temp->val);
			prev = temp;
		}
		temp = temp->next;
	}
	return head;
}
