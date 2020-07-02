#include<stdio.h>

int main()
{
    	int slctdNum;
	float val;

    	printf("Enter number of power options:\n\n");
	printf("1.Watt\n2.Horsepower\n => ");

	scanf("%d", &slctdNum);

    	switch(slctdNum)
    	{
        	case 1:
		    printf("Enter value of watt => ");
            	    scanf("%f",&val);
		    printf("\nWatts to mechanic / hydraulic horsepower => %f\n",val*0.0013410220888);
		    printf("Watts to electrical horsepower => %f\n", val*0.0013404825737);
		    printf("Watts to metric horsepower => %f\n", val*0.0013596216173);
            	    break;

		case 2:
		    printf("Enter value of horsepower => ");
		    scanf("%f",&val);
		    printf("\nMechanic / hydraulic horsepower to watts => %f\n",val*745.699872);
		    printf("Electrical horsepower to watts => %f\n",val*746);
		    printf("Metric horsepower => %f\n",val*735.49875);
		    break;

        	default:
            	printf("Error! operator is not correct");

    	}

	return 0;
}
