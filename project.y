%{
    #include <stdio.h>    
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <ctype.h>
    
    int nb_ligne=1, Col=1;
    float resultat;
    float result;
    FILE  *file; 
    int par1;
    extern char file_name[20];
    extern char ch;
    extern char sauv_type [30];
    int Fin_if=0,deb_else=0,qc=0,sauv_BZ=0,sauv_BR=0,affect,oper,write,i=0,j=0;
    extern char tmp [90],t[20],sauvTab[30],tmp1 [20],tmp2[20],tmp3[20];
    
%}

%union { 
int   entier;
char*   str;
char car;
float reel;
}

%token Mc_program  Mc_end Mc_routine Mc_endr Mc_call <str>Mc_logical <str>Mc_character <str>Mc_True <str>Mc_False <str>Mc_integer <str>Mc_real <str>Mc_if <str>Mc_then <str>Mc_else <str>Mc_endif <str>Mc_dowhile <str>Mc_enddo <str>Mc_read <str>Mc_write <str>Mc_equivalence <str>Mc_dimension <str>or <str>and <str>gt <str>ge <str>eq <str>ne <str>le <str>lt <str>add <str>sub mult division <str>idf <entier>cst <str>chaine aff pvg vir point DP parOuv parFer  erreur;
%start S

%%
S:ROUTINE_LIST PROGRAM
{
    printf("syntaxe correct\n");
}
;
ROUTINE_LIST: ROUTINE ROUTINE_LIST
| 
;
ROUTINE: Mc_integer Mc_routine idf parOuv ARGUMENT parFer DEC List_inst AFFECTATION  Mc_endr {add_type($3,"INTEGER");  }
|Mc_real Mc_routine idf parOuv ARGUMENT parFer DEC List_inst AFFECTATION  Mc_endr {add_type($3, "REAL");}
|Mc_logical Mc_routine idf parOuv ARGUMENT parFer DEC List_inst AFFECTATION  Mc_endr {add_type($3, "LOGICAL");}
|Mc_character Mc_routine idf parOuv ARGUMENT parFer DEC List_inst AFFECTATION  Mc_endr {add_type($3, "CHARACTER");}
;
PROGRAM:Mc_program idf DEC List_inst Mc_end 
;
ARGUMENT:ARG 
| 
;
ARG: EXP vir ARG { write=qc;  Rpeek(); quadr("ARG",tmp,"vide","vide"); ajour_quad(write,1,tmp);   }
|EXP { write=qc; Rpeek(); quadr("ARG",tmp,"vide","vide"); ajour_quad(write,1,tmp);  }
;
/*************************************************************************************************************************************/
DEC: Mc_integer SUITE_DEC_INT pvg DEC 
|Mc_real SUITE_DEC_REAL pvg DEC 
|Mc_logical SUITE_DEC_LOGICAL pvg DEC 
|Mc_character SUITE_DEC_CHAR pvg DEC 
|
;

