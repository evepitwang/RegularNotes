
class String
{
public:
	String(const char *str = NULL);
	String(const String &other);// 拷贝构造函数  
	~String(void);// 析构函数  
	String & operator = (const String &other);// 赋值函数  
	void String_Print();
private:
	char *m_data;// 用于保存字符串  
};


class vtor
{
public:
	int get_elem(int i);
private :
	int arr[100];
};
class vector_adventance:public vtor
{
private : 
		int high;
		int low;
public:
	bool fun_check(int high ,int low);

};