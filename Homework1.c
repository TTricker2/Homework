#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int InputNum1 = 0;
    int InputNum2 = 0;
    int SwapType = 0;
    int Temporary = 0;

    while(1)
    {
        printf("Input 2 numbers to swap: ");
        scanf("%d %d", &InputNum1, &InputNum2);

        printf("\nSelect SwapType: \n\n");
        printf("0: Quit program \n");
        printf("1: Temporary variable  \n");
        printf("2: Addtion/Subtraction: \n");
        printf("3: Multiple/Division: \n");
        printf("4: Exclusive OR: \n");
        scanf("%d", &SwapType);

        switch (SwapType) {
            case 0:
                return 0;
            case 1:
                Temporary = InputNum1;
                InputNum1 = InputNum2;
                InputNum2 = Temporary;
                break;

            case 2:
                InputNum1 = InputNum1 + InputNum2;
                InputNum2 = InputNum1 - InputNum2;
                InputNum1 = InputNum1 - InputNum2;
                break;

            case 3:
                InputNum1 = InputNum1 * InputNum2;
                InputNum2 = InputNum1 / InputNum2;
                InputNum1 = InputNum1 / InputNum2;
                break;

            case 4:
                InputNum1 = InputNum1 ^ InputNum2;
                InputNum2 = InputNum1 ^ InputNum2;
                InputNum1 = InputNum1 ^ InputNum2 ;
                break;

            default:
                printf("Swap할 숫자를 다시 입력해주세요: \n");

        }
        printf("InputNum1: %d, InputNum2: %d \n\n", InputNum1, InputNum2);
    }

}
