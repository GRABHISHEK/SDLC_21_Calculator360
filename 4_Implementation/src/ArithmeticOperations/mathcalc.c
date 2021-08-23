#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int mathcalc(){
    int choice;
    printf("1-6:Arithmetic Operations:1-Addition 2-Subtaction 3-Multiplication   4-Division  5-Power function 6:mod \n");
    printf("7-8:Single input functions : 7:Squareroot  8:Logarithm with base10 \n");
    printf("9-14 :Trignometric functions : 9:sine 10:cosine 11:tangent  12: cotangent  13:secant 14:cosecant\n");
    printf("15-18 :Other functions : 15:Factorial 16:permutation 17:combination  18: natural_numbers\n");
	
    printf("Enter the choice\n");
    scanf("%d",&choice);
    
    if(choice>0 && choice<7){
        arithmetic_inputs input;
        long long int a=0,b=0;
	    printf("Enter the input1\n");
        scanf("%lld",&a);
	    printf("Enter the input2\n");
        scanf("%lld",&b);
        input.input_1=a;
        input.input_2=b;
        switch(choice){
            case 1:
                add(&input);
            
                printf("Sum is:%lld",input.output);
                break;
            case 2:
                subtract(&input);
                printf("Difference is:%lld",input.output);
                break;

            case 3:
                multiply(&input);
                printf("product is:%lld",input.output);
                break;
            case 4:
                division(&input);
                printf("division between two numbers  is:%lld",input.output);
                break;
            case 5:
                power(&input);
                printf("Power result is:%lld",input.output);
                break;
                 case 6:
                    mod(&input);
                    printf("The Result is %lld",input.output);
                    break;

        }

    }
    else if(choice>6 && choice<9){
            single_inputs s_input;
            float num=0.0;
	        printf("Enter the input1\n");
            scanf("%f",&num);
            s_input.input_3=num;
            switch(choice){
                case 7:
                    square_root(&s_input);
                    printf("Square of the number is %.3f:",s_input.output_2);
                    break;
                case 8:
                    logarithm(&s_input);
                    printf("Log10 value of the given number is %.3f",s_input.output_2);
                    break;
               
                    
            }

        }
        else if(choice>8 && choice<15){
            trignometric_inputs t_input;
            float num_t=0.0;
	        printf("Enter the input for trignometric function\n");
            scanf("%f",&num_t);
            t_input.input_4=num_t;
            switch(choice){
                case 9:
                    sine(&t_input);
                    printf("The Result is %.3f",t_input.output_3);
                    break;
                case 10:
                    cosine(&t_input);
                    printf("The Result is %.3f",t_input.output_3);
                    break;
                case 11:
                    tangent(&t_input);
                    printf("The Result is %.3f",t_input.output_3);
                    break;
                case 12:
                    cotangent(&t_input);
                    printf("The Result is %.3f",t_input.output_3);
                    break;
                case 13:
                    secant(&t_input);
                    printf("The Result is %.3f",t_input.output_3);
                    break;
                case 14:
                    cosecant(&t_input);
                    printf("The Result is %.3f",t_input.output_3);
                    break;
                default:
                    break;
            }
        }
	else{
		  other_inputs o_input;
             long long int n=0,r=0;
	    printf("Enter the input1\n");
        scanf("%lld",&n);
	    printf("Enter the input2\n");
        scanf("%lld",&r);
        o_input.input_5=n;
        o_input.input_6=r;
            switch(choice)
            {
		 case 15:
                    factorial(o_input.input_5,&o_input);
                    printf("Factorial of the number is %lld",o_input.output_4);
                    break;
                case 16:
                    permutation(&o_input);
                    printf("The Result is %lld",o_input.output_4);
                   break;
	            case 17:
                    combination(&o_input);
                    printf("The Result is %lld",o_input.output_4);
                    break;
	            case 18:
                    natural_numbers(&o_input);
                    printf("The Result is %lld",o_input.output_4);
                    break;
	            default:
                    break;
	       }
    }
				
    return 0;
}
