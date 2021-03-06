/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

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
#define GPIO_4_Pin GPIO_PIN_13
#define GPIO_4_GPIO_Port GPIOC
#define ADC2_0_Pin GPIO_PIN_0
#define ADC2_0_GPIO_Port GPIOA
#define ADC1_1_Pin GPIO_PIN_1
#define ADC1_1_GPIO_Port GPIOA
#define TX2_Pin GPIO_PIN_2
#define TX2_GPIO_Port GPIOA
#define RX2_Pin GPIO_PIN_3
#define RX2_GPIO_Port GPIOA
#define SPI1_CS_1_Pin GPIO_PIN_0
#define SPI1_CS_1_GPIO_Port GPIOB
#define SPI1_CS_2_Pin GPIO_PIN_1
#define SPI1_CS_2_GPIO_Port GPIOB
#define GPIO_1_Pin GPIO_PIN_2
#define GPIO_1_GPIO_Port GPIOB
#define SPI2_CS_1_Pin GPIO_PIN_12
#define SPI2_CS_1_GPIO_Port GPIOB
#define SPI2_CS_2_Pin GPIO_PIN_8
#define SPI2_CS_2_GPIO_Port GPIOA
#define TX1_Pin GPIO_PIN_9
#define TX1_GPIO_Port GPIOA
#define RX1_Pin GPIO_PIN_10
#define RX1_GPIO_Port GPIOA
#define GPIO_2_Pin GPIO_PIN_15
#define GPIO_2_GPIO_Port GPIOA
#define GPIO_3_Pin GPIO_PIN_3
#define GPIO_3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
