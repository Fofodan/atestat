/*
Subiectul nr.1
Fişierul date.in  conține, pe prima linie,  un număr natural  n (n<100), iar pe fiecare din următoarele n linii este scris câte un cuvânt format  din cel mult 20de caractere.
Se consideră subprogramul S1 care primește prin intermediul singurului său parametru s un cuvânt și verifică dacă acesta este palindrom. Un cuvânt care poate fi citit de la stânga la dreapta și de la dreapta la stânga reprezintă același cuvânt este un palindrom, de exemplu: “rar”, “potop”.

Cerinţe:
a)	Scrieţi definiţia completă a subprogramului S1;
b)	Scrieţi un program principal Pascal/C/C++ care, folosind apeluri utile ale subprogramului S1  citește numărul n și cele n cuvinte, apoi determină toate cuvintele de tip palindrom și le afișează, câte unul pe o linie a ecranului. Dacă niciunul dintre cele n cuvinte citite nu este de tip palindrom, atunci programul va afișa pe ecran mesajul NU EXISTA.

Exemplu.  Dacă fişierul  date.in are conţinutul alăturat, programul va afişa pe ecran:
cojoc
ana
potop
	6
cojoc
iarna
ana
primavara
potop
toamna

*/
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream fin("date.in");
int n;

bool sub(char a[25])
{
    char aux[25];
    strcpy(aux,a);
    strrev(a);
    return strcmp(a,aux);
}
int main()
{
    char a[25];
    int ok=0;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++)
    {
        cin.getline(a,25);
        if(!sub(a))
        {
            ok=1;
            cout<<a<<endl;
        }
    }
    if(ok==0)cout<<"NU EXISTA";

    return 0;
}



/*
    Fişierul numere.in  conține, pe prima linie,  un număr natural  n (2<n<100) iar  pe linia a doua n numere cu cel mult 9 cifre fiecare.
Se consideră subprogramul sub care primește prin intermediul parametrului x un număr natural și returnează valoarea 1 dacă x aparține șirului lui Fibonacci și 0 în caz contrar.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/C++ care, folosind apeluri utile ale subprogramului sub  citește numărul n și cele n numere, apoi determină toate numerele care aparțin șirului lui Fibonacci și le afișează, separate prin câte un spațiu, pe ecran. Dacă niciunul dintre cele n numere nu aparțin șirului lui Fibonacci, atunci programul va afișa pe ecran mesajul NU EXISTA.
Şirul lui Fibonacci, “legea creşterilor organice”, se va considera aşa cum a fost definit de către Leonardo Fibonacci:1,1,2,3,5,8…

*/
#include<iostream>

using namespace std;

int n,a[100];

void citire()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
}

int sub(int x)
{
    int a=1,b=1,c;
    while(b<x)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(x==b)
        return 1;
    else
        return 0;
}

void rez()
{
    for(int i=0;i<n;i++)
        if(sub(a[i])==1)
            cout<<a[i]<<" ";
}

int main()
{
    citire();
    rez();

    return 0;
}




/*
    Fişierul numere.in  conține, pe prima linie,  un număr natural  n  cu cel mult 9 cifre.
Se consideră subprogramul sub care primește prin intermediul parametrului x un număr natural și returnează cel mai mare termen din șirul lui Fibonacci mai mic sau egal cu x.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/C++ care, folosind apeluri utile ale subprogramului sub  citește numărul n și afișează pe ecran,
separate prin câte un spațiu,  un număr minim de elemente care aparțin șirului lui Fibonacci, a căror sumă este egală cu numărul n.
Şirul lui Fibonacci, “legea creşterilor organice”, se va considera aşa cum a fost definit de către Leonardo Fibonacci:1,1,2,3,5,8…

*/
#include<iostream>

using namespace std;

int sub(int x)
{
    int d;
    int a=1,b=1,c;
    while(b<x)
    {
        c=a+b;
        a=b;
        b=c;
        if(c<=x)
            d=c;
    }
    return d;
}

int main()
{
    cout<<sub(7);

    return 0;
}





