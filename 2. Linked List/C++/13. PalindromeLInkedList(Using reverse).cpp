#include<bits/stdc++.h>
using namespace std;
struct Node { 
	char data; 
	struct Node* next; 
}; 

void reverse(struct Node**); 
bool compareLists(struct Node*, struct Node*); 
bool isPalindrome(struct Node* head) 
{ 
	struct Node *slow_ptr = head, *fast_ptr = head; 
	struct Node *second_half, *prev_of_slow_ptr = head; 
	struct Node* midnode = NULL; // To handle odd size list 
	bool res = true; // initialize result 

	if (head != NULL && head->next != NULL) { 
		while (fast_ptr != NULL && fast_ptr->next != NULL) { 
			fast_ptr = fast_ptr->next->next; 
			prev_of_slow_ptr = slow_ptr; 
			slow_ptr = slow_ptr->next; 
		} 

		if (fast_ptr != NULL) { 
			midnode = slow_ptr; 
			slow_ptr = slow_ptr->next; 
		} 

		// Now reverse the second half and compare it with first half 
		second_half = slow_ptr; 
		prev_of_slow_ptr->next = NULL; // NULL terminate first half 
		reverse(&second_half); // Reverse the second half 
		res = compareLists(head, second_half); // compare 

		/* Construct the original list back */
		reverse(&second_half); // Reverse the second half again 

		// If there was a mid node (odd size case) which 
		// was not part of either first half or second half. 
		if (midnode != NULL) { 
			prev_of_slow_ptr->next = midnode; 
			midnode->next = second_half; 
		} 
		else
			prev_of_slow_ptr->next = second_half; 
	} 
	return res; 
} 

void reverse(struct Node** head_ref) 
{ 
	struct Node* prev = NULL; 
	struct Node* current = *head_ref; 
	struct Node* next; 
	while (current != NULL) { 
		next = current->next; 
		current->next = prev; 
		prev = current; 
		current = next; 
	} 
	*head_ref = prev; 
} 


bool compareLists(struct Node* head1, struct Node* head2) 
{ 
	struct Node* temp1 = head1; 
	struct Node* temp2 = head2; 

	while (temp1 && temp2) { 
		if (temp1->data == temp2->data) { 
			temp1 = temp1->next; 
			temp2 = temp2->next; 
		} 
		else
			return 0; 
	} 

	/* Both are empty reurn 1*/
	if (temp1 == NULL && temp2 == NULL) 
		return 1; 

	/* Will reach here when one is NULL 
	and other is not */
	return 0; 
} 

/* Push a node to linked list. Note that this function 
changes the head */
void push(struct Node** head_ref, char new_data) 
{ 
	/* allocate node */
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 

	/* put in the data */
	new_node->data = new_data; 

	/* link the old list off the new node */
	new_node->next = (*head_ref); 

	/* move the head to pochar to the new node */
	(*head_ref) = new_node; 
} 

// A utility function to print a given linked list 
void printList(struct Node* ptr) 
{ 
	while (ptr != NULL) { 
		printf("%c->", ptr->data); 
		ptr = ptr->next; 
	} 
	printf("NULL\n"); 
} 

int main() 
{ 
	struct Node* head = NULL; 
	char str[] = "abacaba"; 
	int i; 

	for (i = 0; str[i] != '\0'; i++) { 
		push(&head, str[i]); 
		printList(head); 
		isPalindrome(head) ? printf("Is Palindrome\n\n") : printf("Not Palindrome\n\n"); 
	} 

	return 0; 
} 

