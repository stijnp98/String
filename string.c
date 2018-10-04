//function for determine the length of an char array or string.
int my_strlen(char *s)
{
    int i = 0; //define i
    for(i = 0; s[i] != '\0'; i++); //count length of char array
    return i; //return result
}

//Tell you how many characters where lowercase and he will return the whole string in uppercase.
int str2upper(char *s)
{
	int count = 0;
	int i = 0; //define i
	for(i = 0; s[i] != '\0'; i++){
		if(s[i] > 96 && 123 > s[i]){
			count++;
			s[i] = s[i] - 32;
		}
	}
	return count; //return result
}

//Determine how many characters where uppercase and he will change them to lowercase  
int str2lower(char *s)
{
	int count = 0;
	int i = 0; //define i
	for(i = 0; s[i] != '\0'; i++){
		if(s[i] > 64 && 91 > s[i]){
			count++;
			s[i] = s[i] + 32;
		}
	}
	return count; //return result
}

//Determine how many number are in the string and he will remove them after
int str_strip_numbers(char *s)
{
	int count = 0;
	int i = 0; //define i
	for(i = 0; s[i] != '\0'; i++){
		if(s[i] > 47 && 58 > s[i]){
			count++;
		}
		else{
			s[(i - count)] = s[i];
		}
	}
	s[(i - count)] = '\0';
	return i - count; //return result
}


//This function copy's a string into another one.
void mystrcpy(char *s,char *d){
	int i = 0;
	for(i = 0; s[i] != '\0'; i++);
	for(int j = 0; j <= i; j++){
		d[j] = s[j];
	}
}

//This function will compare 2 strings and if they are equal than will he return a 0
//otherwise will he return the location where they differ
//-number if the letter of string s comes first in the alphabet
//+number if the letter of string d comes first in the alphabet
int mystrcmp(char *s,char *d){
	int a = 0;
	int count = 1;
	for(a = 0; s[a] != '\0'; a++);
	for(int j = 0; j <= a; j++){
		if(d[j] == s[j]){
		   count++;
	}
	else{
	       if(d[j] > s[j]){
	           count = count - (count * 2);
	       }
	       return count;
	}
	}
	return 0;
}

//Function returns a pointer where you can find this string
char * strdupl(char *s){
	char *stra;
	stra = s;
	return stra;
}

