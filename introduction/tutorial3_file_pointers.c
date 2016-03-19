#include<stdio.h>
/*
pointers and files
*/
int main(void)
{
    FILE *p_input; // FILE is a type like int or double.
    FILE *p_output; //pointers.. remember?.. theses are pointers to variables of type file.
     double data;
     int status;
// Prerequisite The file "text1.text" must exist.
     p_input=fopen("text1.txt","r");//fopen()prepares the files for use
     p_output=fopen("text2.txt","w");//"r"=read. "w"= write
     //now the pointers can be used as references to the files

     status=fscanf(p_input,"%lf",&data); //this is similar to scanf...just an additional argument
                                        // with the address of the file.
    //fscanf returns a 1 when there is data is read form the file. and eof/0 when file is empty
     while(status==1)//check if data was read from file
     {
         data=2*data;//double the value
         fprintf(p_output,"%.2lf\n",data); //write into output file
         status=fscanf(p_input,"%lf",&data); //check if file is now empty.

     }
     //always close files after use
     fclose(p_input);
     fclose(p_output);


     return(0);

}
