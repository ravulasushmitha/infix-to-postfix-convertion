#include"header.h"
int prority(char ch)
{
	if(ch=='^')
		return 3;
	if(ch=='/' || ch=='%' || ch=='*')
		return 2;
	if(ch=='+'||ch=='-')
		return 1;
	return 0;
}
