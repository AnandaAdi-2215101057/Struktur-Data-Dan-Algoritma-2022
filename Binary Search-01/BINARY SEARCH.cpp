#include <iostream>
using namespace std;
int main()
	{
		int number[] = {1,2,3,5,7,9,11,13,17,19};
		int length = sizeof(number)/sizeof(*number);
		int find, hasil;
		cout<<"keseluruhan data yang ada : "<<endl;
		for(int a = 0; a < length; a++)
		{
			cout<<"index ke-"<<a<<" : "<<number[a]<<endl;
		}
	cout<<"Data yang ingin dicari : ";
	cin>>find;
	for (int b = 0; b < length; b++){
		if(find == number[b])
		{
			hasil++;
		}
			}
				if(hasil == 0)
			{
				cout<<"Data yang tidak dapat ditemukan"<<endl;
	}
		else
	{
		cout<<"Data "<<find<<" ditemukan pada :"<<endl;
		for(int c = 0; c <length; c++)
		{
			if(find == number[c])
			{
				cout<<"Index ke-"<<c<<endl;
			}
		}
	}
}