/*************************************************************************************************************************************/
SUITE_DEC_INT : LIST_IDF_INT
|idf Mc_dimension parOuv EXP parFer { strcpy(tmp1,tmp); R2($1,tmp1); quadr("ADEC",$1,"vide","vide"); add_type(sauvTab,"INTEGER", nb_ligne, Col, file_name);}
|idf Mc_dimension parOuv EXP vir EXP parFer {Rpop(); strcpy(tmp2,tmp); Rpop(); strcpy(tmp1,tmp); R7($1,tmp1,tmp2); quadr("ADEC",$1,"vide","vide"); add_type(sauvTab,"INTEGER", nb_ligne, Col, file_name);}
;
SUITE_DEC_REAL: LIST_IDF_REAL
|idf Mc_dimension parOuv EXP  parFer {strcpy(tmp1,tmp); R2($1,tmp1); quadr("ADEC",$1,"vide","vide"); add_type($1,"REAL", nb_ligne, Col, file_name);}
|idf Mc_dimension parOuv EXP vir EXP parFer {Rpop(); strcpy(tmp2,tmp); Rpop(); strcpy(tmp1,tmp); R7($1,tmp1,tmp2); quadr("ADEC",$1,"vide","vide"); add_type(sauvTab,"REAL", nb_ligne, Col, file_name);}
;
SUITE_DEC_LOGICAL: LIST_IDF_LOGICAL
||idf Mc_dimension parOuv EXP parFer {strcpy(tmp1,tmp); R2($1,tmp1); quadr("ADEC",$1,"vide","vide"); add_type($1,"LOGICAL", nb_ligne, Col, file_name);}
|idf Mc_dimension parOuv EXP vir EXP parFer {Rpop(); strcpy(tmp2,tmp); Rpop(); strcpy(tmp1,tmp); R7($1,tmp1,tmp2); quadr("ADEC",$1,"vide","vide"); add_type($1,"LOGICAL", nb_ligne, Col, file_name);}
;
SUITE_DEC_CHAR : idf mult cst vir SUITE_DEC_CHAR {add_type($1, "CHARACTER", nb_ligne, Col, file_name);  oper=qc;  quadr("*",$1,tmp,"vide"); sprintf(tmp,"%d",$3); ajour_quad(oper,2,tmp); add_value($1, tmp, nb_ligne, Col, file_name); }
| idf mult cst                                    {add_type($1, "CHARACTER", nb_ligne, Col, file_name); oper=qc;  quadr("*",$1,tmp,"vide"); sprintf(tmp,"%d",$3); ajour_quad(oper,2,tmp); add_value($1, tmp, nb_ligne, Col, file_name);}
| idf vir SUITE_DEC_CHAR {add_type($1, "CHARACTER", nb_ligne, Col, file_name);}
| idf                    {add_type($1, "CHARACTER", nb_ligne, Col, file_name);}
|idf Mc_dimension parOuv EXP  parFer {Rpeek(); strcpy(tmp1,tmp); R2($1,tmp1); quadr("ADEC",$1,"vide","vide"); add_type($1,"LOGICAL", nb_ligne, Col, file_name);}
|idf Mc_dimension parOuv EXP vir EXP parFer {Rpop(); strcpy(tmp2,tmp); Rpop(); strcpy(tmp1,tmp); R7($1,tmp1,tmp2); quadr("ADEC",$1,"vide","vide"); add_type(sauvTab,"LOGICAL", nb_ligne, Col, file_name);}
;
/*************************************************************************************************************************************/
LIST_IDF_LOGICAL: idf vir LIST_IDF_LOGICAL {add_type($1,"LOGICAL", nb_ligne, Col, file_name);}
|idf                      {add_type($1,"LOGICAL", nb_ligne, Col, file_name);}
;
LIST_IDF_INT:idf vir LIST_IDF_INT{add_type($1,"INTEGER", nb_ligne, Col, file_name);}
|idf                 {add_type($1,"INTEGER", nb_ligne, Col, file_name);}
;
LIST_IDF_REAL: idf vir LIST_IDF_REAL{add_type($1, "REAL", nb_ligne, Col, file_name);}
|idf                  {add_type($1,"REAL", nb_ligne, Col, file_name);}
;
/*************************************************************************************************************************************/
LIST_IDF: idf aff EXP vir LIST_IDF {    /*comp_type($1,"INTREAL", nb_ligne, Col, file_name);*/}
|idf vir LIST_IDF   {strcpy(tmp,$1);}
|idf aff EXP{/*comp_type($1,"INTREAL", nb_ligne, Col, file_name);*/}
|idf {strcpy(tmp,$1);}
|idf aff Mc_True vir LIST_IDF {comp_type($1,"LOGICAL", nb_ligne, Col, file_name); add_value($1, "TRUE", nb_ligne, Col, file_name);}
|idf aff Mc_True              {comp_type($1,"LOGICAL", nb_ligne, Col, file_name); add_value($1, "TRUE", nb_ligne, Col, file_name);}
|idf aff Mc_False vir LIST_IDF {comp_type($1,"LOGICAL", nb_ligne, Col, file_name); add_value($1, "FALSE", nb_ligne, Col, file_name);}
|idf aff Mc_False              {comp_type($1,"LOGICAL", nb_ligne, Col, file_name); add_value($1, "FALSE", nb_ligne, Col, file_name);}
;
/*************************************************************************************************************************************/
List_inst:List_inst INST
|    
;
INST:READ 
|WRITE 
|DOWHILE 
|EQUIVALENCE 
|FUN_CALL 
|AFFECTATION 
|IFSTAT 
;
/***************************************************************************************************************************************************************/
AFFECTATION:idf aff EXP pvg {comp_type($1,"INTREAL", nb_ligne, Col, file_name); affect=qc; quadr("=",tmp,"vide",$1);  ajour_quad(affect,1,tmp); add_value($1, tmp, nb_ligne, Col, file_name); } 
| idf aff Mc_False pvg {comp_type($1,"LOGICAL", nb_ligne, Col, file_name);add_value($1, "FALSE", nb_ligne, Col, file_name);  quadr("=","FALSE","vide",$1);   }
| idf aff Mc_True pvg {comp_type($1,"LOGICAL");add_value($1, "TRUE", nb_ligne, Col, file_name);  quadr("=","TRUE","vide",$1);  }
| idf aff chaine pvg {add_value($1, $3, nb_ligne, Col, file_name);  quadr("=",$3,"vide",$1);                          }
| idf parOuv cst parFer  aff EXP pvg {  comp_type(sauvTab,"INTREAL", nb_ligne, Col, file_name);  sprintf(tmp1,"%d",$3);  R2 ($1,tmp1);
                                    affect=qc; quadr("=",tmp,"vide",sauvTab);  ajour_quad(affect,3,sauvTab);  ajour_quad(affect,1,tmp); 
                                      add_value(sauvTab, tmp, nb_ligne, Col, file_name);                                       }
