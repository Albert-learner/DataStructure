#include "HW2.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

/*
Function name : createList - ���� ����Ʈ ���� �� �ʱ�ȭ
Parameters : lp - ����Ʈ ���� ����ü �ּ�
Returns : ����
*/
void createList(List *p)
{
	p->head = NULL;
}

/*
Function name : addFirst - head node�� node �߰�(���� ����)
Parameters : lp - ����Ʈ ���� ����ü �ּ�
			 char�� name, int�� data, string�� major, char�� grade - �߰��� ������
Returns : ����
*/
void addFirst(List *lp, char name, int ID, string major, char grade)
{
	Node *newp;
	newp = new Node;
	newp->Name = name;
	newp->ID = ID;
	newp->major = major;
	newp->Grade = grade;
	
	newp->next = NULL;
	if (lp->head == NULL) {
		lp->head = newp;
	}
	else if (newp->Name < lp->head->Name) {
		newp->next = lp->head;
		lp->head = newp;
	}
	else
	{
		Node *cp, *bp;
		cp = lp->head;
		while ((cp != NULL) && (cp->Name <newp->Name))
		{
			bp = cp;
			cp = cp->next;
		}
		if (cp != NULL)
		{
			newp->next = cp;
			bp->next = newp;
		}
		else
			bp->next = newp;
			
	}
}
	


/*
Function name   : displayList - ����Ʈ ���� ��� ������ ���
Parameters      : lp - ����Ʈ ���� ����ü�� �ּ�
Returns         : ����
*/
void displayList(List *lp)
{
	Node *tp;

	if (lp == NULL) {
		cout << "�� ����Ʈ�Դϴ�." << endl;
		return;
	}
	
	
	tp = lp->head;
	
	while (tp != NULL)
	{
		cout << tp->Name << ' ' << tp->ID << ' ' << tp->major << ' ' << tp->Grade <<'\n';
		tp = tp->next;
	}

	return;
}

/*
Function name   : searchNode - grade�� ��ġ�ϴ� node �˻�
Parameters      : lp - ����Ʈ ���� ����ü�� �ּ�
				  char�� grade - ã�ƾ��� ������
Returns         : ����
*/
void searchNode(List *lp, char grade)
{
	if (lp == NULL)
		return;

	Node *nS;
	nS = lp->head;
	while (nS != NULL)
	{
		if (nS->Grade == grade)
		{
			cout << nS->Name << ' ' << nS->ID << ' ' << nS->major << ' ' << nS->Grade << '\n';
		}
		nS = nS->next;
	}
}



/*
Function name   : searchNode_3 - major�� ��ġ�ϴ� node �˻�
Parameters      : lp - ����Ʈ ���� ����ü�� �ּ�
				  string�� major - ã�ƾ��� ������
Returns         : ����
*/
void searchNode_3(List lp)
{

	Node *nS;
	nS = lp.head;
	while (nS != NULL)
	{
		if (nS->major=="CS")
		{
			cout << nS->Name << ' ' << nS->ID << ' ' << nS->major << ' ' << nS->Grade << '\n';
		}
		nS = nS->next;
	}
	return ;
}
