/* countering.c */
/* By Johan Skoglund 2004 */
/* Unofficial Hattrick help tool. */
/* Calculates expected counter attack ability of */
/*   a team with any number of defenders. */
/* Version 0.1 beta */
/* Last edited 2004-05-14 20:45 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char** argv) {
  int o = 0;  /*Offset solution ugly but do coding faster ;o)*/
  int i, ability, xtra = 0;
  float form, counter = 0.0;
  if(argc == 1) {
    printf("\nKontringskalylatorn version 0.1 beta\n");
    printf("Av Johan Skoglund aka Scox_ Granviks BK(46786), 2004\n\n");
    printf("Fyll i f”rsvararnas v„rden; form(heltal), \n");
    printf("f”rsvar(hel-/flyttal) och framspel(hel-/flyttal).\n");
    printf("Placera eventuella omplacerade backar f\224rst och\n");
    printf("indikera hur m\206nga med parametern -[antal] f\224rst i\n");
    printf("listan.\n\n");
    printf("Ex: Fyra fenomenala backar med hyfsat framspel i\n"); 
    printf("    ypperlig form, varav tv\206 omplacerade, plus en \n");
    printf("    legendarisk+2 back med ypperligt framspel i\n");
    printf("    enast†ende form =>\n\n");
    printf("      countering -2 6 8 4 6 8 4 6 8 4 6 8 4 7 10.2 6\n\n");
    printf("    Detta kommer att generera f\224ljande utskrift:\n\n");
    printf("      Unik kontringsf”rm†ga (83.6 po„ng).\n");
  }
  else {
    if(argv[1][0] == '-') {
      if((strlen(argv[1]) > 1)) {
	xtra = atoi(&argv[1][1]);
	o = 1;
	argc--;
      }
      else {
	fprintf(stderr,"Du m\206ste ange antal omplacerade\n");
	exit(0);
      }
    }
    if((argc-1)%3 == 0) {
      if(xtra <= (argc-1)/3) {
	for(i=1;i<argc; i += 3) {
	  switch (atoi(argv[i+o])) {
	  case 2: 
	    form = 0.6; 
	    break;
	  case 3: 
	    form = 0.7; 
	    break;
	  case 4: 
	    form = 0.8; 
	    break;
	  case 5: 
	    form = 0.9; 
	    break;
	  case 6: 
	    form = 1.0; 
	    break;
	  case 7: 
	    form = 1.1; 
	    break;
	  case 8: 
	    form = 1.15; 
	    break;
	  default: 
	    form = 0.0;
	  }
	  if(xtra>0) {
	    counter += 0.85 * form * (atof(argv[i+1+o]) + 2 * atof(argv[i+2+o]));
	    xtra--;
	  }
	  else {
	    counter += form * (atof(argv[i+1+o]) + 2 * atof(argv[i+2+o]));
	  }
	}
	printf("\n");
	counter = counter/10;
	ability = (int) floor(counter);
	switch (ability) {
	case 0:
	  printf("Katastrofal");
	  break;
	case 1:
	  printf("Usel");
	  break;
	case 2:
          printf("D†lig");
	  break;
	case 3:
	  printf("Hyfsad");
	  break;
	case 4:
	  printf("Bra");
	  break;
	case 5:
	  printf("Ypperlig");
	  break;
	case 6:
          printf("Enast†ende");
	  break;
	case 7:
	  printf("Fenomenal");
	  break;
	case 8:
	  printf("Unik");
	  break;
	case 9:
	  printf("Legendarisk");
	  break;
	case 10:
          printf("Gudaben†dad");
	  break;
	case 11:
          printf("™vernaturlig");
	  break;
	case 12:
          printf("Of”rgl”mlig");
	  break;
	case 13:
	  printf("Himmelsk");
	  break;
	case 14:
	  printf("Titanisk");
	  break;
	case 15:
	  printf("Utomjordisk");
	  break;
	case 16:
	  printf("Mytomspunnen");
	  break;
	case 17:
	  printf("Magisk");
	  break;
	case 18:
	  printf("Utopisk");
	  break;
	default:
	  printf("Gudomlig");      
	}
	printf(" kontringsf”rm†ga (%4.1f po„ng).\n",counter*10.0);
      }
      else {
	fprintf(stderr,"F\224r m\206nga omplacerade backar\n");
      }
    }
    else {
      fprintf(stderr,"Fyll i r„tt antal inparamentrar ( = delbart med 3)\n");
      return 0;
    }
  }
}




