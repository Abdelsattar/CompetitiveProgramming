 class String 
{
private :
	char *p;
	
	int Size;
	String(){}
	String(int m,char *l)
	{
	 Size=m;
	 *l=*p;
	}
	String(const  String & MiDo)
	{
	 Size=MiDo.Size;
	 p=MiDo.p;
	}
	~String()
	{}
	int Length()
	{
		return this->Size;
	} 
};
