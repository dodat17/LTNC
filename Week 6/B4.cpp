#include<bits/stdc++.h>

using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :
class Box{
    private:
        int l, b, h;
    public:
        Box(){
            l=0;
            b=0;
            h=0;
        }
        Box(int _l, int _b, int _h){
            l = _l;
            h = _h;
            b = _b;
        }
        Box(const Box& B){
            l = B.l;
            h = B.h;
            b = B.b;
        }
        int getLength(){
            return l;
        }
        int getBreath(){
            return b;
        }
        int getHeight(){
            return h;
        }
        long long CalculateVolume(){
            return (long long)l*b*h;
        }
        friend bool operator < (Box& A, Box& B){
            if ((A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h<B.h) && (A.b==B.b) && (A.l==B.l))) return true;
            else return false;
        }
        friend ostream& operator << (ostream& ciout, const Box& B){
            ciout << B.l << " " << B.b << " " << B.h;
            return ciout;
        }
};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}