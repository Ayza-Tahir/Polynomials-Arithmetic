//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//
//struct node        //as a term
//{
//public:
//	int data_expo;      //points to  exponent
//	float data_coef;          //pointa to coefficient
//	node* next;              //points to next node address
//
//
//};
//class Polynomial
//{
//private:
//	int size;
//	node* head;             ///head====term
//
//public:
//	Polynomial()
//	{
//
//		size = 0;
//		head = nullptr;
//
//	}
//	void input(float coeff, int expo)
//	{
//
//		node* new_node = new node();       //new node 
//		new_node->data_coef = coeff;               //assign coefficient
//		new_node->data_expo = expo;                // assign exponent
//		new_node->next = NULL;
//
//		//// insertion from backEnd
//		if (head == NULL)
//		{
//			head = new_node;
//		}
//		else
//		{
//			node* temp;
//			temp = head;
//			while (temp->next != NULL)
//			{
//				temp = temp->next;
//			}
//			temp->next = new_node;
//		}
//	}
//
//	void sorting()
//	{
//		node* temp;
//		temp = head;
//		node* tempA;     //points at head
//		node* tempB;   //points at next to head
//		int tempS; //Store value for swap
//		float tempP;     //point  coefficient
//		
//
//		while (temp != NULL)
//		{
//			tempA = head;
//			tempB = head->next;
//			while (tempB != NULL)
//			{
//
//				if (tempA->data_expo < tempB->data_expo)
//				{
//					// sort by change of addresses
//					/*tempA->next = tempB->next;
//					tempB->next = tempA;
//					if (tempP != NULL)
//					{
//						tempP->next = tempB;
//					}*/
//
//
//					/// /// sort by change of data,both coefficient and exponent
//
//					tempP = tempA->data_coef;
//					tempA->data_coef = tempB->data_coef;
//					tempB->data_coef = tempP;
//
//					tempS = tempA->data_expo;
//					tempA->data_expo = tempB->data_expo;
//					tempB->data_expo = tempS;
//				}
//				//tempP = tempA;
//				tempA = tempA->next;
//				tempB = tempB->next;
//			}
//			temp = temp->next;
//		}
//
//	}
//	void unique()
//	{
//		node* tempA;
//		node* tempB;
//		node* tempD; //delete node
//		tempA = head;
//		tempB = head->next;
//
//		//node* tempD;
//		while (tempB != NULL)
//		{
//			tempD = tempB;
//			if (tempA->data_expo == tempB->data_expo)
//			{
//				tempA->data_coef = tempA->data_coef + tempB->data_coef;
//				tempB = tempB->next;
//				if (tempB == NULL)
//				{
//					tempA->next = NULL;
//				}
//				if (tempB != NULL)
//				{
//					tempA->next = tempB;
//				}
//				delete(tempD);
//
//
//
//			}
//			else
//			{
//				tempA = tempA->next;
//				tempB = tempB->next;
//			}
//		}
//
//
//	}
//	
//
//	Polynomial MultiplyL(Polynomial p)
//	{
//		node* temp;
//		node* temp1;
//		temp = head; // First Polynomial point
//		temp1 = p.head; //Second Polynomial point
//		float coeff;
//		int expo;
//		Polynomial tempM; ///new list after Multiplication
//		while (temp != NULL)
//		{
//			temp1 = p.head;
//			while (temp1 != NULL)
//			{
//				coeff = temp->data_coef * temp1->data_coef;
//				expo = temp->data_expo + temp1->data_expo;
//				tempM.input(coeff, expo);
//				temp1 = temp1->next;
//
//
//			}
//			temp = temp->next;
//		}
//
//
//		return tempM;
//	}
//
//
//
//
//	Polynomial AddL(Polynomial p)
//	{
//		node* temp;
//		node* temp1;
//		node* tempS;
//		temp = head; // First Polynomial point
//		temp1 = p.head; //Second Polynomial point
//		Polynomial tempA;
//		int expo;
//		float coeff;
//
//
//		//first and second list same exponents  by adding  and different exponents of first list insert
//		while (temp != NULL)
//		{
//
//			temp1 = p.head;
//			tempS = temp;
//			while (temp1 != NULL)
//			{
//
//				if (temp->data_expo == temp1->data_expo)
//				{
//
//					expo = temp->data_expo;
//					coeff = temp->data_coef + temp1->data_coef;
//					tempA.input(coeff, expo);
//					tempS = temp->next;
//					temp1 = temp1->next;
//				}
//				else
//				{
//					temp1 = temp1->next;
//				}
//			}
//			if (tempS == temp)
//			{
//
//				coeff = temp->data_coef;
//				expo = temp->data_expo;
//				tempA.input(coeff, expo);
//				temp = temp->next;
//			}
//			else
//			{
//				temp = temp->next;
//			}
//
//
//		}
//		//second list diferent exponents insert
//		node* tempS1;
//		temp = head;
//		temp1 = p.head;
//		while (temp1 != NULL)
//		{
//
//			temp = head;
//			tempS1 = temp1;
//			while (temp != NULL)
//			{
//
//				if (temp->data_expo == temp1->data_expo)
//				{
//					tempS1 = temp1->next;
//					temp = temp->next;
//				}
//				else
//				{
//					temp = temp->next;
//				}
//			}
//			if (tempS1 == temp1)
//			{
//
//				coeff = temp1->data_coef;
//				expo = temp1->data_expo;
//				tempA.input(coeff, expo);
//				temp1 = temp1->next;
//			}
//			else
//			{
//				temp1 = temp1->next;
//			}
//		}
//
//		return tempA;
//	}
//
//
//	Polynomial operator+(Polynomial p)
//	{
//
//		return AddL(p);
//	}
//
//	float EvaluateL(float n)
//	{
//		node* temp;
//		temp = head;
//		int index;
//		float n1 = 1;
//		float coef;
//		float eval;
//		float final = 0;
//		while (temp != NULL)
//		{
//			index = temp->data_expo;
//			coef = temp->data_coef;
//			n1 = 1;
//			for (int i = 0; i < index; i++)   //power multiple
//			{
//
//				n1 = n1 * n;
//			}
//			eval = coef * n1;
//
//			final = eval + final; //evalute
//			temp = temp->next;
//
//		}
//		return final;
//	}
//
//	
//	
//
//	float operator&(float n)          //in place of overload dot operator
//	{
//		return EvaluateL(n);
//	}
//
//
//	Polynomial operator*(Polynomial p)
//	{
//		return MultiplyL(p);
//	}
//	void outputL()
//	{
//		node* temp;
//
//		temp = head;
//
//		while (temp != NULL)
//		{
//			if (temp->data_expo != 0)
//			{
//				cout << temp->data_coef << "n^" << temp->data_expo;
//			}
//			if (temp->data_expo == 0)
//			{
//				cout << temp->data_coef;
//			}
//			if (temp->next != NULL)
//			{
//
//				if (temp->next->data_coef > 0)
//				{
//					cout << "+";
//				}
//
//
//			}
//
//			temp = temp->next;
//
//		}
//		cout << " " << "-> Null";
//	}
//	void deleteL()
//	{
//		node* temp;
//		temp = head;
//		node* tempD;
//
//		while (temp != NULL)
//		{
//			tempD = temp;
//			temp = temp->next;
//			delete(tempD);
//		}
//		head = NULL;
//		delete (temp);
//
//	}
//	~Polynomial()
//	{
//		head = NULL;
//		//delete(head);
//	}
//};
//int main()
//{
//	Polynomial p1;
//	Polynomial p;
//	int input_value = 0;
//	int size;
//	float coef;
//	int expo;
//	float n;
//	float resultL;
//
//
//	while (input_value != 5)
//	{
//		cout << "1 :INPUT / OUTPUT" << endl;
//		cout << "2 :ADD" << endl;
//		cout << "3 :MULTIPLE" << endl;
//		cout << "4 :EVALUATE" << endl;
//		cout << "5 :END OF PROGRAM" << endl;
//		cout << "Enter :" << " ";
//		cin >> input_value;
//		cout << endl;
//
//
//		switch (input_value)
//		{
//		case 1:
//		{
//			cout << "                               " << "Input" << endl;
//			cout << endl;
//			cout << "Enter the size of the linked list :" << " ";
//			cin >> size;
//
//
//			cout << "Enter the polynomial's" << endl;
//			for (int i = 0; i < size; i++)
//			{
//				cout << "Coefficient term " << " " << i + 1 << " :";
//				cin >> coef;
//				cout << "Exponent term" << " " << i + 1 << " :";
//				cin >> expo;
//				p.input(coef, expo);
//			}
//
//			cout << endl;
//			cout << "Input you enter :" << " ";
//			p.outputL();
//			cout << endl;
//			cout << endl;
//			p.sorting();
//			cout << "Output after Sorting :" << " ";
//			p.outputL();
//			cout << endl;
//			cout << endl;
//			p.unique();
//			cout << "                             " << "Output" << endl;
//			cout << endl;
//			p.outputL();
//			cout << endl;
//			cout << endl;
//
//			p.deleteL();  //delete the list
//
//
//
//			break;
//		}
//
//
//		case 2:
//		{
//			cout << "                               " << "Add" << endl;
//
//			cout << "Input For Polynomial 1" << endl;
//			cout << endl;
//			cout << "Enter the size of the linked list :" << " ";
//			cin >> size;
//
//
//			cout << "Enter the polynomial's" << endl;
//			for (int i = 0; i < size; i++)
//			{
//				cout << "Coefficient term " << " " << i + 1 << " :";
//				cin >> coef;
//				cout << "Exponent term" << " " << i + 1 << " :";
//				cin >> expo;
//				p.input(coef, expo);
//			}
//
//			p.sorting();
//			p.unique();
//			cout << "Polynomial 1 :" << " ";
//			p.outputL();
//			cout << endl;
//			cout << endl;
//
//			cout << "Input For Polynomial 2" << endl;
//			cout << endl;
//
//			cout << "Enter the size of the linked list :" << " ";
//			cin >> size;
//
//
//			cout << "Enter the polynomial's" << endl;
//			for (int i = 0; i < size; i++)
//			{
//				cout << "Coefficient term " << " " << i + 1 << " :";
//				cin >> coef;
//				cout << "Exponent term" << " " << i + 1 << " :";
//				cin >> expo;
//				p1.input(coef, expo);
//			}
//
//			p1.sorting();
//			p1.unique();
//			cout << "Polynomial 2 :" << " ";
//			p1.outputL();
//			cout << endl;
//
//			Polynomial p2 = p + p1;
//			cout << endl;
//			cout << endl;
//			cout << " After the Addition of Two polynomial's " << " ";
//			cout << endl;
//			cout << endl;
//			p2.sorting();
//			p2.unique();
//			p2.outputL();
//
//			cout << endl;
//			cout << endl;
//
//			p.deleteL(); //delete the list
//			p1.deleteL();
//			p2.deleteL();
//
//			break;
//		}
//		case 3:
//		{
//			cout << "                               " << "Multiple" << endl;
//			cout << "Input For Polynomial 1" << endl;
//			cout << endl;
//			cout << "Enter the size of the linked list :" << " ";
//			cin >> size;
//
//
//			cout << "Enter the polynomial's" << endl;
//			for (int i = 0; i < size; i++)
//			{
//				cout << "Coefficient term " << " " << i + 1 << " :";
//				cin >> coef;
//				cout << "Exponent term" << " " << i + 1 << " :";
//				cin >> expo;
//				p.input(coef, expo);
//			}
//
//			p.sorting();
//			p.unique();
//			cout << "Polynomial 1 :" << " ";
//			p.outputL();
//			cout << endl;
//			cout << endl;
//			cout << "Input For Polynomial 2" << endl;
//			cout << endl;
//
//			cout << "Enter the size of the linked list :" << " ";
//			cin >> size;
//
//
//			cout << "Enter the polynomial's" << endl;
//			for (int i = 0; i < size; i++)
//			{
//				cout << "Coefficient term " << " " << i + 1 << " :";
//				cin >> coef;
//				cout << "Exponent term" << " " << i + 1 << " :";
//				cin >> expo;
//				p1.input(coef, expo);
//			}
//
//			p1.sorting();
//			p1.unique();
//			cout << "Polynomial 2 :" << " ";
//			p1.outputL();
//			cout << endl;
//			Polynomial p2 = p * p1;
//			cout << " After the Multiplication of Two polynomial's " << " ";
//			cout << endl;
//			cout << endl;
//			p2.sorting();
//			p2.unique();
//			p2.outputL();
//
//			cout << endl;
//			cout << endl;
//
//			p.deleteL(); //delete the list
//			p1.deleteL();
//			p2.deleteL();
//
//			break;
//		}
//
//		case 4:
//		{
//			cout << "                               " << "Evaluate" << endl;
//
//
//			cout << "Input of Polynomial" << endl;
//			cout << endl;
//			cout << "Enter the size of the linked list :" << " ";
//			cin >> size;
//
//
//			cout << "Enter the polynomial's" << endl;
//			for (int i = 0; i < size; i++)
//			{
//				cout << "Coefficient term " << " " << i + 1 << " :";
//				cin >> coef;
//				cout << "Exponent term" << " " << i + 1 << " :";
//				cin >> expo;
//				p.input(coef, expo);
//			}
//			cout << endl;
//			p.sorting();
//			p.unique();
//			cout << "Polynomial :";
//			p.outputL();
//			cout << endl;
//			cout << "Enter the value of 'n' :" << " ";
//			cin >> n;
//			resultL = p &  n;
//			
//			cout << endl;
//			cout << "P(" << n << ")" << ":" << " " << resultL;
//			
//			cout << endl;
//			cout << endl;
//			p.deleteL(); //delete the list
//
//			break;
//		}
//		case 5:
//		{
//			break;
//		}
//		default:
//		{
//			
//			
//				cout << "You Enter the Wrong choose,Select from the given choose" << endl;
//			
//		}
//		}
//
//
//	}
//	return 0;
//
//
//}