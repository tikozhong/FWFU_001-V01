/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define IN11_Pin GPIO_PIN_13
#define IN11_GPIO_Port GPIOC
#define IN10_Pin GPIO_PIN_14
#define IN10_GPIO_Port GPIOC
#define IN03_Pin GPIO_PIN_15
#define IN03_GPIO_Port GPIOC
#define IN02_Pin GPIO_PIN_0
#define IN02_GPIO_Port GPIOF
#define IN15_Pin GPIO_PIN_1
#define IN15_GPIO_Port GPIOF
#define IN14_Pin GPIO_PIN_0
#define IN14_GPIO_Port GPIOA
#define IN13_Pin GPIO_PIN_1
#define IN13_GPIO_Port GPIOA
#define IN12_Pin GPIO_PIN_4
#define IN12_GPIO_Port GPIOA
#define IN07_Pin GPIO_PIN_5
#define IN07_GPIO_Port GPIOA
#define IN06_Pin GPIO_PIN_6
#define IN06_GPIO_Port GPIOA
#define IN05_Pin GPIO_PIN_7
#define IN05_GPIO_Port GPIOA
#define IN04_Pin GPIO_PIN_0
#define IN04_GPIO_Port GPIOB
#define EXT_GP4_Pin GPIO_PIN_1
#define EXT_GP4_GPIO_Port GPIOB
#define SPI_CS_Pin GPIO_PIN_12
#define SPI_CS_GPIO_Port GPIOB
#define EXT_GP3_Pin GPIO_PIN_13
#define EXT_GP3_GPIO_Port GPIOB
#define EXT_GP2_Pin GPIO_PIN_14
#define EXT_GP2_GPIO_Port GPIOB
#define EXT_GP1_Pin GPIO_PIN_15
#define EXT_GP1_GPIO_Port GPIOB
#define EXT_GP0_Pin GPIO_PIN_8
#define EXT_GP0_GPIO_Port GPIOA
#define DE_Pin GPIO_PIN_6
#define DE_GPIO_Port GPIOC
#define DET_Pin GPIO_PIN_7
#define DET_GPIO_Port GPIOC
#define SCL_Pin GPIO_PIN_11
#define SCL_GPIO_Port GPIOA
#define SDA_Pin GPIO_PIN_12
#define SDA_GPIO_Port GPIOA
#define SWCLK_BOOT_LED_Pin GPIO_PIN_14
#define SWCLK_BOOT_LED_GPIO_Port GPIOA
#define OUT0_Pin GPIO_PIN_15
#define OUT0_GPIO_Port GPIOA
#define OUT1_Pin GPIO_PIN_0
#define OUT1_GPIO_Port GPIOD
#define OUT2_Pin GPIO_PIN_1
#define OUT2_GPIO_Port GPIOD
#define OUT3_Pin GPIO_PIN_2
#define OUT3_GPIO_Port GPIOD
#define OUT4_Pin GPIO_PIN_3
#define OUT4_GPIO_Port GPIOD
#define OUT5_Pin GPIO_PIN_3
#define OUT5_GPIO_Port GPIOB
#define OUT6_Pin GPIO_PIN_4
#define OUT6_GPIO_Port GPIOB
#define OUT7_Pin GPIO_PIN_5
#define OUT7_GPIO_Port GPIOB
#define IN01_Pin GPIO_PIN_6
#define IN01_GPIO_Port GPIOB
#define IN00_Pin GPIO_PIN_7
#define IN00_GPIO_Port GPIOB
#define IN09_Pin GPIO_PIN_8
#define IN09_GPIO_Port GPIOB
#define IN08_Pin GPIO_PIN_9
#define IN08_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
