#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
typedef struct 
{
    char oper[1000];
    char op1[2000];
    char op2[2000];
    char res[2000];

}qdr;

qdr quad[1000];
extern int qc;
extern float oper,resultat;
float oper3=1;
char oper1[60],oper2[60],str[60],str1[60],str2[60],str3[30],string[30] ;
char t[20],tmp[70],sauvTab[30],tmp1[20],tmp2[20],tmp3[20],chainee[20];
int T = 0;

/*****************************************************************************************************************/
#define max_val 30

typedef struct cell5 *stack; //pointeur smato stack
typedef struct cell5
{
    char info[max_val];
    stack suiv;
}py;

stack quadruplet = NULL ; 

int isEmpty(stack s) {
    return s == NULL;
} 

const char* peek(stack s) {
    if (!isEmpty(s)) {
        return s->info;
    } else {
        printf("La pile est vide\n");
        exit(EXIT_FAILURE);
    }
}

stack pushin(stack *tete, char info[]) {
    stack p = malloc(sizeof(py));
    if (p == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    strcpy(p->info, info);
    p->suiv = *tete;
    *tete = p;

    return *tete;
}

char *popping(stack *tete) {
    if (*tete == NULL) {
        printf("Underflow: Cannot pop from an empty stack.\n");
        return NULL;
    }

    stack p = *tete;
    *tete = (*tete)->suiv;

    // Allocate memory for the string to be returned
    char *c = malloc(strlen(p->info) + 1);
    if (c == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }

    strcpy(c, p->info);
    free(p);

    return c;
}

void display_LIFO(stack p)
{
    while (p != NULL){
        printf("%s   ",p->info);
        p = p->suiv;
    }
}
/****************************************************************************************************/
void quadr(char opr[],char op1[],char op2[],char res[])
{
    strcpy(quad[qc].oper,opr);
    strcpy(quad[qc].op1,op1);
    strcpy(quad[qc].op2,op2);
    strcpy(quad[qc].res,res);

    qc++;
}

void ajour_quad(int num_quad,int colon_quad,char val[])
{
    if(colon_quad == 0) 
    {
        strcpy(quad[num_quad].oper,val);
    }else if (colon_quad == 1)
    {
        strcpy(quad[num_quad].op1,val);
    }else if(colon_quad == 2) 
    {
        strcpy(quad[num_quad].op2,val);
    }else if(colon_quad == 3) 
    {
        strcpy(quad[num_quad].res,val);
    }
}
void afficher_qdr()
{
    printf("*********************LES QUADRUPLETS*************************\n");
    int i;
    for(i=0;i<qc;i++)
    {
        printf("\n %d-( %s ,%s , %s , %s )\n",i,quad[i].oper,quad[i].op1,quad[i].op2,quad[i].res);
        printf("-------------------------------------------------------------\n");
    }

}
/**********************************************************************************************************/
bool isFloat(const char *str) {
    char *endptr;
    strtod(str, &endptr);

    // Check if the entire string was consumed during the conversion
    return *endptr == '\0';
}
void R1 (char valeur[])
{    
    pushin(&quadruplet,valeur);
}
char* Rpeek()
{
    strcpy(tmp,popping(&quadruplet));
   if (!(isFloat(tmp))) 
    {
        popping(&quadruplet);         
    }
    return tmp;
       
}
char* Rpop ()
{  
    strcpy(tmp,popping(&quadruplet));
    return tmp;
}
char* quadcond(char oper [30])
{
    strcpy(str1,popping(&quadruplet)); 
    strcpy(string, oper);
    strcpy(str2,popping(&quadruplet));    
    quadr(string,str1,str2,"vide"); 
    T++;
    sprintf(str3,"%d",T);
    strcpy(string, "T");
    strcat(string, str3); 
    strcpy(tmp,string);
    R1(tmp);
    return tmp;

}
char* R2 (char idf[30],char cst1[30],char valeur[])
{ 
    strcpy(sauvTab,idf);  
    strcat(sauvTab,"("); 
    strcat(sauvTab,tmp1);    
    strcat(sauvTab,")");
    quadr("BOUNDS",tmp1,"vide","vide"); 
    return sauvTab;
}
char* R7 (char idf[30],char cst1,char cst2,char valeur[])
{    
    strcpy(sauvTab,idf);  
    strcat(sauvTab,"(");
    strcat(sauvTab,tmp1); 
    strcat(sauvTab,","); 
    strcat(sauvTab,tmp2); 
    strcat(sauvTab,")"); 
    quadr("BOUNDS",tmp1,tmp2,"vide"); 
    return sauvTab;
}
char* R6 ()
{   
    resultat=0;
    strcpy(str1,popping(&quadruplet));

    if (isFloat(str1)) 
    {
        oper=atof(str1); 
        resultat=resultat+oper;

    } else{
       oper=atof(popping(&quadruplet));
        resultat=resultat+oper;
    }   
    strcpy(str2,popping(&quadruplet)); 
    if (isFloat(str2)) 
    {       
        oper=atof(str2); 
        resultat=resultat+oper;  

    }
    else{    
      oper=atof(popping(&quadruplet));
      resultat=resultat+oper; 
    } 
    //function to compare types
    T++; 
    sprintf(str3,"%d",T);
    strcpy(string, "T");
    strcat(string, str3);
    quadr("+",str1,str2,string);  
    strcpy(tmp, string);
    R1(tmp);
    return tmp;
}
char*  R5 ()
{
    resultat=0;
    strcpy(str1,popping(&quadruplet));

    if (isFloat(str1)) 
    {
        oper=atof(str1); 
        resultat=resultat-(oper);
    } else  
    {//idf
        oper=atof(popping(&quadruplet));
        resultat=resultat-(oper);
    }  
    strcpy(str2,popping(&quadruplet)); 
    if (isFloat(str2)) 
    {       
       oper=atof(str2); 
        resultat=resultat-(oper);
    } else  
    {//idf
        oper=atof(popping(&quadruplet));
        resultat=resultat-(oper);  
    }    
    //function to compare types 
    T++; 
    sprintf(str3,"%d",T);
    strcpy(string, "T");
    strcat(string, str3);
    quadr("-",str1,str2,string);
    strcpy(tmp, string);
    R1(tmp);
    return tmp; 
}
char*  R4 ()
{
    resultat=1;  
    strcpy(str1,popping(&quadruplet));
    if (isFloat(str1)) 
    {

        oper3=atof(str1); 
        resultat=resultat*oper3;

    } else  
    {//idf
        oper3=atof(popping(&quadruplet));
        resultat=resultat*oper3;
    }   
    strcpy(str2,popping(&quadruplet)); 
    if (isFloat(str2)) 
    {       
        oper3=atof(str2); 
        resultat=resultat*oper3;

    } else  
    {//idf

        oper3=atof(popping(&quadruplet));
        resultat=resultat*oper3;
    }    
    //function to compare types
    T++; 
    sprintf(str3,"%d",T);
    strcpy(string, "T");
    strcat(string, str3);
    quadr("*",str1,str2,string);
    strcpy(tmp, string);
    R1(tmp);
    return tmp; 
}
char*  R3 (char t[])
{
    resultat=1;
    strcpy(str1,t);

    if (isFloat(str1)) 
    {
        oper=atof(str1); 
        resultat=oper/resultat; 

    } else  
    {//idf
       oper=atof(popping(&quadruplet));
        resultat=oper/resultat;
    }   
    strcpy(str2,popping(&quadruplet)); 

    if (isFloat(str2)) 
    {       
        oper=atof(str2); 
        resultat=oper/resultat;

    } else  
    {//idf

       oper=atof(popping(&quadruplet));
        resultat=oper/resultat; 
    }    
    //function to compare types  
    T++; 
    sprintf(str3,"%d",T);
    strcpy(string, "T");
    strcat(string, str3);
    quadr("/",str1,str2,string);
    strcpy(tmp, string);
    R1(tmp);
    return tmp;  
}



/****************************************************************************************************************/


