 #include <iostream>
using namespace std; 
 main()
{
int a, b, c;

cout<<" Enter value for first number";
    cin>>a;

    cout<<" Enter value for second number";
    cin>>b;

    cout<<" Enter value for third number";
    cin>>c;
    
    
if (a>b & b>c)
{
	cout <<"greater number among all is " <<a;
}

else if (b>a & a>c)
{
	cout<<"greater number among all is "<<b;
}

else if (c>b & b>a)
{
	cout<<"greater number among all is "<<c;
}

	
	return 0;
	
	
	
	
}

