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




//普通构造函数  
String::String(const char *str)
{
	if (str == NULL)
	{
		m_data = new char[1];// 得分点：对空字符串自动申请存放结束标志'\0'的，加分点：对m_data加NULL判断  
		*m_data = '\0';
	}
	else
	{
		int length = strlen(str);
		m_data = new char[length + 1];// 若能加 NULL 判断则更好
		strcpy(m_data, str);

	}
	cout<<"普通建构函数被调用 "<<endl;
}


// String的析构函数  
String::~String(void)
{
	delete[] m_data; // 或delete m_data;  
}


//拷贝构造函数  
String::String(const String &other)// 得分点：输入参数为const型  
{		 
	int length = strlen(other.m_data);
	m_data = new char[length + 1];// 若能加 NULL 判断则更好  
	strcpy(m_data, other.m_data);
}


//赋值函数  
String & String::operator = (const String &other) // 得分点：输入参数为const型  
{
	if (this == &other)//得分点：检查自赋值  
		return *this; 
	if (m_data)
		delete[] m_data;//得分点：释放原有的内存资源  
	int length = strlen(other.m_data);
	m_data = new char[length + 1];//加分点：对m_data加NULL判断  
	strcpy(m_data, other.m_data);
	return *this;//得分点：返回本对象的引用    
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
		cout<<"下标错误！"<<endl;
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
	shape1 = shape2;// 这一步才算初始化结束
	


	


}
