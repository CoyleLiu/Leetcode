char* toLowerCase(char* str) {
 /*   while(*str != '\0')
	{
		if((*str >= 'A')&&(*str <= 'Z'))
		{
			*str  = *str - 'A' + 'a';	
		}
		str++;
	}
	return str;
   */
    int i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'A')&&(str[i] <= 'Z'))
		{
			//*str  = *str - 'A' + 'a';//这个地方为什么有问题？
			str[i] = str[i] - 'A' + 'a';	
		}
		i++;
	}
	return str;
}