/*
Subiectul nr.4
Fişierul numere.in  conține, pe prima linie,  un număr natural  n (2<n<100) iar  pe linia a doua n numere cu cel mult 9 cifre fiecare.
Se consideră subprogramul sub care primește prin intermediul parametrului x un număr natural și returnează valoarea 1 dacă x este un număr prim  și 0 în caz contrar.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/C++ care, folosind apeluri utile ale subprogramului sub  citește numărul n și cele n numere, apoi determină toate numerele prime dintre cele citite și le afișează, separate prin câte un spațiu, pe ecran. Dacă niciunul dintre cele n numere nu este prim, atunci programul va afișa pe ecran mesajul NU EXISTA.

Exemplu.  Dacă fişierul  numere.in  are conţinutul alăturat, programul va afişa pe ecran:
5 13	6
5 20 21 8 13 15

*/

#include <iostream>
#include <fstream>
using namespace std;
bool sub(int x)
{
    for(int i=2;i<=x/2;i++)
        if(x%i==0)
            return 0;
    return 1;
}
int main()
{
    int n,x,ok=0;
    ifstream fin("numere.in");
    fin>>n;
    for(int i=1;i<=n;i++)
    {
        fin>>x;
        if(sub(x))
        {
            cout<<x<<" ";
            ok=1;
        }
    }
    if(ok==0)cout<<"NU EXISTA";

}

/*
Subiectul nr.5
Fişierul numere.in  conține, pe prima linie,  un număr natural  n (2<n<100.
Se consideră subprogramul sub care primește prin intermediul parametrului x un număr natural și returnează valoarea 1 dacă x este un număr prim  și 0 în caz contrar.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/C++ care, folosind apeluri utile ale subprogramului sub  citește numărul n apoi determină și afișează primele n numere prime și le afișează, separate prin câte un spațiu, pe ecran
Exemplu.  Dacă fişierul  numere.in  are conţinutul alăturat, programul va afişa pe ecran:
2 3 5 7 11	5


*/
#include <iostream>
#include<fstream>
using namespace std;
ifstream fin("numere.in");
bool sub(int x)
{
    for(int i=2;i<=x/2;i++)
        if(x%i==0)
        return 0;
    return 1;
}
int main()
{
    int n,x,ok=0,i=2;
    fin>>n;
    while(n!=0)
    {
        if(sub(i))
        {
            cout<<i<<" ";
            n--;
        }
        i++;
    }

}

/*
Subiectul nr.6
Fişierul numere.in  conține, pe prima linie,  un număr natural par  n, cu cel mult 9 cifre.
Se consideră subprogramul sub care primește prin intermediul parametrului x un număr natural și returnează valoarea 1 dacă x este un număr prim  și 0 în caz contrar.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/C++ care, folosind apeluri utile ale subprogramului sub,  citește numărul n apoi determină și afișează toate perechile de numere prime (a,b)  (a<b) a căror sumă este egală cu n.
Exemplu.  Dacă fişierul  numere.in  are conţinutul alăturat, programul va afişa pe ecran:
(3,17) (7,13)	20

*/
#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.in");
bool sub(int n)
{
    for(int i=2;i<=n/2;i++)
        if(n%i==0)return 0;
    return 1;
}

int main()
{
    int n,a;
    fin>>n;
    int aux;
    for(int i=2;i<=n/2;i++)
    {
        a=i;
        if(sub(a))
        {
            aux=n-a;
            if(sub(aux))
                cout<<"("<<a<<","<<aux<<")\n";
        }
    }
}

/*
Subiectul nr.7
Fişierul numere.in  conține, pe prima linie,  un număr natural par  n, cu cel mult 9 cifre.
Se consideră subprogramul sub care primește prin intermediul parametrului x un număr natural și returnează valoarea 1 dacă x este un număr prim  și 0 în caz contrar.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/C++ care, folosind apeluri utile ale subprogramului sub  citește numărul n par (n>2), apoi determină și afișează o pereche de numere prime (a,b)  (a<n, n<b) cu  proprietatea că diferența b-a este minimă.
Exemplu.  Dacă fişierul  numere.in  are conţinutul alăturat, programul va afişa pe ecran:
(19,23)	20

*/
#include <iostream>
#include <cmath>
using namespace std;
int prim(int x)
{
    if(x<2||(x%2==0&&x!=2))
        return 0;
    for(int div=3;div<=sqrt(x);div+=2)
        if(x%div==0)
            return 0;
    return 1;
}
int main ()
{
    int n,ok=1;
    cin>>n;
    for(int i=n-1;i>=2;i--)
        if(prim(i))
        {
            cout<<"("<<i<<",";
            break;
        }
    for(int i=n+1;ok;i++)
        if(prim(i))
        {
            cout<<i<<")";
            ok=0;
        }

    return 0;
}