| idf parOuv cst parFer aff chaine pvg {sprintf(tmp1,"%d",$3);  R2 ($1,tmp1);  quadr("=",$6,"vide",sauvTab);    
                                      add_value($1, $6, nb_ligne, Col, file_name);          }
| idf parOuv cst parFer aff Mc_False pvg {sprintf(tmp1,"%d",$3);  R2 ($1,tmp1); quadr("=","FALSE","vide",sauvTab); comp_type(sauvTab,"LOGICAL", nb_ligne, Col, file_name);
                                                    add_value(sauvTab, "FALSE", nb_ligne, Col, file_name); }
| idf parOuv cst parFer aff Mc_True pvg {sprintf(tmp1,"%d",$3);  R2 ($1,tmp1); quadr("=","TRUE","vide",sauvTab); comp_type(sauvTab,"LOGICAL", nb_ligne, Col, file_name);
                                           add_value(sauvTab, "TRUE", nb_ligne, Col, file_name); }
| idf parOuv cst vir cst parFer  aff EXP pvg { sprintf(tmp1,"%d",$3); sprintf(tmp2,"%d",$5);  R7 ($1,tmp1,tmp2);  comp_type(sauvTab,"INTREAL", nb_ligne, Col, file_name); 
                                              affect=qc; quadr("=",tmp,"vide",sauvTab);  ajour_quad(affect,3,sauvTab);  ajour_quad(affect,1,tmp); 
                                               add_value(sauvTab, tmp, nb_ligne, Col, file_name);                                       }
| idf parOuv cst vir cst parFer aff chaine pvg {sprintf(tmp1,"%d",$3); sprintf(tmp2,"%d",$5);  R7 ($1,tmp1,tmp2); affect=qc; quadr("=",$8,"vide",sauvTab);  ajour_quad(affect,3,sauvTab);
                                               add_value(sauvTab, $8, nb_ligne, Col, file_name);                                                   }
| idf parOuv cst vir cst parFer aff Mc_False pvg {sprintf(tmp1,"%d",$3); sprintf(tmp2,"%d",$5);  R7($1,tmp1,tmp2); affect=qc; quadr("=",tmp,"vide",sauvTab);  ajour_quad(affect,3,sauvTab);
                                                comp_type(sauvTab,"LOGICAL", nb_ligne, Col, file_name);   add_value(sauvTab, "FALSE", nb_ligne, Col, file_name); }
