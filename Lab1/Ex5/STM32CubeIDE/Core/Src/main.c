/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void display7SEG_1 (int num){
	if( num == 0){
		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_SET);
	}

	if(num == 1){
		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_SET );
		HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_SET);
	}

	if(num == 2){
		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_RESET);
	}

	if(num == 3){
		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_RESET);
	}

	if(num == 4){
		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_RESET);
	}

	if(num == 5){
		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_RESET);
	}

	if(num == 6){
		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_RESET);
	}

	if(num == 7){
		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_SET);
	}

	if(num == 8){
		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_RESET);
	}

	if(num == 9){
		HAL_GPIO_WritePin(SEG0_1_GPIO_Port, SEG0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_1_GPIO_Port, SEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_1_GPIO_Port, SEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_1_GPIO_Port, SEG3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_1_GPIO_Port, SEG4_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG5_1_GPIO_Port, SEG5_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG6_1_GPIO_Port, SEG6_1_Pin, GPIO_PIN_RESET);
	}
}

void display7SEG_2 (int num){
	if( num == 0){
		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_2_GPIO_Port, SEG3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_2_GPIO_Port, SEG4_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG5_2_GPIO_Port, SEG5_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG6_2_GPIO_Port, SEG6_2_Pin, GPIO_PIN_SET);
	}

	if(num == 1){
		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_2_GPIO_Port, SEG3_2_Pin, GPIO_PIN_SET );
		HAL_GPIO_WritePin(SEG4_2_GPIO_Port, SEG4_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG5_2_GPIO_Port, SEG5_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG6_2_GPIO_Port, SEG6_2_Pin, GPIO_PIN_SET);
	}

	if(num == 2){
		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG3_2_GPIO_Port, SEG3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_2_GPIO_Port, SEG4_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG5_2_GPIO_Port, SEG5_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG6_2_GPIO_Port, SEG6_2_Pin, GPIO_PIN_RESET);
	}

	if(num == 3){
		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_2_GPIO_Port, SEG3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_2_GPIO_Port, SEG4_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG5_2_GPIO_Port, SEG5_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG6_2_GPIO_Port, SEG6_2_Pin, GPIO_PIN_RESET);
	}

	if(num == 4){
		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_2_GPIO_Port, SEG3_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG4_2_GPIO_Port, SEG4_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG5_2_GPIO_Port, SEG5_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG6_2_GPIO_Port, SEG6_2_Pin, GPIO_PIN_RESET);
	}

	if(num == 5){
		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_2_GPIO_Port, SEG3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_2_GPIO_Port, SEG4_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG5_2_GPIO_Port, SEG5_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG6_2_GPIO_Port, SEG6_2_Pin, GPIO_PIN_RESET);
	}

	if(num == 6){
		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_2_GPIO_Port, SEG3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_2_GPIO_Port, SEG4_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG5_2_GPIO_Port, SEG5_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG6_2_GPIO_Port, SEG6_2_Pin, GPIO_PIN_RESET);
	}

	if(num == 7){
		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_2_GPIO_Port, SEG3_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG4_2_GPIO_Port, SEG4_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG5_2_GPIO_Port, SEG5_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG6_2_GPIO_Port, SEG6_2_Pin, GPIO_PIN_SET);
	}

	if(num == 8){
		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_2_GPIO_Port, SEG3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_2_GPIO_Port, SEG4_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG5_2_GPIO_Port, SEG5_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG6_2_GPIO_Port, SEG6_2_Pin, GPIO_PIN_RESET);
	}

	if(num == 9){
		HAL_GPIO_WritePin(SEG0_2_GPIO_Port, SEG0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG1_2_GPIO_Port, SEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG2_2_GPIO_Port, SEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG3_2_GPIO_Port, SEG3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG4_2_GPIO_Port, SEG4_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(SEG5_2_GPIO_Port, SEG5_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(SEG6_2_GPIO_Port, SEG6_2_Pin, GPIO_PIN_RESET);
	}
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  int red1 = 5;
  int yellow1 = 0;
  int green1 = 0;
  int red2 = 0;
  int yellow2 = 0;
  int green2 = 3;

  HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_SET);
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	  if(red1 > 0){
		  HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_SET);
		  display7SEG_1(red1);
		  red1--;

		  if(green2 == 0 && yellow2 == 0){
			  yellow2 = 2;
			  HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_SET);
		  }
		  if(yellow2 > 0){
			  HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_RESET);
			  display7SEG_2(yellow2);
			  yellow2--;
		  }
		  if(green2 > 0){
			  HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_RESET);
			  display7SEG_2(green2);
			  green2--;
		  }
		  if(red1 == 0){
			  green1 =3;
			  red2 =5;
		  }
	  }

	  else if(red2 > 0){
		  HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, GPIO_PIN_SET);
		  HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
		  display7SEG_2(red2);
		  red2--;

	  	  if(green1 == 0 && yellow1 == 0){
	  		  yellow1 = 2;
	  		  HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
	  	  }

	  	  if(yellow1 > 0){
	  		  HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, GPIO_PIN_RESET);
	  		  display7SEG_1(yellow1);
	  		  yellow1--;
	  	  }
	  	  if(green1 > 0){
	  		  HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_RESET);
	  		  display7SEG_1(green1);
	  		  green1 --;
	  	  }
	  	  if(red2 == 0){
	  		  green2 = 3;
	  		  red1 = 5;
	  	  }
	  }
	  HAL_Delay (1000) ;
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED_1_Pin|LED_YELLOW_1_Pin|LED_GREEN_1_Pin|LED_RED_2_Pin
                          |LED_YELLOW_2_Pin|LED_GREEN_2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, SEG0_1_Pin|SEG1_1_Pin|SEG2_1_Pin|SEG3_2_Pin
                          |SEG4_2_Pin|SEG5_2_Pin|SEG6_2_Pin|SEG3_1_Pin
                          |SEG4_1_Pin|SEG5_1_Pin|SEG6_1_Pin|SEG0_2_Pin
                          |SEG1_2_Pin|SEG2_2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED_1_Pin LED_YELLOW_1_Pin LED_GREEN_1_Pin LED_RED_2_Pin
                           LED_YELLOW_2_Pin LED_GREEN_2_Pin */
  GPIO_InitStruct.Pin = LED_RED_1_Pin|LED_YELLOW_1_Pin|LED_GREEN_1_Pin|LED_RED_2_Pin
                          |LED_YELLOW_2_Pin|LED_GREEN_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : SEG0_1_Pin SEG1_1_Pin SEG2_1_Pin SEG3_2_Pin
                           SEG4_2_Pin SEG5_2_Pin SEG6_2_Pin SEG3_1_Pin
                           SEG4_1_Pin SEG5_1_Pin SEG6_1_Pin SEG0_2_Pin
                           SEG1_2_Pin SEG2_2_Pin */
  GPIO_InitStruct.Pin = SEG0_1_Pin|SEG1_1_Pin|SEG2_1_Pin|SEG3_2_Pin
                          |SEG4_2_Pin|SEG5_2_Pin|SEG6_2_Pin|SEG3_1_Pin
                          |SEG4_1_Pin|SEG5_1_Pin|SEG6_1_Pin|SEG0_2_Pin
                          |SEG1_2_Pin|SEG2_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
