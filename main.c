#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int choix=0;
    int cpt=0;
    int cpt2=0;
    char NbRom[20];
    char ChArb[20];
    char ArbConvert[20];
    int RomConvert=0;
    int NbArb=0;
    int prev=1;
    if (choix=1)
    printf("Ecrire votre chiffre romain\n");
    scanf("%s",&NbRom);
for (cpt2=1;cpt2<strlen(NbRom);cpt2++)
	if ((NbRom[cpt2]=='I') && ((NbRom[cpt2+1]!='V')||(NbRom[cpt2+1]!='X')||(NbRom[cpt2+1]!='L')||(NbRom[cpt2+1]!='C')||(NbRom[cpt2+1]!='D')||(NbRom[cpt2+1]!='M')))
		RomConvert=RomConvert+1;
	if ((NbRom[cpt2]=='V') && ((NbRom[cpt2+1]!='X')||(NbRom[cpt2+1]!='L')||(NbRom[cpt2+1]!='C')||(NbRom[cpt2+1]!='D')||(NbRom[cpt2+1]!='M')))
	if (NbRom[cpt2-1]=='I')
		RomConvert=RomConvert+4;
	else
		RomConvert=RomConvert+5;

	if ((NbRom[cpt2]=='X') && ((NbRom[cpt2+1]!='L')||(NbRom[cpt2+1]!='C')||(NbRom[cpt2+1]!='D')||(NbRom[cpt2+1]!='M')))
	if (NbRom[cpt2-1]=='I')
		RomConvert=RomConvert+9;
	else
		RomConvert=RomConvert+10;

	if ((NbRom[cpt2]=='L') && ((NbRom[cpt2+1]!='C')||(NbRom[cpt2+1]!='D')||(NbRom[cpt2+1]!='M')))
	if (NbRom[cpt2-1]=='I')
		RomConvert=RomConvert+49;
	if (NbRom[cpt2-1]=='X')
		RomConvert=RomConvert+40;
	else
		RomConvert=RomConvert+50;

	if ((NbRom[cpt2]=='C') && ((NbRom[cpt2+1]!='D')||(NbRom[cpt2+1]!='M')))
	if (NbRom[cpt2-1]=='I')
		RomConvert=RomConvert+99;
	else if (NbRom[cpt2-1]=='X')
		RomConvert=RomConvert+90;
	else
		RomConvert=RomConvert+100;

	if ((NbRom[cpt2]=='D') && ((NbRom[cpt2+1]!='M')))
	if (NbRom[cpt2-1]=='I')
		RomConvert=RomConvert+499;
	else if (NbRom[cpt2-1]=='X')
		RomConvert=RomConvert+490;
	else if (NbRom[cpt2-1]=='C')
		RomConvert=RomConvert+400;
	else
		RomConvert=RomConvert+500;

	if (NbRom[cpt2]=='M')
	if (NbRom[cpt2-1]=='I')
		RomConvert=RomConvert+999;
	else if (NbRom[cpt2-1]=='X')
		RomConvert=RomConvert+990;
	else if (NbRom[cpt2-1]=='C')
		RomConvert=RomConvert+900;
	else
		RomConvert=RomConvert+1000;

