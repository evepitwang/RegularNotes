#include<iostream>
#include<string.h>
#include"test.h"
#include"shape.h"
using namespace std;
extern "C"{

#include "fun.h"

}
void Func_Print(int &b)
{
	cout<<"befeor a = :"<<b<<endl;
	b = 999;

}




//��ͨ���캯��  
String::String(const char *str)
{
	if (str == NULL)
	{
		m_data = new char[1];// �÷ֵ㣺�Կ��ַ����Զ������Ž�����־'\0'�ģ��ӷֵ㣺��m_data��NULL�ж�  
		*m_data = '\0';
	}
	else
	{
		int length = strlen(str);
		m_data = new char[length + 1];// ���ܼ� NULL �ж������
		strcpy(m_data, str);

	}
	cout<<"��ͨ�������������� "<<endl;
}


// String����������  
String::~String(void)
{
	delete[] m_data; // ��delete m_data;  
}


//�������캯��  
String::String(const String &other)// �÷ֵ㣺�������Ϊconst��  
{		 
	int length = strlen(other.m_data);
	m_data = new char[length + 1];// ���ܼ� NULL �ж������  
	strcpy(m_data, other.m_data);
}


//��ֵ����  
String & String::operator = (const String &other) // �÷ֵ㣺�������Ϊconst��  
{
	if (this == &other)//�÷ֵ㣺����Ը�ֵ  
		return *this; 
	if (m_data)
		delete[] m_data;//�÷ֵ㣺�ͷ�ԭ�е��ڴ���Դ  
	int length = strlen(other.m_data);
	m_data = new char[length + 1];//�ӷֵ㣺��m_data��NULL�ж�  
	strcpy(m_data, other.m_data);
	return *this;//�÷ֵ㣺���ر����������    
}

class Array
{
public: 
		 Array(int len);
		 int &operator [](int i);
private: int *arr;
		 int size;
};
Array::Array(int len):size(len)
{
		  arr = new int[len];
}
	
int & Array::operator [](int i)
{
	if(i<0 || i>=size)
	{   
		cout<<"�±����"<<endl;
		exit(0);
	}   
	return arr[i];
}

void String::String_Print()
{
	cout<<m_data<<endl;

}


int &FunSun(int a, int b)
{
	int sum = 0;
	sum = a+b;
	return sum;
}

int main()
{
	int a =12;
	Func_Print(a);
	cout<<"after a = :"<<a<<endl;
	String temp = "wpq";
	String b = "hpc";
	b = temp;
	b.String_Print();
	//cout<<b.m_data;
	FunSun(2,5) = a;
	Array arr(10);
	int j=10;
	for(int i=0;i<10;i++)
	{
		arr[i]=j;
		j++;
		cout<<arr[i]<<endl;
	}


	string *str1 = new string("abc");
	/*int const * ptr1 = &a;
	ptr1 = NULL;
	cout <<a<<endl;
	int * const c = &a;
	*c =14;
	cout <<a<<endl;
	*/
	cout<<fun_sum_c(12,13)<<endl;

	String *str2 = new String("freewheel");
	str2->String_Print();
	shape shape1;
	shape shape2(200,200,200);
	shape1 = shape2;// ��һ�������ʼ������
	


	


}
