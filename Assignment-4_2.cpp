#include <iostream>


using namespace std;
class STDNT
{
	public:
		virtual void getdata()=0;
		virtual void display()=0;
	};
	class ENGNRNG:public STDNT
	{
		public:
		int r;
		char n[10];
		public:
			void getdata()
			{
                cout<<"FCLTY->ENGNRNG"<<endl;
				cout<<"ENTER NAME";
				cin>>n;
				cout<<"ENTER REG";
				cin>>r;
				
			}
			void display()
			{
				cout<<"NAME="<<n<<endl;
				cout<<"ENTER REG="<<r<<endl;
				
			}
	};
	class MDCNE:public STDNT
	{
		public:
		int r;
	    char n[10];
			void getdata()
			{
				cout<<"FCLTY->MDCNE"<<endl;
				cout<<"ENTER NAME";
				cin>>n;
				cout<<"ENTER REG";
				cin>>r;
				
			}
			void display()
			{
				cout<<"NAME="<<n<<endl;
				cout<<"ENTER REG="<<r<<endl;
				
			}
		
	};
	class OOPS:public STDNT{
    public:
	int r;
    char n[10];
		void getdata()
		{
			cout<<"FCLTY->OOPS"<<endl;
			cout<<"ENTER NAME";
			cin>>n;
			cout<<"ENTER REG";
			cin>>r;
			
		}
		void display()
		{
			cout<<"NAME="<<n<<endl;
			cout<<"ENTER REG="<<r<<endl;
					
			}
		};
		int main()
		{
		STDNT *p;
		ENGNRNG e;
		MDCNE m;
		OOPS o;
		p=&e;
		p->getdata();
		p->display();
		
		p=&m;
		p->getdata();
		p->display();
		
		p=&o;
		p->getdata();
		p->display();
		return 0;
}