| idf parOuv cst vir cst parFer aff Mc_True pvg {sprintf(tmp1,"%d",$3); sprintf(tmp2,"%d",$5); R7($1,tmp1,tmp2); affect=qc; quadr("=",tmp,"vide",sauvTab);  ajour_quad(affect,3,sauvTab); 
                                                 comp_type($1,"LOGICAL", nb_ligne, Col, file_name);add_value($1, "TRUE", nb_ligne, Col, file_name); }
;
/************************************************************************************************************************************************************/
EQUIVALENCE:Mc_equivalence parOuv ARG parFer vir parOuv ARG parFer pvg {   quadr("EQUIVALENCE","vide","vide","vide");   }
;
FUN_CALL:idf aff Mc_call idf parOuv ARG parFer pvg  { strcpy(tmp,$4); write=qc;  quadr("CALL",tmp,"vide","vide"); ajour_quad(write,1,tmp);  }
;
READ:Mc_read parOuv LIST_IDF parFer pvg { write=qc; quadr("READ","vide","vide",tmp);  ajour_quad(write,3,tmp); }
;
WRITE:Mc_write parOuv Message parFer pvg 
; 
Message:EXP vir Message { write=qc; quadr("WRITE", tmp, "vide", "vide");    ajour_quad(write,1,tmp); }
|EXP {write=qc; quadr("WRITE", tmp, "vide", "vide");    ajour_quad(write,1,tmp);   }
|Mc_False vir Message {strcpy(tmp1,$1); R1(tmp1); write=qc; quadr("WRITE", tmp1, "vide", "vide");    ajour_quad(write,1,tmp1);}
|chaine vir Message {strcpy(tmp1,$1); R1(tmp1); write=qc; quadr("WRITE", tmp1, "vide", "vide");    ajour_quad(write,1,tmp1);  }
|Mc_False {strcpy(tmp1,$1); R1(tmp1); write=qc; quadr("WRITE", tmp1, "vide", "vide");    ajour_quad(write,1,tmp1);  }
|Mc_True {strcpy(tmp1,$1); R1(tmp1); write=qc; quadr("WRITE", tmp1, "vide", "vide");    ajour_quad(write,1,tmp1);  }
|Mc_True vir Message {strcpy(tmp1,$1); R1(tmp1); write=qc; quadr("WRITE", tmp1, "vide", "vide");    ajour_quad(write,1,tmp1);  }
|chaine {strcpy(tmp1,$1); R1(tmp1); write=qc; quadr("WRITE", tmp1, "vide", "vide");    ajour_quad(write,1,tmp1);  }
;
/***************************************************************************************************************************************************************/
EXP:  EXP sub EXP1  { R5(); } 
| EXP add EXP1      { R6(); }
| EXP1 
;
EXP1: EXP1 mult EXP2  { R4(); }
| EXP1 division parOuv EXP parFer 
| EXP1 division idf {div_zero_idf($3, nb_ligne, Col, file_name);    R3($3); }  
| EXP1 division cst {div_zero_cst($3, nb_ligne, Col, file_name); sprintf(t,"%d",$3);   R3(t); } 
//F HAD LE CAS WIN RANA NDIRO DIVISION SUR 0 AVEC LES TABLEAUX IL N'EST PAS ENTRAIN DE DECLARER L'EXISTANCE DE L'ERREUR SEMANTIQUE
| EXP1 division idf parOuv EXP parFer  {Rpop(); strcpy(tmp1,tmp); R2($3,tmp1); search_value(sauvTab,&result,nb_ligne, Col, file_name); sprintf(tmp,"%.2f",result);  div_zero_cst(tmp, nb_ligne, Col, file_name);  R3(sauvTab); }
| EXP1 division  idf parOuv EXP vir EXP parFer {Rpop(); strcpy(tmp2,tmp); Rpop(); strcpy(tmp1,tmp);R7($3,tmp1,tmp2); search_value(sauvTab,&result,nb_ligne, Col, file_name); sprintf(tmp,"%.2f",result);  div_zero_cst(tmp, nb_ligne, Col, file_name);  R3(sauvTab); }
| EXP2  
;
EXP2: parOuv EXP parFer 
| idf { search_value($1,&result,nb_ligne, Col, file_name);  sprintf(tmp,"%.2f",result); R1(tmp); strcpy(tmp,$1);  R1(tmp);  }
| cst { sprintf(tmp,"%d",$1);   R1(tmp);  }
| idf parOuv EXP parFer  {Rpop(); strcpy(tmp1,tmp); R2($1,tmp1); quadr("BOUNDS",tmp1,tmp2,"vide");  search_value(sauvTab,&result,nb_ligne, Col, file_name); sprintf(tmp,"%.2f",result); R1(tmp); strcpy(tmp,sauvTab); R1(tmp); }
|idf parOuv EXP vir EXP parFer {Rpop(); strcpy(tmp2,tmp); Rpop(); strcpy(tmp1,tmp); R7($1,tmp1,tmp2); search_value(sauvTab,&result,nb_ligne, Col, file_name); sprintf(tmp,"%.2f",result); R1(tmp); strcpy(tmp,sauvTab); R1(tmp);  }
;
/**************************************************************************************************************************************************************/
IFSTAT: IFSTAT1 Mc_else  List_inst  Mc_endif { sprintf(tmp,"%d",qc);  ajour_quad(Fin_if,1,tmp);}
|IFSTAT2 List_inst Mc_endif {sprintf(tmp,"%d",qc);  ajour_quad(deb_else,1,tmp);}
;
IFSTAT1:IFSTAT2 List_inst  {  Fin_if=qc; quadr("BR"," ","vide", "vide"); sprintf(tmp,"%d",qc); ajour_quad(deb_else,1,tmp); }
;
IFSTAT2:Mc_if parOuv COND parFer Mc_then{ deb_else=qc; quadr("BZ","","temp_cond", "vide"); } 
;
/**************************************************************************************************************************************************************/
DOWHILE:DOWHILE1 List_inst Mc_enddo pvg {  sauv_BR=qc; quadr("BR","","vide", "vide"); sprintf(tmp,"%d",sauv_BR);  ajour_quad(sauv_BZ,1,tmp); sprintf(tmp,"%d",sauv_BZ); ajour_quad(sauv_BR,1,tmp); }
;
DOWHILE1:DOWHILE2 parOuv COND parFer { sauv_BZ = qc;  quadr("BZ",tmp,"temp_cond", "vide");  }
;
DOWHILE2:Mc_dowhile 
;
/***************************************************************************************************************************************************************/
COND: COND  or  COND_1   { quadcond("OR");  }  
| COND_1
;
COND_1:  COND_1  and  COND_2 {  quadcond("AND");  }  
| COND_2
;
COND_2:   EXPR_BOOL
| COND3
;
COND3 :EXPR_BOOL  point eq   point EXPR_BOOL{ quadcond("EQ"); }  
| EXPR_BOOL  point gt  point EXPR_BOOL      { quadcond("GT");  }    
|EXPR_BOOL  point ge  point EXPR_BOOL       { quadcond("GE");  }       
|EXPR_BOOL  point ne   point EXPR_BOOL      { quadcond("NE");  }  
|EXPR_BOOL  point le   point EXPR_BOOL      {quadcond("LE"); } 
|EXPR_BOOL  point lt  point EXPR_BOOL       {quadcond("LT");  } 
;
EXPR_BOOL : EXP   
| LOGICAL 
| parOuv COND  or    COND_1 parFer {  quadcond("OR");}  
| parOuv  COND_1  and   COND_2 parFer {  quadcond("AND"); }  
| parOuv COND3 parFer  
| parOuv LOGICAL parFer 
;
/***********************************************************************************************************************************************************************/
LOGICAL: Mc_False {R1("FALSE");}
| Mc_True {R1("TRUE");}
;
/**********************************************************************************************************************************************************************/
%%
int yyerror(char *msg)
{
    printf(" File %s| Ligne %d | Colonne %d| %s\n", file_name, nb_ligne,Col, msg);
}

int main(int argc, char* argv[])
{
    FILE *file = fopen(argv[1], "r");
    strcpy(file_name, argv[1]);
    if (argc != 2 && !file) {
        fprintf(stderr, "Erreur : Impossible d'ouvrir le fichier.\n");
        exit(EXIT_FAILURE);
    }
    yyrestart(file);
    initialisation();    
    yyparse();
    afficher(); 
    afficher_qdr();  
    return 0;
}
yywrap(){}


