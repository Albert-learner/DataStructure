#pragma once
#ifndef __HW2_H__
#define __HW2_H__


#include <string>
using namespace std;

typedef struct _node Node; //����ü ��� ���� ������

struct _node {        //��� ����ü(�ڱ����� ����ü ���)
	char Name;
	int ID;            //������ ����
	string major;
	char Grade;
	Node *next;     //������ ����
};

typedef struct _list 
{
	Node *head;
}List;

void createList(List *lp);
void addFirst(List *lp, char name, int ID, string major, char grade);
void displayList(List *lp);
void searchNode(List *lp, char grade);
void searchNode_3(List lp);

#endif