else if (choix=2)
printf("Ecrire votre chiffre arabe\n");
scanf("%d",&NbArb);
NbArb=snprintf(ChArb, 100,60,30);
for (cpt=1;cpt<strlen(NbRom);cpt++)
	if (LONGUEUR(ChArb)==4)
		if (ChArb[1]=="1")
			ArbConvert[prev]="M";
			prev=prev+1;
		else if (ChArb[1]=="2")
			ArbConvert[prev]="M";
			prev=prev+1;
			ArbConvert[prev]="M";
			prev=prev+1;
		else if (ChArb[1]=="3")
			ArbConvert[prev]="M";
			prev=prev+1;
			ArbConvert[prev]="M";
			prev=prev+1;
			ArbConvert[prev]="M";
			prev=prev+1;
		if (ChArb[2]=="1")
			ArbConvert[prev]="C";
			prev=prev+1;
		else if (ChArb[2]=="2")
			ArbConvert[prev]="C";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
		else if (ChArb[2]=="3")
			ArbConvert[prev]="C";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
		else if (ChArb[2]=="4")
			ArbConvert[prev]="C";
			prev=prev+1;
			ArbConvert[prev]="D";
			prev=prev+1;
		else if (ChArb[2]=="5")
			ArbConvert[prev]="D";
			prev=prev+1;
		else if (ChArb[2]=="6")
			ArbConvert[prev]="D";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
		else if (ChArb[2]=="7")
			ArbConvert[prev]="D";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
		else if (ChArb[2]=="8")
			ArbConvert[prev]="D";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
		else if (ChArb[2]=="9")
			ArbConvert[prev]="C";
			prev=prev+1;
			ArbConvert[prev]="M";
			prev=prev+1;
		if (ChArb[3]=="1")
			ArbConvert[prev]="X";
			prev=prev+1;
		else if (ChArb[3]=="2")
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
		else if (ChArb[3]=="3")
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
		else if (ChArb[3]=="4")
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="L";
			prev=prev+1;
		else if (ChArb[3]=="5")
			ArbConvert[prev]="L";
			prev=prev+1	;
		else if (ChArb[3]=="6")
			ArbConvert[prev]="L";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
		else if (ChArb[3]=="7")
			ArbConvert[prev]="L";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
		else if (ChArb[3]=="8")
			ArbConvert[prev]="L";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
		else if (ChArb[3]=="9")
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
		if (ChArb[4]=="1")
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[4]=="2")
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[4]=="3")
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[4]=="4")
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="V";
			prev=prev+1;
		else if (ChArb[4]=="5")
			ArbConvert[prev]="V";
			prev=prev+1;
		else if (ChArb[4]=="6")
			ArbConvert[prev]="V";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[4]=="7")
			ArbConvert[prev]="V";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[4]=="8")
			ArbConvert[prev]="V";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[4]=="9")
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
	else if (LONGUEUR(ChArb)==3)
		if (ChArb[1]=="1")
			ArbConvert[prev]="C";
			prev=prev+1;
		else if (ChArb[1]=="2")
			ArbConvert[prev]="C";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
		else if (ChArb[1]=="3")
			ArbConvert[prev]="C";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
		else if (ChArb[1]=="4")
			ArbConvert[prev]="C";
			prev=prev+1;
			ArbConvert[prev]="D";
			prev=prev+1;
		else if (ChArb[1]=="5")
			ArbConvert[prev]="D";
			prev=prev+1;
		else if (ChArb[1]=="6")
			ArbConvert[prev]="D";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
		else if (ChArb[1]=="7")
			ArbConvert[prev]="D";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
		else if (ChArb[1]=="8")
			ArbConvert[prev]="D";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
		else if (ChArb[1]=="9")
			ArbConvert[prev]="C";
			prev=prev+1;
			ArbConvert[prev]="M";
			prev=prev+1;
		if (ChArb[2]=="1")
			ArbConvert[prev]="X";
			prev=prev+1;
		else if (ChArb[2]=="2")
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
		else if (ChArb[2]=="3")
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
		else if (ChArb[2]=="4")
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="L";
			prev=prev+1;
		else if (ChArb[2]=="5")
			ArbConvert[prev]="L";
			prev=prev+1	;
		else if (ChArb[2]=="6")
			ArbConvert[prev]="L";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
		else if (ChArb[2]=="7")
			ArbConvert[prev]="L";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
		else if (ChArb[2]=="8")
			ArbConvert[prev]="L";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
		else if (ChArb[2]=="9")
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
		if (ChArb[3]=="1")
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[3]=="2")
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[3]=="3")
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[3]=="4")
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="V";
			prev=prev+1;
		else if (ChArb[3]=="5")
			ArbConvert[prev]="V";
			prev=prev+1;
		else if (ChArb[3]=="6")
			ArbConvert[prev]="V";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[3]=="7")
			ArbConvert[prev]="V";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[3]=="8")
			ArbConvert[prev]="V";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[3]=="9")
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
	else if (LONGUEUR(ChArb)==2)
		if (ChArb[1]=="1")
			ArbConvert[prev]="X";
			prev=prev+1;
		else if (ChArb[1]=="2")
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
		else if (ChArb[1]=="3")
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
		else if (ChArb[1]=="4")
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="L";
			prev=prev+1;
		else if (ChArb[1]=="5")
			ArbConvert[prev]="L";
			prev=prev+1	;
		else if (ChArb[1]=="6")
			ArbConvert[prev]="L";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
		else if (ChArb[1]=="7")
			ArbConvert[prev]="L";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
		else if (ChArb[1]=="8")
			ArbConvert[prev]="L";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
		else if (ChArb[1]=="9")
			ArbConvert[prev]="X";
			prev=prev+1;
			ArbConvert[prev]="C";
			prev=prev+1;
		if (ChArb[2]=="1")
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[2]=="2")
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[2]=="3")
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[2]=="4")
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="V";
			prev=prev+1;
		else if (ChArb[2]=="5")
			ArbConvert[prev]="V";
			prev=prev+1;
		else if (ChArb[2]=="6")
			ArbConvert[prev]="V";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[2]=="7")
			ArbConvert[prev]="V";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[2]=="8")
			ArbConvert[prev]="V";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[2]=="9")
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;
	else if (LONGUEUR(ChArb)==1)
		if (ChArb12]=="1") ;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[1]=="2")
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[1]=="3")
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[1]=="4")
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="V";
			prev=prev+1;
		else if (ChArb[1]=="5")
			ArbConvert[prev]="V";
			prev=prev+1;
		else if (ChArb[1]=="6")
			ArbConvert[prev]="V";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[1]=="7")
			ArbConvert[prev]="V";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[1]=="8")
			ArbConvert[prev]="V";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="I";
			prev=prev+1;
		else if (ChArb[1]=="9")
			ArbConvert[prev]="I";
			prev=prev+1;
			ArbConvert[prev]="X";
			prev=prev+1;


}