/*
Subiectul nr.8
Fişierul numere.in  conține, pe prima linie,  un număr natural  n(2<n<100) iar  pe linia a doua n numere cu cel mult 9 cifre fiecare.
.
Se consideră subprogramul sub care primește prin intermediul parametrului x un număr natural și returnează valoarea 1 dacă x are prima cifră egală cu ultima cifră  și 0 în caz contrar.

Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/C++ care citește numărul n și cele n numere din fișier  și  afişează pe ecran în ordine crescătoare toate numerele ce încep şi se termină cu aceeaşi cifră. Numerele se afişează separate prin câte un spaţiu. Programul va utiliza apelui utile ale subprogramului sub.

Exemplu.  Dacă fişierul  numere.in  are conţinutul alăturat, programul va afişa pe ecran:
7 11 454 3123	6
21 3123 7 11 454 10

*/
#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
using namespace std;
ifstream fin("numere.in");
int sub(int x)
{
    int inv=0,cx;
    if(x-(x%10)==0)
        return 1;
    cx=x;
    while(x)
    {
        inv=inv*10+x%10;
        x/=10;
    }
    if(cx%10==inv%10)
        return 1;

    return 0;
}

int main ()
{
    int n,a[100],nr,m=0,aux;
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>nr;
        if(sub(nr))
            a[m++]=nr;
    }
    for(int i=0;i<m-1;i++)
        for(int j=i+1;j<m;j++)
            if(a[i]>a[j])
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
    for(int i=0;i<m;i++)
        cout<<a[i]<<" ";

    return 0;
}


/*
Subiectul nr.9
Se consideră subprogramul sub care primește prin intermediul parametrului x un număr natural cu cel mult 9 cifre și returnează valoarea numărul obținut din x  prin permutarea circulara a cifrelor sale cu o poziție spre stânga.

Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/C++ care citește de la tastatură un număr natural n și scrie în fișierul numere.out  toate numerele ce se pot obține din n prin permutări circulare la stânga ale cifrelor lui n. Numerele se vor scrie in fișier separate prin câte un spaţiu. Programul va utiliza apelui utile ale subprogramului sub.

Exemplu.  Dacă de la tastatură se citește numărul 56789123, fişierul  numere.out  va avea  conţinutul alăturat:

67891235  78912356  89123567  91235678  12356789  23567891  35678912


*/
#include<iostream>
#include<fstream>

using namespace std;

int sub(int x)
{
    int i, p=1, cx;
    cx=x;
    while(cx>9)
    {
        cx=cx/10;
        p=p*10;
    }
    x=x%p*10 + cx;
    return x;
}

int nrcf(int x)
{
    int cf=0,cx;
    cx=x;
    while(cx)
    {
        cf++;
        cx=cx/10;
    }
    return cf;
}

int main()
{
    int x;
    cin>>x;
    for(int i=1; i<=nrcf(x); i++)
    {
        x=sub(x);
        cout<<x<<endl;
    }

    return 0;
}

/*
    Fişierul date.in  conține, pe prima linie,  un număr natural  n (n<100), iar pe fiecare din următoarele n linii este scris câte un cuvânt format  din cel mult 20 de caractere.
Se consideră subprogramul sub care primește prin intermediul parametrilor  a și b două cuvinte și  returnează valoarea 1 dacă cele două şiruri de caractere sunt unul anagrama celuilalt
 și valoarea 0 în caz contrar.

Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program principal Pascal/C/C++ care, folosind apeluri utile ale subprogramului sub  citește numărul n și cele n cuvinte, apoi determină toate perechile de cuvinte care
 sunt unul anagrama celuilalt, câte o pereche pe o linie a ecranului. Dacă nu există nicio astfel de pereche de cuvinte, atunci programul va afișa pe ecran mesajul NU EXISTA.

Exemplu.  Dacă fişierul  date.in are conţinutul alăturat, programul va afişa pe ecran:
rac car
rac arc
car arc
	6
rac
iarna
car
primavara
arc
toamna

*/
#include<iostream>
#include<cmath>
#include<fstream>
#include<cstring>
using namespace std;
int n;
char a[100][20];
int sub(char x[20], char y[20])
{
    int m,i,j;
    char aux,xx[20],yy[20];
    strcpy(xx,x); strcpy(yy,y);
    if(strlen(x)!=strlen(y))    return 0;
    else
    {
        m=strlen(x);
        for(i=0;i<m-1;i++)
            for(j=i+1;j<m;j++)
                if(xx[i]>xx[j])
                {
                    aux=xx[i];
                    xx[i]=xx[j];
                    xx[j]=aux;
                }
        for(i=0;i<m-1;i++)
            for(j=i+1;j<m;j++)
                if(yy[i]>yy[j])
                {
                    aux=yy[i];
                    yy[i]=yy[j];
                    yy[j]=aux;
                }
    }
    if(strcmp(xx,yy)!=0)  return 0;
    return 1;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(sub(a[i],a[j]))
                cout<<a[i]<<" "<<a[j]<<endl;
    return 0;
}


