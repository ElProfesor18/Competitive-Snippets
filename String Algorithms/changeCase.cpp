pair <string, string> changeCase(string s)
{
	pair <string, string> p;
	string s1=s, s2=s;
    forz(i, s.le)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        s1[i] += 'a'-'A';

    	if(s2[i]>='a' && s2[i]<='z')
        s2[i] -= 'a'-'A';
    }

    // s1=> All in Lower Case.
    // s2=> All in Upper Case.
    p = make_pair(s1, s2);
} 

