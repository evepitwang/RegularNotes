
class String
{
public:
	String(const char *str = NULL);
	String(const String &other);// �������캯��  
	~String(void);// ��������  
	String & operator = (const String &other);// ��ֵ����  
	void String_Print();
private:
	char *m_data;// ���ڱ����ַ���  
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