s11:

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
ifstream fin("date.in");
void sub(char s[],char t[])
{
    for(int i=0;i<strlen(s);i++)
        if(strchr("aeiou",s[i]))
            s[i]='*';
    strcpy(t,s);
    cout<<t+0<<" ";
}
int main ()
{
    int n;
    char s[25],t[25];
    fin>>n;
    while(n)
    {
        fin>>s;
        sub(s,t);
        n--;
    }
    return 0;
}


/*
    Fişierul date.in conţine pe prima linie doua numere naturale  n(n<100)  și  k(1<k<=2n) iar pe următoarele n linii câte n numere reale reprezentând elementele unei matrice pătrate de dimensiune n.

Subprogramul sub primeşte prin intermediul parametrului n (0<n<100) dimensiunea unei matrice pătrate, prin intermediul parametrului a matricea de numere reale (aij cu 1in, 1jn) şi prin intermediul parametrului k un număr natural nenul1<k<=2n). El returnează prin intermediul parametrului s suma tuturor elementelor aij cu proprietatea că i+j=k.
Cerinţe:
a)	Scrieţi definiţia completă a subprogramului sub;
b)	Scrieţi un program Pascal/C/C++ care citește din fișier numerele n,k și elementele matricei și,folosind  apeluri utile ale subprogramului sub afişează suma elementelor din tablou aflate strict deasupra diagonalei secundare a tabloului.

*/

#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("date.in");

int sub(int a[100][100], int n, int k)
{
    int s=0,i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(i+j==k)
                s=s+a[i][j];
    return s;
}

int main()
{
    int n,k,i,j,a[100][100],S=0;
    fin>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            fin>>a[i][j];
    for(k=2;k<=n;k++)
        S=S+sub(a,n,k);
    cout<<S;

    return 0;
}


/*
s13
*/
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

ifstream fin("date.in");

void elimincar(char s[], char c)
{
    for(int i=0;i<strlen(s);i++)
        if(s[i]==c)
            strcpy(s+i,s+i+1);
}

int main()
{
    char voc[]="aeiou",s[100];
    fin.get(s,100);
    for(int i=0; i<strlen(voc);i++)
        elimincar(s,voc[i]);
    cout<<s;

    return 0;
}


/*
s14
*/
#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

ifstream fin("date.in");

void elimincar(char s[], char c)
{
    for(int i=0;i<strlen(s);i++)
        if(s[i]==c)
            strcpy(s+i,s+i+1);
}

int main()
{
    char s[255], voc[]="aeiou",t[255];
    fin.get(s,255);
    strcpy(t,s);
    for(int i=0; i<strlen(voc);i++)
    {
        elimincar(s,voc[i]);
        if(strcmp(s,t)!=0)
            cout<<s<<endl;
        strcpy(s,t);
    }


    return 0;
}




/*
s15
*/
#include<iostream>
#include<fstream>

using namespace std;

ifstream fin("date.in");

int contor[100];

int main()
{
    int x,nr=0,maxim=-1;
    while(fin>>x)
    {
        contor[x]++;
    }
    for(int i=0;i<100;i++)
        if(contor[i]>=maxim)
            maxim=contor[i];
    for(int i=0;i<100;i++)
        if(contor[i]==maxim)
            cout<<i;

    return 0;
}


