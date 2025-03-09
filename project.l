%{  
    #include <wchar.h>
    #include "project.tab.h"
    #include "ts.h"
    #include "Pgm.h"
    extern nb_ligne;
    extern Col;
    extern YYSTYPE yylval;
    char file_name[20];
    char sauv_type [30];
%}

lettre [a-zA-Z]
chiffre [0-9]
IDF {lettre}({lettre}|{chiffre})*
cst (-)?{chiffre}+(\.{chiffre}+)?
chaine \"[^"]*\"
commentaire %.*
%%
"PROGRAM" {
    rechercher(yytext,"Mot cle","","", 1); 
    Col= Col + strlen(yytext); 
    ECHO ;
    return Mc_program;
}
"INTEGER" {
    rechercher(yytext,"Mot cle","","", 1); 
    Col= Col + strlen(yytext); 
    ECHO ;
    return Mc_integer;
}
"REAL" {
    rechercher(yytext,"Mot cle","","", 1); 
    Col= Col + strlen(yytext); 
    ECHO ;
    return Mc_real;
} 
"LOGICAL" {
    rechercher(yytext,"Mot cle","","", 1); 
    Col= Col + strlen(yytext); 
    ECHO ;
    return Mc_logical;
}
"TRUE" {
    rechercher(yytext,"Mot cle","","", 1); 
    Col= Col + strlen(yytext);
    ECHO ; 
    return Mc_True;
}
"FALSE" {
    rechercher(yytext,"Mot cle","","", 1); 
    Col= Col + strlen(yytext); 
    ECHO ;
    return Mc_False;
}
"CHARACTER" {
    rechercher(yytext,"Mot cle","","", 1); 
    Col= Col + strlen(yytext);  
    ECHO ;
    return Mc_character;
}
"DIMENSION" {
    rechercher(yytext,"Mot cle","","", 1); 
    Col= Col + strlen(yytext); 
    ECHO ;
    return Mc_dimension;
}
"IF" {
    rechercher(yytext,"Mot cle","","", 1); 
    Col= Col + strlen(yytext); 
    ECHO ;
    return Mc_if;
}
"ROUTINE" {
    rechercher(yytext,"Mot cle","","", 1); 
    Col= Col + strlen(yytext);  
    ECHO ;
    return Mc_routine;
}
"ENDR" {
    rechercher(yytext,"Mot cle","","", 1); 
    Col= Col + strlen(yytext); 
    ECHO ;
    return Mc_endr;
}
"CALL" {
    rechercher(yytext,"Mot Cle","","",1);
    Col= Col + strlen(yytext); 
    ECHO ;
    return Mc_call;
}
"READ" {
    rechercher(yytext,"Mot cle","","", 1); 
    Col= Col + strlen(yytext); 
    ECHO ;
    return Mc_read;
}
"WRITE" {
    rechercher(yytext,"Mot cle","","", 1); 
    Col= Col + strlen(yytext); 
    ECHO ;
    return Mc_write;
}
"END" {
    rechercher(yytext,"Mot cle","","", 1); 
    Col= Col + strlen(yytext); 
    ECHO ;
    return Mc_end;
}
"THEN" {
    rechercher(yytext,"Mot Cle","","",1);
    Col= Col + strlen(yytext); 
    ECHO ;
    return Mc_then;
}
"ELSE" {
    rechercher(yytext,"Mot Cle","","",1);
    Col= Col + strlen(yytext); 
    ECHO ;
    return Mc_else;
}
"ENDIF" {
    rechercher(yytext,"Mot Cle","","",1);
    Col= Col + strlen(yytext); 
    ECHO ;
    return Mc_endif;
}
"DOWHILE" {
    rechercher(yytext,"Mot Cle","","",1);
    Col= Col + strlen(yytext); 
    ECHO ;
    return Mc_dowhile;
}
"ENDDO" {
    rechercher(yytext,"Mot Cle","","",1);
    Col= Col + strlen(yytext); 
    ECHO ;
    return Mc_enddo;
}
"EQUIVALENCE" {
    rechercher(yytext,"Mot Cle","","",1);
    Col= Col + strlen(yytext); 
    ECHO ;
    return Mc_equivalence;
}
".OR." {
    rechercher(yytext,"sep","","",2);
    Col= Col + strlen(yytext); 
    ECHO ;
    return or;
}
".AND." {
    rechercher(yytext,"sep","","",2);
    Col= Col + strlen(yytext); 
    ECHO ;
    return and;
}
"GT" {
    rechercher(yytext,"sep","","",2);
    Col= Col + strlen(yytext); 
    ECHO ;
    return gt;
}
"GE" {
    rechercher(yytext,"sep","","",2);
    Col= Col + strlen(yytext); 
    ECHO ;
    return ge;
}
"EQ" {
    rechercher(yytext,"sep","","",2); 
    Col= Col + strlen(yytext);
    ECHO ;
    return eq;
}
"NE" {
    rechercher(yytext,"SEP","","",2); 
    Col= Col + strlen(yytext);
    ECHO ;
    return ne;
}
"LE" {
    rechercher(yytext,"SEP","","",2); 
    Col= Col + strlen(yytext);
    ECHO ;
    return le;
}
"LT" {
    rechercher(yytext,"SEP","","",2); 
    Col= Col + strlen(yytext);
    ECHO ;
    return lt;
}
{IDF} {
    yylval.str=strdup(yytext); 
    if (yyleng>10) printf (" WARNING: IDF trop long\n ");
    rechercher(yytext,"idf","","",0);  
    Col= Col + strlen(yytext);
    ECHO ; 
    return idf;
}
{cst} { 
    if((atoi(yytext) >= -32768 && atoi(yytext) <= 32767) || (atof(yytext) >= -32768.32768 && atof(yytext) <= 32767.32767)) 
    {
        yylval.entier=atoi(yytext);
        rechercher(yytext,"CONST","","",0); 
        Col= Col + strlen(yytext); 
        ECHO ;
        return cst;
    }
    else printf("File %s| Ligne %d | Colonne %d| lexical error: CONST non valide\n", file_name, nb_ligne,Col);
}
{chaine} {
    yylval.str=strdup(yytext); 
	rechercher(yytext,"","str","",0);  
    Col= Col + strlen(yytext);  
    ECHO ;
    return chaine;
}
"=" { 
    rechercher(yytext,"sep","","",2);
    Col= Col + strlen(yytext);
    ECHO ;
    return aff;
}
";" { 
    rechercher(yytext,"sep","","",2); 
    Col= Col + strlen(yytext); 
    ECHO ;
    return pvg;
}
"," {
    rechercher(yytext,"sep","","",2); 
    Col= Col + strlen(yytext);
    ECHO ;
    return vir;
}
"(" {
    rechercher(yytext,"sep","","",2); 
    Col= Col + strlen(yytext);
    ECHO ;
    return parOuv;
}
")" {
    rechercher(yytext,"sep","","",2); 
    Col= Col + strlen(yytext);
    ECHO ;
    return parFer;
}
":" {
    rechercher(yytext,"SEP","","",2); 
    Col= Col + strlen(yytext);
    ECHO ;
    return DP;
}
"+" {
    rechercher(yytext,"SEP","","",2); 
    Col= Col + strlen(yytext);
    ECHO ;
    return add;
}
"-" {
    rechercher(yytext,"SEP","","",2); 
    Col= Col + strlen(yytext);
    ECHO ;
    return sub;
}
"*" {
    rechercher(yytext,"SEP","","",2); 
    Col= Col + strlen(yytext);
    ECHO ;
    return mult;
}
"." {
    rechercher(yytext,"SEP","","",2); 
    Col= Col + strlen(yytext);
    ECHO ;
    return point;
}
"/" {
    rechercher(yytext,"SEP","","",2); 
    Col= Col + strlen(yytext);
    ECHO ;
    return division;
}

[ \t] {
    Col= Col + strlen(yytext);  
    ECHO;
}

\n {
    Col= 1; nb_ligne++; 
    ECHO;
}
{commentaire} {
    yylval.str=strdup(yytext); 
    Col= Col + strlen(yytext);
    ECHO;  
}


. { 
    printf ("File %s| Ligne %d | Colonne %d| lexical error: entite non reconnue \n", file_name, nb_ligne,Col);
    return erreur;
    ECHO;
}

%%


