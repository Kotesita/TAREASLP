#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>


int main(int argc, char *argv[])/*Main*/
{
    char tabla_ayu[5][7];
    DIR *dir;
    struct dirent *dp;
    int **contador;
    char nombre;

    dir= opendir(argv[1]);//*cambiar por entrada de consola*//

	if(dir==NULL)
	{
		printf("Error Cuatico\n");
	}

	int i=1;
	while((dp=readdir(dir)) != NULL)
	{
		if ( !strcmp(dp->d_name, ".") || !strcmp(dp->d_name, "..") )
		{
			//nada//
		}
		else
		{
			printf("%d: '%s'\n",i,dp->d_name);
			i++;
			FILE *flow; /*lectura de fichero ingresado por consola*/

			char str[100] = "/home/diego/Escritorio/Tarea1/DatosNecesarios/";    /* 100: se reserva espacio extra */

			flow = fopen (strcat(str,dp->d_name),"r");
			if (flow == NULL)
			{
				fprintf(stderr,"Error: el fichero no se ha podido abrir\n");
				return 0;
			}
			printf("'%s'\n",str);

			while (!feof(flow)) /*analisis caracter por caracter*/
			{
				char character=fgetc(flow);
				printf("%c",character);

				}
			}

			fclose(flow);
		}	//read //


	}

    closedir(dir);
    return 0;
}