s16

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("mat.in");
ofstream fout("mat.out");
int k;
void inlocuire(int a[100][100],int n,int c,int l,int maxim)
{
    int minim;
    minim=a[1][c];
    for(int i=2;i<=n;i++)
        if(a[i][c]<minim)
            minim=a[i][c];
    if(maxim!=minim)
    {
        a[l][c]=minim;
        k++;
    }
}
int main ()
{
    int n,m,a[100][100],maxim;
    fin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            fin>>a[i][j];
    maxim=a[1][1];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(a[i][j]>maxim)
                maxim=a[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(a[i][j]==maxim)
                inlocuire(a,n,j,i,maxim);
    if(k)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
                fout<<a[i][j]<<" ";
            fout<<endl;
        }
        fout<<k;
    }

return 0;
}

/**
s17
**/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

ifstream fin("date.txt");

int main()
{
    int n,m,ok=1;
    char a[5001],c,*p;
    fin>>n>>m;
    for(int i=0;i<n;i++)
        fin>>a[i];
    a[n]='\0';
    while(m)
    {
        fin>>c;
        m--;
        p=strchr(a,c);
        if(p)
            strcpy(a,p+1);
        else
        {
            ok=0;
            break;
        }
    }
    if(ok==0)
        cout<<"nu";
    else
        cout<<"da";

    return 0;
}



/**
s18
**/
#include<iostream>
#include<fstream>
using namespace std;

ifstream fin("matrice.in");
ofstream fout("matrice.out");

int suma(int x[100][100], int p, int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
        s=s+x[p][i];

    return s;
}

int main()
{
    int x[100][100],n,p,s=0;
    fin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            fin>>x[i][j];
    for(int i=1;i<=n;i++)
        if(suma(x,i,n)%2==0)
            fout<<i<<" ";

    return 0;
}


s19
#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("date.in");
ofstream fout("date.out");

int main()
{
    int i,x,a[9999]={0};
    while(fin>>x)
        a[x]=1;
    for(i=9999;i>0;i--)
        if(a[i]==0)
            fout<<i<<" ";

    return 0;
}

s20

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
ifstream fin("date.in");
int sub(char t1[],char t2[])
{
    char *p;
    p=strstr(t1,t2);
    if(p&&strncmp(t1,t2,strlen(t2))==0)
        return 1;
    return 0;
}
int main()
{
    char t1[250],t2[20],*p;
    fin.getline(t1,250);
    fin.getline(t2,20);
    p=strtok(t1," ");
    while(p)
    {
        if(sub(p,t2))
            cout<<p<<" ";
        p=strtok(NULL," ");
    }

return 0;
}



s21
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
ifstream fin("date.in");
void sub(char t[])
{
	if(t[0]>='a'&&t[0]<='z')
		t[0]=t[0]-'a'+'A';
	if(t[strlen(t)-1]<='z'&&t[strlen(t)-1]>='a')
		t[strlen(t)-1]=t[strlen(t)-1]-'a'+'A';
}
int main()
{
	char s[250],*p;
	fin.get(s,250);
	p=strtok(s," ");
	while(p)
	{
		sub(p);
		cout<<p<<" ";
		p=strtok(NULL," ");
	}
	return 0;
}

s22
#include<iostream>
#include<fstream>
using namespace std;
ifstream fin("bac.txt");
int verif(int a[100][100],int n,int p)
{
	for(int i=1;i<=n/2;i++)
		if(a[p][i]!=a[p][n+1-i])
			return 0;
	return 1;
}
int main()
{
	int a[100][100],n,m,k=0;
	fin>>m>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			fin>>a[i][j];
	for(int i=1;i<=m;i++)
		if(verif(a,n,i)==1)
			k++;
	cout<<k;
	return 0;
}

s23
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

void sub(char s[])
{
    char voc[]="aeiou",aux[256];
    int n = strlen(s);
    for(int i=0;i<n;i++)
        if(!strchr(voc,s[i]))
            {strcpy(aux, s+i);
            strcpy(s+i+1, aux);n++;i++;}
}

int main()
{
    char s[256];
    cin>>s;
    sub(s);
    cout<<s;

    return 0;
}


s24
/**

**/
#include<iostream>
#include<fstream>

using namespace std;

ifstream fin("date.in");

