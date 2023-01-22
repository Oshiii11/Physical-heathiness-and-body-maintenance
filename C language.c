//course work 2
//Application  on Physical healthiness and body maintenance

#include<stdio.h>
void uInput1();
void wrkPlan(int, int);
void uInput2();
float BMI;
int age;
int gender;

int main()
{
   printf("WORKOUT PLAN HEALTHCARE APPLICATION\n\n\n");
   uInput1();
   uInput2();
   wrkPlan(age, gender);
   return 0;
}
void uInput1()
{
    float w,h;
    printf("Enter your body weight in kilograms:");
    scanf("%f",&w);
    printf("Enter your body height in meters:");
    scanf("%f",&h);

     BMI=(float)w/(h*h);
      printf("Your BMI value is:%0.2f\n",BMI);
     if(BMI<18.5)
        printf("You are Underweight \n");
     else if(BMI<24.9)
        printf("You are Normal weight \n");
     else if(BMI>24.9)
        printf("You are Obesity \n");

 }
 void uInput2()
 {
   printf("\n\nEnter your gender\n (1 for Male/ 2 for Female):  ") ;
   scanf("%d", &gender);
   printf("\nEnter your age: ") ;
   scanf("%d", &age);
 }
 void wrkPlan(int age,int gender)
 {
    //printf("Hello %d, %d, %f",gender,age, BMI);
     switch(gender)
     {
      case 1:
            if(age>45)
            {
               if(BMI<18.5)
               {
                    printf("\nFollow this diet plan \n\n 8am    :  Oats (100g) + 5 Dates \n 10am : Sweet potatoes/ Casava/ Chick peas /  Green gram \n 1pm :   Rice + Curry + 3 whole eggs \n 3pm :  Samaposha (100g) + Milk \n 6pm :  2 yogurts + 2 Amban Bananas \n 9pm : Pasta (50g) + Chicken Breast (100g) + Steamed Vegetables \n");
                    printf("\nFollow this workout \n\nBody part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                    printf("15 reps 3 sets\n");
               }
               else if(BMI<24.9)
               {
                    printf("\nFollow this workout \n\n Body part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                    printf("15 reps 3 sets light weight\n");
               }
               else if(BMI>24.9)
               {
                   printf("\nfollow this diet plan \n\n 8am : Oats (100g) + Fruits \n 10am : Fat free yogurt + Almonds \n 1pm :   Sweet potato / Vegetable Salad + Broccoli \n 4pm :  Protien Shake \n 8pm :  Grilled Chicken Breast + Spinach/Asparagus \n");
                   printf("\nFollow this workout \n\nBody part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                   printf("15 reps 3 sets \n");
               }
            }
            else if(age>35)
            {
               if(BMI<18.5)
               {
                  printf("\nFollow this diet plan \n\n 8am    :  Oats (100g) + 5 Dates \n 10am : Sweet potatoes/ Casava/ Chick peas /  Green gram \n 1pm :   Rice + Curry + 3 whole eggs \n 3pm :  Samaposha (100g) + Milk \n 6pm :  2 yogurts + 2 Amban Bananas \n 9pm : Pasta (50g) + Chicken Breast (100g) + Steamed Vegetables \n");
                  printf("\nFollow this workout \n\nBody part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                  printf("12 reps 4 sets with a moderate weight \n");
               }
               else if(BMI<24.9)
               {
                  printf("\nFollow this workout\n\n Body part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                  printf("15 reps 4 sets with a moderate weight \n");

               }
               else if(BMI>24.9)
               {
                 printf("\nFollow this diet plan \n\n 8am : Oats (100g) + Fruits \n 10am : Fat free yogurt + Almonds \n 1pm :   Sweet potato / Vegetable Salad + Broccoli \n 4pm :  Protien Shake \n 8pm :  Grilled Chicken Breast + Spinach/Asparagus \n");
                 printf("\nFollow this workout \n\nBody part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                 printf("15 reps 4 sets light weight \n");
               }
            }
            else if(age>25)
            {
               if(BMI<18.5)
               {
                 printf("\nFollow this diet plan \n\n 8am    :  Oats (100g) + 5 Dates \n 10am : Sweet potatoes/ Casava/ Chick peas /  Green gram \n 1pm :   Rice + Curry + 3 whole eggs \n 3pm :  Samaposha (100g) + Milk \n 6pm :  2 yogurts + 2 Amban Bananas \n 9pm : Pasta (50g) + Chicken Breast (100g) + Steamed Vegetables \n");
                 printf("\nFollow this workout \n\nBody part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                 printf("10 to 12 reps 4 sets heavy\n ");

               }
               else if(BMI<24.9)
               {
                  printf("\nFollow this workout\n\n Body part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                  printf("10 to 12 reps 4 sets heavy\n ");

               }

               else if(BMI>24.9)
               {
                 printf("\nfollow this diet plan \n\n 8am : Oats (100g) + Fruits \n 10am : Fat free yogurt + Almonds \n 1pm :   Sweet potato / Vegetable Salad + Broccoli \n 4pm :  Protien Shake \n 8pm :  Grilled Chicken Breast + Spinach/Asparagus \n");
                 printf("\nFollow this workout \n\nBody part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                 printf("15 to 20 reps 4 sets heavy\n ");

               }

            }
            else if(age>16)
            {
               if(BMI<18.5)
               {
                 printf("\nFollow this diet plan \n\n 8am    :  Oats (100g) + 5 Dates \n 10am : Sweet potatoes/ Casava/ Chick peas /  Green gram \n 1pm :   Rice + Curry + 3 whole eggs \n 3pm :  Samaposha (100g) + Milk \n 6pm :  2 yogurts + 2 Amban Bananas \n 9pm : Pasta (50g) + Chicken Breast (100g) + Steamed Vegetables \n");
                 printf("\nFollow this workout \n\nBody part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                 printf("8 to 10 reps 4 sets heavy\n ");

               }
               else if(BMI<24.9)
               {
                 printf("\nFollow this workout\n\n Body part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                 printf("10 to 12 reps 4 sets heavy \n");
               }
               else if(BMI>24.9)
               {
                 printf("\nFollow this diet plan \n\n 8am : Oats (100g) + Fruits \n 10am : Fat free yogurt + Almonds \n 1pm :   Sweet potato / Vegetable Salad + Broccoli \n 4pm :  Protien Shake \n 8pm :  Grilled Chicken Breast + Spinach/Asparagus \n");
                 printf("\nFollow this workout \n\nBody part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                 printf(" 15 to 25 reps 4 sets heavy\n ");
               }
            }
            break;
      case 2:
            if(age>45)
            {
               if(BMI<18.5)
               {
                 printf("\nFollow this diet plan \n\n 8am    :  Oats (100g) + 5 Dates \n 10am : Sweet potatoes/ Casava/ Chick peas /  Green gram \n 1pm :   Rice + Curry + 3 whole eggs \n 3pm :  Samaposha (100g) + Milk \n 6pm :  2 yogurts + 2 Amban Bananas \n 9pm : Pasta (50g) + Chicken Breast (100g) + Steamed Vegetables \n");
                 printf("\nFollow this workout\n\n Body part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                 printf("15 reps 3 sets light weight\n");
               }
               else if(BMI<24.9)
               {
                 printf("\nFollow this workout\n\n Body part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                 printf("15 reps 3 sets light weight\n");
               }
               else if(BMI>24.9)
               {
                 printf("\nFollow this diet plan \n\n 8am : Oats (100g) + Fruits \n 10am : Fat free yogurt + Almonds \n 1pm :   Sweet potato / Vegetable Salad + Broccoli \n 4pm :  Protien Shake \n 8pm :  Grilled Chicken Breast + Spinach/Asparagus \n");
                 printf("\nFollow this workout\n\n Body part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                 printf("15 reps 3 sets light weight\n");
               }
            }
            else if(age>35)
            {
               if(BMI<18.5)
               {
                 printf("\nFollow this diet plan \n\n 8am    :  Oats (100g) + 5 Dates \n 10am : Sweet potatoes/ Casava/ Chick peas /  Green gram \n 1pm :   Rice + Curry + 3 whole eggs \n 3pm :  Samaposha (100g) + Milk \n 6pm :  2 yogurts + 2 Amban Bananas \n 9pm : Pasta (50g) + Chicken Breast (100g) + Steamed Vegetables \n");
                 printf("\nFollow this workout \n\n Body part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                 printf("15 reps 4 sets light weight \n");
               }
               else if(BMI<24.9)
               {
                 printf("\nFollow this workout \n\n Body part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                 printf("12 to 15 reps 4 sets light weight\n ");
               }
               else if(BMI>24.9)
               {
                 printf("\nFollow this diet plan \n\n 8am : Oats (100g) + Fruits \n 10am : Fat free yogurt + Almonds \n 1pm :   Sweet potato / Vegetable Salad + Broccoli \n 4pm :  Protien Shake \n 8pm :  Grilled Chicken Breast + Spinach/Asparagus \n");
                 printf("\nFollow this workout \n\n Body part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                 printf("15 reps 4 sets light weight\n ");
               }
            }
            else if(age>25)
            {
               if(BMI<18.5)
               {
                 printf("\nFollow this diet plan \n\n 8am    :  Oats (100g) + 5 Dates \n 10am : Sweet potatoes/ Casava/ Chick peas /  Green gram \n 1pm :   Rice + Curry + 3 whole eggs \n 3pm :  Samaposha (100g) + Milk \n 6pm :  2 yogurts + 2 Amban Bananas \n 9pm : Pasta (50g) + Chicken Breast (100g) + Steamed Vegetables \n");
                 printf("\nFollow this workout \n\n Body part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                 printf("12 reps 4 sets with a moderate weight \n");
               }
               else if(BMI<24.9)
               {
                 printf("\nFollow this workout \n\n Body part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                 printf("12 reps 4 sets with a moderate weight \n");
               }
               else if(BMI>24.9)
               {
                 printf("\nFollow this diet plan \n\n 8am : Oats (100g) + Fruits \n 10am : Fat free yogurt + Almonds \n 1pm :   Sweet potato / Vegetable Salad + Broccoli \n 4pm :  Protien Shake \n 8pm :  Grilled Chicken Breast + Spinach/Asparagus \n");
                 printf("\nFollow this workout \n\n Body part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                 printf("15 to 20 reps 4 sets with a moderate \n");
               }
            }
            else if(age>16)
            {
               if(BMI<18.5)
               {
                 printf("\nFollow this diet plan \n\n 8am    :  Oats (100g) + 5 Dates \n 10am : Sweet potatoes/ Casava/ Chick peas /  Green gram \n 1pm :   Rice + Curry + 3 whole eggs \n 3pm :  Samaposha (100g) + Milk \n 6pm :  2 yogurts + 2 Amban Bananas \n 9pm : Pasta (50g) + Chicken Breast (100g) + Steamed Vegetables \n");
                 printf("\nFollow this workout \n\n Body part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                 printf("10 to 12 reps 4 sets heavy \n");
               }

               else if(BMI<24.9)
               {
                 printf("\nFollow this workout \n\n Body part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                 printf(" 12 reps 4 sets heavy \n");
               }
               else if(BMI>24.9)
               {
                 printf("\nFollow this diet plan \n\n 8am : Oats (100g) + Fruits \n 10am : Fat free yogurt + Almonds \n 1pm :   Sweet potato / Vegetable Salad + Broccoli \n 4pm :  Protien Shake \n 8pm :  Grilled Chicken Breast + Spinach/Asparagus \n");
                 printf("\nFollow this workout \n\n Body part: (Back/biceps) \n\n Barbell row \n Lat pulldowns \n Reverse lat pulldowns \n Cable row \n Back extensions \n Preacher curls \n Barbell curls (wide grip) \n Dumbell curls \n Wrist curls \n\n Body part: (Legs/shoulders) \n\n Leg extensions \n Back squats \n Vertical leg press \n Leg curls \n Calve raises \n Dumbell shoulder press \nFront raises \nLateral raises \n Bentover raises \nBarbell shrugs \n\n Body part(chest/triceps/abs)\n\n Incline press \n Incline fly’s \n Bench press \n Inner press \n Cable crossovers \n Skull crushers \n Cable push downs \n Dumbell kicks \n Leg raises \n Crushes \n Russian twist \n");
                 printf("15 to 20 reps 4 sets heavy \n");
               }
            }
               break;
      default:
         printf("Error!");

     }
 }






