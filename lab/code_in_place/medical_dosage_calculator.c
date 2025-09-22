//medical dosage calculator
#include<stdio.h>
int main(void)
{
	float weight_of_patient; //declaring variable for patients weight
	
	printf("Enter the weight of the patient in kgs : ");//prompting the user to enter the weight
	
	scanf("%f",&patient_weight);//allows the user to input the value
	
	float dosage = patient_weight*0.8;//declaring the dosage formula after input so it takes the value that the user entered in the formula
	
	printf("\nThe patient's recommended dosage is %.2f mg",dosage);//output statement
}