void sub(int a[30][30], int n, int &maxi)
{
    for(int i=1;i<=n;i++)
        if(a[i][i]>=maxi)
            maxi=a[i][i];
}

int main()
{
    int n, a[30][30], maxi=-9999;
    fin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            fin>>a[i][j];

    sub(a,n,maxi);
    cout<<"Elementul maxim = "<<maxi;

    return 0;
}


s25
/**

**/
#include<iostream>
#include<fstream>
using namespace std;

ifstream fin("date.in");

int sub(int a[30][30], int n)
{
    int suma=0;
    for(int i=1;i<=n;i++)
        suma=suma+a[1][i]+a[n][i];

    for(int j=2;j<=n-1;j++)
        suma=suma+a[j][1]+a[j][n];


    return suma;
}

int main()
{
    int n,a[30][30];
    fin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            fin>>a[i][j];

    cout<<"Suma = "<<sub(a,n);

    return 0;
}


s26
/**

**/
#include<iostream>
#include<fstream>
using namespace std;

ifstream fin("date.in");

int sub(int x[30][30], int n, int p)
{
    int maxim=-999;
    for(int i=0;i<n;i++)
        if(x[p][i]>maxim)
            maxim=x[p][i];
    return maxim;
}

int main()
{
    int n, x[30][30];
    fin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            fin>>x[i][j];
    for(int i=0;i<n;i++)
        cout<<sub(x,n,i)<<" ";

    return 0;
}


s27
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("date.in");
int maxim(int a[],int &n)
{
	int maxi=0;
    for(int i=0;i<n;i++)
		if(a[i]>maxi)
			maxi=a[i];
	for(int i=0;i<n;i++)
		if(a[i]==maxi)
		{
			for(int p=i;p<n-1;p++)
				a[i]=a[i+1];
			i--;
			n--;
		}
	return maxi;
}
int main ()
{
    int a[100],n;
    fin>>n;
    for(int i=0;i<n;i++)
		fin>>a[i];
	while(n)
	{
		cout<<maxim(a,n);
	}
return 0;
}


s28
/**

**/
#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int nrap(char s[], char c)
{
    int ap=0;
    for(int i=0;i<strlen(s);i++)
        if(c==s[i])
            ap++;
    return ap;
}
int main()
{
    char s1[100], s2[100];
    int ok=1;
    cin.getline(s1,101);
    cin.getline(s2,101);
    for(int i=0;i<strlen(s1);i++)
        if(nrap(s1,s1[i])!=nrap(s2,s1[i]))
        {
            ok=0;
            break;
        }
    if(ok)
        cout<<"DA";
    else
        cout<<"NU";

    return 0;
}


s29
/*


*/
#include<iostream>
#include<fstream>
#include<limits.h>
#include<cmath>
using namespace std;

ifstream fin("date.in");

int sub(int a[30][30], int n, int k)
{
    int i,s=0;
    for(i=0;i<n;i++)
        s+=a[k][i];
    return s;
}

int main()
{
    int a[30][30], n, m, smax=INT_MIN;
    fin>>m>>n;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            fin>>a[i][j];
    for(int i=0;i<n;i++)
        if(sub(a,n,i)>=smax)
            smax=sub(a,n,i);
    for(int i=0;i<n;i++)
        if(sub(a,n,i)==smax)
        {
            cout<<i+1<<" "<<smax;
            break;
        }


    return 0;
}




s30
/*

*/
#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
ifstream fin("date.in");
int prim(int x)
{
    int i,ok=1;
    if(x<2||x%2==0)
        ok=0;
    for(i=3;i<=sqrt(x);i+=2)
        if(x%i==0)
            ok=0;
    return ok;
}
void sortare(int n,int v[100])
{
    int i,aux,j;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(v[i]>v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
}
int main()
{
    int n=0,v[100],i,ok=0,c;
    while(fin>>c)
    {
        v[n]=c;
        n++;
    }
    sortare(n,v);
    for(i=0;i<n;i++)
        {if(prim(v[i]))
            {cout<<v[i]<<" "; break;}
        else
            ok++;}
    if(ok==n)
        cout<<"NU EXISTA";
    else
        for(i=n-1;i>=0;i--)
            if(prim(v[i]))
            {
                cout<<v[i]; break;
            }

    return 0;
}






