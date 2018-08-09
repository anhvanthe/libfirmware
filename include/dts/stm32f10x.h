#pragma once

/******  Cortex-M3 Processor Exceptions Numbers ***************************************************/
#define  NonMaskableInt_IRQn          -14    /*!< 2 Non Maskable Interrupt                             */
#define  MemoryManagement_IRQn        -12    /*!< 4 Cortex-M3 Memory Management Interrupt              */
#define  BusFault_IRQn                -11    /*!< 5 Cortex-M3 Bus Fault Interrupt                      */
#define  UsageFault_IRQn              -10    /*!< 6 Cortex-M3 Usage Fault Interrupt                    */
#define  SVCall_IRQn                  -5     /*!< 11 Cortex-M3 SV Call Interrupt                       */
#define  DebugMonitor_IRQn            -4     /*!< 12 Cortex-M3 Debug Monitor Interrupt                 */
#define  PendSV_IRQn                  -2     /*!< 14 Cortex-M3 Pend SV Interrupt                       */
#define  SysTick_IRQn                 -1     /*!< 15 Cortex-M3 System Tick Interrupt                   */

/******  STM32 specific Interrupt Numbers *********************************************************/
#define  WWDG_IRQn                    0      /*!< Window WatchDog Interrupt                            */
#define  PVD_IRQn                     1      /*!< PVD through EXTI Line detection Interrupt            */
#define  TAMPER_IRQn                  2      /*!< Tamper Interrupt                                     */
#define  RTC_IRQn                     3      /*!< RTC global Interrupt                                 */
#define  FLASH_IRQn                   4      /*!< FLASH global Interrupt                               */
#define  RCC_IRQn                     5      /*!< RCC global Interrupt                                 */
#define  EXTI0_IRQn                   6      /*!< EXTI Line0 Interrupt                                 */
#define  EXTI1_IRQn                   7      /*!< EXTI Line1 Interrupt                                 */
#define  EXTI2_IRQn                   8      /*!< EXTI Line2 Interrupt                                 */
#define  EXTI3_IRQn                   9      /*!< EXTI Line3 Interrupt                                 */
#define  EXTI4_IRQn                   10     /*!< EXTI Line4 Interrupt                                 */
#define  DMA1_Channel1_IRQn           11     /*!< DMA1 Channel 1 global Interrupt                      */
#define  DMA1_Channel2_IRQn           12     /*!< DMA1 Channel 2 global Interrupt                      */
#define  DMA1_Channel3_IRQn           13     /*!< DMA1 Channel 3 global Interrupt                      */
#define  DMA1_Channel4_IRQn           14     /*!< DMA1 Channel 4 global Interrupt                      */
#define  DMA1_Channel5_IRQn           15     /*!< DMA1 Channel 5 global Interrupt                      */
#define  DMA1_Channel6_IRQn           16     /*!< DMA1 Channel 6 global Interrupt                      */
#define  DMA1_Channel7_IRQn           17     /*!< DMA1 Channel 7 global Interrupt                      */

#ifdef STM32F10X_LD
#define  ADC1_2_IRQn                  18     /*!< ADC1 and ADC2 global Interrupt                       */
#define  USB_HP_CAN1_TX_IRQn          19     /*!< USB Device High Priority or CAN1 TX Interrupts       */
#define  USB_LP_CAN1_RX0_IRQn         20     /*!< USB Device Low Priority or CAN1 RX0 Interrupts       */
#define  CAN1_RX1_IRQn                21     /*!< CAN1 RX1 Interrupt                                   */
#define  CAN1_SCE_IRQn                22     /*!< CAN1 SCE Interrupt                                   */
#define  EXTI9_5_IRQn                 23     /*!< External Line[9:5] Interrupts                        */
#define  TIM1_BRK_IRQn                24     /*!< TIM1 Break Interrupt                                 */
#define  TIM1_UP_IRQn                 25     /*!< TIM1 Update Interrupt                                */
#define  TIM1_TRG_COM_IRQn            26     /*!< TIM1 Trigger and Commutation Interrupt               */
#define  TIM1_CC_IRQn                 27     /*!< TIM1 Capture Compare Interrupt                       */
#define  TIM2_IRQn                    28     /*!< TIM2 global Interrupt                                */
#define  TIM3_IRQn                    29     /*!< TIM3 global Interrupt                                */
#define  I2C1_EV_IRQn                 31     /*!< I2C1 Event Interrupt                                 */
#define  I2C1_ER_IRQn                 32     /*!< I2C1 Error Interrupt                                 */
#define  SPI1_IRQn                    35     /*!< SPI1 global Interrupt                                */
#define  USART1_IRQn                  37     /*!< USART1 global Interrupt                              */
#define  USART2_IRQn                  38     /*!< USART2 global Interrupt                              */
#define  EXTI15_10_IRQn               40     /*!< External Line[15:10] Interrupts                      */
#define  RTCAlarm_IRQn                41     /*!< RTC Alarm through EXTI Line Interrupt                */
#define  USBWakeUp_IRQn               42      /*!< USB Device WakeUp from suspend through EXTI Line Interrupt */    
#endif /* STM32F10X_LD */  

#ifdef STM32F10X_LD_VL
#define  ADC1_IRQn                    18     /*!< ADC1 global Interrupt                                */
#define  EXTI9_5_IRQn                 23     /*!< External Line[9:5] Interrupts                        */
#define  TIM1_BRK_TIM15_IRQn          24     /*!< TIM1 Break and TIM15 Interrupts                      */
#define  TIM1_UP_TIM16_IRQn           25     /*!< TIM1 Update and TIM16 Interrupts                     */
#define  TIM1_TRG_COM_TIM17_IRQn      26     /*!< TIM1 Trigger and Commutation and TIM17 Interrupt     */
#define  TIM1_CC_IRQn                 27     /*!< TIM1 Capture Compare Interrupt                       */
#define  TIM2_IRQn                    28     /*!< TIM2 global Interrupt                                */
#define  TIM3_IRQn                    29     /*!< TIM3 global Interrupt                                */
#define  I2C1_EV_IRQn                 31     /*!< I2C1 Event Interrupt                                 */
#define  I2C1_ER_IRQn                 32     /*!< I2C1 Error Interrupt                                 */
#define  SPI1_IRQn                    35     /*!< SPI1 global Interrupt                                */
#define  USART1_IRQn                  37     /*!< USART1 global Interrupt                              */
#define  USART2_IRQn                  38     /*!< USART2 global Interrupt                              */
#define  EXTI15_10_IRQn               40     /*!< External Line[15:10] Interrupts                      */
#define  RTCAlarm_IRQn                41     /*!< RTC Alarm through EXTI Line Interrupt                */
#define  CEC_IRQn                     42     /*!< HDMI-CEC Interrupt                                   */
#define  TIM6_DAC_IRQn                54     /*!< TIM6 and DAC underrun Interrupt                      */
#define  TIM7_IRQn                    55      /*!< TIM7 Interrupt                                       */       
#endif /* STM32F10X_LD_VL */

#ifdef STM32F10X_MD
#define  ADC1_2_IRQn                  18     /*!< ADC1 and ADC2 global Interrupt                       */
#define  USB_HP_CAN1_TX_IRQn          19     /*!< USB Device High Priority or CAN1 TX Interrupts       */
#define  USB_LP_CAN1_RX0_IRQn         20     /*!< USB Device Low Priority or CAN1 RX0 Interrupts       */
#define  CAN1_RX1_IRQn                21     /*!< CAN1 RX1 Interrupt                                   */
#define  CAN1_SCE_IRQn                22     /*!< CAN1 SCE Interrupt                                   */
#define  EXTI9_5_IRQn                 23     /*!< External Line[9:5] Interrupts                        */
#define  TIM1_BRK_IRQn                24     /*!< TIM1 Break Interrupt                                 */
#define  TIM1_UP_IRQn                 25     /*!< TIM1 Update Interrupt                                */
#define  TIM1_TRG_COM_IRQn            26     /*!< TIM1 Trigger and Commutation Interrupt               */
#define  TIM1_CC_IRQn                 27     /*!< TIM1 Capture Compare Interrupt                       */
#define  TIM2_IRQn                    28     /*!< TIM2 global Interrupt                                */
#define  TIM3_IRQn                    29     /*!< TIM3 global Interrupt                                */
#define  TIM4_IRQn                    30     /*!< TIM4 global Interrupt                                */
#define  I2C1_EV_IRQn                 31     /*!< I2C1 Event Interrupt                                 */
#define  I2C1_ER_IRQn                 32     /*!< I2C1 Error Interrupt                                 */
#define  I2C2_EV_IRQn                 33     /*!< I2C2 Event Interrupt                                 */
#define  I2C2_ER_IRQn                 34     /*!< I2C2 Error Interrupt                                 */
#define  SPI1_IRQn                    35     /*!< SPI1 global Interrupt                                */
#define  SPI2_IRQn                    36     /*!< SPI2 global Interrupt                                */
#define  USART1_IRQn                  37     /*!< USART1 global Interrupt                              */
#define  USART2_IRQn                  38     /*!< USART2 global Interrupt                              */
#define  USART3_IRQn                  39     /*!< USART3 global Interrupt                              */
#define  EXTI15_10_IRQn               40     /*!< External Line[15:10] Interrupts                      */
#define  RTCAlarm_IRQn                41     /*!< RTC Alarm through EXTI Line Interrupt                */
#define  USBWakeUp_IRQn               42      /*!< USB Device WakeUp from suspend through EXTI Line Interrupt */  
#endif /* STM32F10X_MD */  

#ifdef STM32F10X_MD_VL
#define  ADC1_IRQn                    18     /*!< ADC1 global Interrupt                                */
#define  EXTI9_5_IRQn                 23     /*!< External Line[9:5] Interrupts                        */
#define  TIM1_BRK_TIM15_IRQn          24     /*!< TIM1 Break and TIM15 Interrupts                      */
#define  TIM1_UP_TIM16_IRQn           25     /*!< TIM1 Update and TIM16 Interrupts                     */
#define  TIM1_TRG_COM_TIM17_IRQn      26     /*!< TIM1 Trigger and Commutation and TIM17 Interrupt     */
#define  TIM1_CC_IRQn                 27     /*!< TIM1 Capture Compare Interrupt                       */
#define  TIM2_IRQn                    28     /*!< TIM2 global Interrupt                                */
#define  TIM3_IRQn                    29     /*!< TIM3 global Interrupt                                */
#define  TIM4_IRQn                    30     /*!< TIM4 global Interrupt                                */
#define  I2C1_EV_IRQn                 31     /*!< I2C1 Event Interrupt                                 */
#define  I2C1_ER_IRQn                 32     /*!< I2C1 Error Interrupt                                 */
#define  I2C2_EV_IRQn                 33     /*!< I2C2 Event Interrupt                                 */
#define  I2C2_ER_IRQn                 34     /*!< I2C2 Error Interrupt                                 */
#define  SPI1_IRQn                    35     /*!< SPI1 global Interrupt                                */
#define  SPI2_IRQn                    36     /*!< SPI2 global Interrupt                                */
#define  USART1_IRQn                  37     /*!< USART1 global Interrupt                              */
#define  USART2_IRQn                  38     /*!< USART2 global Interrupt                              */
#define  USART3_IRQn                  39     /*!< USART3 global Interrupt                              */
#define  EXTI15_10_IRQn               40     /*!< External Line[15:10] Interrupts                      */
#define  RTCAlarm_IRQn                41     /*!< RTC Alarm through EXTI Line Interrupt                */
#define  CEC_IRQn                     42     /*!< HDMI-CEC Interrupt                                   */
#define  TIM6_DAC_IRQn                54     /*!< TIM6 and DAC underrun Interrupt                      */
#define  TIM7_IRQn                    55      /*!< TIM7 Interrupt                                       */       
#endif /* STM32F10X_MD_VL */

#ifdef STM32F10X_HD
#define  ADC1_2_IRQn                  18     /*!< ADC1 and ADC2 global Interrupt                       */
#define  USB_HP_CAN1_TX_IRQn          19     /*!< USB Device High Priority or CAN1 TX Interrupts       */
#define  USB_LP_CAN1_RX0_IRQn         20     /*!< USB Device Low Priority or CAN1 RX0 Interrupts       */
#define  CAN1_RX1_IRQn                21     /*!< CAN1 RX1 Interrupt                                   */
#define  CAN1_SCE_IRQn                22     /*!< CAN1 SCE Interrupt                                   */
#define  EXTI9_5_IRQn                 23     /*!< External Line[9:5] Interrupts                        */
#define  TIM1_BRK_IRQn                24     /*!< TIM1 Break Interrupt                                 */
#define  TIM1_UP_IRQn                 25     /*!< TIM1 Update Interrupt                                */
#define  TIM1_TRG_COM_IRQn            26     /*!< TIM1 Trigger and Commutation Interrupt               */
#define  TIM1_CC_IRQn                 27     /*!< TIM1 Capture Compare Interrupt                       */
#define  TIM2_IRQn                    28     /*!< TIM2 global Interrupt                                */
#define  TIM3_IRQn                    29     /*!< TIM3 global Interrupt                                */
#define  TIM4_IRQn                    30     /*!< TIM4 global Interrupt                                */
#define  I2C1_EV_IRQn                 31     /*!< I2C1 Event Interrupt                                 */
#define  I2C1_ER_IRQn                 32     /*!< I2C1 Error Interrupt                                 */
#define  I2C2_EV_IRQn                 33     /*!< I2C2 Event Interrupt                                 */
#define  I2C2_ER_IRQn                 34     /*!< I2C2 Error Interrupt                                 */
#define  SPI1_IRQn                    35     /*!< SPI1 global Interrupt                                */
#define  SPI2_IRQn                    36     /*!< SPI2 global Interrupt                                */
#define  USART1_IRQn                  37     /*!< USART1 global Interrupt                              */
#define  USART2_IRQn                  38     /*!< USART2 global Interrupt                              */
#define  USART3_IRQn                  39     /*!< USART3 global Interrupt                              */
#define  EXTI15_10_IRQn               40     /*!< External Line[15:10] Interrupts                      */
#define  RTCAlarm_IRQn                41     /*!< RTC Alarm through EXTI Line Interrupt                */
#define  USBWakeUp_IRQn               42     /*!< USB Device WakeUp from suspend through EXTI Line Interrupt */
#define  TIM8_BRK_IRQn                43     /*!< TIM8 Break Interrupt                                 */
#define  TIM8_UP_IRQn                 44     /*!< TIM8 Update Interrupt                                */
#define  TIM8_TRG_COM_IRQn            45     /*!< TIM8 Trigger and Commutation Interrupt               */
#define  TIM8_CC_IRQn                 46     /*!< TIM8 Capture Compare Interrupt                       */
#define  ADC3_IRQn                    47     /*!< ADC3 global Interrupt                                */
#define  FSMC_IRQn                    48     /*!< FSMC global Interrupt                                */
#define  SDIO_IRQn                    49     /*!< SDIO global Interrupt                                */
#define  TIM5_IRQn                    50     /*!< TIM5 global Interrupt                                */
#define  SPI3_IRQn                    51     /*!< SPI3 global Interrupt                                */
#define  UART4_IRQn                   52     /*!< UART4 global Interrupt                               */
#define  UART5_IRQn                   53     /*!< UART5 global Interrupt                               */
#define  TIM6_IRQn                    54     /*!< TIM6 global Interrupt                                */
#define  TIM7_IRQn                    55     /*!< TIM7 global Interrupt                                */
#define  DMA2_Channel1_IRQn           56     /*!< DMA2 Channel 1 global Interrupt                      */
#define  DMA2_Channel2_IRQn           57     /*!< DMA2 Channel 2 global Interrupt                      */
#define  DMA2_Channel3_IRQn           58     /*!< DMA2 Channel 3 global Interrupt                      */
#define  DMA2_Channel4_5_IRQn         59      /*!< DMA2 Channel 4 and Channel 5 global Interrupt        */
#endif /* STM32F10X_HD */  

#ifdef STM32F10X_HD_VL
#define  ADC1_IRQn                    18     /*!< ADC1 global Interrupt                                */
#define  EXTI9_5_IRQn                 23     /*!< External Line[9:5] Interrupts                        */
#define  TIM1_BRK_TIM15_IRQn          24     /*!< TIM1 Break and TIM15 Interrupts                      */
#define  TIM1_UP_TIM16_IRQn           25     /*!< TIM1 Update and TIM16 Interrupts                     */
#define  TIM1_TRG_COM_TIM17_IRQn      26     /*!< TIM1 Trigger and Commutation and TIM17 Interrupt     */
#define  TIM1_CC_IRQn                 27     /*!< TIM1 Capture Compare Interrupt                       */
#define  TIM2_IRQn                    28     /*!< TIM2 global Interrupt                                */
#define  TIM3_IRQn                    29     /*!< TIM3 global Interrupt                                */
#define  TIM4_IRQn                    30     /*!< TIM4 global Interrupt                                */
#define  I2C1_EV_IRQn                 31     /*!< I2C1 Event Interrupt                                 */
#define  I2C1_ER_IRQn                 32     /*!< I2C1 Error Interrupt                                 */
#define  I2C2_EV_IRQn                 33     /*!< I2C2 Event Interrupt                                 */
#define  I2C2_ER_IRQn                 34     /*!< I2C2 Error Interrupt                                 */
#define  SPI1_IRQn                    35     /*!< SPI1 global Interrupt                                */
#define  SPI2_IRQn                    36     /*!< SPI2 global Interrupt                                */
#define  USART1_IRQn                  37     /*!< USART1 global Interrupt                              */
#define  USART2_IRQn                  38     /*!< USART2 global Interrupt                              */
#define  USART3_IRQn                  39     /*!< USART3 global Interrupt                              */
#define  EXTI15_10_IRQn               40     /*!< External Line[15:10] Interrupts                      */
#define  RTCAlarm_IRQn                41     /*!< RTC Alarm through EXTI Line Interrupt                */
#define  CEC_IRQn                     42     /*!< HDMI-CEC Interrupt                                   */
#define  TIM12_IRQn                   43     /*!< TIM12 global Interrupt                               */
#define  TIM13_IRQn                   44     /*!< TIM13 global Interrupt                               */
#define  TIM14_IRQn                   45     /*!< TIM14 global Interrupt                               */
#define  TIM5_IRQn                    50     /*!< TIM5 global Interrupt                                */
#define  SPI3_IRQn                    51     /*!< SPI3 global Interrupt                                */
#define  UART4_IRQn                   52     /*!< UART4 global Interrupt                               */
#define  UART5_IRQn                   53     /*!< UART5 global Interrupt                               */  
#define  TIM6_DAC_IRQn                54     /*!< TIM6 and DAC underrun Interrupt                      */
#define  TIM7_IRQn                    55     /*!< TIM7 Interrupt                                       */  
#define  DMA2_Channel1_IRQn           56     /*!< DMA2 Channel 1 global Interrupt                      */
#define  DMA2_Channel2_IRQn           57     /*!< DMA2 Channel 2 global Interrupt                      */
#define  DMA2_Channel3_IRQn           58     /*!< DMA2 Channel 3 global Interrupt                      */
#define  DMA2_Channel4_5_IRQn         59     /*!< DMA2 Channel 4 and Channel 5 global Interrupt        */
#define  DMA2_Channel5_IRQn           60      /*!< DMA2 Channel 5 global Interrupt (DMA2 Channel 5 is 
                                             mapped at position 60 only if the MISC_REMAP bit in 
                                             the AFIO_MAPR2 register is set)                      */       
#endif /* STM32F10X_HD_VL */

#ifdef STM32F10X_XL
#define  ADC1_2_IRQn                  18     /*!< ADC1 and ADC2 global Interrupt                       */
#define  USB_HP_CAN1_TX_IRQn          19     /*!< USB Device High Priority or CAN1 TX Interrupts       */
#define  USB_LP_CAN1_RX0_IRQn         20     /*!< USB Device Low Priority or CAN1 RX0 Interrupts       */
#define  CAN1_RX1_IRQn                21     /*!< CAN1 RX1 Interrupt                                   */
#define  CAN1_SCE_IRQn                22     /*!< CAN1 SCE Interrupt                                   */
#define  EXTI9_5_IRQn                 23     /*!< External Line[9:5] Interrupts                        */
#define  TIM1_BRK_TIM9_IRQn           24     /*!< TIM1 Break Interrupt and TIM9 global Interrupt       */
#define  TIM1_UP_TIM10_IRQn           25     /*!< TIM1 Update Interrupt and TIM10 global Interrupt     */
#define  TIM1_TRG_COM_TIM11_IRQn      26     /*!< TIM1 Trigger and Commutation Interrupt and TIM11 global interrupt */
#define  TIM1_CC_IRQn                 27     /*!< TIM1 Capture Compare Interrupt                       */
#define  TIM2_IRQn                    28     /*!< TIM2 global Interrupt                                */
#define  TIM3_IRQn                    29     /*!< TIM3 global Interrupt                                */
#define  TIM4_IRQn                    30     /*!< TIM4 global Interrupt                                */
#define  I2C1_EV_IRQn                 31     /*!< I2C1 Event Interrupt                                 */
#define  I2C1_ER_IRQn                 32     /*!< I2C1 Error Interrupt                                 */
#define  I2C2_EV_IRQn                 33     /*!< I2C2 Event Interrupt                                 */
#define  I2C2_ER_IRQn                 34     /*!< I2C2 Error Interrupt                                 */
#define  SPI1_IRQn                    35     /*!< SPI1 global Interrupt                                */
#define  SPI2_IRQn                    36     /*!< SPI2 global Interrupt                                */
#define  USART1_IRQn                  37     /*!< USART1 global Interrupt                              */
#define  USART2_IRQn                  38     /*!< USART2 global Interrupt                              */
#define  USART3_IRQn                  39     /*!< USART3 global Interrupt                              */
#define  EXTI15_10_IRQn               40     /*!< External Line[15:10] Interrupts                      */
#define  RTCAlarm_IRQn                41     /*!< RTC Alarm through EXTI Line Interrupt                */
#define  USBWakeUp_IRQn               42     /*!< USB Device WakeUp from suspend through EXTI Line Interrupt */
#define  TIM8_BRK_TIM12_IRQn          43     /*!< TIM8 Break Interrupt and TIM12 global Interrupt      */
#define  TIM8_UP_TIM13_IRQn           44     /*!< TIM8 Update Interrupt and TIM13 global Interrupt     */
#define  TIM8_TRG_COM_TIM14_IRQn      45     /*!< TIM8 Trigger and Commutation Interrupt and TIM14 global interrupt */
#define  TIM8_CC_IRQn                 46     /*!< TIM8 Capture Compare Interrupt                       */
#define  ADC3_IRQn                    47     /*!< ADC3 global Interrupt                                */
#define  FSMC_IRQn                    48     /*!< FSMC global Interrupt                                */
#define  SDIO_IRQn                    49     /*!< SDIO global Interrupt                                */
#define  TIM5_IRQn                    50     /*!< TIM5 global Interrupt                                */
#define  SPI3_IRQn                    51     /*!< SPI3 global Interrupt                                */
#define  UART4_IRQn                   52     /*!< UART4 global Interrupt                               */
#define  UART5_IRQn                   53     /*!< UART5 global Interrupt                               */
#define  TIM6_IRQn                    54     /*!< TIM6 global Interrupt                                */
#define  TIM7_IRQn                    55     /*!< TIM7 global Interrupt                                */
#define  DMA2_Channel1_IRQn           56     /*!< DMA2 Channel 1 global Interrupt                      */
#define  DMA2_Channel2_IRQn           57     /*!< DMA2 Channel 2 global Interrupt                      */
#define  DMA2_Channel3_IRQn           58     /*!< DMA2 Channel 3 global Interrupt                      */
#define  DMA2_Channel4_5_IRQn         59      /*!< DMA2 Channel 4 and Channel 5 global Interrupt        */
#endif /* STM32F10X_XL */  

#ifdef STM32F10X_CL
#define  ADC1_2_IRQn                  18     /*!< ADC1 and ADC2 global Interrupt                       */
#define  CAN1_TX_IRQn                 19     /*!< USB Device High Priority or CAN1 TX Interrupts       */
#define  CAN1_RX0_IRQn                20     /*!< USB Device Low Priority or CAN1 RX0 Interrupts       */
#define  CAN1_RX1_IRQn                21     /*!< CAN1 RX1 Interrupt                                   */
#define  CAN1_SCE_IRQn                22     /*!< CAN1 SCE Interrupt                                   */
#define  EXTI9_5_IRQn                 23     /*!< External Line[9:5] Interrupts                        */
#define  TIM1_BRK_IRQn                24     /*!< TIM1 Break Interrupt                                 */
#define  TIM1_UP_IRQn                 25     /*!< TIM1 Update Interrupt                                */
#define  TIM1_TRG_COM_IRQn            26     /*!< TIM1 Trigger and Commutation Interrupt               */
#define  TIM1_CC_IRQn                 27     /*!< TIM1 Capture Compare Interrupt                       */
#define  TIM2_IRQn                    28     /*!< TIM2 global Interrupt                                */
#define  TIM3_IRQn                    29     /*!< TIM3 global Interrupt                                */
#define  TIM4_IRQn                    30     /*!< TIM4 global Interrupt                                */
#define  I2C1_EV_IRQn                 31     /*!< I2C1 Event Interrupt                                 */
#define  I2C1_ER_IRQn                 32     /*!< I2C1 Error Interrupt                                 */
#define  I2C2_EV_IRQn                 33     /*!< I2C2 Event Interrupt                                 */
#define  I2C2_ER_IRQn                 34     /*!< I2C2 Error Interrupt                                 */
#define  SPI1_IRQn                    35     /*!< SPI1 global Interrupt                                */
#define  SPI2_IRQn                    36     /*!< SPI2 global Interrupt                                */
#define  USART1_IRQn                  37     /*!< USART1 global Interrupt                              */
#define  USART2_IRQn                  38     /*!< USART2 global Interrupt                              */
#define  USART3_IRQn                  39     /*!< USART3 global Interrupt                              */
#define  EXTI15_10_IRQn               40     /*!< External Line[15:10] Interrupts                      */
#define  RTCAlarm_IRQn                41     /*!< RTC Alarm through EXTI Line Interrupt                */
#define  OTG_FS_WKUP_IRQn             42     /*!< USB OTG FS WakeUp from suspend through EXTI Line Interrupt */
#define  TIM5_IRQn                    50     /*!< TIM5 global Interrupt                                */
#define  SPI3_IRQn                    51     /*!< SPI3 global Interrupt                                */
#define  UART4_IRQn                   52     /*!< UART4 global Interrupt                               */
#define  UART5_IRQn                   53     /*!< UART5 global Interrupt                               */
#define  TIM6_IRQn                    54     /*!< TIM6 global Interrupt                                */
#define  TIM7_IRQn                    55     /*!< TIM7 global Interrupt                                */
#define  DMA2_Channel1_IRQn           56     /*!< DMA2 Channel 1 global Interrupt                      */
#define  DMA2_Channel2_IRQn           57     /*!< DMA2 Channel 2 global Interrupt                      */
#define  DMA2_Channel3_IRQn           58     /*!< DMA2 Channel 3 global Interrupt                      */
#define  DMA2_Channel4_IRQn           59     /*!< DMA2 Channel 4 global Interrupt                      */
#define  DMA2_Channel5_IRQn           60     /*!< DMA2 Channel 5 global Interrupt                      */
#define  ETH_IRQn                     61     /*!< Ethernet global Interrupt                            */
#define  ETH_WKUP_IRQn                62     /*!< Ethernet Wakeup through EXTI line Interrupt          */
#define  CAN2_TX_IRQn                 63     /*!< CAN2 TX Interrupt                                    */
#define  CAN2_RX0_IRQn                64     /*!< CAN2 RX0 Interrupt                                   */
#define  CAN2_RX1_IRQn                65     /*!< CAN2 RX1 Interrupt                                   */
#define  CAN2_SCE_IRQn                66     /*!< CAN2 SCE Interrupt                                   */
#define  OTG_FS_IRQn                  67      /*!< USB OTG FS global Interrupt                          */
#endif /* STM32F10X_CL */     

#define FLASH_BASE            (0x08000000) /*!< FLASH base address in the alias region */
#define SRAM_BASE             (0x20000000) /*!< SRAM base address in the alias region */
#define PERIPH_BASE           (0x40000000) /*!< Peripheral base address in the alias region */

#define SRAM_BB_BASE          (0x22000000) /*!< SRAM base address in the bit-band region */
#define PERIPH_BB_BASE        (0x42000000) /*!< Peripheral base address in the bit-band region */

#define FSMC_R_BASE           (0xA0000000) /*!< FSMC registers base address */

/*!< Peripheral memory map */
#define APB1PERIPH_BASE       PERIPH_BASE
#define APB2PERIPH_BASE       (PERIPH_BASE + 0x10000)
#define AHBPERIPH_BASE        (PERIPH_BASE + 0x20000)

#define TIM2_BASE             (APB1PERIPH_BASE + 0x0000)
#define TIM3_BASE             (APB1PERIPH_BASE + 0x0400)
#define TIM4_BASE             (APB1PERIPH_BASE + 0x0800)
#define TIM5_BASE             (APB1PERIPH_BASE + 0x0C00)
#define TIM6_BASE             (APB1PERIPH_BASE + 0x1000)
#define TIM7_BASE             (APB1PERIPH_BASE + 0x1400)
#define TIM12_BASE            (APB1PERIPH_BASE + 0x1800)
#define TIM13_BASE            (APB1PERIPH_BASE + 0x1C00)
#define TIM14_BASE            (APB1PERIPH_BASE + 0x2000)
#define RTC_BASE              (APB1PERIPH_BASE + 0x2800)
#define WWDG_BASE             (APB1PERIPH_BASE + 0x2C00)
#define IWDG_BASE             (APB1PERIPH_BASE + 0x3000)
#define SPI2_BASE             (APB1PERIPH_BASE + 0x3800)
#define SPI3_BASE             (APB1PERIPH_BASE + 0x3C00)
#define USART2_BASE           (APB1PERIPH_BASE + 0x4400)
#define USART3_BASE           (APB1PERIPH_BASE + 0x4800)
#define UART4_BASE            (APB1PERIPH_BASE + 0x4C00)
#define UART5_BASE            (APB1PERIPH_BASE + 0x5000)
#define I2C1_BASE             (APB1PERIPH_BASE + 0x5400)
#define I2C2_BASE             (APB1PERIPH_BASE + 0x5800)
#define CAN1_BASE             (APB1PERIPH_BASE + 0x6400)
#define CAN2_BASE             (APB1PERIPH_BASE + 0x6800)
#define BKP_BASE              (APB1PERIPH_BASE + 0x6C00)
#define PWR_BASE              (APB1PERIPH_BASE + 0x7000)
#define DAC_BASE              (APB1PERIPH_BASE + 0x7400)
#define CEC_BASE              (APB1PERIPH_BASE + 0x7800)

#define AFIO_BASE             (APB2PERIPH_BASE + 0x0000)
#define EXTI_BASE             (APB2PERIPH_BASE + 0x0400)
#define GPIOA_BASE            (APB2PERIPH_BASE + 0x0800)
#define GPIOB_BASE            (APB2PERIPH_BASE + 0x0C00)
#define GPIOC_BASE            (APB2PERIPH_BASE + 0x1000)
#define GPIOD_BASE            (APB2PERIPH_BASE + 0x1400)
#define GPIOE_BASE            (APB2PERIPH_BASE + 0x1800)
#define GPIOF_BASE            (APB2PERIPH_BASE + 0x1C00)
#define GPIOG_BASE            (APB2PERIPH_BASE + 0x2000)
#define ADC1_BASE             (APB2PERIPH_BASE + 0x2400)
#define ADC2_BASE             (APB2PERIPH_BASE + 0x2800)
#define TIM1_BASE             (APB2PERIPH_BASE + 0x2C00)
#define SPI1_BASE             (APB2PERIPH_BASE + 0x3000)
#define TIM8_BASE             (APB2PERIPH_BASE + 0x3400)
#define USART1_BASE           (APB2PERIPH_BASE + 0x3800)
#define ADC3_BASE             (APB2PERIPH_BASE + 0x3C00)
#define TIM15_BASE            (APB2PERIPH_BASE + 0x4000)
#define TIM16_BASE            (APB2PERIPH_BASE + 0x4400)
#define TIM17_BASE            (APB2PERIPH_BASE + 0x4800)
#define TIM9_BASE             (APB2PERIPH_BASE + 0x4C00)
#define TIM10_BASE            (APB2PERIPH_BASE + 0x5000)
#define TIM11_BASE            (APB2PERIPH_BASE + 0x5400)

#define SDIO_BASE             (PERIPH_BASE + 0x18000)

#define DMA1_BASE             (AHBPERIPH_BASE + 0x0000)
#define DMA1_Channel1_BASE    (AHBPERIPH_BASE + 0x0008)
#define DMA1_Channel2_BASE    (AHBPERIPH_BASE + 0x001C)
#define DMA1_Channel3_BASE    (AHBPERIPH_BASE + 0x0030)
#define DMA1_Channel4_BASE    (AHBPERIPH_BASE + 0x0044)
#define DMA1_Channel5_BASE    (AHBPERIPH_BASE + 0x0058)
#define DMA1_Channel6_BASE    (AHBPERIPH_BASE + 0x006C)
#define DMA1_Channel7_BASE    (AHBPERIPH_BASE + 0x0080)
#define DMA2_BASE             (AHBPERIPH_BASE + 0x0400)
#define DMA2_Channel1_BASE    (AHBPERIPH_BASE + 0x0408)
#define DMA2_Channel2_BASE    (AHBPERIPH_BASE + 0x041C)
#define DMA2_Channel3_BASE    (AHBPERIPH_BASE + 0x0430)
#define DMA2_Channel4_BASE    (AHBPERIPH_BASE + 0x0444)
#define DMA2_Channel5_BASE    (AHBPERIPH_BASE + 0x0458)
#define RCC_BASE              (AHBPERIPH_BASE + 0x1000)
#define CRC_BASE              (AHBPERIPH_BASE + 0x3000)

#define FLASH_R_BASE          (AHBPERIPH_BASE + 0x2000) /*!< Flash registers base address */
#define OB_BASE               (0x1FFFF800)    /*!< Flash Option Bytes base address */

#define ETH_BASE              (AHBPERIPH_BASE + 0x8000)
#define ETH_MAC_BASE          (ETH_BASE)
#define ETH_MMC_BASE          (ETH_BASE + 0x0100)
#define ETH_PTP_BASE          (ETH_BASE + 0x0700)
#define ETH_DMA_BASE          (ETH_BASE + 0x1000)

#define FSMC_Bank1_R_BASE     (FSMC_R_BASE + 0x0000) /*!< FSMC Bank1 registers base address */
#define FSMC_Bank1E_R_BASE    (FSMC_R_BASE + 0x0104) /*!< FSMC Bank1E registers base address */
#define FSMC_Bank2_R_BASE     (FSMC_R_BASE + 0x0060) /*!< FSMC Bank2 registers base address */
#define FSMC_Bank3_R_BASE     (FSMC_R_BASE + 0x0080) /*!< FSMC Bank3 registers base address */
#define FSMC_Bank4_R_BASE     (FSMC_R_BASE + 0x00A0) /*!< FSMC Bank4 registers base address */

#define DBGMCU_BASE          (0xE0042000) /*!< Debug MCU registers base address */

/**
  * @}
  */
  
/** @addtogroup Peripheral_declaration
  * @{
  */  

#define TIM2                ( TIM2_BASE)
#define TIM3                ( TIM3_BASE)
#define TIM4                ( TIM4_BASE)
#define TIM5                ( TIM5_BASE)
#define TIM6                ( TIM6_BASE)
#define TIM7                ( TIM7_BASE)
#define TIM12               ( TIM12_BASE)
#define TIM13               ( TIM13_BASE)
#define TIM14               ( TIM14_BASE)
#define RTC                 ( RTC_BASE)
#define WWDG                ( WWDG_BASE)
#define IWDG                ( IWDG_BASE)
#define SPI2                ( SPI2_BASE)
#define SPI3                ( SPI3_BASE)
#define USART2              ( USART2_BASE)
#define USART3              ( USART3_BASE)
#define UART4               ( UART4_BASE)
#define UART5               ( UART5_BASE)
#define I2C1                ( I2C1_BASE)
#define I2C2                ( I2C2_BASE)
#define CAN1                ( CAN1_BASE)
#define CAN2                ( CAN2_BASE)
#define BKP                 ( BKP_BASE)
#define PWR                 ( PWR_BASE)
#define DAC                 ( DAC_BASE)
#define CEC                 ( CEC_BASE)
#define AFIO                ( AFIO_BASE)
#define EXTI                ( EXTI_BASE)
#define GPIOA               ( GPIOA_BASE)
#define GPIOB               ( GPIOB_BASE)
#define GPIOC               ( GPIOC_BASE)
#define GPIOD               ( GPIOD_BASE)
#define GPIOE               ( GPIOE_BASE)
#define GPIOF               ( GPIOF_BASE)
#define GPIOG               ( GPIOG_BASE)
#define ADC1                ( ADC1_BASE)
#define ADC2                ( ADC2_BASE)
#define TIM1                ( TIM1_BASE)
#define SPI1                ( SPI1_BASE)
#define TIM8                ( TIM8_BASE)
#define USART1              ( USART1_BASE)
#define ADC3                ( ADC3_BASE)
#define TIM15               ( TIM15_BASE)
#define TIM16               ( TIM16_BASE)
#define TIM17               ( TIM17_BASE)
#define TIM9                ( TIM9_BASE)
#define TIM10               ( TIM10_BASE)
#define TIM11               ( TIM11_BASE)
#define SDIO                ( SDIO_BASE)
#define DMA1                ( DMA1_BASE)
#define DMA2                ( DMA2_BASE)
#define DMA1_Channel1       ( DMA1_Channel1_BASE)
#define DMA1_Channel2       ( DMA1_Channel2_BASE)
#define DMA1_Channel3       ( DMA1_Channel3_BASE)
#define DMA1_Channel4       ( DMA1_Channel4_BASE)
#define DMA1_Channel5       ( DMA1_Channel5_BASE)
#define DMA1_Channel6       ( DMA1_Channel6_BASE)
#define DMA1_Channel7       ( DMA1_Channel7_BASE)
#define DMA2_Channel1       ( DMA2_Channel1_BASE)
#define DMA2_Channel2       ( DMA2_Channel2_BASE)
#define DMA2_Channel3       ( DMA2_Channel3_BASE)
#define DMA2_Channel4       ( DMA2_Channel4_BASE)
#define DMA2_Channel5       ( DMA2_Channel5_BASE)
#define RCC                 ( RCC_BASE)
#define CRC                 ( CRC_BASE)
#define FLASH               ( FLASH_R_BASE)
#define OB                  ( OB_BASE) 
#define ETH                 ( ETH_BASE)
#define FSMC_Bank1          ( FSMC_Bank1_R_BASE)
#define FSMC_Bank1E         ( FSMC_Bank1E_R_BASE)
#define FSMC_Bank2          ( FSMC_Bank2_R_BASE)
#define FSMC_Bank3          ( FSMC_Bank3_R_BASE)
#define FSMC_Bank4          ( FSMC_Bank4_R_BASE)
#define DBGMCU              ( DBGMCU_BASE)

/**
  * @}
  */

/** @addtogroup Exported_constants
  * @{
  */
  
  /** @addtogroup Peripheral_Registers_Bits_Definition
  * @{
  */
    
/******************************************************************************/
/*                         Peripheral Registers_Bits_Definition               */
/******************************************************************************/

/******************************************************************************/
/*                                                                            */
/*                          CRC calculation unit                              */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for CRC_DR register  *********************/
#define  CRC_DR_DR                           (0xFFFFFFFF) /*!< Data register bits */


/*******************  Bit definition for CRC_IDR register  ********************/
#define  CRC_IDR_IDR                         ((uint8_t)0xFF)        /*!< General-purpose 8-bit data register bits */


/********************  Bit definition for CRC_CR register  ********************/
#define  CRC_CR_RESET                        ((uint8_t)0x01)        /*!< RESET bit */

/******************************************************************************/
/*                                                                            */
/*                             Power Control                                  */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for PWR_CR register  ********************/
#define  PWR_CR_LPDS                         (0x0001)     /*!< Low-Power Deepsleep */
#define  PWR_CR_PDDS                         (0x0002)     /*!< Power Down Deepsleep */
#define  PWR_CR_CWUF                         (0x0004)     /*!< Clear Wakeup Flag */
#define  PWR_CR_CSBF                         (0x0008)     /*!< Clear Standby Flag */
#define  PWR_CR_PVDE                         (0x0010)     /*!< Power Voltage Detector Enable */

#define  PWR_CR_PLS                          (0x00E0)     /*!< PLS[2:0] bits (PVD Level Selection) */
#define  PWR_CR_PLS_0                        (0x0020)     /*!< Bit 0 */
#define  PWR_CR_PLS_1                        (0x0040)     /*!< Bit 1 */
#define  PWR_CR_PLS_2                        (0x0080)     /*!< Bit 2 */

/*!< PVD level configuration */
#define  PWR_CR_PLS_2V2                      (0x0000)     /*!< PVD level 2.2V */
#define  PWR_CR_PLS_2V3                      (0x0020)     /*!< PVD level 2.3V */
#define  PWR_CR_PLS_2V4                      (0x0040)     /*!< PVD level 2.4V */
#define  PWR_CR_PLS_2V5                      (0x0060)     /*!< PVD level 2.5V */
#define  PWR_CR_PLS_2V6                      (0x0080)     /*!< PVD level 2.6V */
#define  PWR_CR_PLS_2V7                      (0x00A0)     /*!< PVD level 2.7V */
#define  PWR_CR_PLS_2V8                      (0x00C0)     /*!< PVD level 2.8V */
#define  PWR_CR_PLS_2V9                      (0x00E0)     /*!< PVD level 2.9V */

#define  PWR_CR_DBP                          (0x0100)     /*!< Disable Backup Domain write protection */


/*******************  Bit definition for PWR_CSR register  ********************/
#define  PWR_CSR_WUF                         (0x0001)     /*!< Wakeup Flag */
#define  PWR_CSR_SBF                         (0x0002)     /*!< Standby Flag */
#define  PWR_CSR_PVDO                        (0x0004)     /*!< PVD Output */
#define  PWR_CSR_EWUP                        (0x0100)     /*!< Enable WKUP pin */

/******************************************************************************/
/*                                                                            */
/*                            Backup registers                                */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for BKP_DR1 register  ********************/
#define  BKP_DR1_D                           (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR2 register  ********************/
#define  BKP_DR2_D                           (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR3 register  ********************/
#define  BKP_DR3_D                           (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR4 register  ********************/
#define  BKP_DR4_D                           (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR5 register  ********************/
#define  BKP_DR5_D                           (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR6 register  ********************/
#define  BKP_DR6_D                           (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR7 register  ********************/
#define  BKP_DR7_D                           (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR8 register  ********************/
#define  BKP_DR8_D                           (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR9 register  ********************/
#define  BKP_DR9_D                           (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR10 register  *******************/
#define  BKP_DR10_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR11 register  *******************/
#define  BKP_DR11_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR12 register  *******************/
#define  BKP_DR12_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR13 register  *******************/
#define  BKP_DR13_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR14 register  *******************/
#define  BKP_DR14_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR15 register  *******************/
#define  BKP_DR15_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR16 register  *******************/
#define  BKP_DR16_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR17 register  *******************/
#define  BKP_DR17_D                          (0xFFFF)     /*!< Backup data */

/******************  Bit definition for BKP_DR18 register  ********************/
#define  BKP_DR18_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR19 register  *******************/
#define  BKP_DR19_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR20 register  *******************/
#define  BKP_DR20_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR21 register  *******************/
#define  BKP_DR21_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR22 register  *******************/
#define  BKP_DR22_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR23 register  *******************/
#define  BKP_DR23_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR24 register  *******************/
#define  BKP_DR24_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR25 register  *******************/
#define  BKP_DR25_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR26 register  *******************/
#define  BKP_DR26_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR27 register  *******************/
#define  BKP_DR27_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR28 register  *******************/
#define  BKP_DR28_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR29 register  *******************/
#define  BKP_DR29_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR30 register  *******************/
#define  BKP_DR30_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR31 register  *******************/
#define  BKP_DR31_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR32 register  *******************/
#define  BKP_DR32_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR33 register  *******************/
#define  BKP_DR33_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR34 register  *******************/
#define  BKP_DR34_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR35 register  *******************/
#define  BKP_DR35_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR36 register  *******************/
#define  BKP_DR36_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR37 register  *******************/
#define  BKP_DR37_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR38 register  *******************/
#define  BKP_DR38_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR39 register  *******************/
#define  BKP_DR39_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR40 register  *******************/
#define  BKP_DR40_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR41 register  *******************/
#define  BKP_DR41_D                          (0xFFFF)     /*!< Backup data */

/*******************  Bit definition for BKP_DR42 register  *******************/
#define  BKP_DR42_D                          (0xFFFF)     /*!< Backup data */

/******************  Bit definition for BKP_RTCCR register  *******************/
#define  BKP_RTCCR_CAL                       (0x007F)     /*!< Calibration value */
#define  BKP_RTCCR_CCO                       (0x0080)     /*!< Calibration Clock Output */
#define  BKP_RTCCR_ASOE                      (0x0100)     /*!< Alarm or Second Output Enable */
#define  BKP_RTCCR_ASOS                      (0x0200)     /*!< Alarm or Second Output Selection */

/********************  Bit definition for BKP_CR register  ********************/
#define  BKP_CR_TPE                          ((uint8_t)0x01)        /*!< TAMPER pin enable */
#define  BKP_CR_TPAL                         ((uint8_t)0x02)        /*!< TAMPER pin active level */

/*******************  Bit definition for BKP_CSR register  ********************/
#define  BKP_CSR_CTE                         (0x0001)     /*!< Clear Tamper event */
#define  BKP_CSR_CTI                         (0x0002)     /*!< Clear Tamper Interrupt */
#define  BKP_CSR_TPIE                        (0x0004)     /*!< TAMPER Pin interrupt enable */
#define  BKP_CSR_TEF                         (0x0100)     /*!< Tamper Event Flag */
#define  BKP_CSR_TIF                         (0x0200)     /*!< Tamper Interrupt Flag */

/******************************************************************************/
/*                                                                            */
/*                         Reset and Clock Control                            */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for RCC_CR register  ********************/
#define  RCC_CR_HSION                        (0x00000001)        /*!< Internal High Speed clock enable */
#define  RCC_CR_HSIRDY                       (0x00000002)        /*!< Internal High Speed clock ready flag */
#define  RCC_CR_HSITRIM                      (0x000000F8)        /*!< Internal High Speed clock trimming */
#define  RCC_CR_HSICAL                       (0x0000FF00)        /*!< Internal High Speed clock Calibration */
#define  RCC_CR_HSEON                        (0x00010000)        /*!< External High Speed clock enable */
#define  RCC_CR_HSERDY                       (0x00020000)        /*!< External High Speed clock ready flag */
#define  RCC_CR_HSEBYP                       (0x00040000)        /*!< External High Speed clock Bypass */
#define  RCC_CR_CSSON                        (0x00080000)        /*!< Clock Security System enable */
#define  RCC_CR_PLLON                        (0x01000000)        /*!< PLL enable */
#define  RCC_CR_PLLRDY                       (0x02000000)        /*!< PLL clock ready flag */

#ifdef STM32F10X_CL
 #define  RCC_CR_PLL2ON                       (0x04000000)        /*!< PLL2 enable */
 #define  RCC_CR_PLL2RDY                      (0x08000000)        /*!< PLL2 clock ready flag */
 #define  RCC_CR_PLL3ON                       (0x10000000)        /*!< PLL3 enable */
 #define  RCC_CR_PLL3RDY                      (0x20000000)        /*!< PLL3 clock ready flag */
#endif /* STM32F10X_CL */

/*******************  Bit definition for RCC_CFGR register  *******************/
/*!< SW configuration */
#define  RCC_CFGR_SW                         (0x00000003)        /*!< SW[1:0] bits (System clock Switch) */
#define  RCC_CFGR_SW_0                       (0x00000001)        /*!< Bit 0 */
#define  RCC_CFGR_SW_1                       (0x00000002)        /*!< Bit 1 */

#define  RCC_CFGR_SW_HSI                     (0x00000000)        /*!< HSI selected as system clock */
#define  RCC_CFGR_SW_HSE                     (0x00000001)        /*!< HSE selected as system clock */
#define  RCC_CFGR_SW_PLL                     (0x00000002)        /*!< PLL selected as system clock */

/*!< SWS configuration */
#define  RCC_CFGR_SWS                        (0x0000000C)        /*!< SWS[1:0] bits (System Clock Switch Status) */
#define  RCC_CFGR_SWS_0                      (0x00000004)        /*!< Bit 0 */
#define  RCC_CFGR_SWS_1                      (0x00000008)        /*!< Bit 1 */

#define  RCC_CFGR_SWS_HSI                    (0x00000000)        /*!< HSI oscillator used as system clock */
#define  RCC_CFGR_SWS_HSE                    (0x00000004)        /*!< HSE oscillator used as system clock */
#define  RCC_CFGR_SWS_PLL                    (0x00000008)        /*!< PLL used as system clock */

/*!< HPRE configuration */
#define  RCC_CFGR_HPRE                       (0x000000F0)        /*!< HPRE[3:0] bits (AHB prescaler) */
#define  RCC_CFGR_HPRE_0                     (0x00000010)        /*!< Bit 0 */
#define  RCC_CFGR_HPRE_1                     (0x00000020)        /*!< Bit 1 */
#define  RCC_CFGR_HPRE_2                     (0x00000040)        /*!< Bit 2 */
#define  RCC_CFGR_HPRE_3                     (0x00000080)        /*!< Bit 3 */

#define  RCC_CFGR_HPRE_DIV1                  (0x00000000)        /*!< SYSCLK not divided */
#define  RCC_CFGR_HPRE_DIV2                  (0x00000080)        /*!< SYSCLK divided by 2 */
#define  RCC_CFGR_HPRE_DIV4                  (0x00000090)        /*!< SYSCLK divided by 4 */
#define  RCC_CFGR_HPRE_DIV8                  (0x000000A0)        /*!< SYSCLK divided by 8 */
#define  RCC_CFGR_HPRE_DIV16                 (0x000000B0)        /*!< SYSCLK divided by 16 */
#define  RCC_CFGR_HPRE_DIV64                 (0x000000C0)        /*!< SYSCLK divided by 64 */
#define  RCC_CFGR_HPRE_DIV128                (0x000000D0)        /*!< SYSCLK divided by 128 */
#define  RCC_CFGR_HPRE_DIV256                (0x000000E0)        /*!< SYSCLK divided by 256 */
#define  RCC_CFGR_HPRE_DIV512                (0x000000F0)        /*!< SYSCLK divided by 512 */

/*!< PPRE1 configuration */
#define  RCC_CFGR_PPRE1                      (0x00000700)        /*!< PRE1[2:0] bits (APB1 prescaler) */
#define  RCC_CFGR_PPRE1_0                    (0x00000100)        /*!< Bit 0 */
#define  RCC_CFGR_PPRE1_1                    (0x00000200)        /*!< Bit 1 */
#define  RCC_CFGR_PPRE1_2                    (0x00000400)        /*!< Bit 2 */

#define  RCC_CFGR_PPRE1_DIV1                 (0x00000000)        /*!< HCLK not divided */
#define  RCC_CFGR_PPRE1_DIV2                 (0x00000400)        /*!< HCLK divided by 2 */
#define  RCC_CFGR_PPRE1_DIV4                 (0x00000500)        /*!< HCLK divided by 4 */
#define  RCC_CFGR_PPRE1_DIV8                 (0x00000600)        /*!< HCLK divided by 8 */
#define  RCC_CFGR_PPRE1_DIV16                (0x00000700)        /*!< HCLK divided by 16 */

/*!< PPRE2 configuration */
#define  RCC_CFGR_PPRE2                      (0x00003800)        /*!< PRE2[2:0] bits (APB2 prescaler) */
#define  RCC_CFGR_PPRE2_0                    (0x00000800)        /*!< Bit 0 */
#define  RCC_CFGR_PPRE2_1                    (0x00001000)        /*!< Bit 1 */
#define  RCC_CFGR_PPRE2_2                    (0x00002000)        /*!< Bit 2 */

#define  RCC_CFGR_PPRE2_DIV1                 (0x00000000)        /*!< HCLK not divided */
#define  RCC_CFGR_PPRE2_DIV2                 (0x00002000)        /*!< HCLK divided by 2 */
#define  RCC_CFGR_PPRE2_DIV4                 (0x00002800)        /*!< HCLK divided by 4 */
#define  RCC_CFGR_PPRE2_DIV8                 (0x00003000)        /*!< HCLK divided by 8 */
#define  RCC_CFGR_PPRE2_DIV16                (0x00003800)        /*!< HCLK divided by 16 */

/*!< ADCPPRE configuration */
#define  RCC_CFGR_ADCPRE                     (0x0000C000)        /*!< ADCPRE[1:0] bits (ADC prescaler) */
#define  RCC_CFGR_ADCPRE_0                   (0x00004000)        /*!< Bit 0 */
#define  RCC_CFGR_ADCPRE_1                   (0x00008000)        /*!< Bit 1 */

#define  RCC_CFGR_ADCPRE_DIV2                (0x00000000)        /*!< PCLK2 divided by 2 */
#define  RCC_CFGR_ADCPRE_DIV4                (0x00004000)        /*!< PCLK2 divided by 4 */
#define  RCC_CFGR_ADCPRE_DIV6                (0x00008000)        /*!< PCLK2 divided by 6 */
#define  RCC_CFGR_ADCPRE_DIV8                (0x0000C000)        /*!< PCLK2 divided by 8 */

#define  RCC_CFGR_PLLSRC                     (0x00010000)        /*!< PLL entry clock source */

#define  RCC_CFGR_PLLXTPRE                   (0x00020000)        /*!< HSE divider for PLL entry */

/*!< PLLMUL configuration */
#define  RCC_CFGR_PLLMULL                    (0x003C0000)        /*!< PLLMUL[3:0] bits (PLL multiplication factor) */
#define  RCC_CFGR_PLLMULL_0                  (0x00040000)        /*!< Bit 0 */
#define  RCC_CFGR_PLLMULL_1                  (0x00080000)        /*!< Bit 1 */
#define  RCC_CFGR_PLLMULL_2                  (0x00100000)        /*!< Bit 2 */
#define  RCC_CFGR_PLLMULL_3                  (0x00200000)        /*!< Bit 3 */

#ifdef STM32F10X_CL
 #define  RCC_CFGR_PLLSRC_HSI_Div2           (0x00000000)        /*!< HSI clock divided by 2 selected as PLL entry clock source */
 #define  RCC_CFGR_PLLSRC_PREDIV1            (0x00010000)        /*!< PREDIV1 clock selected as PLL entry clock source */

 #define  RCC_CFGR_PLLXTPRE_PREDIV1          (0x00000000)        /*!< PREDIV1 clock not divided for PLL entry */
 #define  RCC_CFGR_PLLXTPRE_PREDIV1_Div2     (0x00020000)        /*!< PREDIV1 clock divided by 2 for PLL entry */

 #define  RCC_CFGR_PLLMULL4                  (0x00080000)        /*!< PLL input clock * 4 */
 #define  RCC_CFGR_PLLMULL5                  (0x000C0000)        /*!< PLL input clock * 5 */
 #define  RCC_CFGR_PLLMULL6                  (0x00100000)        /*!< PLL input clock * 6 */
 #define  RCC_CFGR_PLLMULL7                  (0x00140000)        /*!< PLL input clock * 7 */
 #define  RCC_CFGR_PLLMULL8                  (0x00180000)        /*!< PLL input clock * 8 */
 #define  RCC_CFGR_PLLMULL9                  (0x001C0000)        /*!< PLL input clock * 9 */
 #define  RCC_CFGR_PLLMULL6_5                (0x00340000)        /*!< PLL input clock * 6.5 */
 
 #define  RCC_CFGR_OTGFSPRE                  (0x00400000)        /*!< USB OTG FS prescaler */
 
/*!< MCO configuration */
 #define  RCC_CFGR_MCO                       (0x0F000000)        /*!< MCO[3:0] bits (Microcontroller Clock Output) */
 #define  RCC_CFGR_MCO_0                     (0x01000000)        /*!< Bit 0 */
 #define  RCC_CFGR_MCO_1                     (0x02000000)        /*!< Bit 1 */
 #define  RCC_CFGR_MCO_2                     (0x04000000)        /*!< Bit 2 */
 #define  RCC_CFGR_MCO_3                     (0x08000000)        /*!< Bit 3 */

 #define  RCC_CFGR_MCO_NOCLOCK               (0x00000000)        /*!< No clock */
 #define  RCC_CFGR_MCO_SYSCLK                (0x04000000)        /*!< System clock selected as MCO source */
 #define  RCC_CFGR_MCO_HSI                   (0x05000000)        /*!< HSI clock selected as MCO source */
 #define  RCC_CFGR_MCO_HSE                   (0x06000000)        /*!< HSE clock selected as MCO source */
 #define  RCC_CFGR_MCO_PLLCLK_Div2           (0x07000000)        /*!< PLL clock divided by 2 selected as MCO source */
 #define  RCC_CFGR_MCO_PLL2CLK               (0x08000000)        /*!< PLL2 clock selected as MCO source*/
 #define  RCC_CFGR_MCO_PLL3CLK_Div2          (0x09000000)        /*!< PLL3 clock divided by 2 selected as MCO source*/
 #define  RCC_CFGR_MCO_Ext_HSE               (0x0A000000)        /*!< XT1 external 3-25 MHz oscillator clock selected as MCO source */
 #define  RCC_CFGR_MCO_PLL3CLK               (0x0B000000)        /*!< PLL3 clock selected as MCO source */
#elif defined (STM32F10X_LD_VL) || defined (STM32F10X_MD_VL) || defined (STM32F10X_HD_VL)
 #define  RCC_CFGR_PLLSRC_HSI_Div2           (0x00000000)        /*!< HSI clock divided by 2 selected as PLL entry clock source */
 #define  RCC_CFGR_PLLSRC_PREDIV1            (0x00010000)        /*!< PREDIV1 clock selected as PLL entry clock source */

 #define  RCC_CFGR_PLLXTPRE_PREDIV1          (0x00000000)        /*!< PREDIV1 clock not divided for PLL entry */
 #define  RCC_CFGR_PLLXTPRE_PREDIV1_Div2     (0x00020000)        /*!< PREDIV1 clock divided by 2 for PLL entry */

 #define  RCC_CFGR_PLLMULL2                  (0x00000000)        /*!< PLL input clock*2 */
 #define  RCC_CFGR_PLLMULL3                  (0x00040000)        /*!< PLL input clock*3 */
 #define  RCC_CFGR_PLLMULL4                  (0x00080000)        /*!< PLL input clock*4 */
 #define  RCC_CFGR_PLLMULL5                  (0x000C0000)        /*!< PLL input clock*5 */
 #define  RCC_CFGR_PLLMULL6                  (0x00100000)        /*!< PLL input clock*6 */
 #define  RCC_CFGR_PLLMULL7                  (0x00140000)        /*!< PLL input clock*7 */
 #define  RCC_CFGR_PLLMULL8                  (0x00180000)        /*!< PLL input clock*8 */
 #define  RCC_CFGR_PLLMULL9                  (0x001C0000)        /*!< PLL input clock*9 */
 #define  RCC_CFGR_PLLMULL10                 (0x00200000)        /*!< PLL input clock10 */
 #define  RCC_CFGR_PLLMULL11                 (0x00240000)        /*!< PLL input clock*11 */
 #define  RCC_CFGR_PLLMULL12                 (0x00280000)        /*!< PLL input clock*12 */
 #define  RCC_CFGR_PLLMULL13                 (0x002C0000)        /*!< PLL input clock*13 */
 #define  RCC_CFGR_PLLMULL14                 (0x00300000)        /*!< PLL input clock*14 */
 #define  RCC_CFGR_PLLMULL15                 (0x00340000)        /*!< PLL input clock*15 */
 #define  RCC_CFGR_PLLMULL16                 (0x00380000)        /*!< PLL input clock*16 */

/*!< MCO configuration */
 #define  RCC_CFGR_MCO                       (0x07000000)        /*!< MCO[2:0] bits (Microcontroller Clock Output) */
 #define  RCC_CFGR_MCO_0                     (0x01000000)        /*!< Bit 0 */
 #define  RCC_CFGR_MCO_1                     (0x02000000)        /*!< Bit 1 */
 #define  RCC_CFGR_MCO_2                     (0x04000000)        /*!< Bit 2 */

 #define  RCC_CFGR_MCO_NOCLOCK               (0x00000000)        /*!< No clock */
 #define  RCC_CFGR_MCO_SYSCLK                (0x04000000)        /*!< System clock selected as MCO source */
 #define  RCC_CFGR_MCO_HSI                   (0x05000000)        /*!< HSI clock selected as MCO source */
 #define  RCC_CFGR_MCO_HSE                   (0x06000000)        /*!< HSE clock selected as MCO source  */
 #define  RCC_CFGR_MCO_PLL                   (0x07000000)        /*!< PLL clock divided by 2 selected as MCO source */
#else
 #define  RCC_CFGR_PLLSRC_HSI_Div2           (0x00000000)        /*!< HSI clock divided by 2 selected as PLL entry clock source */
 #define  RCC_CFGR_PLLSRC_HSE                (0x00010000)        /*!< HSE clock selected as PLL entry clock source */

 #define  RCC_CFGR_PLLXTPRE_HSE              (0x00000000)        /*!< HSE clock not divided for PLL entry */
 #define  RCC_CFGR_PLLXTPRE_HSE_Div2         (0x00020000)        /*!< HSE clock divided by 2 for PLL entry */

 #define  RCC_CFGR_PLLMULL2                  (0x00000000)        /*!< PLL input clock*2 */
 #define  RCC_CFGR_PLLMULL3                  (0x00040000)        /*!< PLL input clock*3 */
 #define  RCC_CFGR_PLLMULL4                  (0x00080000)        /*!< PLL input clock*4 */
 #define  RCC_CFGR_PLLMULL5                  (0x000C0000)        /*!< PLL input clock*5 */
 #define  RCC_CFGR_PLLMULL6                  (0x00100000)        /*!< PLL input clock*6 */
 #define  RCC_CFGR_PLLMULL7                  (0x00140000)        /*!< PLL input clock*7 */
 #define  RCC_CFGR_PLLMULL8                  (0x00180000)        /*!< PLL input clock*8 */
 #define  RCC_CFGR_PLLMULL9                  (0x001C0000)        /*!< PLL input clock*9 */
 #define  RCC_CFGR_PLLMULL10                 (0x00200000)        /*!< PLL input clock10 */
 #define  RCC_CFGR_PLLMULL11                 (0x00240000)        /*!< PLL input clock*11 */
 #define  RCC_CFGR_PLLMULL12                 (0x00280000)        /*!< PLL input clock*12 */
 #define  RCC_CFGR_PLLMULL13                 (0x002C0000)        /*!< PLL input clock*13 */
 #define  RCC_CFGR_PLLMULL14                 (0x00300000)        /*!< PLL input clock*14 */
 #define  RCC_CFGR_PLLMULL15                 (0x00340000)        /*!< PLL input clock*15 */
 #define  RCC_CFGR_PLLMULL16                 (0x00380000)        /*!< PLL input clock*16 */
 #define  RCC_CFGR_USBPRE                    (0x00400000)        /*!< USB Device prescaler */

/*!< MCO configuration */
 #define  RCC_CFGR_MCO                       (0x07000000)        /*!< MCO[2:0] bits (Microcontroller Clock Output) */
 #define  RCC_CFGR_MCO_0                     (0x01000000)        /*!< Bit 0 */
 #define  RCC_CFGR_MCO_1                     (0x02000000)        /*!< Bit 1 */
 #define  RCC_CFGR_MCO_2                     (0x04000000)        /*!< Bit 2 */

 #define  RCC_CFGR_MCO_NOCLOCK               (0x00000000)        /*!< No clock */
 #define  RCC_CFGR_MCO_SYSCLK                (0x04000000)        /*!< System clock selected as MCO source */
 #define  RCC_CFGR_MCO_HSI                   (0x05000000)        /*!< HSI clock selected as MCO source */
 #define  RCC_CFGR_MCO_HSE                   (0x06000000)        /*!< HSE clock selected as MCO source  */
 #define  RCC_CFGR_MCO_PLL                   (0x07000000)        /*!< PLL clock divided by 2 selected as MCO source */
#endif /* STM32F10X_CL */

/*!<******************  Bit definition for RCC_CIR register  ********************/
#define  RCC_CIR_LSIRDYF                     (0x00000001)        /*!< LSI Ready Interrupt flag */
#define  RCC_CIR_LSERDYF                     (0x00000002)        /*!< LSE Ready Interrupt flag */
#define  RCC_CIR_HSIRDYF                     (0x00000004)        /*!< HSI Ready Interrupt flag */
#define  RCC_CIR_HSERDYF                     (0x00000008)        /*!< HSE Ready Interrupt flag */
#define  RCC_CIR_PLLRDYF                     (0x00000010)        /*!< PLL Ready Interrupt flag */
#define  RCC_CIR_CSSF                        (0x00000080)        /*!< Clock Security System Interrupt flag */
#define  RCC_CIR_LSIRDYIE                    (0x00000100)        /*!< LSI Ready Interrupt Enable */
#define  RCC_CIR_LSERDYIE                    (0x00000200)        /*!< LSE Ready Interrupt Enable */
#define  RCC_CIR_HSIRDYIE                    (0x00000400)        /*!< HSI Ready Interrupt Enable */
#define  RCC_CIR_HSERDYIE                    (0x00000800)        /*!< HSE Ready Interrupt Enable */
#define  RCC_CIR_PLLRDYIE                    (0x00001000)        /*!< PLL Ready Interrupt Enable */
#define  RCC_CIR_LSIRDYC                     (0x00010000)        /*!< LSI Ready Interrupt Clear */
#define  RCC_CIR_LSERDYC                     (0x00020000)        /*!< LSE Ready Interrupt Clear */
#define  RCC_CIR_HSIRDYC                     (0x00040000)        /*!< HSI Ready Interrupt Clear */
#define  RCC_CIR_HSERDYC                     (0x00080000)        /*!< HSE Ready Interrupt Clear */
#define  RCC_CIR_PLLRDYC                     (0x00100000)        /*!< PLL Ready Interrupt Clear */
#define  RCC_CIR_CSSC                        (0x00800000)        /*!< Clock Security System Interrupt Clear */

#ifdef STM32F10X_CL
 #define  RCC_CIR_PLL2RDYF                    (0x00000020)        /*!< PLL2 Ready Interrupt flag */
 #define  RCC_CIR_PLL3RDYF                    (0x00000040)        /*!< PLL3 Ready Interrupt flag */
 #define  RCC_CIR_PLL2RDYIE                   (0x00002000)        /*!< PLL2 Ready Interrupt Enable */
 #define  RCC_CIR_PLL3RDYIE                   (0x00004000)        /*!< PLL3 Ready Interrupt Enable */
 #define  RCC_CIR_PLL2RDYC                    (0x00200000)        /*!< PLL2 Ready Interrupt Clear */
 #define  RCC_CIR_PLL3RDYC                    (0x00400000)        /*!< PLL3 Ready Interrupt Clear */
#endif /* STM32F10X_CL */

/*****************  Bit definition for RCC_APB2RSTR register  *****************/
#define  RCC_APB2RSTR_AFIORST                (0x00000001)        /*!< Alternate Function I/O reset */
#define  RCC_APB2RSTR_IOPARST                (0x00000004)        /*!< I/O port A reset */
#define  RCC_APB2RSTR_IOPBRST                (0x00000008)        /*!< I/O port B reset */
#define  RCC_APB2RSTR_IOPCRST                (0x00000010)        /*!< I/O port C reset */
#define  RCC_APB2RSTR_IOPDRST                (0x00000020)        /*!< I/O port D reset */
#define  RCC_APB2RSTR_ADC1RST                (0x00000200)        /*!< ADC 1 interface reset */

#if !defined (STM32F10X_LD_VL) && !defined (STM32F10X_MD_VL) && !defined (STM32F10X_HD_VL)
#define  RCC_APB2RSTR_ADC2RST                (0x00000400)        /*!< ADC 2 interface reset */
#endif

#define  RCC_APB2RSTR_TIM1RST                (0x00000800)        /*!< TIM1 Timer reset */
#define  RCC_APB2RSTR_SPI1RST                (0x00001000)        /*!< SPI 1 reset */
#define  RCC_APB2RSTR_USART1RST              (0x00004000)        /*!< USART1 reset */

#if defined (STM32F10X_LD_VL) || defined (STM32F10X_MD_VL) || defined (STM32F10X_HD_VL)
#define  RCC_APB2RSTR_TIM15RST               (0x00010000)        /*!< TIM15 Timer reset */
#define  RCC_APB2RSTR_TIM16RST               (0x00020000)        /*!< TIM16 Timer reset */
#define  RCC_APB2RSTR_TIM17RST               (0x00040000)        /*!< TIM17 Timer reset */
#endif

#if !defined (STM32F10X_LD) && !defined (STM32F10X_LD_VL)
 #define  RCC_APB2RSTR_IOPERST               (0x00000040)        /*!< I/O port E reset */
#endif /* STM32F10X_LD && STM32F10X_LD_VL */

#if defined (STM32F10X_HD) || defined (STM32F10X_XL)
 #define  RCC_APB2RSTR_IOPFRST               (0x00000080)        /*!< I/O port F reset */
 #define  RCC_APB2RSTR_IOPGRST               (0x00000100)        /*!< I/O port G reset */
 #define  RCC_APB2RSTR_TIM8RST               (0x00002000)        /*!< TIM8 Timer reset */
 #define  RCC_APB2RSTR_ADC3RST               (0x00008000)        /*!< ADC3 interface reset */
#endif

#if defined (STM32F10X_HD_VL)
 #define  RCC_APB2RSTR_IOPFRST               (0x00000080)        /*!< I/O port F reset */
 #define  RCC_APB2RSTR_IOPGRST               (0x00000100)        /*!< I/O port G reset */
#endif

#ifdef STM32F10X_XL
 #define  RCC_APB2RSTR_TIM9RST               (0x00080000)         /*!< TIM9 Timer reset */
 #define  RCC_APB2RSTR_TIM10RST              (0x00100000)         /*!< TIM10 Timer reset */
 #define  RCC_APB2RSTR_TIM11RST              (0x00200000)         /*!< TIM11 Timer reset */
#endif /* STM32F10X_XL */

/*****************  Bit definition for RCC_APB1RSTR register  *****************/
#define  RCC_APB1RSTR_TIM2RST                (0x00000001)        /*!< Timer 2 reset */
#define  RCC_APB1RSTR_TIM3RST                (0x00000002)        /*!< Timer 3 reset */
#define  RCC_APB1RSTR_WWDGRST                (0x00000800)        /*!< Window Watchdog reset */
#define  RCC_APB1RSTR_USART2RST              (0x00020000)        /*!< USART 2 reset */
#define  RCC_APB1RSTR_I2C1RST                (0x00200000)        /*!< I2C 1 reset */

#if !defined (STM32F10X_LD_VL) && !defined (STM32F10X_MD_VL) && !defined (STM32F10X_HD_VL)
#define  RCC_APB1RSTR_CAN1RST                (0x02000000)        /*!< CAN1 reset */
#endif

#define  RCC_APB1RSTR_BKPRST                 (0x08000000)        /*!< Backup interface reset */
#define  RCC_APB1RSTR_PWRRST                 (0x10000000)        /*!< Power interface reset */

#if !defined (STM32F10X_LD) && !defined (STM32F10X_LD_VL)
 #define  RCC_APB1RSTR_TIM4RST               (0x00000004)        /*!< Timer 4 reset */
 #define  RCC_APB1RSTR_SPI2RST               (0x00004000)        /*!< SPI 2 reset */
 #define  RCC_APB1RSTR_USART3RST             (0x00040000)        /*!< USART 3 reset */
 #define  RCC_APB1RSTR_I2C2RST               (0x00400000)        /*!< I2C 2 reset */
#endif /* STM32F10X_LD && STM32F10X_LD_VL */

#if defined (STM32F10X_HD) || defined (STM32F10X_MD) || defined (STM32F10X_LD) || defined  (STM32F10X_XL)
 #define  RCC_APB1RSTR_USBRST                (0x00800000)        /*!< USB Device reset */
#endif

#if defined (STM32F10X_HD) || defined  (STM32F10X_CL) || defined  (STM32F10X_XL)
 #define  RCC_APB1RSTR_TIM5RST                (0x00000008)        /*!< Timer 5 reset */
 #define  RCC_APB1RSTR_TIM6RST                (0x00000010)        /*!< Timer 6 reset */
 #define  RCC_APB1RSTR_TIM7RST                (0x00000020)        /*!< Timer 7 reset */
 #define  RCC_APB1RSTR_SPI3RST                (0x00008000)        /*!< SPI 3 reset */
 #define  RCC_APB1RSTR_UART4RST               (0x00080000)        /*!< UART 4 reset */
 #define  RCC_APB1RSTR_UART5RST               (0x00100000)        /*!< UART 5 reset */
 #define  RCC_APB1RSTR_DACRST                 (0x20000000)        /*!< DAC interface reset */
#endif

#if defined (STM32F10X_LD_VL) || defined  (STM32F10X_MD_VL) || defined  (STM32F10X_HD_VL)
 #define  RCC_APB1RSTR_TIM6RST                (0x00000010)        /*!< Timer 6 reset */
 #define  RCC_APB1RSTR_TIM7RST                (0x00000020)        /*!< Timer 7 reset */
 #define  RCC_APB1RSTR_DACRST                 (0x20000000)        /*!< DAC interface reset */
 #define  RCC_APB1RSTR_CECRST                 (0x40000000)        /*!< CEC interface reset */ 
#endif

#if defined  (STM32F10X_HD_VL)
 #define  RCC_APB1RSTR_TIM5RST                (0x00000008)        /*!< Timer 5 reset */
 #define  RCC_APB1RSTR_TIM12RST               (0x00000040)        /*!< TIM12 Timer reset */
 #define  RCC_APB1RSTR_TIM13RST               (0x00000080)        /*!< TIM13 Timer reset */
 #define  RCC_APB1RSTR_TIM14RST               (0x00000100)        /*!< TIM14 Timer reset */
 #define  RCC_APB1RSTR_SPI3RST                (0x00008000)        /*!< SPI 3 reset */ 
 #define  RCC_APB1RSTR_UART4RST               (0x00080000)        /*!< UART 4 reset */
 #define  RCC_APB1RSTR_UART5RST               (0x00100000)        /*!< UART 5 reset */ 
#endif

#ifdef STM32F10X_CL
 #define  RCC_APB1RSTR_CAN2RST                (0x04000000)        /*!< CAN2 reset */
#endif /* STM32F10X_CL */

#ifdef STM32F10X_XL
 #define  RCC_APB1RSTR_TIM12RST               (0x00000040)         /*!< TIM12 Timer reset */
 #define  RCC_APB1RSTR_TIM13RST               (0x00000080)         /*!< TIM13 Timer reset */
 #define  RCC_APB1RSTR_TIM14RST               (0x00000100)         /*!< TIM14 Timer reset */
#endif /* STM32F10X_XL */

/******************  Bit definition for RCC_AHBENR register  ******************/
#define  RCC_AHBENR_DMA1EN                   (0x0001)            /*!< DMA1 clock enable */
#define  RCC_AHBENR_SRAMEN                   (0x0004)            /*!< SRAM interface clock enable */
#define  RCC_AHBENR_FLITFEN                  (0x0010)            /*!< FLITF clock enable */
#define  RCC_AHBENR_CRCEN                    (0x0040)            /*!< CRC clock enable */

#if defined (STM32F10X_HD) || defined  (STM32F10X_CL) || defined  (STM32F10X_HD_VL)
 #define  RCC_AHBENR_DMA2EN                  (0x0002)            /*!< DMA2 clock enable */
#endif

#if defined (STM32F10X_HD) || defined (STM32F10X_XL)
 #define  RCC_AHBENR_FSMCEN                  (0x0100)            /*!< FSMC clock enable */
 #define  RCC_AHBENR_SDIOEN                  (0x0400)            /*!< SDIO clock enable */
#endif

#if defined (STM32F10X_HD_VL)
 #define  RCC_AHBENR_FSMCEN                  (0x0100)            /*!< FSMC clock enable */
#endif

#ifdef STM32F10X_CL
 #define  RCC_AHBENR_OTGFSEN                 (0x00001000)         /*!< USB OTG FS clock enable */
 #define  RCC_AHBENR_ETHMACEN                (0x00004000)         /*!< ETHERNET MAC clock enable */
 #define  RCC_AHBENR_ETHMACTXEN              (0x00008000)         /*!< ETHERNET MAC Tx clock enable */
 #define  RCC_AHBENR_ETHMACRXEN              (0x00010000)         /*!< ETHERNET MAC Rx clock enable */
#endif /* STM32F10X_CL */

/******************  Bit definition for RCC_APB2ENR register  *****************/
#define  RCC_APB2ENR_AFIOEN                  (0x00000001)         /*!< Alternate Function I/O clock enable */
#define  RCC_APB2ENR_IOPAEN                  (0x00000004)         /*!< I/O port A clock enable */
#define  RCC_APB2ENR_IOPBEN                  (0x00000008)         /*!< I/O port B clock enable */
#define  RCC_APB2ENR_IOPCEN                  (0x00000010)         /*!< I/O port C clock enable */
#define  RCC_APB2ENR_IOPDEN                  (0x00000020)         /*!< I/O port D clock enable */
#define  RCC_APB2ENR_ADC1EN                  (0x00000200)         /*!< ADC 1 interface clock enable */

#if !defined (STM32F10X_LD_VL) && !defined (STM32F10X_MD_VL) && !defined (STM32F10X_HD_VL)
#define  RCC_APB2ENR_ADC2EN                  (0x00000400)         /*!< ADC 2 interface clock enable */
#endif

#define  RCC_APB2ENR_TIM1EN                  (0x00000800)         /*!< TIM1 Timer clock enable */
#define  RCC_APB2ENR_SPI1EN                  (0x00001000)         /*!< SPI 1 clock enable */
#define  RCC_APB2ENR_USART1EN                (0x00004000)         /*!< USART1 clock enable */

#if defined (STM32F10X_LD_VL) || defined (STM32F10X_MD_VL) || defined (STM32F10X_HD_VL)
#define  RCC_APB2ENR_TIM15EN                 (0x00010000)         /*!< TIM15 Timer clock enable */
#define  RCC_APB2ENR_TIM16EN                 (0x00020000)         /*!< TIM16 Timer clock enable */
#define  RCC_APB2ENR_TIM17EN                 (0x00040000)         /*!< TIM17 Timer clock enable */
#endif

#if !defined (STM32F10X_LD) && !defined (STM32F10X_LD_VL)
 #define  RCC_APB2ENR_IOPEEN                 (0x00000040)         /*!< I/O port E clock enable */
#endif /* STM32F10X_LD && STM32F10X_LD_VL */

#if defined (STM32F10X_HD) || defined (STM32F10X_XL)
 #define  RCC_APB2ENR_IOPFEN                 (0x00000080)         /*!< I/O port F clock enable */
 #define  RCC_APB2ENR_IOPGEN                 (0x00000100)         /*!< I/O port G clock enable */
 #define  RCC_APB2ENR_TIM8EN                 (0x00002000)         /*!< TIM8 Timer clock enable */
 #define  RCC_APB2ENR_ADC3EN                 (0x00008000)         /*!< DMA1 clock enable */
#endif

#if defined (STM32F10X_HD_VL)
 #define  RCC_APB2ENR_IOPFEN                 (0x00000080)         /*!< I/O port F clock enable */
 #define  RCC_APB2ENR_IOPGEN                 (0x00000100)         /*!< I/O port G clock enable */
#endif

#ifdef STM32F10X_XL
 #define  RCC_APB2ENR_TIM9EN                 (0x00080000)         /*!< TIM9 Timer clock enable  */
 #define  RCC_APB2ENR_TIM10EN                (0x00100000)         /*!< TIM10 Timer clock enable  */
 #define  RCC_APB2ENR_TIM11EN                (0x00200000)         /*!< TIM11 Timer clock enable */
#endif

/*****************  Bit definition for RCC_APB1ENR register  ******************/
#define  RCC_APB1ENR_TIM2EN                  (0x00000001)        /*!< Timer 2 clock enabled*/
#define  RCC_APB1ENR_TIM3EN                  (0x00000002)        /*!< Timer 3 clock enable */
#define  RCC_APB1ENR_WWDGEN                  (0x00000800)        /*!< Window Watchdog clock enable */
#define  RCC_APB1ENR_USART2EN                (0x00020000)        /*!< USART 2 clock enable */
#define  RCC_APB1ENR_I2C1EN                  (0x00200000)        /*!< I2C 1 clock enable */

#if !defined (STM32F10X_LD_VL) && !defined (STM32F10X_MD_VL) && !defined (STM32F10X_HD_VL)
#define  RCC_APB1ENR_CAN1EN                  (0x02000000)        /*!< CAN1 clock enable */
#endif

#define  RCC_APB1ENR_BKPEN                   (0x08000000)        /*!< Backup interface clock enable */
#define  RCC_APB1ENR_PWREN                   (0x10000000)        /*!< Power interface clock enable */

#if !defined (STM32F10X_LD) && !defined (STM32F10X_LD_VL)
 #define  RCC_APB1ENR_TIM4EN                 (0x00000004)        /*!< Timer 4 clock enable */
 #define  RCC_APB1ENR_SPI2EN                 (0x00004000)        /*!< SPI 2 clock enable */
 #define  RCC_APB1ENR_USART3EN               (0x00040000)        /*!< USART 3 clock enable */
 #define  RCC_APB1ENR_I2C2EN                 (0x00400000)        /*!< I2C 2 clock enable */
#endif /* STM32F10X_LD && STM32F10X_LD_VL */

#if defined (STM32F10X_HD) || defined (STM32F10X_MD) || defined  (STM32F10X_LD)
 #define  RCC_APB1ENR_USBEN                  (0x00800000)        /*!< USB Device clock enable */
#endif

#if defined (STM32F10X_HD) || defined  (STM32F10X_CL)
 #define  RCC_APB1ENR_TIM5EN                 (0x00000008)        /*!< Timer 5 clock enable */
 #define  RCC_APB1ENR_TIM6EN                 (0x00000010)        /*!< Timer 6 clock enable */
 #define  RCC_APB1ENR_TIM7EN                 (0x00000020)        /*!< Timer 7 clock enable */
 #define  RCC_APB1ENR_SPI3EN                 (0x00008000)        /*!< SPI 3 clock enable */
 #define  RCC_APB1ENR_UART4EN                (0x00080000)        /*!< UART 4 clock enable */
 #define  RCC_APB1ENR_UART5EN                (0x00100000)        /*!< UART 5 clock enable */
 #define  RCC_APB1ENR_DACEN                  (0x20000000)        /*!< DAC interface clock enable */
#endif

#if defined (STM32F10X_LD_VL) || defined  (STM32F10X_MD_VL) || defined  (STM32F10X_HD_VL)
 #define  RCC_APB1ENR_TIM6EN                 (0x00000010)        /*!< Timer 6 clock enable */
 #define  RCC_APB1ENR_TIM7EN                 (0x00000020)        /*!< Timer 7 clock enable */
 #define  RCC_APB1ENR_DACEN                  (0x20000000)        /*!< DAC interface clock enable */
 #define  RCC_APB1ENR_CECEN                  (0x40000000)        /*!< CEC interface clock enable */ 
#endif

#ifdef STM32F10X_HD_VL
 #define  RCC_APB1ENR_TIM5EN                 (0x00000008)        /*!< Timer 5 clock enable */
 #define  RCC_APB1ENR_TIM12EN                (0x00000040)         /*!< TIM12 Timer clock enable  */
 #define  RCC_APB1ENR_TIM13EN                (0x00000080)         /*!< TIM13 Timer clock enable  */
 #define  RCC_APB1ENR_TIM14EN                (0x00000100)         /*!< TIM14 Timer clock enable */
 #define  RCC_APB1ENR_SPI3EN                 (0x00008000)        /*!< SPI 3 clock enable */
 #define  RCC_APB1ENR_UART4EN                (0x00080000)        /*!< UART 4 clock enable */
 #define  RCC_APB1ENR_UART5EN                (0x00100000)        /*!< UART 5 clock enable */ 
#endif /* STM32F10X_HD_VL */

#ifdef STM32F10X_CL
 #define  RCC_APB1ENR_CAN2EN                  (0x04000000)        /*!< CAN2 clock enable */
#endif /* STM32F10X_CL */

#ifdef STM32F10X_XL
 #define  RCC_APB1ENR_TIM12EN                (0x00000040)         /*!< TIM12 Timer clock enable  */
 #define  RCC_APB1ENR_TIM13EN                (0x00000080)         /*!< TIM13 Timer clock enable  */
 #define  RCC_APB1ENR_TIM14EN                (0x00000100)         /*!< TIM14 Timer clock enable */
#endif /* STM32F10X_XL */

/*******************  Bit definition for RCC_BDCR register  *******************/
#define  RCC_BDCR_LSEON                      (0x00000001)        /*!< External Low Speed oscillator enable */
#define  RCC_BDCR_LSERDY                     (0x00000002)        /*!< External Low Speed oscillator Ready */
#define  RCC_BDCR_LSEBYP                     (0x00000004)        /*!< External Low Speed oscillator Bypass */

#define  RCC_BDCR_RTCSEL                     (0x00000300)        /*!< RTCSEL[1:0] bits (RTC clock source selection) */
#define  RCC_BDCR_RTCSEL_0                   (0x00000100)        /*!< Bit 0 */
#define  RCC_BDCR_RTCSEL_1                   (0x00000200)        /*!< Bit 1 */

/*!< RTC congiguration */
#define  RCC_BDCR_RTCSEL_NOCLOCK             (0x00000000)        /*!< No clock */
#define  RCC_BDCR_RTCSEL_LSE                 (0x00000100)        /*!< LSE oscillator clock used as RTC clock */
#define  RCC_BDCR_RTCSEL_LSI                 (0x00000200)        /*!< LSI oscillator clock used as RTC clock */
#define  RCC_BDCR_RTCSEL_HSE                 (0x00000300)        /*!< HSE oscillator clock divided by 128 used as RTC clock */

#define  RCC_BDCR_RTCEN                      (0x00008000)        /*!< RTC clock enable */
#define  RCC_BDCR_BDRST                      (0x00010000)        /*!< Backup domain software reset  */

/*******************  Bit definition for RCC_CSR register  ********************/  
#define  RCC_CSR_LSION                       (0x00000001)        /*!< Internal Low Speed oscillator enable */
#define  RCC_CSR_LSIRDY                      (0x00000002)        /*!< Internal Low Speed oscillator Ready */
#define  RCC_CSR_RMVF                        (0x01000000)        /*!< Remove reset flag */
#define  RCC_CSR_PINRSTF                     (0x04000000)        /*!< PIN reset flag */
#define  RCC_CSR_PORRSTF                     (0x08000000)        /*!< POR/PDR reset flag */
#define  RCC_CSR_SFTRSTF                     (0x10000000)        /*!< Software Reset flag */
#define  RCC_CSR_IWDGRSTF                    (0x20000000)        /*!< Independent Watchdog reset flag */
#define  RCC_CSR_WWDGRSTF                    (0x40000000)        /*!< Window watchdog reset flag */
#define  RCC_CSR_LPWRRSTF                    (0x80000000)        /*!< Low-Power reset flag */

#ifdef STM32F10X_CL
/*******************  Bit definition for RCC_AHBRSTR register  ****************/
 #define  RCC_AHBRSTR_OTGFSRST               (0x00001000)         /*!< USB OTG FS reset */
 #define  RCC_AHBRSTR_ETHMACRST              (0x00004000)         /*!< ETHERNET MAC reset */

/*******************  Bit definition for RCC_CFGR2 register  ******************/
/*!< PREDIV1 configuration */
 #define  RCC_CFGR2_PREDIV1                  (0x0000000F)        /*!< PREDIV1[3:0] bits */
 #define  RCC_CFGR2_PREDIV1_0                (0x00000001)        /*!< Bit 0 */
 #define  RCC_CFGR2_PREDIV1_1                (0x00000002)        /*!< Bit 1 */
 #define  RCC_CFGR2_PREDIV1_2                (0x00000004)        /*!< Bit 2 */
 #define  RCC_CFGR2_PREDIV1_3                (0x00000008)        /*!< Bit 3 */

 #define  RCC_CFGR2_PREDIV1_DIV1             (0x00000000)        /*!< PREDIV1 input clock not divided */
 #define  RCC_CFGR2_PREDIV1_DIV2             (0x00000001)        /*!< PREDIV1 input clock divided by 2 */
 #define  RCC_CFGR2_PREDIV1_DIV3             (0x00000002)        /*!< PREDIV1 input clock divided by 3 */
 #define  RCC_CFGR2_PREDIV1_DIV4             (0x00000003)        /*!< PREDIV1 input clock divided by 4 */
 #define  RCC_CFGR2_PREDIV1_DIV5             (0x00000004)        /*!< PREDIV1 input clock divided by 5 */
 #define  RCC_CFGR2_PREDIV1_DIV6             (0x00000005)        /*!< PREDIV1 input clock divided by 6 */
 #define  RCC_CFGR2_PREDIV1_DIV7             (0x00000006)        /*!< PREDIV1 input clock divided by 7 */
 #define  RCC_CFGR2_PREDIV1_DIV8             (0x00000007)        /*!< PREDIV1 input clock divided by 8 */
 #define  RCC_CFGR2_PREDIV1_DIV9             (0x00000008)        /*!< PREDIV1 input clock divided by 9 */
 #define  RCC_CFGR2_PREDIV1_DIV10            (0x00000009)        /*!< PREDIV1 input clock divided by 10 */
 #define  RCC_CFGR2_PREDIV1_DIV11            (0x0000000A)        /*!< PREDIV1 input clock divided by 11 */
 #define  RCC_CFGR2_PREDIV1_DIV12            (0x0000000B)        /*!< PREDIV1 input clock divided by 12 */
 #define  RCC_CFGR2_PREDIV1_DIV13            (0x0000000C)        /*!< PREDIV1 input clock divided by 13 */
 #define  RCC_CFGR2_PREDIV1_DIV14            (0x0000000D)        /*!< PREDIV1 input clock divided by 14 */
 #define  RCC_CFGR2_PREDIV1_DIV15            (0x0000000E)        /*!< PREDIV1 input clock divided by 15 */
 #define  RCC_CFGR2_PREDIV1_DIV16            (0x0000000F)        /*!< PREDIV1 input clock divided by 16 */

/*!< PREDIV2 configuration */
 #define  RCC_CFGR2_PREDIV2                  (0x000000F0)        /*!< PREDIV2[3:0] bits */
 #define  RCC_CFGR2_PREDIV2_0                (0x00000010)        /*!< Bit 0 */
 #define  RCC_CFGR2_PREDIV2_1                (0x00000020)        /*!< Bit 1 */
 #define  RCC_CFGR2_PREDIV2_2                (0x00000040)        /*!< Bit 2 */
 #define  RCC_CFGR2_PREDIV2_3                (0x00000080)        /*!< Bit 3 */

 #define  RCC_CFGR2_PREDIV2_DIV1             (0x00000000)        /*!< PREDIV2 input clock not divided */
 #define  RCC_CFGR2_PREDIV2_DIV2             (0x00000010)        /*!< PREDIV2 input clock divided by 2 */
 #define  RCC_CFGR2_PREDIV2_DIV3             (0x00000020)        /*!< PREDIV2 input clock divided by 3 */
 #define  RCC_CFGR2_PREDIV2_DIV4             (0x00000030)        /*!< PREDIV2 input clock divided by 4 */
 #define  RCC_CFGR2_PREDIV2_DIV5             (0x00000040)        /*!< PREDIV2 input clock divided by 5 */
 #define  RCC_CFGR2_PREDIV2_DIV6             (0x00000050)        /*!< PREDIV2 input clock divided by 6 */
 #define  RCC_CFGR2_PREDIV2_DIV7             (0x00000060)        /*!< PREDIV2 input clock divided by 7 */
 #define  RCC_CFGR2_PREDIV2_DIV8             (0x00000070)        /*!< PREDIV2 input clock divided by 8 */
 #define  RCC_CFGR2_PREDIV2_DIV9             (0x00000080)        /*!< PREDIV2 input clock divided by 9 */
 #define  RCC_CFGR2_PREDIV2_DIV10            (0x00000090)        /*!< PREDIV2 input clock divided by 10 */
 #define  RCC_CFGR2_PREDIV2_DIV11            (0x000000A0)        /*!< PREDIV2 input clock divided by 11 */
 #define  RCC_CFGR2_PREDIV2_DIV12            (0x000000B0)        /*!< PREDIV2 input clock divided by 12 */
 #define  RCC_CFGR2_PREDIV2_DIV13            (0x000000C0)        /*!< PREDIV2 input clock divided by 13 */
 #define  RCC_CFGR2_PREDIV2_DIV14            (0x000000D0)        /*!< PREDIV2 input clock divided by 14 */
 #define  RCC_CFGR2_PREDIV2_DIV15            (0x000000E0)        /*!< PREDIV2 input clock divided by 15 */
 #define  RCC_CFGR2_PREDIV2_DIV16            (0x000000F0)        /*!< PREDIV2 input clock divided by 16 */

/*!< PLL2MUL configuration */
 #define  RCC_CFGR2_PLL2MUL                  (0x00000F00)        /*!< PLL2MUL[3:0] bits */
 #define  RCC_CFGR2_PLL2MUL_0                (0x00000100)        /*!< Bit 0 */
 #define  RCC_CFGR2_PLL2MUL_1                (0x00000200)        /*!< Bit 1 */
 #define  RCC_CFGR2_PLL2MUL_2                (0x00000400)        /*!< Bit 2 */
 #define  RCC_CFGR2_PLL2MUL_3                (0x00000800)        /*!< Bit 3 */

 #define  RCC_CFGR2_PLL2MUL8                 (0x00000600)        /*!< PLL2 input clock * 8 */
 #define  RCC_CFGR2_PLL2MUL9                 (0x00000700)        /*!< PLL2 input clock * 9 */
 #define  RCC_CFGR2_PLL2MUL10                (0x00000800)        /*!< PLL2 input clock * 10 */
 #define  RCC_CFGR2_PLL2MUL11                (0x00000900)        /*!< PLL2 input clock * 11 */
 #define  RCC_CFGR2_PLL2MUL12                (0x00000A00)        /*!< PLL2 input clock * 12 */
 #define  RCC_CFGR2_PLL2MUL13                (0x00000B00)        /*!< PLL2 input clock * 13 */
 #define  RCC_CFGR2_PLL2MUL14                (0x00000C00)        /*!< PLL2 input clock * 14 */
 #define  RCC_CFGR2_PLL2MUL16                (0x00000E00)        /*!< PLL2 input clock * 16 */
 #define  RCC_CFGR2_PLL2MUL20                (0x00000F00)        /*!< PLL2 input clock * 20 */

/*!< PLL3MUL configuration */
 #define  RCC_CFGR2_PLL3MUL                  (0x0000F000)        /*!< PLL3MUL[3:0] bits */
 #define  RCC_CFGR2_PLL3MUL_0                (0x00001000)        /*!< Bit 0 */
 #define  RCC_CFGR2_PLL3MUL_1                (0x00002000)        /*!< Bit 1 */
 #define  RCC_CFGR2_PLL3MUL_2                (0x00004000)        /*!< Bit 2 */
 #define  RCC_CFGR2_PLL3MUL_3                (0x00008000)        /*!< Bit 3 */

 #define  RCC_CFGR2_PLL3MUL8                 (0x00006000)        /*!< PLL3 input clock * 8 */
 #define  RCC_CFGR2_PLL3MUL9                 (0x00007000)        /*!< PLL3 input clock * 9 */
 #define  RCC_CFGR2_PLL3MUL10                (0x00008000)        /*!< PLL3 input clock * 10 */
 #define  RCC_CFGR2_PLL3MUL11                (0x00009000)        /*!< PLL3 input clock * 11 */
 #define  RCC_CFGR2_PLL3MUL12                (0x0000A000)        /*!< PLL3 input clock * 12 */
 #define  RCC_CFGR2_PLL3MUL13                (0x0000B000)        /*!< PLL3 input clock * 13 */
 #define  RCC_CFGR2_PLL3MUL14                (0x0000C000)        /*!< PLL3 input clock * 14 */
 #define  RCC_CFGR2_PLL3MUL16                (0x0000E000)        /*!< PLL3 input clock * 16 */
 #define  RCC_CFGR2_PLL3MUL20                (0x0000F000)        /*!< PLL3 input clock * 20 */

 #define  RCC_CFGR2_PREDIV1SRC               (0x00010000)        /*!< PREDIV1 entry clock source */
 #define  RCC_CFGR2_PREDIV1SRC_PLL2          (0x00010000)        /*!< PLL2 selected as PREDIV1 entry clock source */
 #define  RCC_CFGR2_PREDIV1SRC_HSE           (0x00000000)        /*!< HSE selected as PREDIV1 entry clock source */
 #define  RCC_CFGR2_I2S2SRC                  (0x00020000)        /*!< I2S2 entry clock source */
 #define  RCC_CFGR2_I2S3SRC                  (0x00040000)        /*!< I2S3 clock source */
#endif /* STM32F10X_CL */

#if defined (STM32F10X_LD_VL) || defined (STM32F10X_MD_VL) || defined (STM32F10X_HD_VL)
/*******************  Bit definition for RCC_CFGR2 register  ******************/
/*!< PREDIV1 configuration */
 #define  RCC_CFGR2_PREDIV1                  (0x0000000F)        /*!< PREDIV1[3:0] bits */
 #define  RCC_CFGR2_PREDIV1_0                (0x00000001)        /*!< Bit 0 */
 #define  RCC_CFGR2_PREDIV1_1                (0x00000002)        /*!< Bit 1 */
 #define  RCC_CFGR2_PREDIV1_2                (0x00000004)        /*!< Bit 2 */
 #define  RCC_CFGR2_PREDIV1_3                (0x00000008)        /*!< Bit 3 */

 #define  RCC_CFGR2_PREDIV1_DIV1             (0x00000000)        /*!< PREDIV1 input clock not divided */
 #define  RCC_CFGR2_PREDIV1_DIV2             (0x00000001)        /*!< PREDIV1 input clock divided by 2 */
 #define  RCC_CFGR2_PREDIV1_DIV3             (0x00000002)        /*!< PREDIV1 input clock divided by 3 */
 #define  RCC_CFGR2_PREDIV1_DIV4             (0x00000003)        /*!< PREDIV1 input clock divided by 4 */
 #define  RCC_CFGR2_PREDIV1_DIV5             (0x00000004)        /*!< PREDIV1 input clock divided by 5 */
 #define  RCC_CFGR2_PREDIV1_DIV6             (0x00000005)        /*!< PREDIV1 input clock divided by 6 */
 #define  RCC_CFGR2_PREDIV1_DIV7             (0x00000006)        /*!< PREDIV1 input clock divided by 7 */
 #define  RCC_CFGR2_PREDIV1_DIV8             (0x00000007)        /*!< PREDIV1 input clock divided by 8 */
 #define  RCC_CFGR2_PREDIV1_DIV9             (0x00000008)        /*!< PREDIV1 input clock divided by 9 */
 #define  RCC_CFGR2_PREDIV1_DIV10            (0x00000009)        /*!< PREDIV1 input clock divided by 10 */
 #define  RCC_CFGR2_PREDIV1_DIV11            (0x0000000A)        /*!< PREDIV1 input clock divided by 11 */
 #define  RCC_CFGR2_PREDIV1_DIV12            (0x0000000B)        /*!< PREDIV1 input clock divided by 12 */
 #define  RCC_CFGR2_PREDIV1_DIV13            (0x0000000C)        /*!< PREDIV1 input clock divided by 13 */
 #define  RCC_CFGR2_PREDIV1_DIV14            (0x0000000D)        /*!< PREDIV1 input clock divided by 14 */
 #define  RCC_CFGR2_PREDIV1_DIV15            (0x0000000E)        /*!< PREDIV1 input clock divided by 15 */
 #define  RCC_CFGR2_PREDIV1_DIV16            (0x0000000F)        /*!< PREDIV1 input clock divided by 16 */
#endif
 
/******************************************************************************/
/*                                                                            */
/*                General Purpose and Alternate Function I/O                  */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for GPIO_CRL register  *******************/
#define  GPIO_CRL_MODE                       (0x33333333)        /*!< Port x mode bits */

#define  GPIO_CRL_MODE0                      (0x00000003)        /*!< MODE0[1:0] bits (Port x mode bits, pin 0) */
#define  GPIO_CRL_MODE0_0                    (0x00000001)        /*!< Bit 0 */
#define  GPIO_CRL_MODE0_1                    (0x00000002)        /*!< Bit 1 */

#define  GPIO_CRL_MODE1                      (0x00000030)        /*!< MODE1[1:0] bits (Port x mode bits, pin 1) */
#define  GPIO_CRL_MODE1_0                    (0x00000010)        /*!< Bit 0 */
#define  GPIO_CRL_MODE1_1                    (0x00000020)        /*!< Bit 1 */

#define  GPIO_CRL_MODE2                      (0x00000300)        /*!< MODE2[1:0] bits (Port x mode bits, pin 2) */
#define  GPIO_CRL_MODE2_0                    (0x00000100)        /*!< Bit 0 */
#define  GPIO_CRL_MODE2_1                    (0x00000200)        /*!< Bit 1 */

#define  GPIO_CRL_MODE3                      (0x00003000)        /*!< MODE3[1:0] bits (Port x mode bits, pin 3) */
#define  GPIO_CRL_MODE3_0                    (0x00001000)        /*!< Bit 0 */
#define  GPIO_CRL_MODE3_1                    (0x00002000)        /*!< Bit 1 */

#define  GPIO_CRL_MODE4                      (0x00030000)        /*!< MODE4[1:0] bits (Port x mode bits, pin 4) */
#define  GPIO_CRL_MODE4_0                    (0x00010000)        /*!< Bit 0 */
#define  GPIO_CRL_MODE4_1                    (0x00020000)        /*!< Bit 1 */

#define  GPIO_CRL_MODE5                      (0x00300000)        /*!< MODE5[1:0] bits (Port x mode bits, pin 5) */
#define  GPIO_CRL_MODE5_0                    (0x00100000)        /*!< Bit 0 */
#define  GPIO_CRL_MODE5_1                    (0x00200000)        /*!< Bit 1 */

#define  GPIO_CRL_MODE6                      (0x03000000)        /*!< MODE6[1:0] bits (Port x mode bits, pin 6) */
#define  GPIO_CRL_MODE6_0                    (0x01000000)        /*!< Bit 0 */
#define  GPIO_CRL_MODE6_1                    (0x02000000)        /*!< Bit 1 */

#define  GPIO_CRL_MODE7                      (0x30000000)        /*!< MODE7[1:0] bits (Port x mode bits, pin 7) */
#define  GPIO_CRL_MODE7_0                    (0x10000000)        /*!< Bit 0 */
#define  GPIO_CRL_MODE7_1                    (0x20000000)        /*!< Bit 1 */

#define  GPIO_CRL_CNF                        (0xCCCCCCCC)        /*!< Port x configuration bits */

#define  GPIO_CRL_CNF0                       (0x0000000C)        /*!< CNF0[1:0] bits (Port x configuration bits, pin 0) */
#define  GPIO_CRL_CNF0_0                     (0x00000004)        /*!< Bit 0 */
#define  GPIO_CRL_CNF0_1                     (0x00000008)        /*!< Bit 1 */

#define  GPIO_CRL_CNF1                       (0x000000C0)        /*!< CNF1[1:0] bits (Port x configuration bits, pin 1) */
#define  GPIO_CRL_CNF1_0                     (0x00000040)        /*!< Bit 0 */
#define  GPIO_CRL_CNF1_1                     (0x00000080)        /*!< Bit 1 */

#define  GPIO_CRL_CNF2                       (0x00000C00)        /*!< CNF2[1:0] bits (Port x configuration bits, pin 2) */
#define  GPIO_CRL_CNF2_0                     (0x00000400)        /*!< Bit 0 */
#define  GPIO_CRL_CNF2_1                     (0x00000800)        /*!< Bit 1 */

#define  GPIO_CRL_CNF3                       (0x0000C000)        /*!< CNF3[1:0] bits (Port x configuration bits, pin 3) */
#define  GPIO_CRL_CNF3_0                     (0x00004000)        /*!< Bit 0 */
#define  GPIO_CRL_CNF3_1                     (0x00008000)        /*!< Bit 1 */

#define  GPIO_CRL_CNF4                       (0x000C0000)        /*!< CNF4[1:0] bits (Port x configuration bits, pin 4) */
#define  GPIO_CRL_CNF4_0                     (0x00040000)        /*!< Bit 0 */
#define  GPIO_CRL_CNF4_1                     (0x00080000)        /*!< Bit 1 */

#define  GPIO_CRL_CNF5                       (0x00C00000)        /*!< CNF5[1:0] bits (Port x configuration bits, pin 5) */
#define  GPIO_CRL_CNF5_0                     (0x00400000)        /*!< Bit 0 */
#define  GPIO_CRL_CNF5_1                     (0x00800000)        /*!< Bit 1 */

#define  GPIO_CRL_CNF6                       (0x0C000000)        /*!< CNF6[1:0] bits (Port x configuration bits, pin 6) */
#define  GPIO_CRL_CNF6_0                     (0x04000000)        /*!< Bit 0 */
#define  GPIO_CRL_CNF6_1                     (0x08000000)        /*!< Bit 1 */

#define  GPIO_CRL_CNF7                       (0xC0000000)        /*!< CNF7[1:0] bits (Port x configuration bits, pin 7) */
#define  GPIO_CRL_CNF7_0                     (0x40000000)        /*!< Bit 0 */
#define  GPIO_CRL_CNF7_1                     (0x80000000)        /*!< Bit 1 */

/*******************  Bit definition for GPIO_CRH register  *******************/
#define  GPIO_CRH_MODE                       (0x33333333)        /*!< Port x mode bits */

#define  GPIO_CRH_MODE8                      (0x00000003)        /*!< MODE8[1:0] bits (Port x mode bits, pin 8) */
#define  GPIO_CRH_MODE8_0                    (0x00000001)        /*!< Bit 0 */
#define  GPIO_CRH_MODE8_1                    (0x00000002)        /*!< Bit 1 */

#define  GPIO_CRH_MODE9                      (0x00000030)        /*!< MODE9[1:0] bits (Port x mode bits, pin 9) */
#define  GPIO_CRH_MODE9_0                    (0x00000010)        /*!< Bit 0 */
#define  GPIO_CRH_MODE9_1                    (0x00000020)        /*!< Bit 1 */

#define  GPIO_CRH_MODE10                     (0x00000300)        /*!< MODE10[1:0] bits (Port x mode bits, pin 10) */
#define  GPIO_CRH_MODE10_0                   (0x00000100)        /*!< Bit 0 */
#define  GPIO_CRH_MODE10_1                   (0x00000200)        /*!< Bit 1 */

#define  GPIO_CRH_MODE11                     (0x00003000)        /*!< MODE11[1:0] bits (Port x mode bits, pin 11) */
#define  GPIO_CRH_MODE11_0                   (0x00001000)        /*!< Bit 0 */
#define  GPIO_CRH_MODE11_1                   (0x00002000)        /*!< Bit 1 */

#define  GPIO_CRH_MODE12                     (0x00030000)        /*!< MODE12[1:0] bits (Port x mode bits, pin 12) */
#define  GPIO_CRH_MODE12_0                   (0x00010000)        /*!< Bit 0 */
#define  GPIO_CRH_MODE12_1                   (0x00020000)        /*!< Bit 1 */

#define  GPIO_CRH_MODE13                     (0x00300000)        /*!< MODE13[1:0] bits (Port x mode bits, pin 13) */
#define  GPIO_CRH_MODE13_0                   (0x00100000)        /*!< Bit 0 */
#define  GPIO_CRH_MODE13_1                   (0x00200000)        /*!< Bit 1 */

#define  GPIO_CRH_MODE14                     (0x03000000)        /*!< MODE14[1:0] bits (Port x mode bits, pin 14) */
#define  GPIO_CRH_MODE14_0                   (0x01000000)        /*!< Bit 0 */
#define  GPIO_CRH_MODE14_1                   (0x02000000)        /*!< Bit 1 */

#define  GPIO_CRH_MODE15                     (0x30000000)        /*!< MODE15[1:0] bits (Port x mode bits, pin 15) */
#define  GPIO_CRH_MODE15_0                   (0x10000000)        /*!< Bit 0 */
#define  GPIO_CRH_MODE15_1                   (0x20000000)        /*!< Bit 1 */

#define  GPIO_CRH_CNF                        (0xCCCCCCCC)        /*!< Port x configuration bits */

#define  GPIO_CRH_CNF8                       (0x0000000C)        /*!< CNF8[1:0] bits (Port x configuration bits, pin 8) */
#define  GPIO_CRH_CNF8_0                     (0x00000004)        /*!< Bit 0 */
#define  GPIO_CRH_CNF8_1                     (0x00000008)        /*!< Bit 1 */

#define  GPIO_CRH_CNF9                       (0x000000C0)        /*!< CNF9[1:0] bits (Port x configuration bits, pin 9) */
#define  GPIO_CRH_CNF9_0                     (0x00000040)        /*!< Bit 0 */
#define  GPIO_CRH_CNF9_1                     (0x00000080)        /*!< Bit 1 */

#define  GPIO_CRH_CNF10                      (0x00000C00)        /*!< CNF10[1:0] bits (Port x configuration bits, pin 10) */
#define  GPIO_CRH_CNF10_0                    (0x00000400)        /*!< Bit 0 */
#define  GPIO_CRH_CNF10_1                    (0x00000800)        /*!< Bit 1 */

#define  GPIO_CRH_CNF11                      (0x0000C000)        /*!< CNF11[1:0] bits (Port x configuration bits, pin 11) */
#define  GPIO_CRH_CNF11_0                    (0x00004000)        /*!< Bit 0 */
#define  GPIO_CRH_CNF11_1                    (0x00008000)        /*!< Bit 1 */

#define  GPIO_CRH_CNF12                      (0x000C0000)        /*!< CNF12[1:0] bits (Port x configuration bits, pin 12) */
#define  GPIO_CRH_CNF12_0                    (0x00040000)        /*!< Bit 0 */
#define  GPIO_CRH_CNF12_1                    (0x00080000)        /*!< Bit 1 */

#define  GPIO_CRH_CNF13                      (0x00C00000)        /*!< CNF13[1:0] bits (Port x configuration bits, pin 13) */
#define  GPIO_CRH_CNF13_0                    (0x00400000)        /*!< Bit 0 */
#define  GPIO_CRH_CNF13_1                    (0x00800000)        /*!< Bit 1 */

#define  GPIO_CRH_CNF14                      (0x0C000000)        /*!< CNF14[1:0] bits (Port x configuration bits, pin 14) */
#define  GPIO_CRH_CNF14_0                    (0x04000000)        /*!< Bit 0 */
#define  GPIO_CRH_CNF14_1                    (0x08000000)        /*!< Bit 1 */

#define  GPIO_CRH_CNF15                      (0xC0000000)        /*!< CNF15[1:0] bits (Port x configuration bits, pin 15) */
#define  GPIO_CRH_CNF15_0                    (0x40000000)        /*!< Bit 0 */
#define  GPIO_CRH_CNF15_1                    (0x80000000)        /*!< Bit 1 */

/*!<******************  Bit definition for GPIO_IDR register  *******************/
#define GPIO_IDR_IDR0                        (0x0001)            /*!< Port input data, bit 0 */
#define GPIO_IDR_IDR1                        (0x0002)            /*!< Port input data, bit 1 */
#define GPIO_IDR_IDR2                        (0x0004)            /*!< Port input data, bit 2 */
#define GPIO_IDR_IDR3                        (0x0008)            /*!< Port input data, bit 3 */
#define GPIO_IDR_IDR4                        (0x0010)            /*!< Port input data, bit 4 */
#define GPIO_IDR_IDR5                        (0x0020)            /*!< Port input data, bit 5 */
#define GPIO_IDR_IDR6                        (0x0040)            /*!< Port input data, bit 6 */
#define GPIO_IDR_IDR7                        (0x0080)            /*!< Port input data, bit 7 */
#define GPIO_IDR_IDR8                        (0x0100)            /*!< Port input data, bit 8 */
#define GPIO_IDR_IDR9                        (0x0200)            /*!< Port input data, bit 9 */
#define GPIO_IDR_IDR10                       (0x0400)            /*!< Port input data, bit 10 */
#define GPIO_IDR_IDR11                       (0x0800)            /*!< Port input data, bit 11 */
#define GPIO_IDR_IDR12                       (0x1000)            /*!< Port input data, bit 12 */
#define GPIO_IDR_IDR13                       (0x2000)            /*!< Port input data, bit 13 */
#define GPIO_IDR_IDR14                       (0x4000)            /*!< Port input data, bit 14 */
#define GPIO_IDR_IDR15                       (0x8000)            /*!< Port input data, bit 15 */

/*******************  Bit definition for GPIO_ODR register  *******************/
#define GPIO_ODR_ODR0                        (0x0001)            /*!< Port output data, bit 0 */
#define GPIO_ODR_ODR1                        (0x0002)            /*!< Port output data, bit 1 */
#define GPIO_ODR_ODR2                        (0x0004)            /*!< Port output data, bit 2 */
#define GPIO_ODR_ODR3                        (0x0008)            /*!< Port output data, bit 3 */
#define GPIO_ODR_ODR4                        (0x0010)            /*!< Port output data, bit 4 */
#define GPIO_ODR_ODR5                        (0x0020)            /*!< Port output data, bit 5 */
#define GPIO_ODR_ODR6                        (0x0040)            /*!< Port output data, bit 6 */
#define GPIO_ODR_ODR7                        (0x0080)            /*!< Port output data, bit 7 */
#define GPIO_ODR_ODR8                        (0x0100)            /*!< Port output data, bit 8 */
#define GPIO_ODR_ODR9                        (0x0200)            /*!< Port output data, bit 9 */
#define GPIO_ODR_ODR10                       (0x0400)            /*!< Port output data, bit 10 */
#define GPIO_ODR_ODR11                       (0x0800)            /*!< Port output data, bit 11 */
#define GPIO_ODR_ODR12                       (0x1000)            /*!< Port output data, bit 12 */
#define GPIO_ODR_ODR13                       (0x2000)            /*!< Port output data, bit 13 */
#define GPIO_ODR_ODR14                       (0x4000)            /*!< Port output data, bit 14 */
#define GPIO_ODR_ODR15                       (0x8000)            /*!< Port output data, bit 15 */

/******************  Bit definition for GPIO_BSRR register  *******************/
#define GPIO_BSRR_BS0                        (0x00000001)        /*!< Port x Set bit 0 */
#define GPIO_BSRR_BS1                        (0x00000002)        /*!< Port x Set bit 1 */
#define GPIO_BSRR_BS2                        (0x00000004)        /*!< Port x Set bit 2 */
#define GPIO_BSRR_BS3                        (0x00000008)        /*!< Port x Set bit 3 */
#define GPIO_BSRR_BS4                        (0x00000010)        /*!< Port x Set bit 4 */
#define GPIO_BSRR_BS5                        (0x00000020)        /*!< Port x Set bit 5 */
#define GPIO_BSRR_BS6                        (0x00000040)        /*!< Port x Set bit 6 */
#define GPIO_BSRR_BS7                        (0x00000080)        /*!< Port x Set bit 7 */
#define GPIO_BSRR_BS8                        (0x00000100)        /*!< Port x Set bit 8 */
#define GPIO_BSRR_BS9                        (0x00000200)        /*!< Port x Set bit 9 */
#define GPIO_BSRR_BS10                       (0x00000400)        /*!< Port x Set bit 10 */
#define GPIO_BSRR_BS11                       (0x00000800)        /*!< Port x Set bit 11 */
#define GPIO_BSRR_BS12                       (0x00001000)        /*!< Port x Set bit 12 */
#define GPIO_BSRR_BS13                       (0x00002000)        /*!< Port x Set bit 13 */
#define GPIO_BSRR_BS14                       (0x00004000)        /*!< Port x Set bit 14 */
#define GPIO_BSRR_BS15                       (0x00008000)        /*!< Port x Set bit 15 */

#define GPIO_BSRR_BR0                        (0x00010000)        /*!< Port x Reset bit 0 */
#define GPIO_BSRR_BR1                        (0x00020000)        /*!< Port x Reset bit 1 */
#define GPIO_BSRR_BR2                        (0x00040000)        /*!< Port x Reset bit 2 */
#define GPIO_BSRR_BR3                        (0x00080000)        /*!< Port x Reset bit 3 */
#define GPIO_BSRR_BR4                        (0x00100000)        /*!< Port x Reset bit 4 */
#define GPIO_BSRR_BR5                        (0x00200000)        /*!< Port x Reset bit 5 */
#define GPIO_BSRR_BR6                        (0x00400000)        /*!< Port x Reset bit 6 */
#define GPIO_BSRR_BR7                        (0x00800000)        /*!< Port x Reset bit 7 */
#define GPIO_BSRR_BR8                        (0x01000000)        /*!< Port x Reset bit 8 */
#define GPIO_BSRR_BR9                        (0x02000000)        /*!< Port x Reset bit 9 */
#define GPIO_BSRR_BR10                       (0x04000000)        /*!< Port x Reset bit 10 */
#define GPIO_BSRR_BR11                       (0x08000000)        /*!< Port x Reset bit 11 */
#define GPIO_BSRR_BR12                       (0x10000000)        /*!< Port x Reset bit 12 */
#define GPIO_BSRR_BR13                       (0x20000000)        /*!< Port x Reset bit 13 */
#define GPIO_BSRR_BR14                       (0x40000000)        /*!< Port x Reset bit 14 */
#define GPIO_BSRR_BR15                       (0x80000000)        /*!< Port x Reset bit 15 */

/*******************  Bit definition for GPIO_BRR register  *******************/
#define GPIO_BRR_BR0                         (0x0001)            /*!< Port x Reset bit 0 */
#define GPIO_BRR_BR1                         (0x0002)            /*!< Port x Reset bit 1 */
#define GPIO_BRR_BR2                         (0x0004)            /*!< Port x Reset bit 2 */
#define GPIO_BRR_BR3                         (0x0008)            /*!< Port x Reset bit 3 */
#define GPIO_BRR_BR4                         (0x0010)            /*!< Port x Reset bit 4 */
#define GPIO_BRR_BR5                         (0x0020)            /*!< Port x Reset bit 5 */
#define GPIO_BRR_BR6                         (0x0040)            /*!< Port x Reset bit 6 */
#define GPIO_BRR_BR7                         (0x0080)            /*!< Port x Reset bit 7 */
#define GPIO_BRR_BR8                         (0x0100)            /*!< Port x Reset bit 8 */
#define GPIO_BRR_BR9                         (0x0200)            /*!< Port x Reset bit 9 */
#define GPIO_BRR_BR10                        (0x0400)            /*!< Port x Reset bit 10 */
#define GPIO_BRR_BR11                        (0x0800)            /*!< Port x Reset bit 11 */
#define GPIO_BRR_BR12                        (0x1000)            /*!< Port x Reset bit 12 */
#define GPIO_BRR_BR13                        (0x2000)            /*!< Port x Reset bit 13 */
#define GPIO_BRR_BR14                        (0x4000)            /*!< Port x Reset bit 14 */
#define GPIO_BRR_BR15                        (0x8000)            /*!< Port x Reset bit 15 */

/******************  Bit definition for GPIO_LCKR register  *******************/
#define GPIO_LCKR_LCK0                       (0x00000001)        /*!< Port x Lock bit 0 */
#define GPIO_LCKR_LCK1                       (0x00000002)        /*!< Port x Lock bit 1 */
#define GPIO_LCKR_LCK2                       (0x00000004)        /*!< Port x Lock bit 2 */
#define GPIO_LCKR_LCK3                       (0x00000008)        /*!< Port x Lock bit 3 */
#define GPIO_LCKR_LCK4                       (0x00000010)        /*!< Port x Lock bit 4 */
#define GPIO_LCKR_LCK5                       (0x00000020)        /*!< Port x Lock bit 5 */
#define GPIO_LCKR_LCK6                       (0x00000040)        /*!< Port x Lock bit 6 */
#define GPIO_LCKR_LCK7                       (0x00000080)        /*!< Port x Lock bit 7 */
#define GPIO_LCKR_LCK8                       (0x00000100)        /*!< Port x Lock bit 8 */
#define GPIO_LCKR_LCK9                       (0x00000200)        /*!< Port x Lock bit 9 */
#define GPIO_LCKR_LCK10                      (0x00000400)        /*!< Port x Lock bit 10 */
#define GPIO_LCKR_LCK11                      (0x00000800)        /*!< Port x Lock bit 11 */
#define GPIO_LCKR_LCK12                      (0x00001000)        /*!< Port x Lock bit 12 */
#define GPIO_LCKR_LCK13                      (0x00002000)        /*!< Port x Lock bit 13 */
#define GPIO_LCKR_LCK14                      (0x00004000)        /*!< Port x Lock bit 14 */
#define GPIO_LCKR_LCK15                      (0x00008000)        /*!< Port x Lock bit 15 */
#define GPIO_LCKR_LCKK                       (0x00010000)        /*!< Lock key */

/*----------------------------------------------------------------------------*/

/******************  Bit definition for AFIO_EVCR register  *******************/
#define AFIO_EVCR_PIN                        ((uint8_t)0x0F)               /*!< PIN[3:0] bits (Pin selection) */
#define AFIO_EVCR_PIN_0                      ((uint8_t)0x01)               /*!< Bit 0 */
#define AFIO_EVCR_PIN_1                      ((uint8_t)0x02)               /*!< Bit 1 */
#define AFIO_EVCR_PIN_2                      ((uint8_t)0x04)               /*!< Bit 2 */
#define AFIO_EVCR_PIN_3                      ((uint8_t)0x08)               /*!< Bit 3 */

/*!< PIN configuration */
#define AFIO_EVCR_PIN_PX0                    ((uint8_t)0x00)               /*!< Pin 0 selected */
#define AFIO_EVCR_PIN_PX1                    ((uint8_t)0x01)               /*!< Pin 1 selected */
#define AFIO_EVCR_PIN_PX2                    ((uint8_t)0x02)               /*!< Pin 2 selected */
#define AFIO_EVCR_PIN_PX3                    ((uint8_t)0x03)               /*!< Pin 3 selected */
#define AFIO_EVCR_PIN_PX4                    ((uint8_t)0x04)               /*!< Pin 4 selected */
#define AFIO_EVCR_PIN_PX5                    ((uint8_t)0x05)               /*!< Pin 5 selected */
#define AFIO_EVCR_PIN_PX6                    ((uint8_t)0x06)               /*!< Pin 6 selected */
#define AFIO_EVCR_PIN_PX7                    ((uint8_t)0x07)               /*!< Pin 7 selected */
#define AFIO_EVCR_PIN_PX8                    ((uint8_t)0x08)               /*!< Pin 8 selected */
#define AFIO_EVCR_PIN_PX9                    ((uint8_t)0x09)               /*!< Pin 9 selected */
#define AFIO_EVCR_PIN_PX10                   ((uint8_t)0x0A)               /*!< Pin 10 selected */
#define AFIO_EVCR_PIN_PX11                   ((uint8_t)0x0B)               /*!< Pin 11 selected */
#define AFIO_EVCR_PIN_PX12                   ((uint8_t)0x0C)               /*!< Pin 12 selected */
#define AFIO_EVCR_PIN_PX13                   ((uint8_t)0x0D)               /*!< Pin 13 selected */
#define AFIO_EVCR_PIN_PX14                   ((uint8_t)0x0E)               /*!< Pin 14 selected */
#define AFIO_EVCR_PIN_PX15                   ((uint8_t)0x0F)               /*!< Pin 15 selected */

#define AFIO_EVCR_PORT                       ((uint8_t)0x70)               /*!< PORT[2:0] bits (Port selection) */
#define AFIO_EVCR_PORT_0                     ((uint8_t)0x10)               /*!< Bit 0 */
#define AFIO_EVCR_PORT_1                     ((uint8_t)0x20)               /*!< Bit 1 */
#define AFIO_EVCR_PORT_2                     ((uint8_t)0x40)               /*!< Bit 2 */

/*!< PORT configuration */
#define AFIO_EVCR_PORT_PA                    ((uint8_t)0x00)               /*!< Port A selected */
#define AFIO_EVCR_PORT_PB                    ((uint8_t)0x10)               /*!< Port B selected */
#define AFIO_EVCR_PORT_PC                    ((uint8_t)0x20)               /*!< Port C selected */
#define AFIO_EVCR_PORT_PD                    ((uint8_t)0x30)               /*!< Port D selected */
#define AFIO_EVCR_PORT_PE                    ((uint8_t)0x40)               /*!< Port E selected */

#define AFIO_EVCR_EVOE                       ((uint8_t)0x80)               /*!< Event Output Enable */

/******************  Bit definition for AFIO_MAPR register  *******************/
#define AFIO_MAPR_SPI1_REMAP                 (0x00000001)        /*!< SPI1 remapping */
#define AFIO_MAPR_I2C1_REMAP                 (0x00000002)        /*!< I2C1 remapping */
#define AFIO_MAPR_USART1_REMAP               (0x00000004)        /*!< USART1 remapping */
#define AFIO_MAPR_USART2_REMAP               (0x00000008)        /*!< USART2 remapping */

#define AFIO_MAPR_USART3_REMAP               (0x00000030)        /*!< USART3_REMAP[1:0] bits (USART3 remapping) */
#define AFIO_MAPR_USART3_REMAP_0             (0x00000010)        /*!< Bit 0 */
#define AFIO_MAPR_USART3_REMAP_1             (0x00000020)        /*!< Bit 1 */

/* USART3_REMAP configuration */
#define AFIO_MAPR_USART3_REMAP_NOREMAP       (0x00000000)        /*!< No remap (TX/PB10, RX/PB11, CK/PB12, CTS/PB13, RTS/PB14) */
#define AFIO_MAPR_USART3_REMAP_PARTIALREMAP  (0x00000010)        /*!< Partial remap (TX/PC10, RX/PC11, CK/PC12, CTS/PB13, RTS/PB14) */
#define AFIO_MAPR_USART3_REMAP_FULLREMAP     (0x00000030)        /*!< Full remap (TX/PD8, RX/PD9, CK/PD10, CTS/PD11, RTS/PD12) */

#define AFIO_MAPR_TIM1_REMAP                 (0x000000C0)        /*!< TIM1_REMAP[1:0] bits (TIM1 remapping) */
#define AFIO_MAPR_TIM1_REMAP_0               (0x00000040)        /*!< Bit 0 */
#define AFIO_MAPR_TIM1_REMAP_1               (0x00000080)        /*!< Bit 1 */

/*!< TIM1_REMAP configuration */
#define AFIO_MAPR_TIM1_REMAP_NOREMAP         (0x00000000)        /*!< No remap (ETR/PA12, CH1/PA8, CH2/PA9, CH3/PA10, CH4/PA11, BKIN/PB12, CH1N/PB13, CH2N/PB14, CH3N/PB15) */
#define AFIO_MAPR_TIM1_REMAP_PARTIALREMAP    (0x00000040)        /*!< Partial remap (ETR/PA12, CH1/PA8, CH2/PA9, CH3/PA10, CH4/PA11, BKIN/PA6, CH1N/PA7, CH2N/PB0, CH3N/PB1) */
#define AFIO_MAPR_TIM1_REMAP_FULLREMAP       (0x000000C0)        /*!< Full remap (ETR/PE7, CH1/PE9, CH2/PE11, CH3/PE13, CH4/PE14, BKIN/PE15, CH1N/PE8, CH2N/PE10, CH3N/PE12) */

#define AFIO_MAPR_TIM2_REMAP                 (0x00000300)        /*!< TIM2_REMAP[1:0] bits (TIM2 remapping) */
#define AFIO_MAPR_TIM2_REMAP_0               (0x00000100)        /*!< Bit 0 */
#define AFIO_MAPR_TIM2_REMAP_1               (0x00000200)        /*!< Bit 1 */

/*!< TIM2_REMAP configuration */
#define AFIO_MAPR_TIM2_REMAP_NOREMAP         (0x00000000)        /*!< No remap (CH1/ETR/PA0, CH2/PA1, CH3/PA2, CH4/PA3) */
#define AFIO_MAPR_TIM2_REMAP_PARTIALREMAP1   (0x00000100)        /*!< Partial remap (CH1/ETR/PA15, CH2/PB3, CH3/PA2, CH4/PA3) */
#define AFIO_MAPR_TIM2_REMAP_PARTIALREMAP2   (0x00000200)        /*!< Partial remap (CH1/ETR/PA0, CH2/PA1, CH3/PB10, CH4/PB11) */
#define AFIO_MAPR_TIM2_REMAP_FULLREMAP       (0x00000300)        /*!< Full remap (CH1/ETR/PA15, CH2/PB3, CH3/PB10, CH4/PB11) */

#define AFIO_MAPR_TIM3_REMAP                 (0x00000C00)        /*!< TIM3_REMAP[1:0] bits (TIM3 remapping) */
#define AFIO_MAPR_TIM3_REMAP_0               (0x00000400)        /*!< Bit 0 */
#define AFIO_MAPR_TIM3_REMAP_1               (0x00000800)        /*!< Bit 1 */

/*!< TIM3_REMAP configuration */
#define AFIO_MAPR_TIM3_REMAP_NOREMAP         (0x00000000)        /*!< No remap (CH1/PA6, CH2/PA7, CH3/PB0, CH4/PB1) */
#define AFIO_MAPR_TIM3_REMAP_PARTIALREMAP    (0x00000800)        /*!< Partial remap (CH1/PB4, CH2/PB5, CH3/PB0, CH4/PB1) */
#define AFIO_MAPR_TIM3_REMAP_FULLREMAP       (0x00000C00)        /*!< Full remap (CH1/PC6, CH2/PC7, CH3/PC8, CH4/PC9) */

#define AFIO_MAPR_TIM4_REMAP                 (0x00001000)        /*!< TIM4_REMAP bit (TIM4 remapping) */

#define AFIO_MAPR_CAN_REMAP                  (0x00006000)        /*!< CAN_REMAP[1:0] bits (CAN Alternate function remapping) */
#define AFIO_MAPR_CAN_REMAP_0                (0x00002000)        /*!< Bit 0 */
#define AFIO_MAPR_CAN_REMAP_1                (0x00004000)        /*!< Bit 1 */

/*!< CAN_REMAP configuration */
#define AFIO_MAPR_CAN_REMAP_REMAP1           (0x00000000)        /*!< CANRX mapped to PA11, CANTX mapped to PA12 */
#define AFIO_MAPR_CAN_REMAP_REMAP2           (0x00004000)        /*!< CANRX mapped to PB8, CANTX mapped to PB9 */
#define AFIO_MAPR_CAN_REMAP_REMAP3           (0x00006000)        /*!< CANRX mapped to PD0, CANTX mapped to PD1 */

#define AFIO_MAPR_PD01_REMAP                 (0x00008000)        /*!< Port D0/Port D1 mapping on OSC_IN/OSC_OUT */
#define AFIO_MAPR_TIM5CH4_IREMAP             (0x00010000)        /*!< TIM5 Channel4 Internal Remap */
#define AFIO_MAPR_ADC1_ETRGINJ_REMAP         (0x00020000)        /*!< ADC 1 External Trigger Injected Conversion remapping */
#define AFIO_MAPR_ADC1_ETRGREG_REMAP         (0x00040000)        /*!< ADC 1 External Trigger Regular Conversion remapping */
#define AFIO_MAPR_ADC2_ETRGINJ_REMAP         (0x00080000)        /*!< ADC 2 External Trigger Injected Conversion remapping */
#define AFIO_MAPR_ADC2_ETRGREG_REMAP         (0x00100000)        /*!< ADC 2 External Trigger Regular Conversion remapping */

/*!< SWJ_CFG configuration */
#define AFIO_MAPR_SWJ_CFG                    (0x07000000)        /*!< SWJ_CFG[2:0] bits (Serial Wire JTAG configuration) */
#define AFIO_MAPR_SWJ_CFG_0                  (0x01000000)        /*!< Bit 0 */
#define AFIO_MAPR_SWJ_CFG_1                  (0x02000000)        /*!< Bit 1 */
#define AFIO_MAPR_SWJ_CFG_2                  (0x04000000)        /*!< Bit 2 */

#define AFIO_MAPR_SWJ_CFG_RESET              (0x00000000)        /*!< Full SWJ (JTAG-DP + SW-DP) : Reset State */
#define AFIO_MAPR_SWJ_CFG_NOJNTRST           (0x01000000)        /*!< Full SWJ (JTAG-DP + SW-DP) but without JNTRST */
#define AFIO_MAPR_SWJ_CFG_JTAGDISABLE        (0x02000000)        /*!< JTAG-DP Disabled and SW-DP Enabled */
#define AFIO_MAPR_SWJ_CFG_DISABLE            (0x04000000)        /*!< JTAG-DP Disabled and SW-DP Disabled */

#ifdef STM32F10X_CL
/*!< ETH_REMAP configuration */
 #define AFIO_MAPR_ETH_REMAP                  (0x00200000)        /*!< SPI3_REMAP bit (Ethernet MAC I/O remapping) */

/*!< CAN2_REMAP configuration */
 #define AFIO_MAPR_CAN2_REMAP                 (0x00400000)        /*!< CAN2_REMAP bit (CAN2 I/O remapping) */

/*!< MII_RMII_SEL configuration */
 #define AFIO_MAPR_MII_RMII_SEL               (0x00800000)        /*!< MII_RMII_SEL bit (Ethernet MII or RMII selection) */

/*!< SPI3_REMAP configuration */
 #define AFIO_MAPR_SPI3_REMAP                 (0x10000000)        /*!< SPI3_REMAP bit (SPI3 remapping) */

/*!< TIM2ITR1_IREMAP configuration */
 #define AFIO_MAPR_TIM2ITR1_IREMAP            (0x20000000)        /*!< TIM2ITR1_IREMAP bit (TIM2 internal trigger 1 remapping) */

/*!< PTP_PPS_REMAP configuration */
 #define AFIO_MAPR_PTP_PPS_REMAP              (0x40000000)        /*!< PTP_PPS_REMAP bit (Ethernet PTP PPS remapping) */
#endif

/*****************  Bit definition for AFIO_EXTICR1 register  *****************/
#define AFIO_EXTICR1_EXTI0                   (0x000F)            /*!< EXTI 0 configuration */
#define AFIO_EXTICR1_EXTI1                   (0x00F0)            /*!< EXTI 1 configuration */
#define AFIO_EXTICR1_EXTI2                   (0x0F00)            /*!< EXTI 2 configuration */
#define AFIO_EXTICR1_EXTI3                   (0xF000)            /*!< EXTI 3 configuration */

/*!< EXTI0 configuration */
#define AFIO_EXTICR1_EXTI0_PA                (0x0000)            /*!< PA[0] pin */
#define AFIO_EXTICR1_EXTI0_PB                (0x0001)            /*!< PB[0] pin */
#define AFIO_EXTICR1_EXTI0_PC                (0x0002)            /*!< PC[0] pin */
#define AFIO_EXTICR1_EXTI0_PD                (0x0003)            /*!< PD[0] pin */
#define AFIO_EXTICR1_EXTI0_PE                (0x0004)            /*!< PE[0] pin */
#define AFIO_EXTICR1_EXTI0_PF                (0x0005)            /*!< PF[0] pin */
#define AFIO_EXTICR1_EXTI0_PG                (0x0006)            /*!< PG[0] pin */

/*!< EXTI1 configuration */
#define AFIO_EXTICR1_EXTI1_PA                (0x0000)            /*!< PA[1] pin */
#define AFIO_EXTICR1_EXTI1_PB                (0x0010)            /*!< PB[1] pin */
#define AFIO_EXTICR1_EXTI1_PC                (0x0020)            /*!< PC[1] pin */
#define AFIO_EXTICR1_EXTI1_PD                (0x0030)            /*!< PD[1] pin */
#define AFIO_EXTICR1_EXTI1_PE                (0x0040)            /*!< PE[1] pin */
#define AFIO_EXTICR1_EXTI1_PF                (0x0050)            /*!< PF[1] pin */
#define AFIO_EXTICR1_EXTI1_PG                (0x0060)            /*!< PG[1] pin */

/*!< EXTI2 configuration */  
#define AFIO_EXTICR1_EXTI2_PA                (0x0000)            /*!< PA[2] pin */
#define AFIO_EXTICR1_EXTI2_PB                (0x0100)            /*!< PB[2] pin */
#define AFIO_EXTICR1_EXTI2_PC                (0x0200)            /*!< PC[2] pin */
#define AFIO_EXTICR1_EXTI2_PD                (0x0300)            /*!< PD[2] pin */
#define AFIO_EXTICR1_EXTI2_PE                (0x0400)            /*!< PE[2] pin */
#define AFIO_EXTICR1_EXTI2_PF                (0x0500)            /*!< PF[2] pin */
#define AFIO_EXTICR1_EXTI2_PG                (0x0600)            /*!< PG[2] pin */

/*!< EXTI3 configuration */
#define AFIO_EXTICR1_EXTI3_PA                (0x0000)            /*!< PA[3] pin */
#define AFIO_EXTICR1_EXTI3_PB                (0x1000)            /*!< PB[3] pin */
#define AFIO_EXTICR1_EXTI3_PC                (0x2000)            /*!< PC[3] pin */
#define AFIO_EXTICR1_EXTI3_PD                (0x3000)            /*!< PD[3] pin */
#define AFIO_EXTICR1_EXTI3_PE                (0x4000)            /*!< PE[3] pin */
#define AFIO_EXTICR1_EXTI3_PF                (0x5000)            /*!< PF[3] pin */
#define AFIO_EXTICR1_EXTI3_PG                (0x6000)            /*!< PG[3] pin */

/*****************  Bit definition for AFIO_EXTICR2 register  *****************/
#define AFIO_EXTICR2_EXTI4                   (0x000F)            /*!< EXTI 4 configuration */
#define AFIO_EXTICR2_EXTI5                   (0x00F0)            /*!< EXTI 5 configuration */
#define AFIO_EXTICR2_EXTI6                   (0x0F00)            /*!< EXTI 6 configuration */
#define AFIO_EXTICR2_EXTI7                   (0xF000)            /*!< EXTI 7 configuration */

/*!< EXTI4 configuration */
#define AFIO_EXTICR2_EXTI4_PA                (0x0000)            /*!< PA[4] pin */
#define AFIO_EXTICR2_EXTI4_PB                (0x0001)            /*!< PB[4] pin */
#define AFIO_EXTICR2_EXTI4_PC                (0x0002)            /*!< PC[4] pin */
#define AFIO_EXTICR2_EXTI4_PD                (0x0003)            /*!< PD[4] pin */
#define AFIO_EXTICR2_EXTI4_PE                (0x0004)            /*!< PE[4] pin */
#define AFIO_EXTICR2_EXTI4_PF                (0x0005)            /*!< PF[4] pin */
#define AFIO_EXTICR2_EXTI4_PG                (0x0006)            /*!< PG[4] pin */

/* EXTI5 configuration */
#define AFIO_EXTICR2_EXTI5_PA                (0x0000)            /*!< PA[5] pin */
#define AFIO_EXTICR2_EXTI5_PB                (0x0010)            /*!< PB[5] pin */
#define AFIO_EXTICR2_EXTI5_PC                (0x0020)            /*!< PC[5] pin */
#define AFIO_EXTICR2_EXTI5_PD                (0x0030)            /*!< PD[5] pin */
#define AFIO_EXTICR2_EXTI5_PE                (0x0040)            /*!< PE[5] pin */
#define AFIO_EXTICR2_EXTI5_PF                (0x0050)            /*!< PF[5] pin */
#define AFIO_EXTICR2_EXTI5_PG                (0x0060)            /*!< PG[5] pin */

/*!< EXTI6 configuration */  
#define AFIO_EXTICR2_EXTI6_PA                (0x0000)            /*!< PA[6] pin */
#define AFIO_EXTICR2_EXTI6_PB                (0x0100)            /*!< PB[6] pin */
#define AFIO_EXTICR2_EXTI6_PC                (0x0200)            /*!< PC[6] pin */
#define AFIO_EXTICR2_EXTI6_PD                (0x0300)            /*!< PD[6] pin */
#define AFIO_EXTICR2_EXTI6_PE                (0x0400)            /*!< PE[6] pin */
#define AFIO_EXTICR2_EXTI6_PF                (0x0500)            /*!< PF[6] pin */
#define AFIO_EXTICR2_EXTI6_PG                (0x0600)            /*!< PG[6] pin */

/*!< EXTI7 configuration */
#define AFIO_EXTICR2_EXTI7_PA                (0x0000)            /*!< PA[7] pin */
#define AFIO_EXTICR2_EXTI7_PB                (0x1000)            /*!< PB[7] pin */
#define AFIO_EXTICR2_EXTI7_PC                (0x2000)            /*!< PC[7] pin */
#define AFIO_EXTICR2_EXTI7_PD                (0x3000)            /*!< PD[7] pin */
#define AFIO_EXTICR2_EXTI7_PE                (0x4000)            /*!< PE[7] pin */
#define AFIO_EXTICR2_EXTI7_PF                (0x5000)            /*!< PF[7] pin */
#define AFIO_EXTICR2_EXTI7_PG                (0x6000)            /*!< PG[7] pin */

/*****************  Bit definition for AFIO_EXTICR3 register  *****************/
#define AFIO_EXTICR3_EXTI8                   (0x000F)            /*!< EXTI 8 configuration */
#define AFIO_EXTICR3_EXTI9                   (0x00F0)            /*!< EXTI 9 configuration */
#define AFIO_EXTICR3_EXTI10                  (0x0F00)            /*!< EXTI 10 configuration */
#define AFIO_EXTICR3_EXTI11                  (0xF000)            /*!< EXTI 11 configuration */

/*!< EXTI8 configuration */
#define AFIO_EXTICR3_EXTI8_PA                (0x0000)            /*!< PA[8] pin */
#define AFIO_EXTICR3_EXTI8_PB                (0x0001)            /*!< PB[8] pin */
#define AFIO_EXTICR3_EXTI8_PC                (0x0002)            /*!< PC[8] pin */
#define AFIO_EXTICR3_EXTI8_PD                (0x0003)            /*!< PD[8] pin */
#define AFIO_EXTICR3_EXTI8_PE                (0x0004)            /*!< PE[8] pin */
#define AFIO_EXTICR3_EXTI8_PF                (0x0005)            /*!< PF[8] pin */
#define AFIO_EXTICR3_EXTI8_PG                (0x0006)            /*!< PG[8] pin */

/*!< EXTI9 configuration */
#define AFIO_EXTICR3_EXTI9_PA                (0x0000)            /*!< PA[9] pin */
#define AFIO_EXTICR3_EXTI9_PB                (0x0010)            /*!< PB[9] pin */
#define AFIO_EXTICR3_EXTI9_PC                (0x0020)            /*!< PC[9] pin */
#define AFIO_EXTICR3_EXTI9_PD                (0x0030)            /*!< PD[9] pin */
#define AFIO_EXTICR3_EXTI9_PE                (0x0040)            /*!< PE[9] pin */
#define AFIO_EXTICR3_EXTI9_PF                (0x0050)            /*!< PF[9] pin */
#define AFIO_EXTICR3_EXTI9_PG                (0x0060)            /*!< PG[9] pin */

/*!< EXTI10 configuration */  
#define AFIO_EXTICR3_EXTI10_PA               (0x0000)            /*!< PA[10] pin */
#define AFIO_EXTICR3_EXTI10_PB               (0x0100)            /*!< PB[10] pin */
#define AFIO_EXTICR3_EXTI10_PC               (0x0200)            /*!< PC[10] pin */
#define AFIO_EXTICR3_EXTI10_PD               (0x0300)            /*!< PD[10] pin */
#define AFIO_EXTICR3_EXTI10_PE               (0x0400)            /*!< PE[10] pin */
#define AFIO_EXTICR3_EXTI10_PF               (0x0500)            /*!< PF[10] pin */
#define AFIO_EXTICR3_EXTI10_PG               (0x0600)            /*!< PG[10] pin */

/*!< EXTI11 configuration */
#define AFIO_EXTICR3_EXTI11_PA               (0x0000)            /*!< PA[11] pin */
#define AFIO_EXTICR3_EXTI11_PB               (0x1000)            /*!< PB[11] pin */
#define AFIO_EXTICR3_EXTI11_PC               (0x2000)            /*!< PC[11] pin */
#define AFIO_EXTICR3_EXTI11_PD               (0x3000)            /*!< PD[11] pin */
#define AFIO_EXTICR3_EXTI11_PE               (0x4000)            /*!< PE[11] pin */
#define AFIO_EXTICR3_EXTI11_PF               (0x5000)            /*!< PF[11] pin */
#define AFIO_EXTICR3_EXTI11_PG               (0x6000)            /*!< PG[11] pin */

/*****************  Bit definition for AFIO_EXTICR4 register  *****************/
#define AFIO_EXTICR4_EXTI12                  (0x000F)            /*!< EXTI 12 configuration */
#define AFIO_EXTICR4_EXTI13                  (0x00F0)            /*!< EXTI 13 configuration */
#define AFIO_EXTICR4_EXTI14                  (0x0F00)            /*!< EXTI 14 configuration */
#define AFIO_EXTICR4_EXTI15                  (0xF000)            /*!< EXTI 15 configuration */

/* EXTI12 configuration */
#define AFIO_EXTICR4_EXTI12_PA               (0x0000)            /*!< PA[12] pin */
#define AFIO_EXTICR4_EXTI12_PB               (0x0001)            /*!< PB[12] pin */
#define AFIO_EXTICR4_EXTI12_PC               (0x0002)            /*!< PC[12] pin */
#define AFIO_EXTICR4_EXTI12_PD               (0x0003)            /*!< PD[12] pin */
#define AFIO_EXTICR4_EXTI12_PE               (0x0004)            /*!< PE[12] pin */
#define AFIO_EXTICR4_EXTI12_PF               (0x0005)            /*!< PF[12] pin */
#define AFIO_EXTICR4_EXTI12_PG               (0x0006)            /*!< PG[12] pin */

/* EXTI13 configuration */
#define AFIO_EXTICR4_EXTI13_PA               (0x0000)            /*!< PA[13] pin */
#define AFIO_EXTICR4_EXTI13_PB               (0x0010)            /*!< PB[13] pin */
#define AFIO_EXTICR4_EXTI13_PC               (0x0020)            /*!< PC[13] pin */
#define AFIO_EXTICR4_EXTI13_PD               (0x0030)            /*!< PD[13] pin */
#define AFIO_EXTICR4_EXTI13_PE               (0x0040)            /*!< PE[13] pin */
#define AFIO_EXTICR4_EXTI13_PF               (0x0050)            /*!< PF[13] pin */
#define AFIO_EXTICR4_EXTI13_PG               (0x0060)            /*!< PG[13] pin */

/*!< EXTI14 configuration */  
#define AFIO_EXTICR4_EXTI14_PA               (0x0000)            /*!< PA[14] pin */
#define AFIO_EXTICR4_EXTI14_PB               (0x0100)            /*!< PB[14] pin */
#define AFIO_EXTICR4_EXTI14_PC               (0x0200)            /*!< PC[14] pin */
#define AFIO_EXTICR4_EXTI14_PD               (0x0300)            /*!< PD[14] pin */
#define AFIO_EXTICR4_EXTI14_PE               (0x0400)            /*!< PE[14] pin */
#define AFIO_EXTICR4_EXTI14_PF               (0x0500)            /*!< PF[14] pin */
#define AFIO_EXTICR4_EXTI14_PG               (0x0600)            /*!< PG[14] pin */

/*!< EXTI15 configuration */
#define AFIO_EXTICR4_EXTI15_PA               (0x0000)            /*!< PA[15] pin */
#define AFIO_EXTICR4_EXTI15_PB               (0x1000)            /*!< PB[15] pin */
#define AFIO_EXTICR4_EXTI15_PC               (0x2000)            /*!< PC[15] pin */
#define AFIO_EXTICR4_EXTI15_PD               (0x3000)            /*!< PD[15] pin */
#define AFIO_EXTICR4_EXTI15_PE               (0x4000)            /*!< PE[15] pin */
#define AFIO_EXTICR4_EXTI15_PF               (0x5000)            /*!< PF[15] pin */
#define AFIO_EXTICR4_EXTI15_PG               (0x6000)            /*!< PG[15] pin */

#if defined (STM32F10X_LD_VL) || defined (STM32F10X_MD_VL) || defined (STM32F10X_HD_VL)
/******************  Bit definition for AFIO_MAPR2 register  ******************/
#define AFIO_MAPR2_TIM15_REMAP               (0x00000001)        /*!< TIM15 remapping */
#define AFIO_MAPR2_TIM16_REMAP               (0x00000002)        /*!< TIM16 remapping */
#define AFIO_MAPR2_TIM17_REMAP               (0x00000004)        /*!< TIM17 remapping */
#define AFIO_MAPR2_CEC_REMAP                 (0x00000008)        /*!< CEC remapping */
#define AFIO_MAPR2_TIM1_DMA_REMAP            (0x00000010)        /*!< TIM1_DMA remapping */
#endif

#ifdef STM32F10X_HD_VL
#define AFIO_MAPR2_TIM13_REMAP               (0x00000100)        /*!< TIM13 remapping */
#define AFIO_MAPR2_TIM14_REMAP               (0x00000200)        /*!< TIM14 remapping */
#define AFIO_MAPR2_FSMC_NADV_REMAP           (0x00000400)        /*!< FSMC NADV remapping */
#define AFIO_MAPR2_TIM67_DAC_DMA_REMAP       (0x00000800)        /*!< TIM6/TIM7 and DAC DMA remapping */
#define AFIO_MAPR2_TIM12_REMAP               (0x00001000)        /*!< TIM12 remapping */
#define AFIO_MAPR2_MISC_REMAP                (0x00002000)        /*!< Miscellaneous remapping */
#endif

#ifdef STM32F10X_XL 
/******************  Bit definition for AFIO_MAPR2 register  ******************/
#define AFIO_MAPR2_TIM9_REMAP                (0x00000020)        /*!< TIM9 remapping */
#define AFIO_MAPR2_TIM10_REMAP               (0x00000040)        /*!< TIM10 remapping */
#define AFIO_MAPR2_TIM11_REMAP               (0x00000080)        /*!< TIM11 remapping */
#define AFIO_MAPR2_TIM13_REMAP               (0x00000100)        /*!< TIM13 remapping */
#define AFIO_MAPR2_TIM14_REMAP               (0x00000200)        /*!< TIM14 remapping */
#define AFIO_MAPR2_FSMC_NADV_REMAP           (0x00000400)        /*!< FSMC NADV remapping */
#endif

/******************************************************************************/
/*                                                                            */
/*                               SystemTick                                   */
/*                                                                            */
/******************************************************************************/

/*****************  Bit definition for SysTick_CTRL register  *****************/
#define  SysTick_CTRL_ENABLE                 (0x00000001)        /*!< Counter enable */
#define  SysTick_CTRL_TICKINT                (0x00000002)        /*!< Counting down to 0 pends the SysTick handler */
#define  SysTick_CTRL_CLKSOURCE              (0x00000004)        /*!< Clock source */
#define  SysTick_CTRL_COUNTFLAG              (0x00010000)        /*!< Count Flag */

/*****************  Bit definition for SysTick_LOAD register  *****************/
#define  SysTick_LOAD_RELOAD                 (0x00FFFFFF)        /*!< Value to load into the SysTick Current Value Register when the counter reaches 0 */

/*****************  Bit definition for SysTick_VAL register  ******************/
#define  SysTick_VAL_CURRENT                 (0x00FFFFFF)        /*!< Current value at the time the register is accessed */

/*****************  Bit definition for SysTick_CALIB register  ****************/
#define  SysTick_CALIB_TENMS                 (0x00FFFFFF)        /*!< Reload value to use for 10ms timing */
#define  SysTick_CALIB_SKEW                  (0x40000000)        /*!< Calibration value is not exactly 10 ms */
#define  SysTick_CALIB_NOREF                 (0x80000000)        /*!< The reference clock is not provided */

/******************************************************************************/
/*                                                                            */
/*                  Nested Vectored Interrupt Controller                      */
/*                                                                            */
/******************************************************************************/

/******************  Bit definition for NVIC_ISER register  *******************/
#define  NVIC_ISER_SETENA                    (0xFFFFFFFF)        /*!< Interrupt set enable bits */
#define  NVIC_ISER_SETENA_0                  (0x00000001)        /*!< bit 0 */
#define  NVIC_ISER_SETENA_1                  (0x00000002)        /*!< bit 1 */
#define  NVIC_ISER_SETENA_2                  (0x00000004)        /*!< bit 2 */
#define  NVIC_ISER_SETENA_3                  (0x00000008)        /*!< bit 3 */
#define  NVIC_ISER_SETENA_4                  (0x00000010)        /*!< bit 4 */
#define  NVIC_ISER_SETENA_5                  (0x00000020)        /*!< bit 5 */
#define  NVIC_ISER_SETENA_6                  (0x00000040)        /*!< bit 6 */
#define  NVIC_ISER_SETENA_7                  (0x00000080)        /*!< bit 7 */
#define  NVIC_ISER_SETENA_8                  (0x00000100)        /*!< bit 8 */
#define  NVIC_ISER_SETENA_9                  (0x00000200)        /*!< bit 9 */
#define  NVIC_ISER_SETENA_10                 (0x00000400)        /*!< bit 10 */
#define  NVIC_ISER_SETENA_11                 (0x00000800)        /*!< bit 11 */
#define  NVIC_ISER_SETENA_12                 (0x00001000)        /*!< bit 12 */
#define  NVIC_ISER_SETENA_13                 (0x00002000)        /*!< bit 13 */
#define  NVIC_ISER_SETENA_14                 (0x00004000)        /*!< bit 14 */
#define  NVIC_ISER_SETENA_15                 (0x00008000)        /*!< bit 15 */
#define  NVIC_ISER_SETENA_16                 (0x00010000)        /*!< bit 16 */
#define  NVIC_ISER_SETENA_17                 (0x00020000)        /*!< bit 17 */
#define  NVIC_ISER_SETENA_18                 (0x00040000)        /*!< bit 18 */
#define  NVIC_ISER_SETENA_19                 (0x00080000)        /*!< bit 19 */
#define  NVIC_ISER_SETENA_20                 (0x00100000)        /*!< bit 20 */
#define  NVIC_ISER_SETENA_21                 (0x00200000)        /*!< bit 21 */
#define  NVIC_ISER_SETENA_22                 (0x00400000)        /*!< bit 22 */
#define  NVIC_ISER_SETENA_23                 (0x00800000)        /*!< bit 23 */
#define  NVIC_ISER_SETENA_24                 (0x01000000)        /*!< bit 24 */
#define  NVIC_ISER_SETENA_25                 (0x02000000)        /*!< bit 25 */
#define  NVIC_ISER_SETENA_26                 (0x04000000)        /*!< bit 26 */
#define  NVIC_ISER_SETENA_27                 (0x08000000)        /*!< bit 27 */
#define  NVIC_ISER_SETENA_28                 (0x10000000)        /*!< bit 28 */
#define  NVIC_ISER_SETENA_29                 (0x20000000)        /*!< bit 29 */
#define  NVIC_ISER_SETENA_30                 (0x40000000)        /*!< bit 30 */
#define  NVIC_ISER_SETENA_31                 (0x80000000)        /*!< bit 31 */

/******************  Bit definition for NVIC_ICER register  *******************/
#define  NVIC_ICER_CLRENA                   (0xFFFFFFFF)        /*!< Interrupt clear-enable bits */
#define  NVIC_ICER_CLRENA_0                  (0x00000001)        /*!< bit 0 */
#define  NVIC_ICER_CLRENA_1                  (0x00000002)        /*!< bit 1 */
#define  NVIC_ICER_CLRENA_2                  (0x00000004)        /*!< bit 2 */
#define  NVIC_ICER_CLRENA_3                  (0x00000008)        /*!< bit 3 */
#define  NVIC_ICER_CLRENA_4                  (0x00000010)        /*!< bit 4 */
#define  NVIC_ICER_CLRENA_5                  (0x00000020)        /*!< bit 5 */
#define  NVIC_ICER_CLRENA_6                  (0x00000040)        /*!< bit 6 */
#define  NVIC_ICER_CLRENA_7                  (0x00000080)        /*!< bit 7 */
#define  NVIC_ICER_CLRENA_8                  (0x00000100)        /*!< bit 8 */
#define  NVIC_ICER_CLRENA_9                  (0x00000200)        /*!< bit 9 */
#define  NVIC_ICER_CLRENA_10                 (0x00000400)        /*!< bit 10 */
#define  NVIC_ICER_CLRENA_11                 (0x00000800)        /*!< bit 11 */
#define  NVIC_ICER_CLRENA_12                 (0x00001000)        /*!< bit 12 */
#define  NVIC_ICER_CLRENA_13                 (0x00002000)        /*!< bit 13 */
#define  NVIC_ICER_CLRENA_14                 (0x00004000)        /*!< bit 14 */
#define  NVIC_ICER_CLRENA_15                 (0x00008000)        /*!< bit 15 */
#define  NVIC_ICER_CLRENA_16                 (0x00010000)        /*!< bit 16 */
#define  NVIC_ICER_CLRENA_17                 (0x00020000)        /*!< bit 17 */
#define  NVIC_ICER_CLRENA_18                 (0x00040000)        /*!< bit 18 */
#define  NVIC_ICER_CLRENA_19                 (0x00080000)        /*!< bit 19 */
#define  NVIC_ICER_CLRENA_20                 (0x00100000)        /*!< bit 20 */
#define  NVIC_ICER_CLRENA_21                 (0x00200000)        /*!< bit 21 */
#define  NVIC_ICER_CLRENA_22                 (0x00400000)        /*!< bit 22 */
#define  NVIC_ICER_CLRENA_23                 (0x00800000)        /*!< bit 23 */
#define  NVIC_ICER_CLRENA_24                 (0x01000000)        /*!< bit 24 */
#define  NVIC_ICER_CLRENA_25                 (0x02000000)        /*!< bit 25 */
#define  NVIC_ICER_CLRENA_26                 (0x04000000)        /*!< bit 26 */
#define  NVIC_ICER_CLRENA_27                 (0x08000000)        /*!< bit 27 */
#define  NVIC_ICER_CLRENA_28                 (0x10000000)        /*!< bit 28 */
#define  NVIC_ICER_CLRENA_29                 (0x20000000)        /*!< bit 29 */
#define  NVIC_ICER_CLRENA_30                 (0x40000000)        /*!< bit 30 */
#define  NVIC_ICER_CLRENA_31                 (0x80000000)        /*!< bit 31 */

/******************  Bit definition for NVIC_ISPR register  *******************/
#define  NVIC_ISPR_SETPEND                   (0xFFFFFFFF)        /*!< Interrupt set-pending bits */
#define  NVIC_ISPR_SETPEND_0                 (0x00000001)        /*!< bit 0 */
#define  NVIC_ISPR_SETPEND_1                 (0x00000002)        /*!< bit 1 */
#define  NVIC_ISPR_SETPEND_2                 (0x00000004)        /*!< bit 2 */
#define  NVIC_ISPR_SETPEND_3                 (0x00000008)        /*!< bit 3 */
#define  NVIC_ISPR_SETPEND_4                 (0x00000010)        /*!< bit 4 */
#define  NVIC_ISPR_SETPEND_5                 (0x00000020)        /*!< bit 5 */
#define  NVIC_ISPR_SETPEND_6                 (0x00000040)        /*!< bit 6 */
#define  NVIC_ISPR_SETPEND_7                 (0x00000080)        /*!< bit 7 */
#define  NVIC_ISPR_SETPEND_8                 (0x00000100)        /*!< bit 8 */
#define  NVIC_ISPR_SETPEND_9                 (0x00000200)        /*!< bit 9 */
#define  NVIC_ISPR_SETPEND_10                (0x00000400)        /*!< bit 10 */
#define  NVIC_ISPR_SETPEND_11                (0x00000800)        /*!< bit 11 */
#define  NVIC_ISPR_SETPEND_12                (0x00001000)        /*!< bit 12 */
#define  NVIC_ISPR_SETPEND_13                (0x00002000)        /*!< bit 13 */
#define  NVIC_ISPR_SETPEND_14                (0x00004000)        /*!< bit 14 */
#define  NVIC_ISPR_SETPEND_15                (0x00008000)        /*!< bit 15 */
#define  NVIC_ISPR_SETPEND_16                (0x00010000)        /*!< bit 16 */
#define  NVIC_ISPR_SETPEND_17                (0x00020000)        /*!< bit 17 */
#define  NVIC_ISPR_SETPEND_18                (0x00040000)        /*!< bit 18 */
#define  NVIC_ISPR_SETPEND_19                (0x00080000)        /*!< bit 19 */
#define  NVIC_ISPR_SETPEND_20                (0x00100000)        /*!< bit 20 */
#define  NVIC_ISPR_SETPEND_21                (0x00200000)        /*!< bit 21 */
#define  NVIC_ISPR_SETPEND_22                (0x00400000)        /*!< bit 22 */
#define  NVIC_ISPR_SETPEND_23                (0x00800000)        /*!< bit 23 */
#define  NVIC_ISPR_SETPEND_24                (0x01000000)        /*!< bit 24 */
#define  NVIC_ISPR_SETPEND_25                (0x02000000)        /*!< bit 25 */
#define  NVIC_ISPR_SETPEND_26                (0x04000000)        /*!< bit 26 */
#define  NVIC_ISPR_SETPEND_27                (0x08000000)        /*!< bit 27 */
#define  NVIC_ISPR_SETPEND_28                (0x10000000)        /*!< bit 28 */
#define  NVIC_ISPR_SETPEND_29                (0x20000000)        /*!< bit 29 */
#define  NVIC_ISPR_SETPEND_30                (0x40000000)        /*!< bit 30 */
#define  NVIC_ISPR_SETPEND_31                (0x80000000)        /*!< bit 31 */

/******************  Bit definition for NVIC_ICPR register  *******************/
#define  NVIC_ICPR_CLRPEND                   (0xFFFFFFFF)        /*!< Interrupt clear-pending bits */
#define  NVIC_ICPR_CLRPEND_0                 (0x00000001)        /*!< bit 0 */
#define  NVIC_ICPR_CLRPEND_1                 (0x00000002)        /*!< bit 1 */
#define  NVIC_ICPR_CLRPEND_2                 (0x00000004)        /*!< bit 2 */
#define  NVIC_ICPR_CLRPEND_3                 (0x00000008)        /*!< bit 3 */
#define  NVIC_ICPR_CLRPEND_4                 (0x00000010)        /*!< bit 4 */
#define  NVIC_ICPR_CLRPEND_5                 (0x00000020)        /*!< bit 5 */
#define  NVIC_ICPR_CLRPEND_6                 (0x00000040)        /*!< bit 6 */
#define  NVIC_ICPR_CLRPEND_7                 (0x00000080)        /*!< bit 7 */
#define  NVIC_ICPR_CLRPEND_8                 (0x00000100)        /*!< bit 8 */
#define  NVIC_ICPR_CLRPEND_9                 (0x00000200)        /*!< bit 9 */
#define  NVIC_ICPR_CLRPEND_10                (0x00000400)        /*!< bit 10 */
#define  NVIC_ICPR_CLRPEND_11                (0x00000800)        /*!< bit 11 */
#define  NVIC_ICPR_CLRPEND_12                (0x00001000)        /*!< bit 12 */
#define  NVIC_ICPR_CLRPEND_13                (0x00002000)        /*!< bit 13 */
#define  NVIC_ICPR_CLRPEND_14                (0x00004000)        /*!< bit 14 */
#define  NVIC_ICPR_CLRPEND_15                (0x00008000)        /*!< bit 15 */
#define  NVIC_ICPR_CLRPEND_16                (0x00010000)        /*!< bit 16 */
#define  NVIC_ICPR_CLRPEND_17                (0x00020000)        /*!< bit 17 */
#define  NVIC_ICPR_CLRPEND_18                (0x00040000)        /*!< bit 18 */
#define  NVIC_ICPR_CLRPEND_19                (0x00080000)        /*!< bit 19 */
#define  NVIC_ICPR_CLRPEND_20                (0x00100000)        /*!< bit 20 */
#define  NVIC_ICPR_CLRPEND_21                (0x00200000)        /*!< bit 21 */
#define  NVIC_ICPR_CLRPEND_22                (0x00400000)        /*!< bit 22 */
#define  NVIC_ICPR_CLRPEND_23                (0x00800000)        /*!< bit 23 */
#define  NVIC_ICPR_CLRPEND_24                (0x01000000)        /*!< bit 24 */
#define  NVIC_ICPR_CLRPEND_25                (0x02000000)        /*!< bit 25 */
#define  NVIC_ICPR_CLRPEND_26                (0x04000000)        /*!< bit 26 */
#define  NVIC_ICPR_CLRPEND_27                (0x08000000)        /*!< bit 27 */
#define  NVIC_ICPR_CLRPEND_28                (0x10000000)        /*!< bit 28 */
#define  NVIC_ICPR_CLRPEND_29                (0x20000000)        /*!< bit 29 */
#define  NVIC_ICPR_CLRPEND_30                (0x40000000)        /*!< bit 30 */
#define  NVIC_ICPR_CLRPEND_31                (0x80000000)        /*!< bit 31 */

/******************  Bit definition for NVIC_IABR register  *******************/
#define  NVIC_IABR_ACTIVE                    (0xFFFFFFFF)        /*!< Interrupt active flags */
#define  NVIC_IABR_ACTIVE_0                  (0x00000001)        /*!< bit 0 */
#define  NVIC_IABR_ACTIVE_1                  (0x00000002)        /*!< bit 1 */
#define  NVIC_IABR_ACTIVE_2                  (0x00000004)        /*!< bit 2 */
#define  NVIC_IABR_ACTIVE_3                  (0x00000008)        /*!< bit 3 */
#define  NVIC_IABR_ACTIVE_4                  (0x00000010)        /*!< bit 4 */
#define  NVIC_IABR_ACTIVE_5                  (0x00000020)        /*!< bit 5 */
#define  NVIC_IABR_ACTIVE_6                  (0x00000040)        /*!< bit 6 */
#define  NVIC_IABR_ACTIVE_7                  (0x00000080)        /*!< bit 7 */
#define  NVIC_IABR_ACTIVE_8                  (0x00000100)        /*!< bit 8 */
#define  NVIC_IABR_ACTIVE_9                  (0x00000200)        /*!< bit 9 */
#define  NVIC_IABR_ACTIVE_10                 (0x00000400)        /*!< bit 10 */
#define  NVIC_IABR_ACTIVE_11                 (0x00000800)        /*!< bit 11 */
#define  NVIC_IABR_ACTIVE_12                 (0x00001000)        /*!< bit 12 */
#define  NVIC_IABR_ACTIVE_13                 (0x00002000)        /*!< bit 13 */
#define  NVIC_IABR_ACTIVE_14                 (0x00004000)        /*!< bit 14 */
#define  NVIC_IABR_ACTIVE_15                 (0x00008000)        /*!< bit 15 */
#define  NVIC_IABR_ACTIVE_16                 (0x00010000)        /*!< bit 16 */
#define  NVIC_IABR_ACTIVE_17                 (0x00020000)        /*!< bit 17 */
#define  NVIC_IABR_ACTIVE_18                 (0x00040000)        /*!< bit 18 */
#define  NVIC_IABR_ACTIVE_19                 (0x00080000)        /*!< bit 19 */
#define  NVIC_IABR_ACTIVE_20                 (0x00100000)        /*!< bit 20 */
#define  NVIC_IABR_ACTIVE_21                 (0x00200000)        /*!< bit 21 */
#define  NVIC_IABR_ACTIVE_22                 (0x00400000)        /*!< bit 22 */
#define  NVIC_IABR_ACTIVE_23                 (0x00800000)        /*!< bit 23 */
#define  NVIC_IABR_ACTIVE_24                 (0x01000000)        /*!< bit 24 */
#define  NVIC_IABR_ACTIVE_25                 (0x02000000)        /*!< bit 25 */
#define  NVIC_IABR_ACTIVE_26                 (0x04000000)        /*!< bit 26 */
#define  NVIC_IABR_ACTIVE_27                 (0x08000000)        /*!< bit 27 */
#define  NVIC_IABR_ACTIVE_28                 (0x10000000)        /*!< bit 28 */
#define  NVIC_IABR_ACTIVE_29                 (0x20000000)        /*!< bit 29 */
#define  NVIC_IABR_ACTIVE_30                 (0x40000000)        /*!< bit 30 */
#define  NVIC_IABR_ACTIVE_31                 (0x80000000)        /*!< bit 31 */

/******************  Bit definition for NVIC_PRI0 register  *******************/
#define  NVIC_IPR0_PRI_0                     (0x000000FF)        /*!< Priority of interrupt 0 */
#define  NVIC_IPR0_PRI_1                     (0x0000FF00)        /*!< Priority of interrupt 1 */
#define  NVIC_IPR0_PRI_2                     (0x00FF0000)        /*!< Priority of interrupt 2 */
#define  NVIC_IPR0_PRI_3                     (0xFF000000)        /*!< Priority of interrupt 3 */

/******************  Bit definition for NVIC_PRI1 register  *******************/
#define  NVIC_IPR1_PRI_4                     (0x000000FF)        /*!< Priority of interrupt 4 */
#define  NVIC_IPR1_PRI_5                     (0x0000FF00)        /*!< Priority of interrupt 5 */
#define  NVIC_IPR1_PRI_6                     (0x00FF0000)        /*!< Priority of interrupt 6 */
#define  NVIC_IPR1_PRI_7                     (0xFF000000)        /*!< Priority of interrupt 7 */

/******************  Bit definition for NVIC_PRI2 register  *******************/
#define  NVIC_IPR2_PRI_8                     (0x000000FF)        /*!< Priority of interrupt 8 */
#define  NVIC_IPR2_PRI_9                     (0x0000FF00)        /*!< Priority of interrupt 9 */
#define  NVIC_IPR2_PRI_10                    (0x00FF0000)        /*!< Priority of interrupt 10 */
#define  NVIC_IPR2_PRI_11                    (0xFF000000)        /*!< Priority of interrupt 11 */

/******************  Bit definition for NVIC_PRI3 register  *******************/
#define  NVIC_IPR3_PRI_12                    (0x000000FF)        /*!< Priority of interrupt 12 */
#define  NVIC_IPR3_PRI_13                    (0x0000FF00)        /*!< Priority of interrupt 13 */
#define  NVIC_IPR3_PRI_14                    (0x00FF0000)        /*!< Priority of interrupt 14 */
#define  NVIC_IPR3_PRI_15                    (0xFF000000)        /*!< Priority of interrupt 15 */

/******************  Bit definition for NVIC_PRI4 register  *******************/
#define  NVIC_IPR4_PRI_16                    (0x000000FF)        /*!< Priority of interrupt 16 */
#define  NVIC_IPR4_PRI_17                    (0x0000FF00)        /*!< Priority of interrupt 17 */
#define  NVIC_IPR4_PRI_18                    (0x00FF0000)        /*!< Priority of interrupt 18 */
#define  NVIC_IPR4_PRI_19                    (0xFF000000)        /*!< Priority of interrupt 19 */

/******************  Bit definition for NVIC_PRI5 register  *******************/
#define  NVIC_IPR5_PRI_20                    (0x000000FF)        /*!< Priority of interrupt 20 */
#define  NVIC_IPR5_PRI_21                    (0x0000FF00)        /*!< Priority of interrupt 21 */
#define  NVIC_IPR5_PRI_22                    (0x00FF0000)        /*!< Priority of interrupt 22 */
#define  NVIC_IPR5_PRI_23                    (0xFF000000)        /*!< Priority of interrupt 23 */

/******************  Bit definition for NVIC_PRI6 register  *******************/
#define  NVIC_IPR6_PRI_24                    (0x000000FF)        /*!< Priority of interrupt 24 */
#define  NVIC_IPR6_PRI_25                    (0x0000FF00)        /*!< Priority of interrupt 25 */
#define  NVIC_IPR6_PRI_26                    (0x00FF0000)        /*!< Priority of interrupt 26 */
#define  NVIC_IPR6_PRI_27                    (0xFF000000)        /*!< Priority of interrupt 27 */

/******************  Bit definition for NVIC_PRI7 register  *******************/
#define  NVIC_IPR7_PRI_28                    (0x000000FF)        /*!< Priority of interrupt 28 */
#define  NVIC_IPR7_PRI_29                    (0x0000FF00)        /*!< Priority of interrupt 29 */
#define  NVIC_IPR7_PRI_30                    (0x00FF0000)        /*!< Priority of interrupt 30 */
#define  NVIC_IPR7_PRI_31                    (0xFF000000)        /*!< Priority of interrupt 31 */

/******************  Bit definition for SCB_CPUID register  *******************/
#define  SCB_CPUID_REVISION                  (0x0000000F)        /*!< Implementation defined revision number */
#define  SCB_CPUID_PARTNO                    (0x0000FFF0)        /*!< Number of processor within family */
#define  SCB_CPUID_Constant                  (0x000F0000)        /*!< Reads as 0x0F */
#define  SCB_CPUID_VARIANT                   (0x00F00000)        /*!< Implementation defined variant number */
#define  SCB_CPUID_IMPLEMENTER               (0xFF000000)        /*!< Implementer code. ARM is 0x41 */

/*******************  Bit definition for SCB_ICSR register  *******************/
#define  SCB_ICSR_VECTACTIVE                 (0x000001FF)        /*!< Active ISR number field */
#define  SCB_ICSR_RETTOBASE                  (0x00000800)        /*!< All active exceptions minus the IPSR_current_exception yields the empty set */
#define  SCB_ICSR_VECTPENDING                (0x003FF000)        /*!< Pending ISR number field */
#define  SCB_ICSR_ISRPENDING                 (0x00400000)        /*!< Interrupt pending flag */
#define  SCB_ICSR_ISRPREEMPT                 (0x00800000)        /*!< It indicates that a pending interrupt becomes active in the next running cycle */
#define  SCB_ICSR_PENDSTCLR                  (0x02000000)        /*!< Clear pending SysTick bit */
#define  SCB_ICSR_PENDSTSET                  (0x04000000)        /*!< Set pending SysTick bit */
#define  SCB_ICSR_PENDSVCLR                  (0x08000000)        /*!< Clear pending pendSV bit */
#define  SCB_ICSR_PENDSVSET                  (0x10000000)        /*!< Set pending pendSV bit */
#define  SCB_ICSR_NMIPENDSET                 (0x80000000)        /*!< Set pending NMI bit */

/*******************  Bit definition for SCB_VTOR register  *******************/
#define  SCB_VTOR_TBLOFF                     (0x1FFFFF80)        /*!< Vector table base offset field */
#define  SCB_VTOR_TBLBASE                    (0x20000000)        /*!< Table base in code(0) or RAM(1) */

/*!<*****************  Bit definition for SCB_AIRCR register  *******************/
#define  SCB_AIRCR_VECTRESET                 (0x00000001)        /*!< System Reset bit */
#define  SCB_AIRCR_VECTCLRACTIVE             (0x00000002)        /*!< Clear active vector bit */
#define  SCB_AIRCR_SYSRESETREQ               (0x00000004)        /*!< Requests chip control logic to generate a reset */

#define  SCB_AIRCR_PRIGROUP                  (0x00000700)        /*!< PRIGROUP[2:0] bits (Priority group) */
#define  SCB_AIRCR_PRIGROUP_0                (0x00000100)        /*!< Bit 0 */
#define  SCB_AIRCR_PRIGROUP_1                (0x00000200)        /*!< Bit 1 */
#define  SCB_AIRCR_PRIGROUP_2                (0x00000400)        /*!< Bit 2  */

/* prority group configuration */
#define  SCB_AIRCR_PRIGROUP0                 (0x00000000)        /*!< Priority group=0 (7 bits of pre-emption priority, 1 bit of subpriority) */
#define  SCB_AIRCR_PRIGROUP1                 (0x00000100)        /*!< Priority group=1 (6 bits of pre-emption priority, 2 bits of subpriority) */
#define  SCB_AIRCR_PRIGROUP2                 (0x00000200)        /*!< Priority group=2 (5 bits of pre-emption priority, 3 bits of subpriority) */
#define  SCB_AIRCR_PRIGROUP3                 (0x00000300)        /*!< Priority group=3 (4 bits of pre-emption priority, 4 bits of subpriority) */
#define  SCB_AIRCR_PRIGROUP4                 (0x00000400)        /*!< Priority group=4 (3 bits of pre-emption priority, 5 bits of subpriority) */
#define  SCB_AIRCR_PRIGROUP5                 (0x00000500)        /*!< Priority group=5 (2 bits of pre-emption priority, 6 bits of subpriority) */
#define  SCB_AIRCR_PRIGROUP6                 (0x00000600)        /*!< Priority group=6 (1 bit of pre-emption priority, 7 bits of subpriority) */
#define  SCB_AIRCR_PRIGROUP7                 (0x00000700)        /*!< Priority group=7 (no pre-emption priority, 8 bits of subpriority) */

#define  SCB_AIRCR_ENDIANESS                 (0x00008000)        /*!< Data endianness bit */
#define  SCB_AIRCR_VECTKEY                   (0xFFFF0000)        /*!< Register key (VECTKEY) - Reads as 0xFA05 (VECTKEYSTAT) */

/*******************  Bit definition for SCB_SCR register  ********************/
#define  SCB_SCR_SLEEPONEXIT                 ((uint8_t)0x02)               /*!< Sleep on exit bit */
#define  SCB_SCR_SLEEPDEEP                   ((uint8_t)0x04)               /*!< Sleep deep bit */
#define  SCB_SCR_SEVONPEND                   ((uint8_t)0x10)               /*!< Wake up from WFE */

/********************  Bit definition for SCB_CCR register  *******************/
#define  SCB_CCR_NONBASETHRDENA              (0x0001)            /*!< Thread mode can be entered from any level in Handler mode by controlled return value */
#define  SCB_CCR_USERSETMPEND                (0x0002)            /*!< Enables user code to write the Software Trigger Interrupt register to trigger (pend) a Main exception */
#define  SCB_CCR_UNALIGN_TRP                 (0x0008)            /*!< Trap for unaligned access */
#define  SCB_CCR_DIV_0_TRP                   (0x0010)            /*!< Trap on Divide by 0 */
#define  SCB_CCR_BFHFNMIGN                   (0x0100)            /*!< Handlers running at priority -1 and -2 */
#define  SCB_CCR_STKALIGN                    (0x0200)            /*!< On exception entry, the SP used prior to the exception is adjusted to be 8-byte aligned */

/*******************  Bit definition for SCB_SHPR register ********************/
#define  SCB_SHPR_PRI_N                      (0x000000FF)        /*!< Priority of system handler 4,8, and 12. Mem Manage, reserved and Debug Monitor */
#define  SCB_SHPR_PRI_N1                     (0x0000FF00)        /*!< Priority of system handler 5,9, and 13. Bus Fault, reserved and reserved */
#define  SCB_SHPR_PRI_N2                     (0x00FF0000)        /*!< Priority of system handler 6,10, and 14. Usage Fault, reserved and PendSV */
#define  SCB_SHPR_PRI_N3                     (0xFF000000)        /*!< Priority of system handler 7,11, and 15. Reserved, SVCall and SysTick */

/******************  Bit definition for SCB_SHCSR register  *******************/
#define  SCB_SHCSR_MEMFAULTACT               (0x00000001)        /*!< MemManage is active */
#define  SCB_SHCSR_BUSFAULTACT               (0x00000002)        /*!< BusFault is active */
#define  SCB_SHCSR_USGFAULTACT               (0x00000008)        /*!< UsageFault is active */
#define  SCB_SHCSR_SVCALLACT                 (0x00000080)        /*!< SVCall is active */
#define  SCB_SHCSR_MONITORACT                (0x00000100)        /*!< Monitor is active */
#define  SCB_SHCSR_PENDSVACT                 (0x00000400)        /*!< PendSV is active */
#define  SCB_SHCSR_SYSTICKACT                (0x00000800)        /*!< SysTick is active */
#define  SCB_SHCSR_USGFAULTPENDED            (0x00001000)        /*!< Usage Fault is pended */
#define  SCB_SHCSR_MEMFAULTPENDED            (0x00002000)        /*!< MemManage is pended */
#define  SCB_SHCSR_BUSFAULTPENDED            (0x00004000)        /*!< Bus Fault is pended */
#define  SCB_SHCSR_SVCALLPENDED              (0x00008000)        /*!< SVCall is pended */
#define  SCB_SHCSR_MEMFAULTENA               (0x00010000)        /*!< MemManage enable */
#define  SCB_SHCSR_BUSFAULTENA               (0x00020000)        /*!< Bus Fault enable */
#define  SCB_SHCSR_USGFAULTENA               (0x00040000)        /*!< UsageFault enable */

/*******************  Bit definition for SCB_CFSR register  *******************/
/*!< MFSR */
#define  SCB_CFSR_IACCVIOL                   (0x00000001)        /*!< Instruction access violation */
#define  SCB_CFSR_DACCVIOL                   (0x00000002)        /*!< Data access violation */
#define  SCB_CFSR_MUNSTKERR                  (0x00000008)        /*!< Unstacking error */
#define  SCB_CFSR_MSTKERR                    (0x00000010)        /*!< Stacking error */
#define  SCB_CFSR_MMARVALID                  (0x00000080)        /*!< Memory Manage Address Register address valid flag */
/*!< BFSR */
#define  SCB_CFSR_IBUSERR                    (0x00000100)        /*!< Instruction bus error flag */
#define  SCB_CFSR_PRECISERR                  (0x00000200)        /*!< Precise data bus error */
#define  SCB_CFSR_IMPRECISERR                (0x00000400)        /*!< Imprecise data bus error */
#define  SCB_CFSR_UNSTKERR                   (0x00000800)        /*!< Unstacking error */
#define  SCB_CFSR_STKERR                     (0x00001000)        /*!< Stacking error */
#define  SCB_CFSR_BFARVALID                  (0x00008000)        /*!< Bus Fault Address Register address valid flag */
/*!< UFSR */
#define  SCB_CFSR_UNDEFINSTR                 (0x00010000)        /*!< The processor attempt to execute an undefined instruction */
#define  SCB_CFSR_INVSTATE                   (0x00020000)        /*!< Invalid combination of EPSR and instruction */
#define  SCB_CFSR_INVPC                      (0x00040000)        /*!< Attempt to load EXC_RETURN into pc illegally */
#define  SCB_CFSR_NOCP                       (0x00080000)        /*!< Attempt to use a coprocessor instruction */
#define  SCB_CFSR_UNALIGNED                  (0x01000000)        /*!< Fault occurs when there is an attempt to make an unaligned memory access */
#define  SCB_CFSR_DIVBYZERO                  (0x02000000)        /*!< Fault occurs when SDIV or DIV instruction is used with a divisor of 0 */

/*******************  Bit definition for SCB_HFSR register  *******************/
#define  SCB_HFSR_VECTTBL                    (0x00000002)        /*!< Fault occurs because of vector table read on exception processing */
#define  SCB_HFSR_FORCED                     (0x40000000)        /*!< Hard Fault activated when a configurable Fault was received and cannot activate */
#define  SCB_HFSR_DEBUGEVT                   (0x80000000)        /*!< Fault related to debug */

/*******************  Bit definition for SCB_DFSR register  *******************/
#define  SCB_DFSR_HALTED                     ((uint8_t)0x01)               /*!< Halt request flag */
#define  SCB_DFSR_BKPT                       ((uint8_t)0x02)               /*!< BKPT flag */
#define  SCB_DFSR_DWTTRAP                    ((uint8_t)0x04)               /*!< Data Watchpoint and Trace (DWT) flag */
#define  SCB_DFSR_VCATCH                     ((uint8_t)0x08)               /*!< Vector catch flag */
#define  SCB_DFSR_EXTERNAL                   ((uint8_t)0x10)               /*!< External debug request flag */

/*******************  Bit definition for SCB_MMFAR register  ******************/
#define  SCB_MMFAR_ADDRESS                   (0xFFFFFFFF)        /*!< Mem Manage fault address field */

/*******************  Bit definition for SCB_BFAR register  *******************/
#define  SCB_BFAR_ADDRESS                    (0xFFFFFFFF)        /*!< Bus fault address field */

/*******************  Bit definition for SCB_afsr register  *******************/
#define  SCB_AFSR_IMPDEF                     (0xFFFFFFFF)        /*!< Implementation defined */

/******************************************************************************/
/*                                                                            */
/*                    External Interrupt/Event Controller                     */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for EXTI_IMR register  *******************/
#define  EXTI_IMR_MR0                        (0x00000001)        /*!< Interrupt Mask on line 0 */
#define  EXTI_IMR_MR1                        (0x00000002)        /*!< Interrupt Mask on line 1 */
#define  EXTI_IMR_MR2                        (0x00000004)        /*!< Interrupt Mask on line 2 */
#define  EXTI_IMR_MR3                        (0x00000008)        /*!< Interrupt Mask on line 3 */
#define  EXTI_IMR_MR4                        (0x00000010)        /*!< Interrupt Mask on line 4 */
#define  EXTI_IMR_MR5                        (0x00000020)        /*!< Interrupt Mask on line 5 */
#define  EXTI_IMR_MR6                        (0x00000040)        /*!< Interrupt Mask on line 6 */
#define  EXTI_IMR_MR7                        (0x00000080)        /*!< Interrupt Mask on line 7 */
#define  EXTI_IMR_MR8                        (0x00000100)        /*!< Interrupt Mask on line 8 */
#define  EXTI_IMR_MR9                        (0x00000200)        /*!< Interrupt Mask on line 9 */
#define  EXTI_IMR_MR10                       (0x00000400)        /*!< Interrupt Mask on line 10 */
#define  EXTI_IMR_MR11                       (0x00000800)        /*!< Interrupt Mask on line 11 */
#define  EXTI_IMR_MR12                       (0x00001000)        /*!< Interrupt Mask on line 12 */
#define  EXTI_IMR_MR13                       (0x00002000)        /*!< Interrupt Mask on line 13 */
#define  EXTI_IMR_MR14                       (0x00004000)        /*!< Interrupt Mask on line 14 */
#define  EXTI_IMR_MR15                       (0x00008000)        /*!< Interrupt Mask on line 15 */
#define  EXTI_IMR_MR16                       (0x00010000)        /*!< Interrupt Mask on line 16 */
#define  EXTI_IMR_MR17                       (0x00020000)        /*!< Interrupt Mask on line 17 */
#define  EXTI_IMR_MR18                       (0x00040000)        /*!< Interrupt Mask on line 18 */
#define  EXTI_IMR_MR19                       (0x00080000)        /*!< Interrupt Mask on line 19 */

/*******************  Bit definition for EXTI_EMR register  *******************/
#define  EXTI_EMR_MR0                        (0x00000001)        /*!< Event Mask on line 0 */
#define  EXTI_EMR_MR1                        (0x00000002)        /*!< Event Mask on line 1 */
#define  EXTI_EMR_MR2                        (0x00000004)        /*!< Event Mask on line 2 */
#define  EXTI_EMR_MR3                        (0x00000008)        /*!< Event Mask on line 3 */
#define  EXTI_EMR_MR4                        (0x00000010)        /*!< Event Mask on line 4 */
#define  EXTI_EMR_MR5                        (0x00000020)        /*!< Event Mask on line 5 */
#define  EXTI_EMR_MR6                        (0x00000040)        /*!< Event Mask on line 6 */
#define  EXTI_EMR_MR7                        (0x00000080)        /*!< Event Mask on line 7 */
#define  EXTI_EMR_MR8                        (0x00000100)        /*!< Event Mask on line 8 */
#define  EXTI_EMR_MR9                        (0x00000200)        /*!< Event Mask on line 9 */
#define  EXTI_EMR_MR10                       (0x00000400)        /*!< Event Mask on line 10 */
#define  EXTI_EMR_MR11                       (0x00000800)        /*!< Event Mask on line 11 */
#define  EXTI_EMR_MR12                       (0x00001000)        /*!< Event Mask on line 12 */
#define  EXTI_EMR_MR13                       (0x00002000)        /*!< Event Mask on line 13 */
#define  EXTI_EMR_MR14                       (0x00004000)        /*!< Event Mask on line 14 */
#define  EXTI_EMR_MR15                       (0x00008000)        /*!< Event Mask on line 15 */
#define  EXTI_EMR_MR16                       (0x00010000)        /*!< Event Mask on line 16 */
#define  EXTI_EMR_MR17                       (0x00020000)        /*!< Event Mask on line 17 */
#define  EXTI_EMR_MR18                       (0x00040000)        /*!< Event Mask on line 18 */
#define  EXTI_EMR_MR19                       (0x00080000)        /*!< Event Mask on line 19 */

/******************  Bit definition for EXTI_RTSR register  *******************/
#define  EXTI_RTSR_TR0                       (0x00000001)        /*!< Rising trigger event configuration bit of line 0 */
#define  EXTI_RTSR_TR1                       (0x00000002)        /*!< Rising trigger event configuration bit of line 1 */
#define  EXTI_RTSR_TR2                       (0x00000004)        /*!< Rising trigger event configuration bit of line 2 */
#define  EXTI_RTSR_TR3                       (0x00000008)        /*!< Rising trigger event configuration bit of line 3 */
#define  EXTI_RTSR_TR4                       (0x00000010)        /*!< Rising trigger event configuration bit of line 4 */
#define  EXTI_RTSR_TR5                       (0x00000020)        /*!< Rising trigger event configuration bit of line 5 */
#define  EXTI_RTSR_TR6                       (0x00000040)        /*!< Rising trigger event configuration bit of line 6 */
#define  EXTI_RTSR_TR7                       (0x00000080)        /*!< Rising trigger event configuration bit of line 7 */
#define  EXTI_RTSR_TR8                       (0x00000100)        /*!< Rising trigger event configuration bit of line 8 */
#define  EXTI_RTSR_TR9                       (0x00000200)        /*!< Rising trigger event configuration bit of line 9 */
#define  EXTI_RTSR_TR10                      (0x00000400)        /*!< Rising trigger event configuration bit of line 10 */
#define  EXTI_RTSR_TR11                      (0x00000800)        /*!< Rising trigger event configuration bit of line 11 */
#define  EXTI_RTSR_TR12                      (0x00001000)        /*!< Rising trigger event configuration bit of line 12 */
#define  EXTI_RTSR_TR13                      (0x00002000)        /*!< Rising trigger event configuration bit of line 13 */
#define  EXTI_RTSR_TR14                      (0x00004000)        /*!< Rising trigger event configuration bit of line 14 */
#define  EXTI_RTSR_TR15                      (0x00008000)        /*!< Rising trigger event configuration bit of line 15 */
#define  EXTI_RTSR_TR16                      (0x00010000)        /*!< Rising trigger event configuration bit of line 16 */
#define  EXTI_RTSR_TR17                      (0x00020000)        /*!< Rising trigger event configuration bit of line 17 */
#define  EXTI_RTSR_TR18                      (0x00040000)        /*!< Rising trigger event configuration bit of line 18 */
#define  EXTI_RTSR_TR19                      (0x00080000)        /*!< Rising trigger event configuration bit of line 19 */

/******************  Bit definition for EXTI_FTSR register  *******************/
#define  EXTI_FTSR_TR0                       (0x00000001)        /*!< Falling trigger event configuration bit of line 0 */
#define  EXTI_FTSR_TR1                       (0x00000002)        /*!< Falling trigger event configuration bit of line 1 */
#define  EXTI_FTSR_TR2                       (0x00000004)        /*!< Falling trigger event configuration bit of line 2 */
#define  EXTI_FTSR_TR3                       (0x00000008)        /*!< Falling trigger event configuration bit of line 3 */
#define  EXTI_FTSR_TR4                       (0x00000010)        /*!< Falling trigger event configuration bit of line 4 */
#define  EXTI_FTSR_TR5                       (0x00000020)        /*!< Falling trigger event configuration bit of line 5 */
#define  EXTI_FTSR_TR6                       (0x00000040)        /*!< Falling trigger event configuration bit of line 6 */
#define  EXTI_FTSR_TR7                       (0x00000080)        /*!< Falling trigger event configuration bit of line 7 */
#define  EXTI_FTSR_TR8                       (0x00000100)        /*!< Falling trigger event configuration bit of line 8 */
#define  EXTI_FTSR_TR9                       (0x00000200)        /*!< Falling trigger event configuration bit of line 9 */
#define  EXTI_FTSR_TR10                      (0x00000400)        /*!< Falling trigger event configuration bit of line 10 */
#define  EXTI_FTSR_TR11                      (0x00000800)        /*!< Falling trigger event configuration bit of line 11 */
#define  EXTI_FTSR_TR12                      (0x00001000)        /*!< Falling trigger event configuration bit of line 12 */
#define  EXTI_FTSR_TR13                      (0x00002000)        /*!< Falling trigger event configuration bit of line 13 */
#define  EXTI_FTSR_TR14                      (0x00004000)        /*!< Falling trigger event configuration bit of line 14 */
#define  EXTI_FTSR_TR15                      (0x00008000)        /*!< Falling trigger event configuration bit of line 15 */
#define  EXTI_FTSR_TR16                      (0x00010000)        /*!< Falling trigger event configuration bit of line 16 */
#define  EXTI_FTSR_TR17                      (0x00020000)        /*!< Falling trigger event configuration bit of line 17 */
#define  EXTI_FTSR_TR18                      (0x00040000)        /*!< Falling trigger event configuration bit of line 18 */
#define  EXTI_FTSR_TR19                      (0x00080000)        /*!< Falling trigger event configuration bit of line 19 */

/******************  Bit definition for EXTI_SWIER register  ******************/
#define  EXTI_SWIER_SWIER0                   (0x00000001)        /*!< Software Interrupt on line 0 */
#define  EXTI_SWIER_SWIER1                   (0x00000002)        /*!< Software Interrupt on line 1 */
#define  EXTI_SWIER_SWIER2                   (0x00000004)        /*!< Software Interrupt on line 2 */
#define  EXTI_SWIER_SWIER3                   (0x00000008)        /*!< Software Interrupt on line 3 */
#define  EXTI_SWIER_SWIER4                   (0x00000010)        /*!< Software Interrupt on line 4 */
#define  EXTI_SWIER_SWIER5                   (0x00000020)        /*!< Software Interrupt on line 5 */
#define  EXTI_SWIER_SWIER6                   (0x00000040)        /*!< Software Interrupt on line 6 */
#define  EXTI_SWIER_SWIER7                   (0x00000080)        /*!< Software Interrupt on line 7 */
#define  EXTI_SWIER_SWIER8                   (0x00000100)        /*!< Software Interrupt on line 8 */
#define  EXTI_SWIER_SWIER9                   (0x00000200)        /*!< Software Interrupt on line 9 */
#define  EXTI_SWIER_SWIER10                  (0x00000400)        /*!< Software Interrupt on line 10 */
#define  EXTI_SWIER_SWIER11                  (0x00000800)        /*!< Software Interrupt on line 11 */
#define  EXTI_SWIER_SWIER12                  (0x00001000)        /*!< Software Interrupt on line 12 */
#define  EXTI_SWIER_SWIER13                  (0x00002000)        /*!< Software Interrupt on line 13 */
#define  EXTI_SWIER_SWIER14                  (0x00004000)        /*!< Software Interrupt on line 14 */
#define  EXTI_SWIER_SWIER15                  (0x00008000)        /*!< Software Interrupt on line 15 */
#define  EXTI_SWIER_SWIER16                  (0x00010000)        /*!< Software Interrupt on line 16 */
#define  EXTI_SWIER_SWIER17                  (0x00020000)        /*!< Software Interrupt on line 17 */
#define  EXTI_SWIER_SWIER18                  (0x00040000)        /*!< Software Interrupt on line 18 */
#define  EXTI_SWIER_SWIER19                  (0x00080000)        /*!< Software Interrupt on line 19 */

/*******************  Bit definition for EXTI_PR register  ********************/
#define  EXTI_PR_PR0                         (0x00000001)        /*!< Pending bit for line 0 */
#define  EXTI_PR_PR1                         (0x00000002)        /*!< Pending bit for line 1 */
#define  EXTI_PR_PR2                         (0x00000004)        /*!< Pending bit for line 2 */
#define  EXTI_PR_PR3                         (0x00000008)        /*!< Pending bit for line 3 */
#define  EXTI_PR_PR4                         (0x00000010)        /*!< Pending bit for line 4 */
#define  EXTI_PR_PR5                         (0x00000020)        /*!< Pending bit for line 5 */
#define  EXTI_PR_PR6                         (0x00000040)        /*!< Pending bit for line 6 */
#define  EXTI_PR_PR7                         (0x00000080)        /*!< Pending bit for line 7 */
#define  EXTI_PR_PR8                         (0x00000100)        /*!< Pending bit for line 8 */
#define  EXTI_PR_PR9                         (0x00000200)        /*!< Pending bit for line 9 */
#define  EXTI_PR_PR10                        (0x00000400)        /*!< Pending bit for line 10 */
#define  EXTI_PR_PR11                        (0x00000800)        /*!< Pending bit for line 11 */
#define  EXTI_PR_PR12                        (0x00001000)        /*!< Pending bit for line 12 */
#define  EXTI_PR_PR13                        (0x00002000)        /*!< Pending bit for line 13 */
#define  EXTI_PR_PR14                        (0x00004000)        /*!< Pending bit for line 14 */
#define  EXTI_PR_PR15                        (0x00008000)        /*!< Pending bit for line 15 */
#define  EXTI_PR_PR16                        (0x00010000)        /*!< Pending bit for line 16 */
#define  EXTI_PR_PR17                        (0x00020000)        /*!< Pending bit for line 17 */
#define  EXTI_PR_PR18                        (0x00040000)        /*!< Pending bit for line 18 */
#define  EXTI_PR_PR19                        (0x00080000)        /*!< Pending bit for line 19 */

/******************************************************************************/
/*                                                                            */
/*                             DMA Controller                                 */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for DMA_ISR register  ********************/
#define  DMA_ISR_GIF1                        (0x00000001)        /*!< Channel 1 Global interrupt flag */
#define  DMA_ISR_TCIF1                       (0x00000002)        /*!< Channel 1 Transfer Complete flag */
#define  DMA_ISR_HTIF1                       (0x00000004)        /*!< Channel 1 Half Transfer flag */
#define  DMA_ISR_TEIF1                       (0x00000008)        /*!< Channel 1 Transfer Error flag */
#define  DMA_ISR_GIF2                        (0x00000010)        /*!< Channel 2 Global interrupt flag */
#define  DMA_ISR_TCIF2                       (0x00000020)        /*!< Channel 2 Transfer Complete flag */
#define  DMA_ISR_HTIF2                       (0x00000040)        /*!< Channel 2 Half Transfer flag */
#define  DMA_ISR_TEIF2                       (0x00000080)        /*!< Channel 2 Transfer Error flag */
#define  DMA_ISR_GIF3                        (0x00000100)        /*!< Channel 3 Global interrupt flag */
#define  DMA_ISR_TCIF3                       (0x00000200)        /*!< Channel 3 Transfer Complete flag */
#define  DMA_ISR_HTIF3                       (0x00000400)        /*!< Channel 3 Half Transfer flag */
#define  DMA_ISR_TEIF3                       (0x00000800)        /*!< Channel 3 Transfer Error flag */
#define  DMA_ISR_GIF4                        (0x00001000)        /*!< Channel 4 Global interrupt flag */
#define  DMA_ISR_TCIF4                       (0x00002000)        /*!< Channel 4 Transfer Complete flag */
#define  DMA_ISR_HTIF4                       (0x00004000)        /*!< Channel 4 Half Transfer flag */
#define  DMA_ISR_TEIF4                       (0x00008000)        /*!< Channel 4 Transfer Error flag */
#define  DMA_ISR_GIF5                        (0x00010000)        /*!< Channel 5 Global interrupt flag */
#define  DMA_ISR_TCIF5                       (0x00020000)        /*!< Channel 5 Transfer Complete flag */
#define  DMA_ISR_HTIF5                       (0x00040000)        /*!< Channel 5 Half Transfer flag */
#define  DMA_ISR_TEIF5                       (0x00080000)        /*!< Channel 5 Transfer Error flag */
#define  DMA_ISR_GIF6                        (0x00100000)        /*!< Channel 6 Global interrupt flag */
#define  DMA_ISR_TCIF6                       (0x00200000)        /*!< Channel 6 Transfer Complete flag */
#define  DMA_ISR_HTIF6                       (0x00400000)        /*!< Channel 6 Half Transfer flag */
#define  DMA_ISR_TEIF6                       (0x00800000)        /*!< Channel 6 Transfer Error flag */
#define  DMA_ISR_GIF7                        (0x01000000)        /*!< Channel 7 Global interrupt flag */
#define  DMA_ISR_TCIF7                       (0x02000000)        /*!< Channel 7 Transfer Complete flag */
#define  DMA_ISR_HTIF7                       (0x04000000)        /*!< Channel 7 Half Transfer flag */
#define  DMA_ISR_TEIF7                       (0x08000000)        /*!< Channel 7 Transfer Error flag */

/*******************  Bit definition for DMA_IFCR register  *******************/
#define  DMA_IFCR_CGIF1                      (0x00000001)        /*!< Channel 1 Global interrupt clear */
#define  DMA_IFCR_CTCIF1                     (0x00000002)        /*!< Channel 1 Transfer Complete clear */
#define  DMA_IFCR_CHTIF1                     (0x00000004)        /*!< Channel 1 Half Transfer clear */
#define  DMA_IFCR_CTEIF1                     (0x00000008)        /*!< Channel 1 Transfer Error clear */
#define  DMA_IFCR_CGIF2                      (0x00000010)        /*!< Channel 2 Global interrupt clear */
#define  DMA_IFCR_CTCIF2                     (0x00000020)        /*!< Channel 2 Transfer Complete clear */
#define  DMA_IFCR_CHTIF2                     (0x00000040)        /*!< Channel 2 Half Transfer clear */
#define  DMA_IFCR_CTEIF2                     (0x00000080)        /*!< Channel 2 Transfer Error clear */
#define  DMA_IFCR_CGIF3                      (0x00000100)        /*!< Channel 3 Global interrupt clear */
#define  DMA_IFCR_CTCIF3                     (0x00000200)        /*!< Channel 3 Transfer Complete clear */
#define  DMA_IFCR_CHTIF3                     (0x00000400)        /*!< Channel 3 Half Transfer clear */
#define  DMA_IFCR_CTEIF3                     (0x00000800)        /*!< Channel 3 Transfer Error clear */
#define  DMA_IFCR_CGIF4                      (0x00001000)        /*!< Channel 4 Global interrupt clear */
#define  DMA_IFCR_CTCIF4                     (0x00002000)        /*!< Channel 4 Transfer Complete clear */
#define  DMA_IFCR_CHTIF4                     (0x00004000)        /*!< Channel 4 Half Transfer clear */
#define  DMA_IFCR_CTEIF4                     (0x00008000)        /*!< Channel 4 Transfer Error clear */
#define  DMA_IFCR_CGIF5                      (0x00010000)        /*!< Channel 5 Global interrupt clear */
#define  DMA_IFCR_CTCIF5                     (0x00020000)        /*!< Channel 5 Transfer Complete clear */
#define  DMA_IFCR_CHTIF5                     (0x00040000)        /*!< Channel 5 Half Transfer clear */
#define  DMA_IFCR_CTEIF5                     (0x00080000)        /*!< Channel 5 Transfer Error clear */
#define  DMA_IFCR_CGIF6                      (0x00100000)        /*!< Channel 6 Global interrupt clear */
#define  DMA_IFCR_CTCIF6                     (0x00200000)        /*!< Channel 6 Transfer Complete clear */
#define  DMA_IFCR_CHTIF6                     (0x00400000)        /*!< Channel 6 Half Transfer clear */
#define  DMA_IFCR_CTEIF6                     (0x00800000)        /*!< Channel 6 Transfer Error clear */
#define  DMA_IFCR_CGIF7                      (0x01000000)        /*!< Channel 7 Global interrupt clear */
#define  DMA_IFCR_CTCIF7                     (0x02000000)        /*!< Channel 7 Transfer Complete clear */
#define  DMA_IFCR_CHTIF7                     (0x04000000)        /*!< Channel 7 Half Transfer clear */
#define  DMA_IFCR_CTEIF7                     (0x08000000)        /*!< Channel 7 Transfer Error clear */

/*******************  Bit definition for DMA_CCR1 register  *******************/
#define  DMA_CCR1_EN                         (0x0001)            /*!< Channel enable*/
#define  DMA_CCR1_TCIE                       (0x0002)            /*!< Transfer complete interrupt enable */
#define  DMA_CCR1_HTIE                       (0x0004)            /*!< Half Transfer interrupt enable */
#define  DMA_CCR1_TEIE                       (0x0008)            /*!< Transfer error interrupt enable */
#define  DMA_CCR1_DIR                        (0x0010)            /*!< Data transfer direction */
#define  DMA_CCR1_CIRC                       (0x0020)            /*!< Circular mode */
#define  DMA_CCR1_PINC                       (0x0040)            /*!< Peripheral increment mode */
#define  DMA_CCR1_MINC                       (0x0080)            /*!< Memory increment mode */

#define  DMA_CCR1_PSIZE                      (0x0300)            /*!< PSIZE[1:0] bits (Peripheral size) */
#define  DMA_CCR1_PSIZE_0                    (0x0100)            /*!< Bit 0 */
#define  DMA_CCR1_PSIZE_1                    (0x0200)            /*!< Bit 1 */

#define  DMA_CCR1_MSIZE                      (0x0C00)            /*!< MSIZE[1:0] bits (Memory size) */
#define  DMA_CCR1_MSIZE_0                    (0x0400)            /*!< Bit 0 */
#define  DMA_CCR1_MSIZE_1                    (0x0800)            /*!< Bit 1 */

#define  DMA_CCR1_PL                         (0x3000)            /*!< PL[1:0] bits(Channel Priority level) */
#define  DMA_CCR1_PL_0                       (0x1000)            /*!< Bit 0 */
#define  DMA_CCR1_PL_1                       (0x2000)            /*!< Bit 1 */

#define  DMA_CCR1_MEM2MEM                    (0x4000)            /*!< Memory to memory mode */

/*******************  Bit definition for DMA_CCR2 register  *******************/
#define  DMA_CCR2_EN                         (0x0001)            /*!< Channel enable */
#define  DMA_CCR2_TCIE                       (0x0002)            /*!< Transfer complete interrupt enable */
#define  DMA_CCR2_HTIE                       (0x0004)            /*!< Half Transfer interrupt enable */
#define  DMA_CCR2_TEIE                       (0x0008)            /*!< Transfer error interrupt enable */
#define  DMA_CCR2_DIR                        (0x0010)            /*!< Data transfer direction */
#define  DMA_CCR2_CIRC                       (0x0020)            /*!< Circular mode */
#define  DMA_CCR2_PINC                       (0x0040)            /*!< Peripheral increment mode */
#define  DMA_CCR2_MINC                       (0x0080)            /*!< Memory increment mode */

#define  DMA_CCR2_PSIZE                      (0x0300)            /*!< PSIZE[1:0] bits (Peripheral size) */
#define  DMA_CCR2_PSIZE_0                    (0x0100)            /*!< Bit 0 */
#define  DMA_CCR2_PSIZE_1                    (0x0200)            /*!< Bit 1 */

#define  DMA_CCR2_MSIZE                      (0x0C00)            /*!< MSIZE[1:0] bits (Memory size) */
#define  DMA_CCR2_MSIZE_0                    (0x0400)            /*!< Bit 0 */
#define  DMA_CCR2_MSIZE_1                    (0x0800)            /*!< Bit 1 */

#define  DMA_CCR2_PL                         (0x3000)            /*!< PL[1:0] bits (Channel Priority level) */
#define  DMA_CCR2_PL_0                       (0x1000)            /*!< Bit 0 */
#define  DMA_CCR2_PL_1                       (0x2000)            /*!< Bit 1 */

#define  DMA_CCR2_MEM2MEM                    (0x4000)            /*!< Memory to memory mode */

/*******************  Bit definition for DMA_CCR3 register  *******************/
#define  DMA_CCR3_EN                         (0x0001)            /*!< Channel enable */
#define  DMA_CCR3_TCIE                       (0x0002)            /*!< Transfer complete interrupt enable */
#define  DMA_CCR3_HTIE                       (0x0004)            /*!< Half Transfer interrupt enable */
#define  DMA_CCR3_TEIE                       (0x0008)            /*!< Transfer error interrupt enable */
#define  DMA_CCR3_DIR                        (0x0010)            /*!< Data transfer direction */
#define  DMA_CCR3_CIRC                       (0x0020)            /*!< Circular mode */
#define  DMA_CCR3_PINC                       (0x0040)            /*!< Peripheral increment mode */
#define  DMA_CCR3_MINC                       (0x0080)            /*!< Memory increment mode */

#define  DMA_CCR3_PSIZE                      (0x0300)            /*!< PSIZE[1:0] bits (Peripheral size) */
#define  DMA_CCR3_PSIZE_0                    (0x0100)            /*!< Bit 0 */
#define  DMA_CCR3_PSIZE_1                    (0x0200)            /*!< Bit 1 */

#define  DMA_CCR3_MSIZE                      (0x0C00)            /*!< MSIZE[1:0] bits (Memory size) */
#define  DMA_CCR3_MSIZE_0                    (0x0400)            /*!< Bit 0 */
#define  DMA_CCR3_MSIZE_1                    (0x0800)            /*!< Bit 1 */

#define  DMA_CCR3_PL                         (0x3000)            /*!< PL[1:0] bits (Channel Priority level) */
#define  DMA_CCR3_PL_0                       (0x1000)            /*!< Bit 0 */
#define  DMA_CCR3_PL_1                       (0x2000)            /*!< Bit 1 */

#define  DMA_CCR3_MEM2MEM                    (0x4000)            /*!< Memory to memory mode */

/*!<******************  Bit definition for DMA_CCR4 register  *******************/
#define  DMA_CCR4_EN                         (0x0001)            /*!< Channel enable */
#define  DMA_CCR4_TCIE                       (0x0002)            /*!< Transfer complete interrupt enable */
#define  DMA_CCR4_HTIE                       (0x0004)            /*!< Half Transfer interrupt enable */
#define  DMA_CCR4_TEIE                       (0x0008)            /*!< Transfer error interrupt enable */
#define  DMA_CCR4_DIR                        (0x0010)            /*!< Data transfer direction */
#define  DMA_CCR4_CIRC                       (0x0020)            /*!< Circular mode */
#define  DMA_CCR4_PINC                       (0x0040)            /*!< Peripheral increment mode */
#define  DMA_CCR4_MINC                       (0x0080)            /*!< Memory increment mode */

#define  DMA_CCR4_PSIZE                      (0x0300)            /*!< PSIZE[1:0] bits (Peripheral size) */
#define  DMA_CCR4_PSIZE_0                    (0x0100)            /*!< Bit 0 */
#define  DMA_CCR4_PSIZE_1                    (0x0200)            /*!< Bit 1 */

#define  DMA_CCR4_MSIZE                      (0x0C00)            /*!< MSIZE[1:0] bits (Memory size) */
#define  DMA_CCR4_MSIZE_0                    (0x0400)            /*!< Bit 0 */
#define  DMA_CCR4_MSIZE_1                    (0x0800)            /*!< Bit 1 */

#define  DMA_CCR4_PL                         (0x3000)            /*!< PL[1:0] bits (Channel Priority level) */
#define  DMA_CCR4_PL_0                       (0x1000)            /*!< Bit 0 */
#define  DMA_CCR4_PL_1                       (0x2000)            /*!< Bit 1 */

#define  DMA_CCR4_MEM2MEM                    (0x4000)            /*!< Memory to memory mode */

/******************  Bit definition for DMA_CCR5 register  *******************/
#define  DMA_CCR5_EN                         (0x0001)            /*!< Channel enable */
#define  DMA_CCR5_TCIE                       (0x0002)            /*!< Transfer complete interrupt enable */
#define  DMA_CCR5_HTIE                       (0x0004)            /*!< Half Transfer interrupt enable */
#define  DMA_CCR5_TEIE                       (0x0008)            /*!< Transfer error interrupt enable */
#define  DMA_CCR5_DIR                        (0x0010)            /*!< Data transfer direction */
#define  DMA_CCR5_CIRC                       (0x0020)            /*!< Circular mode */
#define  DMA_CCR5_PINC                       (0x0040)            /*!< Peripheral increment mode */
#define  DMA_CCR5_MINC                       (0x0080)            /*!< Memory increment mode */

#define  DMA_CCR5_PSIZE                      (0x0300)            /*!< PSIZE[1:0] bits (Peripheral size) */
#define  DMA_CCR5_PSIZE_0                    (0x0100)            /*!< Bit 0 */
#define  DMA_CCR5_PSIZE_1                    (0x0200)            /*!< Bit 1 */

#define  DMA_CCR5_MSIZE                      (0x0C00)            /*!< MSIZE[1:0] bits (Memory size) */
#define  DMA_CCR5_MSIZE_0                    (0x0400)            /*!< Bit 0 */
#define  DMA_CCR5_MSIZE_1                    (0x0800)            /*!< Bit 1 */

#define  DMA_CCR5_PL                         (0x3000)            /*!< PL[1:0] bits (Channel Priority level) */
#define  DMA_CCR5_PL_0                       (0x1000)            /*!< Bit 0 */
#define  DMA_CCR5_PL_1                       (0x2000)            /*!< Bit 1 */

#define  DMA_CCR5_MEM2MEM                    (0x4000)            /*!< Memory to memory mode enable */

/*******************  Bit definition for DMA_CCR6 register  *******************/
#define  DMA_CCR6_EN                         (0x0001)            /*!< Channel enable */
#define  DMA_CCR6_TCIE                       (0x0002)            /*!< Transfer complete interrupt enable */
#define  DMA_CCR6_HTIE                       (0x0004)            /*!< Half Transfer interrupt enable */
#define  DMA_CCR6_TEIE                       (0x0008)            /*!< Transfer error interrupt enable */
#define  DMA_CCR6_DIR                        (0x0010)            /*!< Data transfer direction */
#define  DMA_CCR6_CIRC                       (0x0020)            /*!< Circular mode */
#define  DMA_CCR6_PINC                       (0x0040)            /*!< Peripheral increment mode */
#define  DMA_CCR6_MINC                       (0x0080)            /*!< Memory increment mode */

#define  DMA_CCR6_PSIZE                      (0x0300)            /*!< PSIZE[1:0] bits (Peripheral size) */
#define  DMA_CCR6_PSIZE_0                    (0x0100)            /*!< Bit 0 */
#define  DMA_CCR6_PSIZE_1                    (0x0200)            /*!< Bit 1 */

#define  DMA_CCR6_MSIZE                      (0x0C00)            /*!< MSIZE[1:0] bits (Memory size) */
#define  DMA_CCR6_MSIZE_0                    (0x0400)            /*!< Bit 0 */
#define  DMA_CCR6_MSIZE_1                    (0x0800)            /*!< Bit 1 */

#define  DMA_CCR6_PL                         (0x3000)            /*!< PL[1:0] bits (Channel Priority level) */
#define  DMA_CCR6_PL_0                       (0x1000)            /*!< Bit 0 */
#define  DMA_CCR6_PL_1                       (0x2000)            /*!< Bit 1 */

#define  DMA_CCR6_MEM2MEM                    (0x4000)            /*!< Memory to memory mode */

/*******************  Bit definition for DMA_CCR7 register  *******************/
#define  DMA_CCR7_EN                         (0x0001)            /*!< Channel enable */
#define  DMA_CCR7_TCIE                       (0x0002)            /*!< Transfer complete interrupt enable */
#define  DMA_CCR7_HTIE                       (0x0004)            /*!< Half Transfer interrupt enable */
#define  DMA_CCR7_TEIE                       (0x0008)            /*!< Transfer error interrupt enable */
#define  DMA_CCR7_DIR                        (0x0010)            /*!< Data transfer direction */
#define  DMA_CCR7_CIRC                       (0x0020)            /*!< Circular mode */
#define  DMA_CCR7_PINC                       (0x0040)            /*!< Peripheral increment mode */
#define  DMA_CCR7_MINC                       (0x0080)            /*!< Memory increment mode */

#define  DMA_CCR7_PSIZE            ,         (0x0300)            /*!< PSIZE[1:0] bits (Peripheral size) */
#define  DMA_CCR7_PSIZE_0                    (0x0100)            /*!< Bit 0 */
#define  DMA_CCR7_PSIZE_1                    (0x0200)            /*!< Bit 1 */

#define  DMA_CCR7_MSIZE                      (0x0C00)            /*!< MSIZE[1:0] bits (Memory size) */
#define  DMA_CCR7_MSIZE_0                    (0x0400)            /*!< Bit 0 */
#define  DMA_CCR7_MSIZE_1                    (0x0800)            /*!< Bit 1 */

#define  DMA_CCR7_PL                         (0x3000)            /*!< PL[1:0] bits (Channel Priority level) */
#define  DMA_CCR7_PL_0                       (0x1000)            /*!< Bit 0 */
#define  DMA_CCR7_PL_1                       (0x2000)            /*!< Bit 1 */

#define  DMA_CCR7_MEM2MEM                    (0x4000)            /*!< Memory to memory mode enable */

/******************  Bit definition for DMA_CNDTR1 register  ******************/
#define  DMA_CNDTR1_NDT                      (0xFFFF)            /*!< Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR2 register  ******************/
#define  DMA_CNDTR2_NDT                      (0xFFFF)            /*!< Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR3 register  ******************/
#define  DMA_CNDTR3_NDT                      (0xFFFF)            /*!< Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR4 register  ******************/
#define  DMA_CNDTR4_NDT                      (0xFFFF)            /*!< Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR5 register  ******************/
#define  DMA_CNDTR5_NDT                      (0xFFFF)            /*!< Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR6 register  ******************/
#define  DMA_CNDTR6_NDT                      (0xFFFF)            /*!< Number of data to Transfer */

/******************  Bit definition for DMA_CNDTR7 register  ******************/
#define  DMA_CNDTR7_NDT                      (0xFFFF)            /*!< Number of data to Transfer */

/******************  Bit definition for DMA_CPAR1 register  *******************/
#define  DMA_CPAR1_PA                        (0xFFFFFFFF)        /*!< Peripheral Address */

/******************  Bit definition for DMA_CPAR2 register  *******************/
#define  DMA_CPAR2_PA                        (0xFFFFFFFF)        /*!< Peripheral Address */

/******************  Bit definition for DMA_CPAR3 register  *******************/
#define  DMA_CPAR3_PA                        (0xFFFFFFFF)        /*!< Peripheral Address */


/******************  Bit definition for DMA_CPAR4 register  *******************/
#define  DMA_CPAR4_PA                        (0xFFFFFFFF)        /*!< Peripheral Address */

/******************  Bit definition for DMA_CPAR5 register  *******************/
#define  DMA_CPAR5_PA                        (0xFFFFFFFF)        /*!< Peripheral Address */

/******************  Bit definition for DMA_CPAR6 register  *******************/
#define  DMA_CPAR6_PA                        (0xFFFFFFFF)        /*!< Peripheral Address */


/******************  Bit definition for DMA_CPAR7 register  *******************/
#define  DMA_CPAR7_PA                        (0xFFFFFFFF)        /*!< Peripheral Address */

/******************  Bit definition for DMA_CMAR1 register  *******************/
#define  DMA_CMAR1_MA                        (0xFFFFFFFF)        /*!< Memory Address */

/******************  Bit definition for DMA_CMAR2 register  *******************/
#define  DMA_CMAR2_MA                        (0xFFFFFFFF)        /*!< Memory Address */

/******************  Bit definition for DMA_CMAR3 register  *******************/
#define  DMA_CMAR3_MA                        (0xFFFFFFFF)        /*!< Memory Address */


/******************  Bit definition for DMA_CMAR4 register  *******************/
#define  DMA_CMAR4_MA                        (0xFFFFFFFF)        /*!< Memory Address */

/******************  Bit definition for DMA_CMAR5 register  *******************/
#define  DMA_CMAR5_MA                        (0xFFFFFFFF)        /*!< Memory Address */

/******************  Bit definition for DMA_CMAR6 register  *******************/
#define  DMA_CMAR6_MA                        (0xFFFFFFFF)        /*!< Memory Address */

/******************  Bit definition for DMA_CMAR7 register  *******************/
#define  DMA_CMAR7_MA                        (0xFFFFFFFF)        /*!< Memory Address */

/******************************************************************************/
/*                                                                            */
/*                        Analog to Digital Converter                         */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for ADC_SR register  ********************/
#define  ADC_SR_AWD                          ((uint8_t)0x01)               /*!< Analog watchdog flag */
#define  ADC_SR_EOC                          ((uint8_t)0x02)               /*!< End of conversion */
#define  ADC_SR_JEOC                         ((uint8_t)0x04)               /*!< Injected channel end of conversion */
#define  ADC_SR_JSTRT                        ((uint8_t)0x08)               /*!< Injected channel Start flag */
#define  ADC_SR_STRT                         ((uint8_t)0x10)               /*!< Regular channel Start flag */

/*******************  Bit definition for ADC_CR1 register  ********************/
#define  ADC_CR1_AWDCH                       (0x0000001F)        /*!< AWDCH[4:0] bits (Analog watchdog channel select bits) */
#define  ADC_CR1_AWDCH_0                     (0x00000001)        /*!< Bit 0 */
#define  ADC_CR1_AWDCH_1                     (0x00000002)        /*!< Bit 1 */
#define  ADC_CR1_AWDCH_2                     (0x00000004)        /*!< Bit 2 */
#define  ADC_CR1_AWDCH_3                     (0x00000008)        /*!< Bit 3 */
#define  ADC_CR1_AWDCH_4                     (0x00000010)        /*!< Bit 4 */

#define  ADC_CR1_EOCIE                       (0x00000020)        /*!< Interrupt enable for EOC */
#define  ADC_CR1_AWDIE                       (0x00000040)        /*!< Analog Watchdog interrupt enable */
#define  ADC_CR1_JEOCIE                      (0x00000080)        /*!< Interrupt enable for injected channels */
#define  ADC_CR1_SCAN                        (0x00000100)        /*!< Scan mode */
#define  ADC_CR1_AWDSGL                      (0x00000200)        /*!< Enable the watchdog on a single channel in scan mode */
#define  ADC_CR1_JAUTO                       (0x00000400)        /*!< Automatic injected group conversion */
#define  ADC_CR1_DISCEN                      (0x00000800)        /*!< Discontinuous mode on regular channels */
#define  ADC_CR1_JDISCEN                     (0x00001000)        /*!< Discontinuous mode on injected channels */

#define  ADC_CR1_DISCNUM                     (0x0000E000)        /*!< DISCNUM[2:0] bits (Discontinuous mode channel count) */
#define  ADC_CR1_DISCNUM_0                   (0x00002000)        /*!< Bit 0 */
#define  ADC_CR1_DISCNUM_1                   (0x00004000)        /*!< Bit 1 */
#define  ADC_CR1_DISCNUM_2                   (0x00008000)        /*!< Bit 2 */

#define  ADC_CR1_DUALMOD                     (0x000F0000)        /*!< DUALMOD[3:0] bits (Dual mode selection) */
#define  ADC_CR1_DUALMOD_0                   (0x00010000)        /*!< Bit 0 */
#define  ADC_CR1_DUALMOD_1                   (0x00020000)        /*!< Bit 1 */
#define  ADC_CR1_DUALMOD_2                   (0x00040000)        /*!< Bit 2 */
#define  ADC_CR1_DUALMOD_3                   (0x00080000)        /*!< Bit 3 */

#define  ADC_CR1_JAWDEN                      (0x00400000)        /*!< Analog watchdog enable on injected channels */
#define  ADC_CR1_AWDEN                       (0x00800000)        /*!< Analog watchdog enable on regular channels */

  
/*******************  Bit definition for ADC_CR2 register  ********************/
#define  ADC_CR2_ADON                        (0x00000001)        /*!< A/D Converter ON / OFF */
#define  ADC_CR2_CONT                        (0x00000002)        /*!< Continuous Conversion */
#define  ADC_CR2_CAL                         (0x00000004)        /*!< A/D Calibration */
#define  ADC_CR2_RSTCAL                      (0x00000008)        /*!< Reset Calibration */
#define  ADC_CR2_DMA                         (0x00000100)        /*!< Direct Memory access mode */
#define  ADC_CR2_ALIGN                       (0x00000800)        /*!< Data Alignment */

#define  ADC_CR2_JEXTSEL                     (0x00007000)        /*!< JEXTSEL[2:0] bits (External event select for injected group) */
#define  ADC_CR2_JEXTSEL_0                   (0x00001000)        /*!< Bit 0 */
#define  ADC_CR2_JEXTSEL_1                   (0x00002000)        /*!< Bit 1 */
#define  ADC_CR2_JEXTSEL_2                   (0x00004000)        /*!< Bit 2 */

#define  ADC_CR2_JEXTTRIG                    (0x00008000)        /*!< External Trigger Conversion mode for injected channels */

#define  ADC_CR2_EXTSEL                      (0x000E0000)        /*!< EXTSEL[2:0] bits (External Event Select for regular group) */
#define  ADC_CR2_EXTSEL_0                    (0x00020000)        /*!< Bit 0 */
#define  ADC_CR2_EXTSEL_1                    (0x00040000)        /*!< Bit 1 */
#define  ADC_CR2_EXTSEL_2                    (0x00080000)        /*!< Bit 2 */

#define  ADC_CR2_EXTTRIG                     (0x00100000)        /*!< External Trigger Conversion mode for regular channels */
#define  ADC_CR2_JSWSTART                    (0x00200000)        /*!< Start Conversion of injected channels */
#define  ADC_CR2_SWSTART                     (0x00400000)        /*!< Start Conversion of regular channels */
#define  ADC_CR2_TSVREFE                     (0x00800000)        /*!< Temperature Sensor and VREFINT Enable */

/******************  Bit definition for ADC_SMPR1 register  *******************/
#define  ADC_SMPR1_SMP10                     (0x00000007)        /*!< SMP10[2:0] bits (Channel 10 Sample time selection) */
#define  ADC_SMPR1_SMP10_0                   (0x00000001)        /*!< Bit 0 */
#define  ADC_SMPR1_SMP10_1                   (0x00000002)        /*!< Bit 1 */
#define  ADC_SMPR1_SMP10_2                   (0x00000004)        /*!< Bit 2 */

#define  ADC_SMPR1_SMP11                     (0x00000038)        /*!< SMP11[2:0] bits (Channel 11 Sample time selection) */
#define  ADC_SMPR1_SMP11_0                   (0x00000008)        /*!< Bit 0 */
#define  ADC_SMPR1_SMP11_1                   (0x00000010)        /*!< Bit 1 */
#define  ADC_SMPR1_SMP11_2                   (0x00000020)        /*!< Bit 2 */

#define  ADC_SMPR1_SMP12                     (0x000001C0)        /*!< SMP12[2:0] bits (Channel 12 Sample time selection) */
#define  ADC_SMPR1_SMP12_0                   (0x00000040)        /*!< Bit 0 */
#define  ADC_SMPR1_SMP12_1                   (0x00000080)        /*!< Bit 1 */
#define  ADC_SMPR1_SMP12_2                   (0x00000100)        /*!< Bit 2 */

#define  ADC_SMPR1_SMP13                     (0x00000E00)        /*!< SMP13[2:0] bits (Channel 13 Sample time selection) */
#define  ADC_SMPR1_SMP13_0                   (0x00000200)        /*!< Bit 0 */
#define  ADC_SMPR1_SMP13_1                   (0x00000400)        /*!< Bit 1 */
#define  ADC_SMPR1_SMP13_2                   (0x00000800)        /*!< Bit 2 */

#define  ADC_SMPR1_SMP14                     (0x00007000)        /*!< SMP14[2:0] bits (Channel 14 Sample time selection) */
#define  ADC_SMPR1_SMP14_0                   (0x00001000)        /*!< Bit 0 */
#define  ADC_SMPR1_SMP14_1                   (0x00002000)        /*!< Bit 1 */
#define  ADC_SMPR1_SMP14_2                   (0x00004000)        /*!< Bit 2 */

#define  ADC_SMPR1_SMP15                     (0x00038000)        /*!< SMP15[2:0] bits (Channel 15 Sample time selection) */
#define  ADC_SMPR1_SMP15_0                   (0x00008000)        /*!< Bit 0 */
#define  ADC_SMPR1_SMP15_1                   (0x00010000)        /*!< Bit 1 */
#define  ADC_SMPR1_SMP15_2                   (0x00020000)        /*!< Bit 2 */

#define  ADC_SMPR1_SMP16                     (0x001C0000)        /*!< SMP16[2:0] bits (Channel 16 Sample time selection) */
#define  ADC_SMPR1_SMP16_0                   (0x00040000)        /*!< Bit 0 */
#define  ADC_SMPR1_SMP16_1                   (0x00080000)        /*!< Bit 1 */
#define  ADC_SMPR1_SMP16_2                   (0x00100000)        /*!< Bit 2 */

#define  ADC_SMPR1_SMP17                     (0x00E00000)        /*!< SMP17[2:0] bits (Channel 17 Sample time selection) */
#define  ADC_SMPR1_SMP17_0                   (0x00200000)        /*!< Bit 0 */
#define  ADC_SMPR1_SMP17_1                   (0x00400000)        /*!< Bit 1 */
#define  ADC_SMPR1_SMP17_2                   (0x00800000)        /*!< Bit 2 */

/******************  Bit definition for ADC_SMPR2 register  *******************/
#define  ADC_SMPR2_SMP0                      (0x00000007)        /*!< SMP0[2:0] bits (Channel 0 Sample time selection) */
#define  ADC_SMPR2_SMP0_0                    (0x00000001)        /*!< Bit 0 */
#define  ADC_SMPR2_SMP0_1                    (0x00000002)        /*!< Bit 1 */
#define  ADC_SMPR2_SMP0_2                    (0x00000004)        /*!< Bit 2 */

#define  ADC_SMPR2_SMP1                      (0x00000038)        /*!< SMP1[2:0] bits (Channel 1 Sample time selection) */
#define  ADC_SMPR2_SMP1_0                    (0x00000008)        /*!< Bit 0 */
#define  ADC_SMPR2_SMP1_1                    (0x00000010)        /*!< Bit 1 */
#define  ADC_SMPR2_SMP1_2                    (0x00000020)        /*!< Bit 2 */

#define  ADC_SMPR2_SMP2                      (0x000001C0)        /*!< SMP2[2:0] bits (Channel 2 Sample time selection) */
#define  ADC_SMPR2_SMP2_0                    (0x00000040)        /*!< Bit 0 */
#define  ADC_SMPR2_SMP2_1                    (0x00000080)        /*!< Bit 1 */
#define  ADC_SMPR2_SMP2_2                    (0x00000100)        /*!< Bit 2 */

#define  ADC_SMPR2_SMP3                      (0x00000E00)        /*!< SMP3[2:0] bits (Channel 3 Sample time selection) */
#define  ADC_SMPR2_SMP3_0                    (0x00000200)        /*!< Bit 0 */
#define  ADC_SMPR2_SMP3_1                    (0x00000400)        /*!< Bit 1 */
#define  ADC_SMPR2_SMP3_2                    (0x00000800)        /*!< Bit 2 */

#define  ADC_SMPR2_SMP4                      (0x00007000)        /*!< SMP4[2:0] bits (Channel 4 Sample time selection) */
#define  ADC_SMPR2_SMP4_0                    (0x00001000)        /*!< Bit 0 */
#define  ADC_SMPR2_SMP4_1                    (0x00002000)        /*!< Bit 1 */
#define  ADC_SMPR2_SMP4_2                    (0x00004000)        /*!< Bit 2 */

#define  ADC_SMPR2_SMP5                      (0x00038000)        /*!< SMP5[2:0] bits (Channel 5 Sample time selection) */
#define  ADC_SMPR2_SMP5_0                    (0x00008000)        /*!< Bit 0 */
#define  ADC_SMPR2_SMP5_1                    (0x00010000)        /*!< Bit 1 */
#define  ADC_SMPR2_SMP5_2                    (0x00020000)        /*!< Bit 2 */

#define  ADC_SMPR2_SMP6                      (0x001C0000)        /*!< SMP6[2:0] bits (Channel 6 Sample time selection) */
#define  ADC_SMPR2_SMP6_0                    (0x00040000)        /*!< Bit 0 */
#define  ADC_SMPR2_SMP6_1                    (0x00080000)        /*!< Bit 1 */
#define  ADC_SMPR2_SMP6_2                    (0x00100000)        /*!< Bit 2 */

#define  ADC_SMPR2_SMP7                      (0x00E00000)        /*!< SMP7[2:0] bits (Channel 7 Sample time selection) */
#define  ADC_SMPR2_SMP7_0                    (0x00200000)        /*!< Bit 0 */
#define  ADC_SMPR2_SMP7_1                    (0x00400000)        /*!< Bit 1 */
#define  ADC_SMPR2_SMP7_2                    (0x00800000)        /*!< Bit 2 */

#define  ADC_SMPR2_SMP8                      (0x07000000)        /*!< SMP8[2:0] bits (Channel 8 Sample time selection) */
#define  ADC_SMPR2_SMP8_0                    (0x01000000)        /*!< Bit 0 */
#define  ADC_SMPR2_SMP8_1                    (0x02000000)        /*!< Bit 1 */
#define  ADC_SMPR2_SMP8_2                    (0x04000000)        /*!< Bit 2 */

#define  ADC_SMPR2_SMP9                      (0x38000000)        /*!< SMP9[2:0] bits (Channel 9 Sample time selection) */
#define  ADC_SMPR2_SMP9_0                    (0x08000000)        /*!< Bit 0 */
#define  ADC_SMPR2_SMP9_1                    (0x10000000)        /*!< Bit 1 */
#define  ADC_SMPR2_SMP9_2                    (0x20000000)        /*!< Bit 2 */

/******************  Bit definition for ADC_JOFR1 register  *******************/
#define  ADC_JOFR1_JOFFSET1                  (0x0FFF)            /*!< Data offset for injected channel 1 */

/******************  Bit definition for ADC_JOFR2 register  *******************/
#define  ADC_JOFR2_JOFFSET2                  (0x0FFF)            /*!< Data offset for injected channel 2 */

/******************  Bit definition for ADC_JOFR3 register  *******************/
#define  ADC_JOFR3_JOFFSET3                  (0x0FFF)            /*!< Data offset for injected channel 3 */

/******************  Bit definition for ADC_JOFR4 register  *******************/
#define  ADC_JOFR4_JOFFSET4                  (0x0FFF)            /*!< Data offset for injected channel 4 */

/*******************  Bit definition for ADC_HTR register  ********************/
#define  ADC_HTR_HT                          (0x0FFF)            /*!< Analog watchdog high threshold */

/*******************  Bit definition for ADC_LTR register  ********************/
#define  ADC_LTR_LT                          (0x0FFF)            /*!< Analog watchdog low threshold */

/*******************  Bit definition for ADC_SQR1 register  *******************/
#define  ADC_SQR1_SQ13                       (0x0000001F)        /*!< SQ13[4:0] bits (13th conversion in regular sequence) */
#define  ADC_SQR1_SQ13_0                     (0x00000001)        /*!< Bit 0 */
#define  ADC_SQR1_SQ13_1                     (0x00000002)        /*!< Bit 1 */
#define  ADC_SQR1_SQ13_2                     (0x00000004)        /*!< Bit 2 */
#define  ADC_SQR1_SQ13_3                     (0x00000008)        /*!< Bit 3 */
#define  ADC_SQR1_SQ13_4                     (0x00000010)        /*!< Bit 4 */

#define  ADC_SQR1_SQ14                       (0x000003E0)        /*!< SQ14[4:0] bits (14th conversion in regular sequence) */
#define  ADC_SQR1_SQ14_0                     (0x00000020)        /*!< Bit 0 */
#define  ADC_SQR1_SQ14_1                     (0x00000040)        /*!< Bit 1 */
#define  ADC_SQR1_SQ14_2                     (0x00000080)        /*!< Bit 2 */
#define  ADC_SQR1_SQ14_3                     (0x00000100)        /*!< Bit 3 */
#define  ADC_SQR1_SQ14_4                     (0x00000200)        /*!< Bit 4 */

#define  ADC_SQR1_SQ15                       (0x00007C00)        /*!< SQ15[4:0] bits (15th conversion in regular sequence) */
#define  ADC_SQR1_SQ15_0                     (0x00000400)        /*!< Bit 0 */
#define  ADC_SQR1_SQ15_1                     (0x00000800)        /*!< Bit 1 */
#define  ADC_SQR1_SQ15_2                     (0x00001000)        /*!< Bit 2 */
#define  ADC_SQR1_SQ15_3                     (0x00002000)        /*!< Bit 3 */
#define  ADC_SQR1_SQ15_4                     (0x00004000)        /*!< Bit 4 */

#define  ADC_SQR1_SQ16                       (0x000F8000)        /*!< SQ16[4:0] bits (16th conversion in regular sequence) */
#define  ADC_SQR1_SQ16_0                     (0x00008000)        /*!< Bit 0 */
#define  ADC_SQR1_SQ16_1                     (0x00010000)        /*!< Bit 1 */
#define  ADC_SQR1_SQ16_2                     (0x00020000)        /*!< Bit 2 */
#define  ADC_SQR1_SQ16_3                     (0x00040000)        /*!< Bit 3 */
#define  ADC_SQR1_SQ16_4                     (0x00080000)        /*!< Bit 4 */

#define  ADC_SQR1_L                          (0x00F00000)        /*!< L[3:0] bits (Regular channel sequence length) */
#define  ADC_SQR1_L_0                        (0x00100000)        /*!< Bit 0 */
#define  ADC_SQR1_L_1                        (0x00200000)        /*!< Bit 1 */
#define  ADC_SQR1_L_2                        (0x00400000)        /*!< Bit 2 */
#define  ADC_SQR1_L_3                        (0x00800000)        /*!< Bit 3 */

/*******************  Bit definition for ADC_SQR2 register  *******************/
#define  ADC_SQR2_SQ7                        (0x0000001F)        /*!< SQ7[4:0] bits (7th conversion in regular sequence) */
#define  ADC_SQR2_SQ7_0                      (0x00000001)        /*!< Bit 0 */
#define  ADC_SQR2_SQ7_1                      (0x00000002)        /*!< Bit 1 */
#define  ADC_SQR2_SQ7_2                      (0x00000004)        /*!< Bit 2 */
#define  ADC_SQR2_SQ7_3                      (0x00000008)        /*!< Bit 3 */
#define  ADC_SQR2_SQ7_4                      (0x00000010)        /*!< Bit 4 */

#define  ADC_SQR2_SQ8                        (0x000003E0)        /*!< SQ8[4:0] bits (8th conversion in regular sequence) */
#define  ADC_SQR2_SQ8_0                      (0x00000020)        /*!< Bit 0 */
#define  ADC_SQR2_SQ8_1                      (0x00000040)        /*!< Bit 1 */
#define  ADC_SQR2_SQ8_2                      (0x00000080)        /*!< Bit 2 */
#define  ADC_SQR2_SQ8_3                      (0x00000100)        /*!< Bit 3 */
#define  ADC_SQR2_SQ8_4                      (0x00000200)        /*!< Bit 4 */

#define  ADC_SQR2_SQ9                        (0x00007C00)        /*!< SQ9[4:0] bits (9th conversion in regular sequence) */
#define  ADC_SQR2_SQ9_0                      (0x00000400)        /*!< Bit 0 */
#define  ADC_SQR2_SQ9_1                      (0x00000800)        /*!< Bit 1 */
#define  ADC_SQR2_SQ9_2                      (0x00001000)        /*!< Bit 2 */
#define  ADC_SQR2_SQ9_3                      (0x00002000)        /*!< Bit 3 */
#define  ADC_SQR2_SQ9_4                      (0x00004000)        /*!< Bit 4 */

#define  ADC_SQR2_SQ10                       (0x000F8000)        /*!< SQ10[4:0] bits (10th conversion in regular sequence) */
#define  ADC_SQR2_SQ10_0                     (0x00008000)        /*!< Bit 0 */
#define  ADC_SQR2_SQ10_1                     (0x00010000)        /*!< Bit 1 */
#define  ADC_SQR2_SQ10_2                     (0x00020000)        /*!< Bit 2 */
#define  ADC_SQR2_SQ10_3                     (0x00040000)        /*!< Bit 3 */
#define  ADC_SQR2_SQ10_4                     (0x00080000)        /*!< Bit 4 */

#define  ADC_SQR2_SQ11                       (0x01F00000)        /*!< SQ11[4:0] bits (11th conversion in regular sequence) */
#define  ADC_SQR2_SQ11_0                     (0x00100000)        /*!< Bit 0 */
#define  ADC_SQR2_SQ11_1                     (0x00200000)        /*!< Bit 1 */
#define  ADC_SQR2_SQ11_2                     (0x00400000)        /*!< Bit 2 */
#define  ADC_SQR2_SQ11_3                     (0x00800000)        /*!< Bit 3 */
#define  ADC_SQR2_SQ11_4                     (0x01000000)        /*!< Bit 4 */

#define  ADC_SQR2_SQ12                       (0x3E000000)        /*!< SQ12[4:0] bits (12th conversion in regular sequence) */
#define  ADC_SQR2_SQ12_0                     (0x02000000)        /*!< Bit 0 */
#define  ADC_SQR2_SQ12_1                     (0x04000000)        /*!< Bit 1 */
#define  ADC_SQR2_SQ12_2                     (0x08000000)        /*!< Bit 2 */
#define  ADC_SQR2_SQ12_3                     (0x10000000)        /*!< Bit 3 */
#define  ADC_SQR2_SQ12_4                     (0x20000000)        /*!< Bit 4 */

/*******************  Bit definition for ADC_SQR3 register  *******************/
#define  ADC_SQR3_SQ1                        (0x0000001F)        /*!< SQ1[4:0] bits (1st conversion in regular sequence) */
#define  ADC_SQR3_SQ1_0                      (0x00000001)        /*!< Bit 0 */
#define  ADC_SQR3_SQ1_1                      (0x00000002)        /*!< Bit 1 */
#define  ADC_SQR3_SQ1_2                      (0x00000004)        /*!< Bit 2 */
#define  ADC_SQR3_SQ1_3                      (0x00000008)        /*!< Bit 3 */
#define  ADC_SQR3_SQ1_4                      (0x00000010)        /*!< Bit 4 */

#define  ADC_SQR3_SQ2                        (0x000003E0)        /*!< SQ2[4:0] bits (2nd conversion in regular sequence) */
#define  ADC_SQR3_SQ2_0                      (0x00000020)        /*!< Bit 0 */
#define  ADC_SQR3_SQ2_1                      (0x00000040)        /*!< Bit 1 */
#define  ADC_SQR3_SQ2_2                      (0x00000080)        /*!< Bit 2 */
#define  ADC_SQR3_SQ2_3                      (0x00000100)        /*!< Bit 3 */
#define  ADC_SQR3_SQ2_4                      (0x00000200)        /*!< Bit 4 */

#define  ADC_SQR3_SQ3                        (0x00007C00)        /*!< SQ3[4:0] bits (3rd conversion in regular sequence) */
#define  ADC_SQR3_SQ3_0                      (0x00000400)        /*!< Bit 0 */
#define  ADC_SQR3_SQ3_1                      (0x00000800)        /*!< Bit 1 */
#define  ADC_SQR3_SQ3_2                      (0x00001000)        /*!< Bit 2 */
#define  ADC_SQR3_SQ3_3                      (0x00002000)        /*!< Bit 3 */
#define  ADC_SQR3_SQ3_4                      (0x00004000)        /*!< Bit 4 */

#define  ADC_SQR3_SQ4                        (0x000F8000)        /*!< SQ4[4:0] bits (4th conversion in regular sequence) */
#define  ADC_SQR3_SQ4_0                      (0x00008000)        /*!< Bit 0 */
#define  ADC_SQR3_SQ4_1                      (0x00010000)        /*!< Bit 1 */
#define  ADC_SQR3_SQ4_2                      (0x00020000)        /*!< Bit 2 */
#define  ADC_SQR3_SQ4_3                      (0x00040000)        /*!< Bit 3 */
#define  ADC_SQR3_SQ4_4                      (0x00080000)        /*!< Bit 4 */

#define  ADC_SQR3_SQ5                        (0x01F00000)        /*!< SQ5[4:0] bits (5th conversion in regular sequence) */
#define  ADC_SQR3_SQ5_0                      (0x00100000)        /*!< Bit 0 */
#define  ADC_SQR3_SQ5_1                      (0x00200000)        /*!< Bit 1 */
#define  ADC_SQR3_SQ5_2                      (0x00400000)        /*!< Bit 2 */
#define  ADC_SQR3_SQ5_3                      (0x00800000)        /*!< Bit 3 */
#define  ADC_SQR3_SQ5_4                      (0x01000000)        /*!< Bit 4 */

#define  ADC_SQR3_SQ6                        (0x3E000000)        /*!< SQ6[4:0] bits (6th conversion in regular sequence) */
#define  ADC_SQR3_SQ6_0                      (0x02000000)        /*!< Bit 0 */
#define  ADC_SQR3_SQ6_1                      (0x04000000)        /*!< Bit 1 */
#define  ADC_SQR3_SQ6_2                      (0x08000000)        /*!< Bit 2 */
#define  ADC_SQR3_SQ6_3                      (0x10000000)        /*!< Bit 3 */
#define  ADC_SQR3_SQ6_4                      (0x20000000)        /*!< Bit 4 */

/*******************  Bit definition for ADC_JSQR register  *******************/
#define  ADC_JSQR_JSQ1                       (0x0000001F)        /*!< JSQ1[4:0] bits (1st conversion in injected sequence) */  
#define  ADC_JSQR_JSQ1_0                     (0x00000001)        /*!< Bit 0 */
#define  ADC_JSQR_JSQ1_1                     (0x00000002)        /*!< Bit 1 */
#define  ADC_JSQR_JSQ1_2                     (0x00000004)        /*!< Bit 2 */
#define  ADC_JSQR_JSQ1_3                     (0x00000008)        /*!< Bit 3 */
#define  ADC_JSQR_JSQ1_4                     (0x00000010)        /*!< Bit 4 */

#define  ADC_JSQR_JSQ2                       (0x000003E0)        /*!< JSQ2[4:0] bits (2nd conversion in injected sequence) */
#define  ADC_JSQR_JSQ2_0                     (0x00000020)        /*!< Bit 0 */
#define  ADC_JSQR_JSQ2_1                     (0x00000040)        /*!< Bit 1 */
#define  ADC_JSQR_JSQ2_2                     (0x00000080)        /*!< Bit 2 */
#define  ADC_JSQR_JSQ2_3                     (0x00000100)        /*!< Bit 3 */
#define  ADC_JSQR_JSQ2_4                     (0x00000200)        /*!< Bit 4 */

#define  ADC_JSQR_JSQ3                       (0x00007C00)        /*!< JSQ3[4:0] bits (3rd conversion in injected sequence) */
#define  ADC_JSQR_JSQ3_0                     (0x00000400)        /*!< Bit 0 */
#define  ADC_JSQR_JSQ3_1                     (0x00000800)        /*!< Bit 1 */
#define  ADC_JSQR_JSQ3_2                     (0x00001000)        /*!< Bit 2 */
#define  ADC_JSQR_JSQ3_3                     (0x00002000)        /*!< Bit 3 */
#define  ADC_JSQR_JSQ3_4                     (0x00004000)        /*!< Bit 4 */

#define  ADC_JSQR_JSQ4                       (0x000F8000)        /*!< JSQ4[4:0] bits (4th conversion in injected sequence) */
#define  ADC_JSQR_JSQ4_0                     (0x00008000)        /*!< Bit 0 */
#define  ADC_JSQR_JSQ4_1                     (0x00010000)        /*!< Bit 1 */
#define  ADC_JSQR_JSQ4_2                     (0x00020000)        /*!< Bit 2 */
#define  ADC_JSQR_JSQ4_3                     (0x00040000)        /*!< Bit 3 */
#define  ADC_JSQR_JSQ4_4                     (0x00080000)        /*!< Bit 4 */

#define  ADC_JSQR_JL                         (0x00300000)        /*!< JL[1:0] bits (Injected Sequence length) */
#define  ADC_JSQR_JL_0                       (0x00100000)        /*!< Bit 0 */
#define  ADC_JSQR_JL_1                       (0x00200000)        /*!< Bit 1 */

/*******************  Bit definition for ADC_JDR1 register  *******************/
#define  ADC_JDR1_JDATA                      (0xFFFF)            /*!< Injected data */

/*******************  Bit definition for ADC_JDR2 register  *******************/
#define  ADC_JDR2_JDATA                      (0xFFFF)            /*!< Injected data */

/*******************  Bit definition for ADC_JDR3 register  *******************/
#define  ADC_JDR3_JDATA                      (0xFFFF)            /*!< Injected data */

/*******************  Bit definition for ADC_JDR4 register  *******************/
#define  ADC_JDR4_JDATA                      (0xFFFF)            /*!< Injected data */

/********************  Bit definition for ADC_DR register  ********************/
#define  ADC_DR_DATA                         (0x0000FFFF)        /*!< Regular data */
#define  ADC_DR_ADC2DATA                     (0xFFFF0000)        /*!< ADC2 data */

/******************************************************************************/
/*                                                                            */
/*                      Digital to Analog Converter                           */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for DAC_CR register  ********************/
#define  DAC_CR_EN1                          (0x00000001)        /*!< DAC channel1 enable */
#define  DAC_CR_BOFF1                        (0x00000002)        /*!< DAC channel1 output buffer disable */
#define  DAC_CR_TEN1                         (0x00000004)        /*!< DAC channel1 Trigger enable */

#define  DAC_CR_TSEL1                        (0x00000038)        /*!< TSEL1[2:0] (DAC channel1 Trigger selection) */
#define  DAC_CR_TSEL1_0                      (0x00000008)        /*!< Bit 0 */
#define  DAC_CR_TSEL1_1                      (0x00000010)        /*!< Bit 1 */
#define  DAC_CR_TSEL1_2                      (0x00000020)        /*!< Bit 2 */

#define  DAC_CR_WAVE1                        (0x000000C0)        /*!< WAVE1[1:0] (DAC channel1 noise/triangle wave generation enable) */
#define  DAC_CR_WAVE1_0                      (0x00000040)        /*!< Bit 0 */
#define  DAC_CR_WAVE1_1                      (0x00000080)        /*!< Bit 1 */

#define  DAC_CR_MAMP1                        (0x00000F00)        /*!< MAMP1[3:0] (DAC channel1 Mask/Amplitude selector) */
#define  DAC_CR_MAMP1_0                      (0x00000100)        /*!< Bit 0 */
#define  DAC_CR_MAMP1_1                      (0x00000200)        /*!< Bit 1 */
#define  DAC_CR_MAMP1_2                      (0x00000400)        /*!< Bit 2 */
#define  DAC_CR_MAMP1_3                      (0x00000800)        /*!< Bit 3 */

#define  DAC_CR_DMAEN1                       (0x00001000)        /*!< DAC channel1 DMA enable */
#define  DAC_CR_EN2                          (0x00010000)        /*!< DAC channel2 enable */
#define  DAC_CR_BOFF2                        (0x00020000)        /*!< DAC channel2 output buffer disable */
#define  DAC_CR_TEN2                         (0x00040000)        /*!< DAC channel2 Trigger enable */

#define  DAC_CR_TSEL2                        (0x00380000)        /*!< TSEL2[2:0] (DAC channel2 Trigger selection) */
#define  DAC_CR_TSEL2_0                      (0x00080000)        /*!< Bit 0 */
#define  DAC_CR_TSEL2_1                      (0x00100000)        /*!< Bit 1 */
#define  DAC_CR_TSEL2_2                      (0x00200000)        /*!< Bit 2 */

#define  DAC_CR_WAVE2                        (0x00C00000)        /*!< WAVE2[1:0] (DAC channel2 noise/triangle wave generation enable) */
#define  DAC_CR_WAVE2_0                      (0x00400000)        /*!< Bit 0 */
#define  DAC_CR_WAVE2_1                      (0x00800000)        /*!< Bit 1 */

#define  DAC_CR_MAMP2                        (0x0F000000)        /*!< MAMP2[3:0] (DAC channel2 Mask/Amplitude selector) */
#define  DAC_CR_MAMP2_0                      (0x01000000)        /*!< Bit 0 */
#define  DAC_CR_MAMP2_1                      (0x02000000)        /*!< Bit 1 */
#define  DAC_CR_MAMP2_2                      (0x04000000)        /*!< Bit 2 */
#define  DAC_CR_MAMP2_3                      (0x08000000)        /*!< Bit 3 */

#define  DAC_CR_DMAEN2                       (0x10000000)        /*!< DAC channel2 DMA enabled */

/*****************  Bit definition for DAC_SWTRIGR register  ******************/
#define  DAC_SWTRIGR_SWTRIG1                 ((uint8_t)0x01)               /*!< DAC channel1 software trigger */
#define  DAC_SWTRIGR_SWTRIG2                 ((uint8_t)0x02)               /*!< DAC channel2 software trigger */

/*****************  Bit definition for DAC_DHR12R1 register  ******************/
#define  DAC_DHR12R1_DACC1DHR                (0x0FFF)            /*!< DAC channel1 12-bit Right aligned data */

/*****************  Bit definition for DAC_DHR12L1 register  ******************/
#define  DAC_DHR12L1_DACC1DHR                (0xFFF0)            /*!< DAC channel1 12-bit Left aligned data */

/******************  Bit definition for DAC_DHR8R1 register  ******************/
#define  DAC_DHR8R1_DACC1DHR                 ((uint8_t)0xFF)               /*!< DAC channel1 8-bit Right aligned data */

/*****************  Bit definition for DAC_DHR12R2 register  ******************/
#define  DAC_DHR12R2_DACC2DHR                (0x0FFF)            /*!< DAC channel2 12-bit Right aligned data */

/*****************  Bit definition for DAC_DHR12L2 register  ******************/
#define  DAC_DHR12L2_DACC2DHR                (0xFFF0)            /*!< DAC channel2 12-bit Left aligned data */

/******************  Bit definition for DAC_DHR8R2 register  ******************/
#define  DAC_DHR8R2_DACC2DHR                 ((uint8_t)0xFF)               /*!< DAC channel2 8-bit Right aligned data */

/*****************  Bit definition for DAC_DHR12RD register  ******************/
#define  DAC_DHR12RD_DACC1DHR                (0x00000FFF)        /*!< DAC channel1 12-bit Right aligned data */
#define  DAC_DHR12RD_DACC2DHR                (0x0FFF0000)        /*!< DAC channel2 12-bit Right aligned data */

/*****************  Bit definition for DAC_DHR12LD register  ******************/
#define  DAC_DHR12LD_DACC1DHR                (0x0000FFF0)        /*!< DAC channel1 12-bit Left aligned data */
#define  DAC_DHR12LD_DACC2DHR                (0xFFF00000)        /*!< DAC channel2 12-bit Left aligned data */

/******************  Bit definition for DAC_DHR8RD register  ******************/
#define  DAC_DHR8RD_DACC1DHR                 (0x00FF)            /*!< DAC channel1 8-bit Right aligned data */
#define  DAC_DHR8RD_DACC2DHR                 (0xFF00)            /*!< DAC channel2 8-bit Right aligned data */

/*******************  Bit definition for DAC_DOR1 register  *******************/
#define  DAC_DOR1_DACC1DOR                   (0x0FFF)            /*!< DAC channel1 data output */

/*******************  Bit definition for DAC_DOR2 register  *******************/
#define  DAC_DOR2_DACC2DOR                   (0x0FFF)            /*!< DAC channel2 data output */

/********************  Bit definition for DAC_SR register  ********************/
#define  DAC_SR_DMAUDR1                      (0x00002000)        /*!< DAC channel1 DMA underrun flag */
#define  DAC_SR_DMAUDR2                      (0x20000000)        /*!< DAC channel2 DMA underrun flag */

/******************************************************************************/
/*                                                                            */
/*                                    CEC                                     */
/*                                                                            */
/******************************************************************************/
/********************  Bit definition for CEC_CFGR register  ******************/
#define  CEC_CFGR_PE              (0x0001)     /*!<  Peripheral Enable */
#define  CEC_CFGR_IE              (0x0002)     /*!<  Interrupt Enable */
#define  CEC_CFGR_BTEM            (0x0004)     /*!<  Bit Timing Error Mode */
#define  CEC_CFGR_BPEM            (0x0008)     /*!<  Bit Period Error Mode */

/********************  Bit definition for CEC_OAR register  ******************/
#define  CEC_OAR_OA               (0x000F)     /*!<  OA[3:0]: Own Address */
#define  CEC_OAR_OA_0             (0x0001)     /*!<  Bit 0 */
#define  CEC_OAR_OA_1             (0x0002)     /*!<  Bit 1 */
#define  CEC_OAR_OA_2             (0x0004)     /*!<  Bit 2 */
#define  CEC_OAR_OA_3             (0x0008)     /*!<  Bit 3 */

/********************  Bit definition for CEC_PRES register  ******************/
#define  CEC_PRES_PRES            (0x3FFF)   /*!<  Prescaler Counter Value */

/********************  Bit definition for CEC_ESR register  ******************/
#define  CEC_ESR_BTE              (0x0001)     /*!<  Bit Timing Error */
#define  CEC_ESR_BPE              (0x0002)     /*!<  Bit Period Error */
#define  CEC_ESR_RBTFE            (0x0004)     /*!<  Rx Block Transfer Finished Error */
#define  CEC_ESR_SBE              (0x0008)     /*!<  Start Bit Error */
#define  CEC_ESR_ACKE             (0x0010)     /*!<  Block Acknowledge Error */
#define  CEC_ESR_LINE             (0x0020)     /*!<  Line Error */
#define  CEC_ESR_TBTFE            (0x0040)     /*!<  Tx Block Transfer Finished Error */

/********************  Bit definition for CEC_CSR register  ******************/
#define  CEC_CSR_TSOM             (0x0001)     /*!<  Tx Start Of Message */
#define  CEC_CSR_TEOM             (0x0002)     /*!<  Tx End Of Message */
#define  CEC_CSR_TERR             (0x0004)     /*!<  Tx Error */
#define  CEC_CSR_TBTRF            (0x0008)     /*!<  Tx Byte Transfer Request or Block Transfer Finished */
#define  CEC_CSR_RSOM             (0x0010)     /*!<  Rx Start Of Message */
#define  CEC_CSR_REOM             (0x0020)     /*!<  Rx End Of Message */
#define  CEC_CSR_RERR             (0x0040)     /*!<  Rx Error */
#define  CEC_CSR_RBTF             (0x0080)     /*!<  Rx Block Transfer Finished */

/********************  Bit definition for CEC_TXD register  ******************/
#define  CEC_TXD_TXD              (0x00FF)     /*!<  Tx Data register */

/********************  Bit definition for CEC_RXD register  ******************/
#define  CEC_RXD_RXD              (0x00FF)     /*!<  Rx Data register */

/******************************************************************************/
/*                                                                            */
/*                                    TIM                                     */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for TIM_CR1 register  ********************/
#define  TIM_CR1_CEN                         (0x0001)            /*!< Counter enable */
#define  TIM_CR1_UDIS                        (0x0002)            /*!< Update disable */
#define  TIM_CR1_URS                         (0x0004)            /*!< Update request source */
#define  TIM_CR1_OPM                         (0x0008)            /*!< One pulse mode */
#define  TIM_CR1_DIR                         (0x0010)            /*!< Direction */

#define  TIM_CR1_CMS                         (0x0060)            /*!< CMS[1:0] bits (Center-aligned mode selection) */
#define  TIM_CR1_CMS_0                       (0x0020)            /*!< Bit 0 */
#define  TIM_CR1_CMS_1                       (0x0040)            /*!< Bit 1 */

#define  TIM_CR1_ARPE                        (0x0080)            /*!< Auto-reload preload enable */

#define  TIM_CR1_CKD                         (0x0300)            /*!< CKD[1:0] bits (clock division) */
#define  TIM_CR1_CKD_0                       (0x0100)            /*!< Bit 0 */
#define  TIM_CR1_CKD_1                       (0x0200)            /*!< Bit 1 */

/*******************  Bit definition for TIM_CR2 register  ********************/
#define  TIM_CR2_CCPC                        (0x0001)            /*!< Capture/Compare Preloaded Control */
#define  TIM_CR2_CCUS                        (0x0004)            /*!< Capture/Compare Control Update Selection */
#define  TIM_CR2_CCDS                        (0x0008)            /*!< Capture/Compare DMA Selection */

#define  TIM_CR2_MMS                         (0x0070)            /*!< MMS[2:0] bits (Master Mode Selection) */
#define  TIM_CR2_MMS_0                       (0x0010)            /*!< Bit 0 */
#define  TIM_CR2_MMS_1                       (0x0020)            /*!< Bit 1 */
#define  TIM_CR2_MMS_2                       (0x0040)            /*!< Bit 2 */

#define  TIM_CR2_TI1S                        (0x0080)            /*!< TI1 Selection */
#define  TIM_CR2_OIS1                        (0x0100)            /*!< Output Idle state 1 (OC1 output) */
#define  TIM_CR2_OIS1N                       (0x0200)            /*!< Output Idle state 1 (OC1N output) */
#define  TIM_CR2_OIS2                        (0x0400)            /*!< Output Idle state 2 (OC2 output) */
#define  TIM_CR2_OIS2N                       (0x0800)            /*!< Output Idle state 2 (OC2N output) */
#define  TIM_CR2_OIS3                        (0x1000)            /*!< Output Idle state 3 (OC3 output) */
#define  TIM_CR2_OIS3N                       (0x2000)            /*!< Output Idle state 3 (OC3N output) */
#define  TIM_CR2_OIS4                        (0x4000)            /*!< Output Idle state 4 (OC4 output) */

/*******************  Bit definition for TIM_SMCR register  *******************/
#define  TIM_SMCR_SMS                        (0x0007)            /*!< SMS[2:0] bits (Slave mode selection) */
#define  TIM_SMCR_SMS_0                      (0x0001)            /*!< Bit 0 */
#define  TIM_SMCR_SMS_1                      (0x0002)            /*!< Bit 1 */
#define  TIM_SMCR_SMS_2                      (0x0004)            /*!< Bit 2 */

#define  TIM_SMCR_TS                         (0x0070)            /*!< TS[2:0] bits (Trigger selection) */
#define  TIM_SMCR_TS_0                       (0x0010)            /*!< Bit 0 */
#define  TIM_SMCR_TS_1                       (0x0020)            /*!< Bit 1 */
#define  TIM_SMCR_TS_2                       (0x0040)            /*!< Bit 2 */

#define  TIM_SMCR_MSM                        (0x0080)            /*!< Master/slave mode */

#define  TIM_SMCR_ETF                        (0x0F00)            /*!< ETF[3:0] bits (External trigger filter) */
#define  TIM_SMCR_ETF_0                      (0x0100)            /*!< Bit 0 */
#define  TIM_SMCR_ETF_1                      (0x0200)            /*!< Bit 1 */
#define  TIM_SMCR_ETF_2                      (0x0400)            /*!< Bit 2 */
#define  TIM_SMCR_ETF_3                      (0x0800)            /*!< Bit 3 */

#define  TIM_SMCR_ETPS                       (0x3000)            /*!< ETPS[1:0] bits (External trigger prescaler) */
#define  TIM_SMCR_ETPS_0                     (0x1000)            /*!< Bit 0 */
#define  TIM_SMCR_ETPS_1                     (0x2000)            /*!< Bit 1 */

#define  TIM_SMCR_ECE                        (0x4000)            /*!< External clock enable */
#define  TIM_SMCR_ETP                        (0x8000)            /*!< External trigger polarity */

/*******************  Bit definition for TIM_DIER register  *******************/
#define  TIM_DIER_UIE                        (0x0001)            /*!< Update interrupt enable */
#define  TIM_DIER_CC1IE                      (0x0002)            /*!< Capture/Compare 1 interrupt enable */
#define  TIM_DIER_CC2IE                      (0x0004)            /*!< Capture/Compare 2 interrupt enable */
#define  TIM_DIER_CC3IE                      (0x0008)            /*!< Capture/Compare 3 interrupt enable */
#define  TIM_DIER_CC4IE                      (0x0010)            /*!< Capture/Compare 4 interrupt enable */
#define  TIM_DIER_COMIE                      (0x0020)            /*!< COM interrupt enable */
#define  TIM_DIER_TIE                        (0x0040)            /*!< Trigger interrupt enable */
#define  TIM_DIER_BIE                        (0x0080)            /*!< Break interrupt enable */
#define  TIM_DIER_UDE                        (0x0100)            /*!< Update DMA request enable */
#define  TIM_DIER_CC1DE                      (0x0200)            /*!< Capture/Compare 1 DMA request enable */
#define  TIM_DIER_CC2DE                      (0x0400)            /*!< Capture/Compare 2 DMA request enable */
#define  TIM_DIER_CC3DE                      (0x0800)            /*!< Capture/Compare 3 DMA request enable */
#define  TIM_DIER_CC4DE                      (0x1000)            /*!< Capture/Compare 4 DMA request enable */
#define  TIM_DIER_COMDE                      (0x2000)            /*!< COM DMA request enable */
#define  TIM_DIER_TDE                        (0x4000)            /*!< Trigger DMA request enable */

/********************  Bit definition for TIM_SR register  ********************/
#define  TIM_SR_UIF                          (0x0001)            /*!< Update interrupt Flag */
#define  TIM_SR_CC1IF                        (0x0002)            /*!< Capture/Compare 1 interrupt Flag */
#define  TIM_SR_CC2IF                        (0x0004)            /*!< Capture/Compare 2 interrupt Flag */
#define  TIM_SR_CC3IF                        (0x0008)            /*!< Capture/Compare 3 interrupt Flag */
#define  TIM_SR_CC4IF                        (0x0010)            /*!< Capture/Compare 4 interrupt Flag */
#define  TIM_SR_COMIF                        (0x0020)            /*!< COM interrupt Flag */
#define  TIM_SR_TIF                          (0x0040)            /*!< Trigger interrupt Flag */
#define  TIM_SR_BIF                          (0x0080)            /*!< Break interrupt Flag */
#define  TIM_SR_CC1OF                        (0x0200)            /*!< Capture/Compare 1 Overcapture Flag */
#define  TIM_SR_CC2OF                        (0x0400)            /*!< Capture/Compare 2 Overcapture Flag */
#define  TIM_SR_CC3OF                        (0x0800)            /*!< Capture/Compare 3 Overcapture Flag */
#define  TIM_SR_CC4OF                        (0x1000)            /*!< Capture/Compare 4 Overcapture Flag */

/*******************  Bit definition for TIM_EGR register  ********************/
#define  TIM_EGR_UG                          ((uint8_t)0x01)               /*!< Update Generation */
#define  TIM_EGR_CC1G                        ((uint8_t)0x02)               /*!< Capture/Compare 1 Generation */
#define  TIM_EGR_CC2G                        ((uint8_t)0x04)               /*!< Capture/Compare 2 Generation */
#define  TIM_EGR_CC3G                        ((uint8_t)0x08)               /*!< Capture/Compare 3 Generation */
#define  TIM_EGR_CC4G                        ((uint8_t)0x10)               /*!< Capture/Compare 4 Generation */
#define  TIM_EGR_COMG                        ((uint8_t)0x20)               /*!< Capture/Compare Control Update Generation */
#define  TIM_EGR_TG                          ((uint8_t)0x40)               /*!< Trigger Generation */
#define  TIM_EGR_BG                          ((uint8_t)0x80)               /*!< Break Generation */

/******************  Bit definition for TIM_CCMR1 register  *******************/
#define  TIM_CCMR1_CC1S                      (0x0003)            /*!< CC1S[1:0] bits (Capture/Compare 1 Selection) */
#define  TIM_CCMR1_CC1S_0                    (0x0001)            /*!< Bit 0 */
#define  TIM_CCMR1_CC1S_1                    (0x0002)            /*!< Bit 1 */

#define  TIM_CCMR1_OC1FE                     (0x0004)            /*!< Output Compare 1 Fast enable */
#define  TIM_CCMR1_OC1PE                     (0x0008)            /*!< Output Compare 1 Preload enable */

#define  TIM_CCMR1_OC1M                      (0x0070)            /*!< OC1M[2:0] bits (Output Compare 1 Mode) */
#define  TIM_CCMR1_OC1M_0                    (0x0010)            /*!< Bit 0 */
#define  TIM_CCMR1_OC1M_1                    (0x0020)            /*!< Bit 1 */
#define  TIM_CCMR1_OC1M_2                    (0x0040)            /*!< Bit 2 */

#define  TIM_CCMR1_OC1CE                     (0x0080)            /*!< Output Compare 1Clear Enable */

#define  TIM_CCMR1_CC2S                      (0x0300)            /*!< CC2S[1:0] bits (Capture/Compare 2 Selection) */
#define  TIM_CCMR1_CC2S_0                    (0x0100)            /*!< Bit 0 */
#define  TIM_CCMR1_CC2S_1                    (0x0200)            /*!< Bit 1 */

#define  TIM_CCMR1_OC2FE                     (0x0400)            /*!< Output Compare 2 Fast enable */
#define  TIM_CCMR1_OC2PE                     (0x0800)            /*!< Output Compare 2 Preload enable */

#define  TIM_CCMR1_OC2M                      (0x7000)            /*!< OC2M[2:0] bits (Output Compare 2 Mode) */
#define  TIM_CCMR1_OC2M_0                    (0x1000)            /*!< Bit 0 */
#define  TIM_CCMR1_OC2M_1                    (0x2000)            /*!< Bit 1 */
#define  TIM_CCMR1_OC2M_2                    (0x4000)            /*!< Bit 2 */

#define  TIM_CCMR1_OC2CE                     (0x8000)            /*!< Output Compare 2 Clear Enable */

/*----------------------------------------------------------------------------*/

#define  TIM_CCMR1_IC1PSC                    (0x000C)            /*!< IC1PSC[1:0] bits (Input Capture 1 Prescaler) */
#define  TIM_CCMR1_IC1PSC_0                  (0x0004)            /*!< Bit 0 */
#define  TIM_CCMR1_IC1PSC_1                  (0x0008)            /*!< Bit 1 */

#define  TIM_CCMR1_IC1F                      (0x00F0)            /*!< IC1F[3:0] bits (Input Capture 1 Filter) */
#define  TIM_CCMR1_IC1F_0                    (0x0010)            /*!< Bit 0 */
#define  TIM_CCMR1_IC1F_1                    (0x0020)            /*!< Bit 1 */
#define  TIM_CCMR1_IC1F_2                    (0x0040)            /*!< Bit 2 */
#define  TIM_CCMR1_IC1F_3                    (0x0080)            /*!< Bit 3 */

#define  TIM_CCMR1_IC2PSC                    (0x0C00)            /*!< IC2PSC[1:0] bits (Input Capture 2 Prescaler) */
#define  TIM_CCMR1_IC2PSC_0                  (0x0400)            /*!< Bit 0 */
#define  TIM_CCMR1_IC2PSC_1                  (0x0800)            /*!< Bit 1 */

#define  TIM_CCMR1_IC2F                      (0xF000)            /*!< IC2F[3:0] bits (Input Capture 2 Filter) */
#define  TIM_CCMR1_IC2F_0                    (0x1000)            /*!< Bit 0 */
#define  TIM_CCMR1_IC2F_1                    (0x2000)            /*!< Bit 1 */
#define  TIM_CCMR1_IC2F_2                    (0x4000)            /*!< Bit 2 */
#define  TIM_CCMR1_IC2F_3                    (0x8000)            /*!< Bit 3 */

/******************  Bit definition for TIM_CCMR2 register  *******************/
#define  TIM_CCMR2_CC3S                      (0x0003)            /*!< CC3S[1:0] bits (Capture/Compare 3 Selection) */
#define  TIM_CCMR2_CC3S_0                    (0x0001)            /*!< Bit 0 */
#define  TIM_CCMR2_CC3S_1                    (0x0002)            /*!< Bit 1 */

#define  TIM_CCMR2_OC3FE                     (0x0004)            /*!< Output Compare 3 Fast enable */
#define  TIM_CCMR2_OC3PE                     (0x0008)            /*!< Output Compare 3 Preload enable */

#define  TIM_CCMR2_OC3M                      (0x0070)            /*!< OC3M[2:0] bits (Output Compare 3 Mode) */
#define  TIM_CCMR2_OC3M_0                    (0x0010)            /*!< Bit 0 */
#define  TIM_CCMR2_OC3M_1                    (0x0020)            /*!< Bit 1 */
#define  TIM_CCMR2_OC3M_2                    (0x0040)            /*!< Bit 2 */

#define  TIM_CCMR2_OC3CE                     (0x0080)            /*!< Output Compare 3 Clear Enable */

#define  TIM_CCMR2_CC4S                      (0x0300)            /*!< CC4S[1:0] bits (Capture/Compare 4 Selection) */
#define  TIM_CCMR2_CC4S_0                    (0x0100)            /*!< Bit 0 */
#define  TIM_CCMR2_CC4S_1                    (0x0200)            /*!< Bit 1 */

#define  TIM_CCMR2_OC4FE                     (0x0400)            /*!< Output Compare 4 Fast enable */
#define  TIM_CCMR2_OC4PE                     (0x0800)            /*!< Output Compare 4 Preload enable */

#define  TIM_CCMR2_OC4M                      (0x7000)            /*!< OC4M[2:0] bits (Output Compare 4 Mode) */
#define  TIM_CCMR2_OC4M_0                    (0x1000)            /*!< Bit 0 */
#define  TIM_CCMR2_OC4M_1                    (0x2000)            /*!< Bit 1 */
#define  TIM_CCMR2_OC4M_2                    (0x4000)            /*!< Bit 2 */

#define  TIM_CCMR2_OC4CE                     (0x8000)            /*!< Output Compare 4 Clear Enable */

/*----------------------------------------------------------------------------*/

#define  TIM_CCMR2_IC3PSC                    (0x000C)            /*!< IC3PSC[1:0] bits (Input Capture 3 Prescaler) */
#define  TIM_CCMR2_IC3PSC_0                  (0x0004)            /*!< Bit 0 */
#define  TIM_CCMR2_IC3PSC_1                  (0x0008)            /*!< Bit 1 */

#define  TIM_CCMR2_IC3F                      (0x00F0)            /*!< IC3F[3:0] bits (Input Capture 3 Filter) */
#define  TIM_CCMR2_IC3F_0                    (0x0010)            /*!< Bit 0 */
#define  TIM_CCMR2_IC3F_1                    (0x0020)            /*!< Bit 1 */
#define  TIM_CCMR2_IC3F_2                    (0x0040)            /*!< Bit 2 */
#define  TIM_CCMR2_IC3F_3                    (0x0080)            /*!< Bit 3 */

#define  TIM_CCMR2_IC4PSC                    (0x0C00)            /*!< IC4PSC[1:0] bits (Input Capture 4 Prescaler) */
#define  TIM_CCMR2_IC4PSC_0                  (0x0400)            /*!< Bit 0 */
#define  TIM_CCMR2_IC4PSC_1                  (0x0800)            /*!< Bit 1 */

#define  TIM_CCMR2_IC4F                      (0xF000)            /*!< IC4F[3:0] bits (Input Capture 4 Filter) */
#define  TIM_CCMR2_IC4F_0                    (0x1000)            /*!< Bit 0 */
#define  TIM_CCMR2_IC4F_1                    (0x2000)            /*!< Bit 1 */
#define  TIM_CCMR2_IC4F_2                    (0x4000)            /*!< Bit 2 */
#define  TIM_CCMR2_IC4F_3                    (0x8000)            /*!< Bit 3 */

/*******************  Bit definition for TIM_CCER register  *******************/
#define  TIM_CCER_CC1E                       (0x0001)            /*!< Capture/Compare 1 output enable */
#define  TIM_CCER_CC1P                       (0x0002)            /*!< Capture/Compare 1 output Polarity */
#define  TIM_CCER_CC1NE                      (0x0004)            /*!< Capture/Compare 1 Complementary output enable */
#define  TIM_CCER_CC1NP                      (0x0008)            /*!< Capture/Compare 1 Complementary output Polarity */
#define  TIM_CCER_CC2E                       (0x0010)            /*!< Capture/Compare 2 output enable */
#define  TIM_CCER_CC2P                       (0x0020)            /*!< Capture/Compare 2 output Polarity */
#define  TIM_CCER_CC2NE                      (0x0040)            /*!< Capture/Compare 2 Complementary output enable */
#define  TIM_CCER_CC2NP                      (0x0080)            /*!< Capture/Compare 2 Complementary output Polarity */
#define  TIM_CCER_CC3E                       (0x0100)            /*!< Capture/Compare 3 output enable */
#define  TIM_CCER_CC3P                       (0x0200)            /*!< Capture/Compare 3 output Polarity */
#define  TIM_CCER_CC3NE                      (0x0400)            /*!< Capture/Compare 3 Complementary output enable */
#define  TIM_CCER_CC3NP                      (0x0800)            /*!< Capture/Compare 3 Complementary output Polarity */
#define  TIM_CCER_CC4E                       (0x1000)            /*!< Capture/Compare 4 output enable */
#define  TIM_CCER_CC4P                       (0x2000)            /*!< Capture/Compare 4 output Polarity */
#define  TIM_CCER_CC4NP                      (0x8000)            /*!< Capture/Compare 4 Complementary output Polarity */

/*******************  Bit definition for TIM_CNT register  ********************/
#define  TIM_CNT_CNT                         (0xFFFF)            /*!< Counter Value */

/*******************  Bit definition for TIM_PSC register  ********************/
#define  TIM_PSC_PSC                         (0xFFFF)            /*!< Prescaler Value */

/*******************  Bit definition for TIM_ARR register  ********************/
#define  TIM_ARR_ARR                         (0xFFFF)            /*!< actual auto-reload Value */

/*******************  Bit definition for TIM_RCR register  ********************/
#define  TIM_RCR_REP                         ((uint8_t)0xFF)               /*!< Repetition Counter Value */

/*******************  Bit definition for TIM_CCR1 register  *******************/
#define  TIM_CCR1_CCR1                       (0xFFFF)            /*!< Capture/Compare 1 Value */

/*******************  Bit definition for TIM_CCR2 register  *******************/
#define  TIM_CCR2_CCR2                       (0xFFFF)            /*!< Capture/Compare 2 Value */

/*******************  Bit definition for TIM_CCR3 register  *******************/
#define  TIM_CCR3_CCR3                       (0xFFFF)            /*!< Capture/Compare 3 Value */

/*******************  Bit definition for TIM_CCR4 register  *******************/
#define  TIM_CCR4_CCR4                       (0xFFFF)            /*!< Capture/Compare 4 Value */

/*******************  Bit definition for TIM_BDTR register  *******************/
#define  TIM_BDTR_DTG                        (0x00FF)            /*!< DTG[0:7] bits (Dead-Time Generator set-up) */
#define  TIM_BDTR_DTG_0                      (0x0001)            /*!< Bit 0 */
#define  TIM_BDTR_DTG_1                      (0x0002)            /*!< Bit 1 */
#define  TIM_BDTR_DTG_2                      (0x0004)            /*!< Bit 2 */
#define  TIM_BDTR_DTG_3                      (0x0008)            /*!< Bit 3 */
#define  TIM_BDTR_DTG_4                      (0x0010)            /*!< Bit 4 */
#define  TIM_BDTR_DTG_5                      (0x0020)            /*!< Bit 5 */
#define  TIM_BDTR_DTG_6                      (0x0040)            /*!< Bit 6 */
#define  TIM_BDTR_DTG_7                      (0x0080)            /*!< Bit 7 */

#define  TIM_BDTR_LOCK                       (0x0300)            /*!< LOCK[1:0] bits (Lock Configuration) */
#define  TIM_BDTR_LOCK_0                     (0x0100)            /*!< Bit 0 */
#define  TIM_BDTR_LOCK_1                     (0x0200)            /*!< Bit 1 */

#define  TIM_BDTR_OSSI                       (0x0400)            /*!< Off-State Selection for Idle mode */
#define  TIM_BDTR_OSSR                       (0x0800)            /*!< Off-State Selection for Run mode */
#define  TIM_BDTR_BKE                        (0x1000)            /*!< Break enable */
#define  TIM_BDTR_BKP                        (0x2000)            /*!< Break Polarity */
#define  TIM_BDTR_AOE                        (0x4000)            /*!< Automatic Output enable */
#define  TIM_BDTR_MOE                        (0x8000)            /*!< Main Output enable */

/*******************  Bit definition for TIM_DCR register  ********************/
#define  TIM_DCR_DBA                         (0x001F)            /*!< DBA[4:0] bits (DMA Base Address) */
#define  TIM_DCR_DBA_0                       (0x0001)            /*!< Bit 0 */
#define  TIM_DCR_DBA_1                       (0x0002)            /*!< Bit 1 */
#define  TIM_DCR_DBA_2                       (0x0004)            /*!< Bit 2 */
#define  TIM_DCR_DBA_3                       (0x0008)            /*!< Bit 3 */
#define  TIM_DCR_DBA_4                       (0x0010)            /*!< Bit 4 */

#define  TIM_DCR_DBL                         (0x1F00)            /*!< DBL[4:0] bits (DMA Burst Length) */
#define  TIM_DCR_DBL_0                       (0x0100)            /*!< Bit 0 */
#define  TIM_DCR_DBL_1                       (0x0200)            /*!< Bit 1 */
#define  TIM_DCR_DBL_2                       (0x0400)            /*!< Bit 2 */
#define  TIM_DCR_DBL_3                       (0x0800)            /*!< Bit 3 */
#define  TIM_DCR_DBL_4                       (0x1000)            /*!< Bit 4 */

/*******************  Bit definition for TIM_DMAR register  *******************/
#define  TIM_DMAR_DMAB                       (0xFFFF)            /*!< DMA register for burst accesses */

/******************************************************************************/
/*                                                                            */
/*                             Real-Time Clock                                */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for RTC_CRH register  ********************/
#define  RTC_CRH_SECIE                       ((uint8_t)0x01)               /*!< Second Interrupt Enable */
#define  RTC_CRH_ALRIE                       ((uint8_t)0x02)               /*!< Alarm Interrupt Enable */
#define  RTC_CRH_OWIE                        ((uint8_t)0x04)               /*!< OverfloW Interrupt Enable */

/*******************  Bit definition for RTC_CRL register  ********************/
#define  RTC_CRL_SECF                        ((uint8_t)0x01)               /*!< Second Flag */
#define  RTC_CRL_ALRF                        ((uint8_t)0x02)               /*!< Alarm Flag */
#define  RTC_CRL_OWF                         ((uint8_t)0x04)               /*!< OverfloW Flag */
#define  RTC_CRL_RSF                         ((uint8_t)0x08)               /*!< Registers Synchronized Flag */
#define  RTC_CRL_CNF                         ((uint8_t)0x10)               /*!< Configuration Flag */
#define  RTC_CRL_RTOFF                       ((uint8_t)0x20)               /*!< RTC operation OFF */

/*******************  Bit definition for RTC_PRLH register  *******************/
#define  RTC_PRLH_PRL                        (0x000F)            /*!< RTC Prescaler Reload Value High */

/*******************  Bit definition for RTC_PRLL register  *******************/
#define  RTC_PRLL_PRL                        (0xFFFF)            /*!< RTC Prescaler Reload Value Low */

/*******************  Bit definition for RTC_DIVH register  *******************/
#define  RTC_DIVH_RTC_DIV                    (0x000F)            /*!< RTC Clock Divider High */

/*******************  Bit definition for RTC_DIVL register  *******************/
#define  RTC_DIVL_RTC_DIV                    (0xFFFF)            /*!< RTC Clock Divider Low */

/*******************  Bit definition for RTC_CNTH register  *******************/
#define  RTC_CNTH_RTC_CNT                    (0xFFFF)            /*!< RTC Counter High */

/*******************  Bit definition for RTC_CNTL register  *******************/
#define  RTC_CNTL_RTC_CNT                    (0xFFFF)            /*!< RTC Counter Low */

/*******************  Bit definition for RTC_ALRH register  *******************/
#define  RTC_ALRH_RTC_ALR                    (0xFFFF)            /*!< RTC Alarm High */

/*******************  Bit definition for RTC_ALRL register  *******************/
#define  RTC_ALRL_RTC_ALR                    (0xFFFF)            /*!< RTC Alarm Low */

/******************************************************************************/
/*                                                                            */
/*                           Independent WATCHDOG                             */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for IWDG_KR register  ********************/
#define  IWDG_KR_KEY                         (0xFFFF)            /*!< Key value (write only, read 0000h) */

/*******************  Bit definition for IWDG_PR register  ********************/
#define  IWDG_PR_PR                          ((uint8_t)0x07)               /*!< PR[2:0] (Prescaler divider) */
#define  IWDG_PR_PR_0                        ((uint8_t)0x01)               /*!< Bit 0 */
#define  IWDG_PR_PR_1                        ((uint8_t)0x02)               /*!< Bit 1 */
#define  IWDG_PR_PR_2                        ((uint8_t)0x04)               /*!< Bit 2 */

/*******************  Bit definition for IWDG_RLR register  *******************/
#define  IWDG_RLR_RL                         (0x0FFF)            /*!< Watchdog counter reload value */

/*******************  Bit definition for IWDG_SR register  ********************/
#define  IWDG_SR_PVU                         ((uint8_t)0x01)               /*!< Watchdog prescaler value update */
#define  IWDG_SR_RVU                         ((uint8_t)0x02)               /*!< Watchdog counter reload value update */

/******************************************************************************/
/*                                                                            */
/*                            Window WATCHDOG                                 */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for WWDG_CR register  ********************/
#define  WWDG_CR_T                           ((uint8_t)0x7F)               /*!< T[6:0] bits (7-Bit counter (MSB to LSB)) */
#define  WWDG_CR_T0                          ((uint8_t)0x01)               /*!< Bit 0 */
#define  WWDG_CR_T1                          ((uint8_t)0x02)               /*!< Bit 1 */
#define  WWDG_CR_T2                          ((uint8_t)0x04)               /*!< Bit 2 */
#define  WWDG_CR_T3                          ((uint8_t)0x08)               /*!< Bit 3 */
#define  WWDG_CR_T4                          ((uint8_t)0x10)               /*!< Bit 4 */
#define  WWDG_CR_T5                          ((uint8_t)0x20)               /*!< Bit 5 */
#define  WWDG_CR_T6                          ((uint8_t)0x40)               /*!< Bit 6 */

#define  WWDG_CR_WDGA                        ((uint8_t)0x80)               /*!< Activation bit */

/*******************  Bit definition for WWDG_CFR register  *******************/
#define  WWDG_CFR_W                          (0x007F)            /*!< W[6:0] bits (7-bit window value) */
#define  WWDG_CFR_W0                         (0x0001)            /*!< Bit 0 */
#define  WWDG_CFR_W1                         (0x0002)            /*!< Bit 1 */
#define  WWDG_CFR_W2                         (0x0004)            /*!< Bit 2 */
#define  WWDG_CFR_W3                         (0x0008)            /*!< Bit 3 */
#define  WWDG_CFR_W4                         (0x0010)            /*!< Bit 4 */
#define  WWDG_CFR_W5                         (0x0020)            /*!< Bit 5 */
#define  WWDG_CFR_W6                         (0x0040)            /*!< Bit 6 */

#define  WWDG_CFR_WDGTB                      (0x0180)            /*!< WDGTB[1:0] bits (Timer Base) */
#define  WWDG_CFR_WDGTB0                     (0x0080)            /*!< Bit 0 */
#define  WWDG_CFR_WDGTB1                     (0x0100)            /*!< Bit 1 */

#define  WWDG_CFR_EWI                        (0x0200)            /*!< Early Wakeup Interrupt */

/*******************  Bit definition for WWDG_SR register  ********************/
#define  WWDG_SR_EWIF                        ((uint8_t)0x01)               /*!< Early Wakeup Interrupt Flag */

/******************************************************************************/
/*                                                                            */
/*                       Flexible Static Memory Controller                    */
/*                                                                            */
/******************************************************************************/

/******************  Bit definition for FSMC_BCR1 register  *******************/
#define  FSMC_BCR1_MBKEN                     (0x00000001)        /*!< Memory bank enable bit */
#define  FSMC_BCR1_MUXEN                     (0x00000002)        /*!< Address/data multiplexing enable bit */

#define  FSMC_BCR1_MTYP                      (0x0000000C)        /*!< MTYP[1:0] bits (Memory type) */
#define  FSMC_BCR1_MTYP_0                    (0x00000004)        /*!< Bit 0 */
#define  FSMC_BCR1_MTYP_1                    (0x00000008)        /*!< Bit 1 */

#define  FSMC_BCR1_MWID                      (0x00000030)        /*!< MWID[1:0] bits (Memory data bus width) */
#define  FSMC_BCR1_MWID_0                    (0x00000010)        /*!< Bit 0 */
#define  FSMC_BCR1_MWID_1                    (0x00000020)        /*!< Bit 1 */

#define  FSMC_BCR1_FACCEN                    (0x00000040)        /*!< Flash access enable */
#define  FSMC_BCR1_BURSTEN                   (0x00000100)        /*!< Burst enable bit */
#define  FSMC_BCR1_WAITPOL                   (0x00000200)        /*!< Wait signal polarity bit */
#define  FSMC_BCR1_WRAPMOD                   (0x00000400)        /*!< Wrapped burst mode support */
#define  FSMC_BCR1_WAITCFG                   (0x00000800)        /*!< Wait timing configuration */
#define  FSMC_BCR1_WREN                      (0x00001000)        /*!< Write enable bit */
#define  FSMC_BCR1_WAITEN                    (0x00002000)        /*!< Wait enable bit */
#define  FSMC_BCR1_EXTMOD                    (0x00004000)        /*!< Extended mode enable */
#define  FSMC_BCR1_ASYNCWAIT                 (0x00008000)       /*!< Asynchronous wait */
#define  FSMC_BCR1_CBURSTRW                  (0x00080000)        /*!< Write burst enable */

/******************  Bit definition for FSMC_BCR2 register  *******************/
#define  FSMC_BCR2_MBKEN                     (0x00000001)        /*!< Memory bank enable bit */
#define  FSMC_BCR2_MUXEN                     (0x00000002)        /*!< Address/data multiplexing enable bit */

#define  FSMC_BCR2_MTYP                      (0x0000000C)        /*!< MTYP[1:0] bits (Memory type) */
#define  FSMC_BCR2_MTYP_0                    (0x00000004)        /*!< Bit 0 */
#define  FSMC_BCR2_MTYP_1                    (0x00000008)        /*!< Bit 1 */

#define  FSMC_BCR2_MWID                      (0x00000030)        /*!< MWID[1:0] bits (Memory data bus width) */
#define  FSMC_BCR2_MWID_0                    (0x00000010)        /*!< Bit 0 */
#define  FSMC_BCR2_MWID_1                    (0x00000020)        /*!< Bit 1 */

#define  FSMC_BCR2_FACCEN                    (0x00000040)        /*!< Flash access enable */
#define  FSMC_BCR2_BURSTEN                   (0x00000100)        /*!< Burst enable bit */
#define  FSMC_BCR2_WAITPOL                   (0x00000200)        /*!< Wait signal polarity bit */
#define  FSMC_BCR2_WRAPMOD                   (0x00000400)        /*!< Wrapped burst mode support */
#define  FSMC_BCR2_WAITCFG                   (0x00000800)        /*!< Wait timing configuration */
#define  FSMC_BCR2_WREN                      (0x00001000)        /*!< Write enable bit */
#define  FSMC_BCR2_WAITEN                    (0x00002000)        /*!< Wait enable bit */
#define  FSMC_BCR2_EXTMOD                    (0x00004000)        /*!< Extended mode enable */
#define  FSMC_BCR2_ASYNCWAIT                 (0x00008000)       /*!< Asynchronous wait */
#define  FSMC_BCR2_CBURSTRW                  (0x00080000)        /*!< Write burst enable */

/******************  Bit definition for FSMC_BCR3 register  *******************/
#define  FSMC_BCR3_MBKEN                     (0x00000001)        /*!< Memory bank enable bit */
#define  FSMC_BCR3_MUXEN                     (0x00000002)        /*!< Address/data multiplexing enable bit */

#define  FSMC_BCR3_MTYP                      (0x0000000C)        /*!< MTYP[1:0] bits (Memory type) */
#define  FSMC_BCR3_MTYP_0                    (0x00000004)        /*!< Bit 0 */
#define  FSMC_BCR3_MTYP_1                    (0x00000008)        /*!< Bit 1 */

#define  FSMC_BCR3_MWID                      (0x00000030)        /*!< MWID[1:0] bits (Memory data bus width) */
#define  FSMC_BCR3_MWID_0                    (0x00000010)        /*!< Bit 0 */
#define  FSMC_BCR3_MWID_1                    (0x00000020)        /*!< Bit 1 */

#define  FSMC_BCR3_FACCEN                    (0x00000040)        /*!< Flash access enable */
#define  FSMC_BCR3_BURSTEN                   (0x00000100)        /*!< Burst enable bit */
#define  FSMC_BCR3_WAITPOL                   (0x00000200)        /*!< Wait signal polarity bit. */
#define  FSMC_BCR3_WRAPMOD                   (0x00000400)        /*!< Wrapped burst mode support */
#define  FSMC_BCR3_WAITCFG                   (0x00000800)        /*!< Wait timing configuration */
#define  FSMC_BCR3_WREN                      (0x00001000)        /*!< Write enable bit */
#define  FSMC_BCR3_WAITEN                    (0x00002000)        /*!< Wait enable bit */
#define  FSMC_BCR3_EXTMOD                    (0x00004000)        /*!< Extended mode enable */
#define  FSMC_BCR3_ASYNCWAIT                 (0x00008000)       /*!< Asynchronous wait */
#define  FSMC_BCR3_CBURSTRW                  (0x00080000)        /*!< Write burst enable */

/******************  Bit definition for FSMC_BCR4 register  *******************/
#define  FSMC_BCR4_MBKEN                     (0x00000001)        /*!< Memory bank enable bit */
#define  FSMC_BCR4_MUXEN                     (0x00000002)        /*!< Address/data multiplexing enable bit */

#define  FSMC_BCR4_MTYP                      (0x0000000C)        /*!< MTYP[1:0] bits (Memory type) */
#define  FSMC_BCR4_MTYP_0                    (0x00000004)        /*!< Bit 0 */
#define  FSMC_BCR4_MTYP_1                    (0x00000008)        /*!< Bit 1 */

#define  FSMC_BCR4_MWID                      (0x00000030)        /*!< MWID[1:0] bits (Memory data bus width) */
#define  FSMC_BCR4_MWID_0                    (0x00000010)        /*!< Bit 0 */
#define  FSMC_BCR4_MWID_1                    (0x00000020)        /*!< Bit 1 */

#define  FSMC_BCR4_FACCEN                    (0x00000040)        /*!< Flash access enable */
#define  FSMC_BCR4_BURSTEN                   (0x00000100)        /*!< Burst enable bit */
#define  FSMC_BCR4_WAITPOL                   (0x00000200)        /*!< Wait signal polarity bit */
#define  FSMC_BCR4_WRAPMOD                   (0x00000400)        /*!< Wrapped burst mode support */
#define  FSMC_BCR4_WAITCFG                   (0x00000800)        /*!< Wait timing configuration */
#define  FSMC_BCR4_WREN                      (0x00001000)        /*!< Write enable bit */
#define  FSMC_BCR4_WAITEN                    (0x00002000)        /*!< Wait enable bit */
#define  FSMC_BCR4_EXTMOD                    (0x00004000)        /*!< Extended mode enable */
#define  FSMC_BCR4_ASYNCWAIT                 (0x00008000)       /*!< Asynchronous wait */
#define  FSMC_BCR4_CBURSTRW                  (0x00080000)        /*!< Write burst enable */

/******************  Bit definition for FSMC_BTR1 register  ******************/
#define  FSMC_BTR1_ADDSET                    (0x0000000F)        /*!< ADDSET[3:0] bits (Address setup phase duration) */
#define  FSMC_BTR1_ADDSET_0                  (0x00000001)        /*!< Bit 0 */
#define  FSMC_BTR1_ADDSET_1                  (0x00000002)        /*!< Bit 1 */
#define  FSMC_BTR1_ADDSET_2                  (0x00000004)        /*!< Bit 2 */
#define  FSMC_BTR1_ADDSET_3                  (0x00000008)        /*!< Bit 3 */

#define  FSMC_BTR1_ADDHLD                    (0x000000F0)        /*!< ADDHLD[3:0] bits (Address-hold phase duration) */
#define  FSMC_BTR1_ADDHLD_0                  (0x00000010)        /*!< Bit 0 */
#define  FSMC_BTR1_ADDHLD_1                  (0x00000020)        /*!< Bit 1 */
#define  FSMC_BTR1_ADDHLD_2                  (0x00000040)        /*!< Bit 2 */
#define  FSMC_BTR1_ADDHLD_3                  (0x00000080)        /*!< Bit 3 */

#define  FSMC_BTR1_DATAST                    (0x0000FF00)        /*!< DATAST [3:0] bits (Data-phase duration) */
#define  FSMC_BTR1_DATAST_0                  (0x00000100)        /*!< Bit 0 */
#define  FSMC_BTR1_DATAST_1                  (0x00000200)        /*!< Bit 1 */
#define  FSMC_BTR1_DATAST_2                  (0x00000400)        /*!< Bit 2 */
#define  FSMC_BTR1_DATAST_3                  (0x00000800)        /*!< Bit 3 */

#define  FSMC_BTR1_BUSTURN                   (0x000F0000)        /*!< BUSTURN[3:0] bits (Bus turnaround phase duration) */
#define  FSMC_BTR1_BUSTURN_0                 (0x00010000)        /*!< Bit 0 */
#define  FSMC_BTR1_BUSTURN_1                 (0x00020000)        /*!< Bit 1 */
#define  FSMC_BTR1_BUSTURN_2                 (0x00040000)        /*!< Bit 2 */
#define  FSMC_BTR1_BUSTURN_3                 (0x00080000)        /*!< Bit 3 */

#define  FSMC_BTR1_CLKDIV                    (0x00F00000)        /*!< CLKDIV[3:0] bits (Clock divide ratio) */
#define  FSMC_BTR1_CLKDIV_0                  (0x00100000)        /*!< Bit 0 */
#define  FSMC_BTR1_CLKDIV_1                  (0x00200000)        /*!< Bit 1 */
#define  FSMC_BTR1_CLKDIV_2                  (0x00400000)        /*!< Bit 2 */
#define  FSMC_BTR1_CLKDIV_3                  (0x00800000)        /*!< Bit 3 */

#define  FSMC_BTR1_DATLAT                    (0x0F000000)        /*!< DATLA[3:0] bits (Data latency) */
#define  FSMC_BTR1_DATLAT_0                  (0x01000000)        /*!< Bit 0 */
#define  FSMC_BTR1_DATLAT_1                  (0x02000000)        /*!< Bit 1 */
#define  FSMC_BTR1_DATLAT_2                  (0x04000000)        /*!< Bit 2 */
#define  FSMC_BTR1_DATLAT_3                  (0x08000000)        /*!< Bit 3 */

#define  FSMC_BTR1_ACCMOD                    (0x30000000)        /*!< ACCMOD[1:0] bits (Access mode) */
#define  FSMC_BTR1_ACCMOD_0                  (0x10000000)        /*!< Bit 0 */
#define  FSMC_BTR1_ACCMOD_1                  (0x20000000)        /*!< Bit 1 */

/******************  Bit definition for FSMC_BTR2 register  *******************/
#define  FSMC_BTR2_ADDSET                    (0x0000000F)        /*!< ADDSET[3:0] bits (Address setup phase duration) */
#define  FSMC_BTR2_ADDSET_0                  (0x00000001)        /*!< Bit 0 */
#define  FSMC_BTR2_ADDSET_1                  (0x00000002)        /*!< Bit 1 */
#define  FSMC_BTR2_ADDSET_2                  (0x00000004)        /*!< Bit 2 */
#define  FSMC_BTR2_ADDSET_3                  (0x00000008)        /*!< Bit 3 */

#define  FSMC_BTR2_ADDHLD                    (0x000000F0)        /*!< ADDHLD[3:0] bits (Address-hold phase duration) */
#define  FSMC_BTR2_ADDHLD_0                  (0x00000010)        /*!< Bit 0 */
#define  FSMC_BTR2_ADDHLD_1                  (0x00000020)        /*!< Bit 1 */
#define  FSMC_BTR2_ADDHLD_2                  (0x00000040)        /*!< Bit 2 */
#define  FSMC_BTR2_ADDHLD_3                  (0x00000080)        /*!< Bit 3 */

#define  FSMC_BTR2_DATAST                    (0x0000FF00)        /*!< DATAST [3:0] bits (Data-phase duration) */
#define  FSMC_BTR2_DATAST_0                  (0x00000100)        /*!< Bit 0 */
#define  FSMC_BTR2_DATAST_1                  (0x00000200)        /*!< Bit 1 */
#define  FSMC_BTR2_DATAST_2                  (0x00000400)        /*!< Bit 2 */
#define  FSMC_BTR2_DATAST_3                  (0x00000800)        /*!< Bit 3 */

#define  FSMC_BTR2_BUSTURN                   (0x000F0000)        /*!< BUSTURN[3:0] bits (Bus turnaround phase duration) */
#define  FSMC_BTR2_BUSTURN_0                 (0x00010000)        /*!< Bit 0 */
#define  FSMC_BTR2_BUSTURN_1                 (0x00020000)        /*!< Bit 1 */
#define  FSMC_BTR2_BUSTURN_2                 (0x00040000)        /*!< Bit 2 */
#define  FSMC_BTR2_BUSTURN_3                 (0x00080000)        /*!< Bit 3 */

#define  FSMC_BTR2_CLKDIV                    (0x00F00000)        /*!< CLKDIV[3:0] bits (Clock divide ratio) */
#define  FSMC_BTR2_CLKDIV_0                  (0x00100000)        /*!< Bit 0 */
#define  FSMC_BTR2_CLKDIV_1                  (0x00200000)        /*!< Bit 1 */
#define  FSMC_BTR2_CLKDIV_2                  (0x00400000)        /*!< Bit 2 */
#define  FSMC_BTR2_CLKDIV_3                  (0x00800000)        /*!< Bit 3 */

#define  FSMC_BTR2_DATLAT                    (0x0F000000)        /*!< DATLA[3:0] bits (Data latency) */
#define  FSMC_BTR2_DATLAT_0                  (0x01000000)        /*!< Bit 0 */
#define  FSMC_BTR2_DATLAT_1                  (0x02000000)        /*!< Bit 1 */
#define  FSMC_BTR2_DATLAT_2                  (0x04000000)        /*!< Bit 2 */
#define  FSMC_BTR2_DATLAT_3                  (0x08000000)        /*!< Bit 3 */

#define  FSMC_BTR2_ACCMOD                    (0x30000000)        /*!< ACCMOD[1:0] bits (Access mode) */
#define  FSMC_BTR2_ACCMOD_0                  (0x10000000)        /*!< Bit 0 */
#define  FSMC_BTR2_ACCMOD_1                  (0x20000000)        /*!< Bit 1 */

/*******************  Bit definition for FSMC_BTR3 register  *******************/
#define  FSMC_BTR3_ADDSET                    (0x0000000F)        /*!< ADDSET[3:0] bits (Address setup phase duration) */
#define  FSMC_BTR3_ADDSET_0                  (0x00000001)        /*!< Bit 0 */
#define  FSMC_BTR3_ADDSET_1                  (0x00000002)        /*!< Bit 1 */
#define  FSMC_BTR3_ADDSET_2                  (0x00000004)        /*!< Bit 2 */
#define  FSMC_BTR3_ADDSET_3                  (0x00000008)        /*!< Bit 3 */

#define  FSMC_BTR3_ADDHLD                    (0x000000F0)        /*!< ADDHLD[3:0] bits (Address-hold phase duration) */
#define  FSMC_BTR3_ADDHLD_0                  (0x00000010)        /*!< Bit 0 */
#define  FSMC_BTR3_ADDHLD_1                  (0x00000020)        /*!< Bit 1 */
#define  FSMC_BTR3_ADDHLD_2                  (0x00000040)        /*!< Bit 2 */
#define  FSMC_BTR3_ADDHLD_3                  (0x00000080)        /*!< Bit 3 */

#define  FSMC_BTR3_DATAST                    (0x0000FF00)        /*!< DATAST [3:0] bits (Data-phase duration) */
#define  FSMC_BTR3_DATAST_0                  (0x00000100)        /*!< Bit 0 */
#define  FSMC_BTR3_DATAST_1                  (0x00000200)        /*!< Bit 1 */
#define  FSMC_BTR3_DATAST_2                  (0x00000400)        /*!< Bit 2 */
#define  FSMC_BTR3_DATAST_3                  (0x00000800)        /*!< Bit 3 */

#define  FSMC_BTR3_BUSTURN                   (0x000F0000)        /*!< BUSTURN[3:0] bits (Bus turnaround phase duration) */
#define  FSMC_BTR3_BUSTURN_0                 (0x00010000)        /*!< Bit 0 */
#define  FSMC_BTR3_BUSTURN_1                 (0x00020000)        /*!< Bit 1 */
#define  FSMC_BTR3_BUSTURN_2                 (0x00040000)        /*!< Bit 2 */
#define  FSMC_BTR3_BUSTURN_3                 (0x00080000)        /*!< Bit 3 */

#define  FSMC_BTR3_CLKDIV                    (0x00F00000)        /*!< CLKDIV[3:0] bits (Clock divide ratio) */
#define  FSMC_BTR3_CLKDIV_0                  (0x00100000)        /*!< Bit 0 */
#define  FSMC_BTR3_CLKDIV_1                  (0x00200000)        /*!< Bit 1 */
#define  FSMC_BTR3_CLKDIV_2                  (0x00400000)        /*!< Bit 2 */
#define  FSMC_BTR3_CLKDIV_3                  (0x00800000)        /*!< Bit 3 */

#define  FSMC_BTR3_DATLAT                    (0x0F000000)        /*!< DATLA[3:0] bits (Data latency) */
#define  FSMC_BTR3_DATLAT_0                  (0x01000000)        /*!< Bit 0 */
#define  FSMC_BTR3_DATLAT_1                  (0x02000000)        /*!< Bit 1 */
#define  FSMC_BTR3_DATLAT_2                  (0x04000000)        /*!< Bit 2 */
#define  FSMC_BTR3_DATLAT_3                  (0x08000000)        /*!< Bit 3 */

#define  FSMC_BTR3_ACCMOD                    (0x30000000)        /*!< ACCMOD[1:0] bits (Access mode) */
#define  FSMC_BTR3_ACCMOD_0                  (0x10000000)        /*!< Bit 0 */
#define  FSMC_BTR3_ACCMOD_1                  (0x20000000)        /*!< Bit 1 */

/******************  Bit definition for FSMC_BTR4 register  *******************/
#define  FSMC_BTR4_ADDSET                    (0x0000000F)        /*!< ADDSET[3:0] bits (Address setup phase duration) */
#define  FSMC_BTR4_ADDSET_0                  (0x00000001)        /*!< Bit 0 */
#define  FSMC_BTR4_ADDSET_1                  (0x00000002)        /*!< Bit 1 */
#define  FSMC_BTR4_ADDSET_2                  (0x00000004)        /*!< Bit 2 */
#define  FSMC_BTR4_ADDSET_3                  (0x00000008)        /*!< Bit 3 */

#define  FSMC_BTR4_ADDHLD                    (0x000000F0)        /*!< ADDHLD[3:0] bits (Address-hold phase duration) */
#define  FSMC_BTR4_ADDHLD_0                  (0x00000010)        /*!< Bit 0 */
#define  FSMC_BTR4_ADDHLD_1                  (0x00000020)        /*!< Bit 1 */
#define  FSMC_BTR4_ADDHLD_2                  (0x00000040)        /*!< Bit 2 */
#define  FSMC_BTR4_ADDHLD_3                  (0x00000080)        /*!< Bit 3 */

#define  FSMC_BTR4_DATAST                    (0x0000FF00)        /*!< DATAST [3:0] bits (Data-phase duration) */
#define  FSMC_BTR4_DATAST_0                  (0x00000100)        /*!< Bit 0 */
#define  FSMC_BTR4_DATAST_1                  (0x00000200)        /*!< Bit 1 */
#define  FSMC_BTR4_DATAST_2                  (0x00000400)        /*!< Bit 2 */
#define  FSMC_BTR4_DATAST_3                  (0x00000800)        /*!< Bit 3 */

#define  FSMC_BTR4_BUSTURN                   (0x000F0000)        /*!< BUSTURN[3:0] bits (Bus turnaround phase duration) */
#define  FSMC_BTR4_BUSTURN_0                 (0x00010000)        /*!< Bit 0 */
#define  FSMC_BTR4_BUSTURN_1                 (0x00020000)        /*!< Bit 1 */
#define  FSMC_BTR4_BUSTURN_2                 (0x00040000)        /*!< Bit 2 */
#define  FSMC_BTR4_BUSTURN_3                 (0x00080000)        /*!< Bit 3 */

#define  FSMC_BTR4_CLKDIV                    (0x00F00000)        /*!< CLKDIV[3:0] bits (Clock divide ratio) */
#define  FSMC_BTR4_CLKDIV_0                  (0x00100000)        /*!< Bit 0 */
#define  FSMC_BTR4_CLKDIV_1                  (0x00200000)        /*!< Bit 1 */
#define  FSMC_BTR4_CLKDIV_2                  (0x00400000)        /*!< Bit 2 */
#define  FSMC_BTR4_CLKDIV_3                  (0x00800000)        /*!< Bit 3 */

#define  FSMC_BTR4_DATLAT                    (0x0F000000)        /*!< DATLA[3:0] bits (Data latency) */
#define  FSMC_BTR4_DATLAT_0                  (0x01000000)        /*!< Bit 0 */
#define  FSMC_BTR4_DATLAT_1                  (0x02000000)        /*!< Bit 1 */
#define  FSMC_BTR4_DATLAT_2                  (0x04000000)        /*!< Bit 2 */
#define  FSMC_BTR4_DATLAT_3                  (0x08000000)        /*!< Bit 3 */

#define  FSMC_BTR4_ACCMOD                    (0x30000000)        /*!< ACCMOD[1:0] bits (Access mode) */
#define  FSMC_BTR4_ACCMOD_0                  (0x10000000)        /*!< Bit 0 */
#define  FSMC_BTR4_ACCMOD_1                  (0x20000000)        /*!< Bit 1 */

/******************  Bit definition for FSMC_BWTR1 register  ******************/
#define  FSMC_BWTR1_ADDSET                   (0x0000000F)        /*!< ADDSET[3:0] bits (Address setup phase duration) */
#define  FSMC_BWTR1_ADDSET_0                 (0x00000001)        /*!< Bit 0 */
#define  FSMC_BWTR1_ADDSET_1                 (0x00000002)        /*!< Bit 1 */
#define  FSMC_BWTR1_ADDSET_2                 (0x00000004)        /*!< Bit 2 */
#define  FSMC_BWTR1_ADDSET_3                 (0x00000008)        /*!< Bit 3 */

#define  FSMC_BWTR1_ADDHLD                   (0x000000F0)        /*!< ADDHLD[3:0] bits (Address-hold phase duration) */
#define  FSMC_BWTR1_ADDHLD_0                 (0x00000010)        /*!< Bit 0 */
#define  FSMC_BWTR1_ADDHLD_1                 (0x00000020)        /*!< Bit 1 */
#define  FSMC_BWTR1_ADDHLD_2                 (0x00000040)        /*!< Bit 2 */
#define  FSMC_BWTR1_ADDHLD_3                 (0x00000080)        /*!< Bit 3 */

#define  FSMC_BWTR1_DATAST                   (0x0000FF00)        /*!< DATAST [3:0] bits (Data-phase duration) */
#define  FSMC_BWTR1_DATAST_0                 (0x00000100)        /*!< Bit 0 */
#define  FSMC_BWTR1_DATAST_1                 (0x00000200)        /*!< Bit 1 */
#define  FSMC_BWTR1_DATAST_2                 (0x00000400)        /*!< Bit 2 */
#define  FSMC_BWTR1_DATAST_3                 (0x00000800)        /*!< Bit 3 */

#define  FSMC_BWTR1_CLKDIV                   (0x00F00000)        /*!< CLKDIV[3:0] bits (Clock divide ratio) */
#define  FSMC_BWTR1_CLKDIV_0                 (0x00100000)        /*!< Bit 0 */
#define  FSMC_BWTR1_CLKDIV_1                 (0x00200000)        /*!< Bit 1 */
#define  FSMC_BWTR1_CLKDIV_2                 (0x00400000)        /*!< Bit 2 */
#define  FSMC_BWTR1_CLKDIV_3                 (0x00800000)        /*!< Bit 3 */

#define  FSMC_BWTR1_DATLAT                   (0x0F000000)        /*!< DATLA[3:0] bits (Data latency) */
#define  FSMC_BWTR1_DATLAT_0                 (0x01000000)        /*!< Bit 0 */
#define  FSMC_BWTR1_DATLAT_1                 (0x02000000)        /*!< Bit 1 */
#define  FSMC_BWTR1_DATLAT_2                 (0x04000000)        /*!< Bit 2 */
#define  FSMC_BWTR1_DATLAT_3                 (0x08000000)        /*!< Bit 3 */

#define  FSMC_BWTR1_ACCMOD                   (0x30000000)        /*!< ACCMOD[1:0] bits (Access mode) */
#define  FSMC_BWTR1_ACCMOD_0                 (0x10000000)        /*!< Bit 0 */
#define  FSMC_BWTR1_ACCMOD_1                 (0x20000000)        /*!< Bit 1 */

/******************  Bit definition for FSMC_BWTR2 register  ******************/
#define  FSMC_BWTR2_ADDSET                   (0x0000000F)        /*!< ADDSET[3:0] bits (Address setup phase duration) */
#define  FSMC_BWTR2_ADDSET_0                 (0x00000001)        /*!< Bit 0 */
#define  FSMC_BWTR2_ADDSET_1                 (0x00000002)        /*!< Bit 1 */
#define  FSMC_BWTR2_ADDSET_2                 (0x00000004)        /*!< Bit 2 */
#define  FSMC_BWTR2_ADDSET_3                 (0x00000008)        /*!< Bit 3 */

#define  FSMC_BWTR2_ADDHLD                   (0x000000F0)        /*!< ADDHLD[3:0] bits (Address-hold phase duration) */
#define  FSMC_BWTR2_ADDHLD_0                 (0x00000010)        /*!< Bit 0 */
#define  FSMC_BWTR2_ADDHLD_1                 (0x00000020)        /*!< Bit 1 */
#define  FSMC_BWTR2_ADDHLD_2                 (0x00000040)        /*!< Bit 2 */
#define  FSMC_BWTR2_ADDHLD_3                 (0x00000080)        /*!< Bit 3 */

#define  FSMC_BWTR2_DATAST                   (0x0000FF00)        /*!< DATAST [3:0] bits (Data-phase duration) */
#define  FSMC_BWTR2_DATAST_0                 (0x00000100)        /*!< Bit 0 */
#define  FSMC_BWTR2_DATAST_1                 (0x00000200)        /*!< Bit 1 */
#define  FSMC_BWTR2_DATAST_2                 (0x00000400)        /*!< Bit 2 */
#define  FSMC_BWTR2_DATAST_3                 (0x00000800)        /*!< Bit 3 */

#define  FSMC_BWTR2_CLKDIV                   (0x00F00000)        /*!< CLKDIV[3:0] bits (Clock divide ratio) */
#define  FSMC_BWTR2_CLKDIV_0                 (0x00100000)        /*!< Bit 0 */
#define  FSMC_BWTR2_CLKDIV_1                 (0x00200000)        /*!< Bit 1*/
#define  FSMC_BWTR2_CLKDIV_2                 (0x00400000)        /*!< Bit 2 */
#define  FSMC_BWTR2_CLKDIV_3                 (0x00800000)        /*!< Bit 3 */

#define  FSMC_BWTR2_DATLAT                   (0x0F000000)        /*!< DATLA[3:0] bits (Data latency) */
#define  FSMC_BWTR2_DATLAT_0                 (0x01000000)        /*!< Bit 0 */
#define  FSMC_BWTR2_DATLAT_1                 (0x02000000)        /*!< Bit 1 */
#define  FSMC_BWTR2_DATLAT_2                 (0x04000000)        /*!< Bit 2 */
#define  FSMC_BWTR2_DATLAT_3                 (0x08000000)        /*!< Bit 3 */

#define  FSMC_BWTR2_ACCMOD                   (0x30000000)        /*!< ACCMOD[1:0] bits (Access mode) */
#define  FSMC_BWTR2_ACCMOD_0                 (0x10000000)        /*!< Bit 0 */
#define  FSMC_BWTR2_ACCMOD_1                 (0x20000000)        /*!< Bit 1 */

/******************  Bit definition for FSMC_BWTR3 register  ******************/
#define  FSMC_BWTR3_ADDSET                   (0x0000000F)        /*!< ADDSET[3:0] bits (Address setup phase duration) */
#define  FSMC_BWTR3_ADDSET_0                 (0x00000001)        /*!< Bit 0 */
#define  FSMC_BWTR3_ADDSET_1                 (0x00000002)        /*!< Bit 1 */
#define  FSMC_BWTR3_ADDSET_2                 (0x00000004)        /*!< Bit 2 */
#define  FSMC_BWTR3_ADDSET_3                 (0x00000008)        /*!< Bit 3 */

#define  FSMC_BWTR3_ADDHLD                   (0x000000F0)        /*!< ADDHLD[3:0] bits (Address-hold phase duration) */
#define  FSMC_BWTR3_ADDHLD_0                 (0x00000010)        /*!< Bit 0 */
#define  FSMC_BWTR3_ADDHLD_1                 (0x00000020)        /*!< Bit 1 */
#define  FSMC_BWTR3_ADDHLD_2                 (0x00000040)        /*!< Bit 2 */
#define  FSMC_BWTR3_ADDHLD_3                 (0x00000080)        /*!< Bit 3 */

#define  FSMC_BWTR3_DATAST                   (0x0000FF00)        /*!< DATAST [3:0] bits (Data-phase duration) */
#define  FSMC_BWTR3_DATAST_0                 (0x00000100)        /*!< Bit 0 */
#define  FSMC_BWTR3_DATAST_1                 (0x00000200)        /*!< Bit 1 */
#define  FSMC_BWTR3_DATAST_2                 (0x00000400)        /*!< Bit 2 */
#define  FSMC_BWTR3_DATAST_3                 (0x00000800)        /*!< Bit 3 */

#define  FSMC_BWTR3_CLKDIV                   (0x00F00000)        /*!< CLKDIV[3:0] bits (Clock divide ratio) */
#define  FSMC_BWTR3_CLKDIV_0                 (0x00100000)        /*!< Bit 0 */
#define  FSMC_BWTR3_CLKDIV_1                 (0x00200000)        /*!< Bit 1 */
#define  FSMC_BWTR3_CLKDIV_2                 (0x00400000)        /*!< Bit 2 */
#define  FSMC_BWTR3_CLKDIV_3                 (0x00800000)        /*!< Bit 3 */

#define  FSMC_BWTR3_DATLAT                   (0x0F000000)        /*!< DATLA[3:0] bits (Data latency) */
#define  FSMC_BWTR3_DATLAT_0                 (0x01000000)        /*!< Bit 0 */
#define  FSMC_BWTR3_DATLAT_1                 (0x02000000)        /*!< Bit 1 */
#define  FSMC_BWTR3_DATLAT_2                 (0x04000000)        /*!< Bit 2 */
#define  FSMC_BWTR3_DATLAT_3                 (0x08000000)        /*!< Bit 3 */

#define  FSMC_BWTR3_ACCMOD                   (0x30000000)        /*!< ACCMOD[1:0] bits (Access mode) */
#define  FSMC_BWTR3_ACCMOD_0                 (0x10000000)        /*!< Bit 0 */
#define  FSMC_BWTR3_ACCMOD_1                 (0x20000000)        /*!< Bit 1 */

/******************  Bit definition for FSMC_BWTR4 register  ******************/
#define  FSMC_BWTR4_ADDSET                   (0x0000000F)        /*!< ADDSET[3:0] bits (Address setup phase duration) */
#define  FSMC_BWTR4_ADDSET_0                 (0x00000001)        /*!< Bit 0 */
#define  FSMC_BWTR4_ADDSET_1                 (0x00000002)        /*!< Bit 1 */
#define  FSMC_BWTR4_ADDSET_2                 (0x00000004)        /*!< Bit 2 */
#define  FSMC_BWTR4_ADDSET_3                 (0x00000008)        /*!< Bit 3 */

#define  FSMC_BWTR4_ADDHLD                   (0x000000F0)        /*!< ADDHLD[3:0] bits (Address-hold phase duration) */
#define  FSMC_BWTR4_ADDHLD_0                 (0x00000010)        /*!< Bit 0 */
#define  FSMC_BWTR4_ADDHLD_1                 (0x00000020)        /*!< Bit 1 */
#define  FSMC_BWTR4_ADDHLD_2                 (0x00000040)        /*!< Bit 2 */
#define  FSMC_BWTR4_ADDHLD_3                 (0x00000080)        /*!< Bit 3 */

#define  FSMC_BWTR4_DATAST                   (0x0000FF00)        /*!< DATAST [3:0] bits (Data-phase duration) */
#define  FSMC_BWTR4_DATAST_0                 (0x00000100)        /*!< Bit 0 */
#define  FSMC_BWTR4_DATAST_1                 (0x00000200)        /*!< Bit 1 */
#define  FSMC_BWTR4_DATAST_2                 (0x00000400)        /*!< Bit 2 */
#define  FSMC_BWTR4_DATAST_3                 (0x00000800)        /*!< Bit 3 */

#define  FSMC_BWTR4_CLKDIV                   (0x00F00000)        /*!< CLKDIV[3:0] bits (Clock divide ratio) */
#define  FSMC_BWTR4_CLKDIV_0                 (0x00100000)        /*!< Bit 0 */
#define  FSMC_BWTR4_CLKDIV_1                 (0x00200000)        /*!< Bit 1 */
#define  FSMC_BWTR4_CLKDIV_2                 (0x00400000)        /*!< Bit 2 */
#define  FSMC_BWTR4_CLKDIV_3                 (0x00800000)        /*!< Bit 3 */

#define  FSMC_BWTR4_DATLAT                   (0x0F000000)        /*!< DATLA[3:0] bits (Data latency) */
#define  FSMC_BWTR4_DATLAT_0                 (0x01000000)        /*!< Bit 0 */
#define  FSMC_BWTR4_DATLAT_1                 (0x02000000)        /*!< Bit 1 */
#define  FSMC_BWTR4_DATLAT_2                 (0x04000000)        /*!< Bit 2 */
#define  FSMC_BWTR4_DATLAT_3                 (0x08000000)        /*!< Bit 3 */

#define  FSMC_BWTR4_ACCMOD                   (0x30000000)        /*!< ACCMOD[1:0] bits (Access mode) */
#define  FSMC_BWTR4_ACCMOD_0                 (0x10000000)        /*!< Bit 0 */
#define  FSMC_BWTR4_ACCMOD_1                 (0x20000000)        /*!< Bit 1 */

/******************  Bit definition for FSMC_PCR2 register  *******************/
#define  FSMC_PCR2_PWAITEN                   (0x00000002)        /*!< Wait feature enable bit */
#define  FSMC_PCR2_PBKEN                     (0x00000004)        /*!< PC Card/NAND Flash memory bank enable bit */
#define  FSMC_PCR2_PTYP                      (0x00000008)        /*!< Memory type */

#define  FSMC_PCR2_PWID                      (0x00000030)        /*!< PWID[1:0] bits (NAND Flash databus width) */
#define  FSMC_PCR2_PWID_0                    (0x00000010)        /*!< Bit 0 */
#define  FSMC_PCR2_PWID_1                    (0x00000020)        /*!< Bit 1 */

#define  FSMC_PCR2_ECCEN                     (0x00000040)        /*!< ECC computation logic enable bit */

#define  FSMC_PCR2_TCLR                      (0x00001E00)        /*!< TCLR[3:0] bits (CLE to RE delay) */
#define  FSMC_PCR2_TCLR_0                    (0x00000200)        /*!< Bit 0 */
#define  FSMC_PCR2_TCLR_1                    (0x00000400)        /*!< Bit 1 */
#define  FSMC_PCR2_TCLR_2                    (0x00000800)        /*!< Bit 2 */
#define  FSMC_PCR2_TCLR_3                    (0x00001000)        /*!< Bit 3 */

#define  FSMC_PCR2_TAR                       (0x0001E000)        /*!< TAR[3:0] bits (ALE to RE delay) */
#define  FSMC_PCR2_TAR_0                     (0x00002000)        /*!< Bit 0 */
#define  FSMC_PCR2_TAR_1                     (0x00004000)        /*!< Bit 1 */
#define  FSMC_PCR2_TAR_2                     (0x00008000)        /*!< Bit 2 */
#define  FSMC_PCR2_TAR_3                     (0x00010000)        /*!< Bit 3 */

#define  FSMC_PCR2_ECCPS                     (0x000E0000)        /*!< ECCPS[1:0] bits (ECC page size) */
#define  FSMC_PCR2_ECCPS_0                   (0x00020000)        /*!< Bit 0 */
#define  FSMC_PCR2_ECCPS_1                   (0x00040000)        /*!< Bit 1 */
#define  FSMC_PCR2_ECCPS_2                   (0x00080000)        /*!< Bit 2 */

/******************  Bit definition for FSMC_PCR3 register  *******************/
#define  FSMC_PCR3_PWAITEN                   (0x00000002)        /*!< Wait feature enable bit */
#define  FSMC_PCR3_PBKEN                     (0x00000004)        /*!< PC Card/NAND Flash memory bank enable bit */
#define  FSMC_PCR3_PTYP                      (0x00000008)        /*!< Memory type */

#define  FSMC_PCR3_PWID                      (0x00000030)        /*!< PWID[1:0] bits (NAND Flash databus width) */
#define  FSMC_PCR3_PWID_0                    (0x00000010)        /*!< Bit 0 */
#define  FSMC_PCR3_PWID_1                    (0x00000020)        /*!< Bit 1 */

#define  FSMC_PCR3_ECCEN                     (0x00000040)        /*!< ECC computation logic enable bit */

#define  FSMC_PCR3_TCLR                      (0x00001E00)        /*!< TCLR[3:0] bits (CLE to RE delay) */
#define  FSMC_PCR3_TCLR_0                    (0x00000200)        /*!< Bit 0 */
#define  FSMC_PCR3_TCLR_1                    (0x00000400)        /*!< Bit 1 */
#define  FSMC_PCR3_TCLR_2                    (0x00000800)        /*!< Bit 2 */
#define  FSMC_PCR3_TCLR_3                    (0x00001000)        /*!< Bit 3 */

#define  FSMC_PCR3_TAR                       (0x0001E000)        /*!< TAR[3:0] bits (ALE to RE delay) */
#define  FSMC_PCR3_TAR_0                     (0x00002000)        /*!< Bit 0 */
#define  FSMC_PCR3_TAR_1                     (0x00004000)        /*!< Bit 1 */
#define  FSMC_PCR3_TAR_2                     (0x00008000)        /*!< Bit 2 */
#define  FSMC_PCR3_TAR_3                     (0x00010000)        /*!< Bit 3 */

#define  FSMC_PCR3_ECCPS                     (0x000E0000)        /*!< ECCPS[2:0] bits (ECC page size) */
#define  FSMC_PCR3_ECCPS_0                   (0x00020000)        /*!< Bit 0 */
#define  FSMC_PCR3_ECCPS_1                   (0x00040000)        /*!< Bit 1 */
#define  FSMC_PCR3_ECCPS_2                   (0x00080000)        /*!< Bit 2 */

/******************  Bit definition for FSMC_PCR4 register  *******************/
#define  FSMC_PCR4_PWAITEN                   (0x00000002)        /*!< Wait feature enable bit */
#define  FSMC_PCR4_PBKEN                     (0x00000004)        /*!< PC Card/NAND Flash memory bank enable bit */
#define  FSMC_PCR4_PTYP                      (0x00000008)        /*!< Memory type */

#define  FSMC_PCR4_PWID                      (0x00000030)        /*!< PWID[1:0] bits (NAND Flash databus width) */
#define  FSMC_PCR4_PWID_0                    (0x00000010)        /*!< Bit 0 */
#define  FSMC_PCR4_PWID_1                    (0x00000020)        /*!< Bit 1 */

#define  FSMC_PCR4_ECCEN                     (0x00000040)        /*!< ECC computation logic enable bit */

#define  FSMC_PCR4_TCLR                      (0x00001E00)        /*!< TCLR[3:0] bits (CLE to RE delay) */
#define  FSMC_PCR4_TCLR_0                    (0x00000200)        /*!< Bit 0 */
#define  FSMC_PCR4_TCLR_1                    (0x00000400)        /*!< Bit 1 */
#define  FSMC_PCR4_TCLR_2                    (0x00000800)        /*!< Bit 2 */
#define  FSMC_PCR4_TCLR_3                    (0x00001000)        /*!< Bit 3 */

#define  FSMC_PCR4_TAR                       (0x0001E000)        /*!< TAR[3:0] bits (ALE to RE delay) */
#define  FSMC_PCR4_TAR_0                     (0x00002000)        /*!< Bit 0 */
#define  FSMC_PCR4_TAR_1                     (0x00004000)        /*!< Bit 1 */
#define  FSMC_PCR4_TAR_2                     (0x00008000)        /*!< Bit 2 */
#define  FSMC_PCR4_TAR_3                     (0x00010000)        /*!< Bit 3 */

#define  FSMC_PCR4_ECCPS                     (0x000E0000)        /*!< ECCPS[2:0] bits (ECC page size) */
#define  FSMC_PCR4_ECCPS_0                   (0x00020000)        /*!< Bit 0 */
#define  FSMC_PCR4_ECCPS_1                   (0x00040000)        /*!< Bit 1 */
#define  FSMC_PCR4_ECCPS_2                   (0x00080000)        /*!< Bit 2 */

/*******************  Bit definition for FSMC_SR2 register  *******************/
#define  FSMC_SR2_IRS                        ((uint8_t)0x01)               /*!< Interrupt Rising Edge status */
#define  FSMC_SR2_ILS                        ((uint8_t)0x02)               /*!< Interrupt Level status */
#define  FSMC_SR2_IFS                        ((uint8_t)0x04)               /*!< Interrupt Falling Edge status */
#define  FSMC_SR2_IREN                       ((uint8_t)0x08)               /*!< Interrupt Rising Edge detection Enable bit */
#define  FSMC_SR2_ILEN                       ((uint8_t)0x10)               /*!< Interrupt Level detection Enable bit */
#define  FSMC_SR2_IFEN                       ((uint8_t)0x20)               /*!< Interrupt Falling Edge detection Enable bit */
#define  FSMC_SR2_FEMPT                      ((uint8_t)0x40)               /*!< FIFO empty */

/*******************  Bit definition for FSMC_SR3 register  *******************/
#define  FSMC_SR3_IRS                        ((uint8_t)0x01)               /*!< Interrupt Rising Edge status */
#define  FSMC_SR3_ILS                        ((uint8_t)0x02)               /*!< Interrupt Level status */
#define  FSMC_SR3_IFS                        ((uint8_t)0x04)               /*!< Interrupt Falling Edge status */
#define  FSMC_SR3_IREN                       ((uint8_t)0x08)               /*!< Interrupt Rising Edge detection Enable bit */
#define  FSMC_SR3_ILEN                       ((uint8_t)0x10)               /*!< Interrupt Level detection Enable bit */
#define  FSMC_SR3_IFEN                       ((uint8_t)0x20)               /*!< Interrupt Falling Edge detection Enable bit */
#define  FSMC_SR3_FEMPT                      ((uint8_t)0x40)               /*!< FIFO empty */

/*******************  Bit definition for FSMC_SR4 register  *******************/
#define  FSMC_SR4_IRS                        ((uint8_t)0x01)               /*!< Interrupt Rising Edge status */
#define  FSMC_SR4_ILS                        ((uint8_t)0x02)               /*!< Interrupt Level status */
#define  FSMC_SR4_IFS                        ((uint8_t)0x04)               /*!< Interrupt Falling Edge status */
#define  FSMC_SR4_IREN                       ((uint8_t)0x08)               /*!< Interrupt Rising Edge detection Enable bit */
#define  FSMC_SR4_ILEN                       ((uint8_t)0x10)               /*!< Interrupt Level detection Enable bit */
#define  FSMC_SR4_IFEN                       ((uint8_t)0x20)               /*!< Interrupt Falling Edge detection Enable bit */
#define  FSMC_SR4_FEMPT                      ((uint8_t)0x40)               /*!< FIFO empty */

/******************  Bit definition for FSMC_PMEM2 register  ******************/
#define  FSMC_PMEM2_MEMSET2                  (0x000000FF)        /*!< MEMSET2[7:0] bits (Common memory 2 setup time) */
#define  FSMC_PMEM2_MEMSET2_0                (0x00000001)        /*!< Bit 0 */
#define  FSMC_PMEM2_MEMSET2_1                (0x00000002)        /*!< Bit 1 */
#define  FSMC_PMEM2_MEMSET2_2                (0x00000004)        /*!< Bit 2 */
#define  FSMC_PMEM2_MEMSET2_3                (0x00000008)        /*!< Bit 3 */
#define  FSMC_PMEM2_MEMSET2_4                (0x00000010)        /*!< Bit 4 */
#define  FSMC_PMEM2_MEMSET2_5                (0x00000020)        /*!< Bit 5 */
#define  FSMC_PMEM2_MEMSET2_6                (0x00000040)        /*!< Bit 6 */
#define  FSMC_PMEM2_MEMSET2_7                (0x00000080)        /*!< Bit 7 */

#define  FSMC_PMEM2_MEMWAIT2                 (0x0000FF00)        /*!< MEMWAIT2[7:0] bits (Common memory 2 wait time) */
#define  FSMC_PMEM2_MEMWAIT2_0               (0x00000100)        /*!< Bit 0 */
#define  FSMC_PMEM2_MEMWAIT2_1               (0x00000200)        /*!< Bit 1 */
#define  FSMC_PMEM2_MEMWAIT2_2               (0x00000400)        /*!< Bit 2 */
#define  FSMC_PMEM2_MEMWAIT2_3               (0x00000800)        /*!< Bit 3 */
#define  FSMC_PMEM2_MEMWAIT2_4               (0x00001000)        /*!< Bit 4 */
#define  FSMC_PMEM2_MEMWAIT2_5               (0x00002000)        /*!< Bit 5 */
#define  FSMC_PMEM2_MEMWAIT2_6               (0x00004000)        /*!< Bit 6 */
#define  FSMC_PMEM2_MEMWAIT2_7               (0x00008000)        /*!< Bit 7 */

#define  FSMC_PMEM2_MEMHOLD2                 (0x00FF0000)        /*!< MEMHOLD2[7:0] bits (Common memory 2 hold time) */
#define  FSMC_PMEM2_MEMHOLD2_0               (0x00010000)        /*!< Bit 0 */
#define  FSMC_PMEM2_MEMHOLD2_1               (0x00020000)        /*!< Bit 1 */
#define  FSMC_PMEM2_MEMHOLD2_2               (0x00040000)        /*!< Bit 2 */
#define  FSMC_PMEM2_MEMHOLD2_3               (0x00080000)        /*!< Bit 3 */
#define  FSMC_PMEM2_MEMHOLD2_4               (0x00100000)        /*!< Bit 4 */
#define  FSMC_PMEM2_MEMHOLD2_5               (0x00200000)        /*!< Bit 5 */
#define  FSMC_PMEM2_MEMHOLD2_6               (0x00400000)        /*!< Bit 6 */
#define  FSMC_PMEM2_MEMHOLD2_7               (0x00800000)        /*!< Bit 7 */

#define  FSMC_PMEM2_MEMHIZ2                  (0xFF000000)        /*!< MEMHIZ2[7:0] bits (Common memory 2 databus HiZ time) */
#define  FSMC_PMEM2_MEMHIZ2_0                (0x01000000)        /*!< Bit 0 */
#define  FSMC_PMEM2_MEMHIZ2_1                (0x02000000)        /*!< Bit 1 */
#define  FSMC_PMEM2_MEMHIZ2_2                (0x04000000)        /*!< Bit 2 */
#define  FSMC_PMEM2_MEMHIZ2_3                (0x08000000)        /*!< Bit 3 */
#define  FSMC_PMEM2_MEMHIZ2_4                (0x10000000)        /*!< Bit 4 */
#define  FSMC_PMEM2_MEMHIZ2_5                (0x20000000)        /*!< Bit 5 */
#define  FSMC_PMEM2_MEMHIZ2_6                (0x40000000)        /*!< Bit 6 */
#define  FSMC_PMEM2_MEMHIZ2_7                (0x80000000)        /*!< Bit 7 */

/******************  Bit definition for FSMC_PMEM3 register  ******************/
#define  FSMC_PMEM3_MEMSET3                  (0x000000FF)        /*!< MEMSET3[7:0] bits (Common memory 3 setup time) */
#define  FSMC_PMEM3_MEMSET3_0                (0x00000001)        /*!< Bit 0 */
#define  FSMC_PMEM3_MEMSET3_1                (0x00000002)        /*!< Bit 1 */
#define  FSMC_PMEM3_MEMSET3_2                (0x00000004)        /*!< Bit 2 */
#define  FSMC_PMEM3_MEMSET3_3                (0x00000008)        /*!< Bit 3 */
#define  FSMC_PMEM3_MEMSET3_4                (0x00000010)        /*!< Bit 4 */
#define  FSMC_PMEM3_MEMSET3_5                (0x00000020)        /*!< Bit 5 */
#define  FSMC_PMEM3_MEMSET3_6                (0x00000040)        /*!< Bit 6 */
#define  FSMC_PMEM3_MEMSET3_7                (0x00000080)        /*!< Bit 7 */

#define  FSMC_PMEM3_MEMWAIT3                 (0x0000FF00)        /*!< MEMWAIT3[7:0] bits (Common memory 3 wait time) */
#define  FSMC_PMEM3_MEMWAIT3_0               (0x00000100)        /*!< Bit 0 */
#define  FSMC_PMEM3_MEMWAIT3_1               (0x00000200)        /*!< Bit 1 */
#define  FSMC_PMEM3_MEMWAIT3_2               (0x00000400)        /*!< Bit 2 */
#define  FSMC_PMEM3_MEMWAIT3_3               (0x00000800)        /*!< Bit 3 */
#define  FSMC_PMEM3_MEMWAIT3_4               (0x00001000)        /*!< Bit 4 */
#define  FSMC_PMEM3_MEMWAIT3_5               (0x00002000)        /*!< Bit 5 */
#define  FSMC_PMEM3_MEMWAIT3_6               (0x00004000)        /*!< Bit 6 */
#define  FSMC_PMEM3_MEMWAIT3_7               (0x00008000)        /*!< Bit 7 */

#define  FSMC_PMEM3_MEMHOLD3                 (0x00FF0000)        /*!< MEMHOLD3[7:0] bits (Common memory 3 hold time) */
#define  FSMC_PMEM3_MEMHOLD3_0               (0x00010000)        /*!< Bit 0 */
#define  FSMC_PMEM3_MEMHOLD3_1               (0x00020000)        /*!< Bit 1 */
#define  FSMC_PMEM3_MEMHOLD3_2               (0x00040000)        /*!< Bit 2 */
#define  FSMC_PMEM3_MEMHOLD3_3               (0x00080000)        /*!< Bit 3 */
#define  FSMC_PMEM3_MEMHOLD3_4               (0x00100000)        /*!< Bit 4 */
#define  FSMC_PMEM3_MEMHOLD3_5               (0x00200000)        /*!< Bit 5 */
#define  FSMC_PMEM3_MEMHOLD3_6               (0x00400000)        /*!< Bit 6 */
#define  FSMC_PMEM3_MEMHOLD3_7               (0x00800000)        /*!< Bit 7 */

#define  FSMC_PMEM3_MEMHIZ3                  (0xFF000000)        /*!< MEMHIZ3[7:0] bits (Common memory 3 databus HiZ time) */
#define  FSMC_PMEM3_MEMHIZ3_0                (0x01000000)        /*!< Bit 0 */
#define  FSMC_PMEM3_MEMHIZ3_1                (0x02000000)        /*!< Bit 1 */
#define  FSMC_PMEM3_MEMHIZ3_2                (0x04000000)        /*!< Bit 2 */
#define  FSMC_PMEM3_MEMHIZ3_3                (0x08000000)        /*!< Bit 3 */
#define  FSMC_PMEM3_MEMHIZ3_4                (0x10000000)        /*!< Bit 4 */
#define  FSMC_PMEM3_MEMHIZ3_5                (0x20000000)        /*!< Bit 5 */
#define  FSMC_PMEM3_MEMHIZ3_6                (0x40000000)        /*!< Bit 6 */
#define  FSMC_PMEM3_MEMHIZ3_7                (0x80000000)        /*!< Bit 7 */

/******************  Bit definition for FSMC_PMEM4 register  ******************/
#define  FSMC_PMEM4_MEMSET4                  (0x000000FF)        /*!< MEMSET4[7:0] bits (Common memory 4 setup time) */
#define  FSMC_PMEM4_MEMSET4_0                (0x00000001)        /*!< Bit 0 */
#define  FSMC_PMEM4_MEMSET4_1                (0x00000002)        /*!< Bit 1 */
#define  FSMC_PMEM4_MEMSET4_2                (0x00000004)        /*!< Bit 2 */
#define  FSMC_PMEM4_MEMSET4_3                (0x00000008)        /*!< Bit 3 */
#define  FSMC_PMEM4_MEMSET4_4                (0x00000010)        /*!< Bit 4 */
#define  FSMC_PMEM4_MEMSET4_5                (0x00000020)        /*!< Bit 5 */
#define  FSMC_PMEM4_MEMSET4_6                (0x00000040)        /*!< Bit 6 */
#define  FSMC_PMEM4_MEMSET4_7                (0x00000080)        /*!< Bit 7 */

#define  FSMC_PMEM4_MEMWAIT4                 (0x0000FF00)        /*!< MEMWAIT4[7:0] bits (Common memory 4 wait time) */
#define  FSMC_PMEM4_MEMWAIT4_0               (0x00000100)        /*!< Bit 0 */
#define  FSMC_PMEM4_MEMWAIT4_1               (0x00000200)        /*!< Bit 1 */
#define  FSMC_PMEM4_MEMWAIT4_2               (0x00000400)        /*!< Bit 2 */
#define  FSMC_PMEM4_MEMWAIT4_3               (0x00000800)        /*!< Bit 3 */
#define  FSMC_PMEM4_MEMWAIT4_4               (0x00001000)        /*!< Bit 4 */
#define  FSMC_PMEM4_MEMWAIT4_5               (0x00002000)        /*!< Bit 5 */
#define  FSMC_PMEM4_MEMWAIT4_6               (0x00004000)        /*!< Bit 6 */
#define  FSMC_PMEM4_MEMWAIT4_7               (0x00008000)        /*!< Bit 7 */

#define  FSMC_PMEM4_MEMHOLD4                 (0x00FF0000)        /*!< MEMHOLD4[7:0] bits (Common memory 4 hold time) */
#define  FSMC_PMEM4_MEMHOLD4_0               (0x00010000)        /*!< Bit 0 */
#define  FSMC_PMEM4_MEMHOLD4_1               (0x00020000)        /*!< Bit 1 */
#define  FSMC_PMEM4_MEMHOLD4_2               (0x00040000)        /*!< Bit 2 */
#define  FSMC_PMEM4_MEMHOLD4_3               (0x00080000)        /*!< Bit 3 */
#define  FSMC_PMEM4_MEMHOLD4_4               (0x00100000)        /*!< Bit 4 */
#define  FSMC_PMEM4_MEMHOLD4_5               (0x00200000)        /*!< Bit 5 */
#define  FSMC_PMEM4_MEMHOLD4_6               (0x00400000)        /*!< Bit 6 */
#define  FSMC_PMEM4_MEMHOLD4_7               (0x00800000)        /*!< Bit 7 */

#define  FSMC_PMEM4_MEMHIZ4                  (0xFF000000)        /*!< MEMHIZ4[7:0] bits (Common memory 4 databus HiZ time) */
#define  FSMC_PMEM4_MEMHIZ4_0                (0x01000000)        /*!< Bit 0 */
#define  FSMC_PMEM4_MEMHIZ4_1                (0x02000000)        /*!< Bit 1 */
#define  FSMC_PMEM4_MEMHIZ4_2                (0x04000000)        /*!< Bit 2 */
#define  FSMC_PMEM4_MEMHIZ4_3                (0x08000000)        /*!< Bit 3 */
#define  FSMC_PMEM4_MEMHIZ4_4                (0x10000000)        /*!< Bit 4 */
#define  FSMC_PMEM4_MEMHIZ4_5                (0x20000000)        /*!< Bit 5 */
#define  FSMC_PMEM4_MEMHIZ4_6                (0x40000000)        /*!< Bit 6 */
#define  FSMC_PMEM4_MEMHIZ4_7                (0x80000000)        /*!< Bit 7 */

/******************  Bit definition for FSMC_PATT2 register  ******************/
#define  FSMC_PATT2_ATTSET2                  (0x000000FF)        /*!< ATTSET2[7:0] bits (Attribute memory 2 setup time) */
#define  FSMC_PATT2_ATTSET2_0                (0x00000001)        /*!< Bit 0 */
#define  FSMC_PATT2_ATTSET2_1                (0x00000002)        /*!< Bit 1 */
#define  FSMC_PATT2_ATTSET2_2                (0x00000004)        /*!< Bit 2 */
#define  FSMC_PATT2_ATTSET2_3                (0x00000008)        /*!< Bit 3 */
#define  FSMC_PATT2_ATTSET2_4                (0x00000010)        /*!< Bit 4 */
#define  FSMC_PATT2_ATTSET2_5                (0x00000020)        /*!< Bit 5 */
#define  FSMC_PATT2_ATTSET2_6                (0x00000040)        /*!< Bit 6 */
#define  FSMC_PATT2_ATTSET2_7                (0x00000080)        /*!< Bit 7 */

#define  FSMC_PATT2_ATTWAIT2                 (0x0000FF00)        /*!< ATTWAIT2[7:0] bits (Attribute memory 2 wait time) */
#define  FSMC_PATT2_ATTWAIT2_0               (0x00000100)        /*!< Bit 0 */
#define  FSMC_PATT2_ATTWAIT2_1               (0x00000200)        /*!< Bit 1 */
#define  FSMC_PATT2_ATTWAIT2_2               (0x00000400)        /*!< Bit 2 */
#define  FSMC_PATT2_ATTWAIT2_3               (0x00000800)        /*!< Bit 3 */
#define  FSMC_PATT2_ATTWAIT2_4               (0x00001000)        /*!< Bit 4 */
#define  FSMC_PATT2_ATTWAIT2_5               (0x00002000)        /*!< Bit 5 */
#define  FSMC_PATT2_ATTWAIT2_6               (0x00004000)        /*!< Bit 6 */
#define  FSMC_PATT2_ATTWAIT2_7               (0x00008000)        /*!< Bit 7 */

#define  FSMC_PATT2_ATTHOLD2                 (0x00FF0000)        /*!< ATTHOLD2[7:0] bits (Attribute memory 2 hold time) */
#define  FSMC_PATT2_ATTHOLD2_0               (0x00010000)        /*!< Bit 0 */
#define  FSMC_PATT2_ATTHOLD2_1               (0x00020000)        /*!< Bit 1 */
#define  FSMC_PATT2_ATTHOLD2_2               (0x00040000)        /*!< Bit 2 */
#define  FSMC_PATT2_ATTHOLD2_3               (0x00080000)        /*!< Bit 3 */
#define  FSMC_PATT2_ATTHOLD2_4               (0x00100000)        /*!< Bit 4 */
#define  FSMC_PATT2_ATTHOLD2_5               (0x00200000)        /*!< Bit 5 */
#define  FSMC_PATT2_ATTHOLD2_6               (0x00400000)        /*!< Bit 6 */
#define  FSMC_PATT2_ATTHOLD2_7               (0x00800000)        /*!< Bit 7 */

#define  FSMC_PATT2_ATTHIZ2                  (0xFF000000)        /*!< ATTHIZ2[7:0] bits (Attribute memory 2 databus HiZ time) */
#define  FSMC_PATT2_ATTHIZ2_0                (0x01000000)        /*!< Bit 0 */
#define  FSMC_PATT2_ATTHIZ2_1                (0x02000000)        /*!< Bit 1 */
#define  FSMC_PATT2_ATTHIZ2_2                (0x04000000)        /*!< Bit 2 */
#define  FSMC_PATT2_ATTHIZ2_3                (0x08000000)        /*!< Bit 3 */
#define  FSMC_PATT2_ATTHIZ2_4                (0x10000000)        /*!< Bit 4 */
#define  FSMC_PATT2_ATTHIZ2_5                (0x20000000)        /*!< Bit 5 */
#define  FSMC_PATT2_ATTHIZ2_6                (0x40000000)        /*!< Bit 6 */
#define  FSMC_PATT2_ATTHIZ2_7                (0x80000000)        /*!< Bit 7 */

/******************  Bit definition for FSMC_PATT3 register  ******************/
#define  FSMC_PATT3_ATTSET3                  (0x000000FF)        /*!< ATTSET3[7:0] bits (Attribute memory 3 setup time) */
#define  FSMC_PATT3_ATTSET3_0                (0x00000001)        /*!< Bit 0 */
#define  FSMC_PATT3_ATTSET3_1                (0x00000002)        /*!< Bit 1 */
#define  FSMC_PATT3_ATTSET3_2                (0x00000004)        /*!< Bit 2 */
#define  FSMC_PATT3_ATTSET3_3                (0x00000008)        /*!< Bit 3 */
#define  FSMC_PATT3_ATTSET3_4                (0x00000010)        /*!< Bit 4 */
#define  FSMC_PATT3_ATTSET3_5                (0x00000020)        /*!< Bit 5 */
#define  FSMC_PATT3_ATTSET3_6                (0x00000040)        /*!< Bit 6 */
#define  FSMC_PATT3_ATTSET3_7                (0x00000080)        /*!< Bit 7 */

#define  FSMC_PATT3_ATTWAIT3                 (0x0000FF00)        /*!< ATTWAIT3[7:0] bits (Attribute memory 3 wait time) */
#define  FSMC_PATT3_ATTWAIT3_0               (0x00000100)        /*!< Bit 0 */
#define  FSMC_PATT3_ATTWAIT3_1               (0x00000200)        /*!< Bit 1 */
#define  FSMC_PATT3_ATTWAIT3_2               (0x00000400)        /*!< Bit 2 */
#define  FSMC_PATT3_ATTWAIT3_3               (0x00000800)        /*!< Bit 3 */
#define  FSMC_PATT3_ATTWAIT3_4               (0x00001000)        /*!< Bit 4 */
#define  FSMC_PATT3_ATTWAIT3_5               (0x00002000)        /*!< Bit 5 */
#define  FSMC_PATT3_ATTWAIT3_6               (0x00004000)        /*!< Bit 6 */
#define  FSMC_PATT3_ATTWAIT3_7               (0x00008000)        /*!< Bit 7 */

#define  FSMC_PATT3_ATTHOLD3                 (0x00FF0000)        /*!< ATTHOLD3[7:0] bits (Attribute memory 3 hold time) */
#define  FSMC_PATT3_ATTHOLD3_0               (0x00010000)        /*!< Bit 0 */
#define  FSMC_PATT3_ATTHOLD3_1               (0x00020000)        /*!< Bit 1 */
#define  FSMC_PATT3_ATTHOLD3_2               (0x00040000)        /*!< Bit 2 */
#define  FSMC_PATT3_ATTHOLD3_3               (0x00080000)        /*!< Bit 3 */
#define  FSMC_PATT3_ATTHOLD3_4               (0x00100000)        /*!< Bit 4 */
#define  FSMC_PATT3_ATTHOLD3_5               (0x00200000)        /*!< Bit 5 */
#define  FSMC_PATT3_ATTHOLD3_6               (0x00400000)        /*!< Bit 6 */
#define  FSMC_PATT3_ATTHOLD3_7               (0x00800000)        /*!< Bit 7 */

#define  FSMC_PATT3_ATTHIZ3                  (0xFF000000)        /*!< ATTHIZ3[7:0] bits (Attribute memory 3 databus HiZ time) */
#define  FSMC_PATT3_ATTHIZ3_0                (0x01000000)        /*!< Bit 0 */
#define  FSMC_PATT3_ATTHIZ3_1                (0x02000000)        /*!< Bit 1 */
#define  FSMC_PATT3_ATTHIZ3_2                (0x04000000)        /*!< Bit 2 */
#define  FSMC_PATT3_ATTHIZ3_3                (0x08000000)        /*!< Bit 3 */
#define  FSMC_PATT3_ATTHIZ3_4                (0x10000000)        /*!< Bit 4 */
#define  FSMC_PATT3_ATTHIZ3_5                (0x20000000)        /*!< Bit 5 */
#define  FSMC_PATT3_ATTHIZ3_6                (0x40000000)        /*!< Bit 6 */
#define  FSMC_PATT3_ATTHIZ3_7                (0x80000000)        /*!< Bit 7 */

/******************  Bit definition for FSMC_PATT4 register  ******************/
#define  FSMC_PATT4_ATTSET4                  (0x000000FF)        /*!< ATTSET4[7:0] bits (Attribute memory 4 setup time) */
#define  FSMC_PATT4_ATTSET4_0                (0x00000001)        /*!< Bit 0 */
#define  FSMC_PATT4_ATTSET4_1                (0x00000002)        /*!< Bit 1 */
#define  FSMC_PATT4_ATTSET4_2                (0x00000004)        /*!< Bit 2 */
#define  FSMC_PATT4_ATTSET4_3                (0x00000008)        /*!< Bit 3 */
#define  FSMC_PATT4_ATTSET4_4                (0x00000010)        /*!< Bit 4 */
#define  FSMC_PATT4_ATTSET4_5                (0x00000020)        /*!< Bit 5 */
#define  FSMC_PATT4_ATTSET4_6                (0x00000040)        /*!< Bit 6 */
#define  FSMC_PATT4_ATTSET4_7                (0x00000080)        /*!< Bit 7 */

#define  FSMC_PATT4_ATTWAIT4                 (0x0000FF00)        /*!< ATTWAIT4[7:0] bits (Attribute memory 4 wait time) */
#define  FSMC_PATT4_ATTWAIT4_0               (0x00000100)        /*!< Bit 0 */
#define  FSMC_PATT4_ATTWAIT4_1               (0x00000200)        /*!< Bit 1 */
#define  FSMC_PATT4_ATTWAIT4_2               (0x00000400)        /*!< Bit 2 */
#define  FSMC_PATT4_ATTWAIT4_3               (0x00000800)        /*!< Bit 3 */
#define  FSMC_PATT4_ATTWAIT4_4               (0x00001000)        /*!< Bit 4 */
#define  FSMC_PATT4_ATTWAIT4_5               (0x00002000)        /*!< Bit 5 */
#define  FSMC_PATT4_ATTWAIT4_6               (0x00004000)        /*!< Bit 6 */
#define  FSMC_PATT4_ATTWAIT4_7               (0x00008000)        /*!< Bit 7 */

#define  FSMC_PATT4_ATTHOLD4                 (0x00FF0000)        /*!< ATTHOLD4[7:0] bits (Attribute memory 4 hold time) */
#define  FSMC_PATT4_ATTHOLD4_0               (0x00010000)        /*!< Bit 0 */
#define  FSMC_PATT4_ATTHOLD4_1               (0x00020000)        /*!< Bit 1 */
#define  FSMC_PATT4_ATTHOLD4_2               (0x00040000)        /*!< Bit 2 */
#define  FSMC_PATT4_ATTHOLD4_3               (0x00080000)        /*!< Bit 3 */
#define  FSMC_PATT4_ATTHOLD4_4               (0x00100000)        /*!< Bit 4 */
#define  FSMC_PATT4_ATTHOLD4_5               (0x00200000)        /*!< Bit 5 */
#define  FSMC_PATT4_ATTHOLD4_6               (0x00400000)        /*!< Bit 6 */
#define  FSMC_PATT4_ATTHOLD4_7               (0x00800000)        /*!< Bit 7 */

#define  FSMC_PATT4_ATTHIZ4                  (0xFF000000)        /*!< ATTHIZ4[7:0] bits (Attribute memory 4 databus HiZ time) */
#define  FSMC_PATT4_ATTHIZ4_0                (0x01000000)        /*!< Bit 0 */
#define  FSMC_PATT4_ATTHIZ4_1                (0x02000000)        /*!< Bit 1 */
#define  FSMC_PATT4_ATTHIZ4_2                (0x04000000)        /*!< Bit 2 */
#define  FSMC_PATT4_ATTHIZ4_3                (0x08000000)        /*!< Bit 3 */
#define  FSMC_PATT4_ATTHIZ4_4                (0x10000000)        /*!< Bit 4 */
#define  FSMC_PATT4_ATTHIZ4_5                (0x20000000)        /*!< Bit 5 */
#define  FSMC_PATT4_ATTHIZ4_6                (0x40000000)        /*!< Bit 6 */
#define  FSMC_PATT4_ATTHIZ4_7                (0x80000000)        /*!< Bit 7 */

/******************  Bit definition for FSMC_PIO4 register  *******************/
#define  FSMC_PIO4_IOSET4                    (0x000000FF)        /*!< IOSET4[7:0] bits (I/O 4 setup time) */
#define  FSMC_PIO4_IOSET4_0                  (0x00000001)        /*!< Bit 0 */
#define  FSMC_PIO4_IOSET4_1                  (0x00000002)        /*!< Bit 1 */
#define  FSMC_PIO4_IOSET4_2                  (0x00000004)        /*!< Bit 2 */
#define  FSMC_PIO4_IOSET4_3                  (0x00000008)        /*!< Bit 3 */
#define  FSMC_PIO4_IOSET4_4                  (0x00000010)        /*!< Bit 4 */
#define  FSMC_PIO4_IOSET4_5                  (0x00000020)        /*!< Bit 5 */
#define  FSMC_PIO4_IOSET4_6                  (0x00000040)        /*!< Bit 6 */
#define  FSMC_PIO4_IOSET4_7                  (0x00000080)        /*!< Bit 7 */

#define  FSMC_PIO4_IOWAIT4                   (0x0000FF00)        /*!< IOWAIT4[7:0] bits (I/O 4 wait time) */
#define  FSMC_PIO4_IOWAIT4_0                 (0x00000100)        /*!< Bit 0 */
#define  FSMC_PIO4_IOWAIT4_1                 (0x00000200)        /*!< Bit 1 */
#define  FSMC_PIO4_IOWAIT4_2                 (0x00000400)        /*!< Bit 2 */
#define  FSMC_PIO4_IOWAIT4_3                 (0x00000800)        /*!< Bit 3 */
#define  FSMC_PIO4_IOWAIT4_4                 (0x00001000)        /*!< Bit 4 */
#define  FSMC_PIO4_IOWAIT4_5                 (0x00002000)        /*!< Bit 5 */
#define  FSMC_PIO4_IOWAIT4_6                 (0x00004000)        /*!< Bit 6 */
#define  FSMC_PIO4_IOWAIT4_7                 (0x00008000)        /*!< Bit 7 */

#define  FSMC_PIO4_IOHOLD4                   (0x00FF0000)        /*!< IOHOLD4[7:0] bits (I/O 4 hold time) */
#define  FSMC_PIO4_IOHOLD4_0                 (0x00010000)        /*!< Bit 0 */
#define  FSMC_PIO4_IOHOLD4_1                 (0x00020000)        /*!< Bit 1 */
#define  FSMC_PIO4_IOHOLD4_2                 (0x00040000)        /*!< Bit 2 */
#define  FSMC_PIO4_IOHOLD4_3                 (0x00080000)        /*!< Bit 3 */
#define  FSMC_PIO4_IOHOLD4_4                 (0x00100000)        /*!< Bit 4 */
#define  FSMC_PIO4_IOHOLD4_5                 (0x00200000)        /*!< Bit 5 */
#define  FSMC_PIO4_IOHOLD4_6                 (0x00400000)        /*!< Bit 6 */
#define  FSMC_PIO4_IOHOLD4_7                 (0x00800000)        /*!< Bit 7 */

#define  FSMC_PIO4_IOHIZ4                    (0xFF000000)        /*!< IOHIZ4[7:0] bits (I/O 4 databus HiZ time) */
#define  FSMC_PIO4_IOHIZ4_0                  (0x01000000)        /*!< Bit 0 */
#define  FSMC_PIO4_IOHIZ4_1                  (0x02000000)        /*!< Bit 1 */
#define  FSMC_PIO4_IOHIZ4_2                  (0x04000000)        /*!< Bit 2 */
#define  FSMC_PIO4_IOHIZ4_3                  (0x08000000)        /*!< Bit 3 */
#define  FSMC_PIO4_IOHIZ4_4                  (0x10000000)        /*!< Bit 4 */
#define  FSMC_PIO4_IOHIZ4_5                  (0x20000000)        /*!< Bit 5 */
#define  FSMC_PIO4_IOHIZ4_6                  (0x40000000)        /*!< Bit 6 */
#define  FSMC_PIO4_IOHIZ4_7                  (0x80000000)        /*!< Bit 7 */

/******************  Bit definition for FSMC_ECCR2 register  ******************/
#define  FSMC_ECCR2_ECC2                     (0xFFFFFFFF)        /*!< ECC result */

/******************  Bit definition for FSMC_ECCR3 register  ******************/
#define  FSMC_ECCR3_ECC3                     (0xFFFFFFFF)        /*!< ECC result */

/******************************************************************************/
/*                                                                            */
/*                          SD host Interface                                 */
/*                                                                            */
/******************************************************************************/

/******************  Bit definition for SDIO_POWER register  ******************/
#define  SDIO_POWER_PWRCTRL                  ((uint8_t)0x03)               /*!< PWRCTRL[1:0] bits (Power supply control bits) */
#define  SDIO_POWER_PWRCTRL_0                ((uint8_t)0x01)               /*!< Bit 0 */
#define  SDIO_POWER_PWRCTRL_1                ((uint8_t)0x02)               /*!< Bit 1 */

/******************  Bit definition for SDIO_CLKCR register  ******************/
#define  SDIO_CLKCR_CLKDIV                   (0x00FF)            /*!< Clock divide factor */
#define  SDIO_CLKCR_CLKEN                    (0x0100)            /*!< Clock enable bit */
#define  SDIO_CLKCR_PWRSAV                   (0x0200)            /*!< Power saving configuration bit */
#define  SDIO_CLKCR_BYPASS                   (0x0400)            /*!< Clock divider bypass enable bit */

#define  SDIO_CLKCR_WIDBUS                   (0x1800)            /*!< WIDBUS[1:0] bits (Wide bus mode enable bit) */
#define  SDIO_CLKCR_WIDBUS_0                 (0x0800)            /*!< Bit 0 */
#define  SDIO_CLKCR_WIDBUS_1                 (0x1000)            /*!< Bit 1 */

#define  SDIO_CLKCR_NEGEDGE                  (0x2000)            /*!< SDIO_CK dephasing selection bit */
#define  SDIO_CLKCR_HWFC_EN                  (0x4000)            /*!< HW Flow Control enable */

/*******************  Bit definition for SDIO_ARG register  *******************/
#define  SDIO_ARG_CMDARG                     (0xFFFFFFFF)            /*!< Command argument */

/*******************  Bit definition for SDIO_CMD register  *******************/
#define  SDIO_CMD_CMDINDEX                   (0x003F)            /*!< Command Index */

#define  SDIO_CMD_WAITRESP                   (0x00C0)            /*!< WAITRESP[1:0] bits (Wait for response bits) */
#define  SDIO_CMD_WAITRESP_0                 (0x0040)            /*!<  Bit 0 */
#define  SDIO_CMD_WAITRESP_1                 (0x0080)            /*!<  Bit 1 */

#define  SDIO_CMD_WAITINT                    (0x0100)            /*!< CPSM Waits for Interrupt Request */
#define  SDIO_CMD_WAITPEND                   (0x0200)            /*!< CPSM Waits for ends of data transfer (CmdPend internal signal) */
#define  SDIO_CMD_CPSMEN                     (0x0400)            /*!< Command path state machine (CPSM) Enable bit */
#define  SDIO_CMD_SDIOSUSPEND                (0x0800)            /*!< SD I/O suspend command */
#define  SDIO_CMD_ENCMDCOMPL                 (0x1000)            /*!< Enable CMD completion */
#define  SDIO_CMD_NIEN                       (0x2000)            /*!< Not Interrupt Enable */
#define  SDIO_CMD_CEATACMD                   (0x4000)            /*!< CE-ATA command */

/*****************  Bit definition for SDIO_RESPCMD register  *****************/
#define  SDIO_RESPCMD_RESPCMD                ((uint8_t)0x3F)               /*!< Response command index */

/******************  Bit definition for SDIO_RESP0 register  ******************/
#define  SDIO_RESP0_CARDSTATUS0              (0xFFFFFFFF)        /*!< Card Status */

/******************  Bit definition for SDIO_RESP1 register  ******************/
#define  SDIO_RESP1_CARDSTATUS1              (0xFFFFFFFF)        /*!< Card Status */

/******************  Bit definition for SDIO_RESP2 register  ******************/
#define  SDIO_RESP2_CARDSTATUS2              (0xFFFFFFFF)        /*!< Card Status */

/******************  Bit definition for SDIO_RESP3 register  ******************/
#define  SDIO_RESP3_CARDSTATUS3              (0xFFFFFFFF)        /*!< Card Status */

/******************  Bit definition for SDIO_RESP4 register  ******************/
#define  SDIO_RESP4_CARDSTATUS4              (0xFFFFFFFF)        /*!< Card Status */

/******************  Bit definition for SDIO_DTIMER register  *****************/
#define  SDIO_DTIMER_DATATIME                (0xFFFFFFFF)        /*!< Data timeout period. */

/******************  Bit definition for SDIO_DLEN register  *******************/
#define  SDIO_DLEN_DATALENGTH                (0x01FFFFFF)        /*!< Data length value */

/******************  Bit definition for SDIO_DCTRL register  ******************/
#define  SDIO_DCTRL_DTEN                     (0x0001)            /*!< Data transfer enabled bit */
#define  SDIO_DCTRL_DTDIR                    (0x0002)            /*!< Data transfer direction selection */
#define  SDIO_DCTRL_DTMODE                   (0x0004)            /*!< Data transfer mode selection */
#define  SDIO_DCTRL_DMAEN                    (0x0008)            /*!< DMA enabled bit */

#define  SDIO_DCTRL_DBLOCKSIZE               (0x00F0)            /*!< DBLOCKSIZE[3:0] bits (Data block size) */
#define  SDIO_DCTRL_DBLOCKSIZE_0             (0x0010)            /*!< Bit 0 */
#define  SDIO_DCTRL_DBLOCKSIZE_1             (0x0020)            /*!< Bit 1 */
#define  SDIO_DCTRL_DBLOCKSIZE_2             (0x0040)            /*!< Bit 2 */
#define  SDIO_DCTRL_DBLOCKSIZE_3             (0x0080)            /*!< Bit 3 */

#define  SDIO_DCTRL_RWSTART                  (0x0100)            /*!< Read wait start */
#define  SDIO_DCTRL_RWSTOP                   (0x0200)            /*!< Read wait stop */
#define  SDIO_DCTRL_RWMOD                    (0x0400)            /*!< Read wait mode */
#define  SDIO_DCTRL_SDIOEN                   (0x0800)            /*!< SD I/O enable functions */

/******************  Bit definition for SDIO_DCOUNT register  *****************/
#define  SDIO_DCOUNT_DATACOUNT               (0x01FFFFFF)        /*!< Data count value */

/******************  Bit definition for SDIO_STA register  ********************/
#define  SDIO_STA_CCRCFAIL                   (0x00000001)        /*!< Command response received (CRC check failed) */
#define  SDIO_STA_DCRCFAIL                   (0x00000002)        /*!< Data block sent/received (CRC check failed) */
#define  SDIO_STA_CTIMEOUT                   (0x00000004)        /*!< Command response timeout */
#define  SDIO_STA_DTIMEOUT                   (0x00000008)        /*!< Data timeout */
#define  SDIO_STA_TXUNDERR                   (0x00000010)        /*!< Transmit FIFO underrun error */
#define  SDIO_STA_RXOVERR                    (0x00000020)        /*!< Received FIFO overrun error */
#define  SDIO_STA_CMDREND                    (0x00000040)        /*!< Command response received (CRC check passed) */
#define  SDIO_STA_CMDSENT                    (0x00000080)        /*!< Command sent (no response required) */
#define  SDIO_STA_DATAEND                    (0x00000100)        /*!< Data end (data counter, SDIDCOUNT, is zero) */
#define  SDIO_STA_STBITERR                   (0x00000200)        /*!< Start bit not detected on all data signals in wide bus mode */
#define  SDIO_STA_DBCKEND                    (0x00000400)        /*!< Data block sent/received (CRC check passed) */
#define  SDIO_STA_CMDACT                     (0x00000800)        /*!< Command transfer in progress */
#define  SDIO_STA_TXACT                      (0x00001000)        /*!< Data transmit in progress */
#define  SDIO_STA_RXACT                      (0x00002000)        /*!< Data receive in progress */
#define  SDIO_STA_TXFIFOHE                   (0x00004000)        /*!< Transmit FIFO Half Empty: at least 8 words can be written into the FIFO */
#define  SDIO_STA_RXFIFOHF                   (0x00008000)        /*!< Receive FIFO Half Full: there are at least 8 words in the FIFO */
#define  SDIO_STA_TXFIFOF                    (0x00010000)        /*!< Transmit FIFO full */
#define  SDIO_STA_RXFIFOF                    (0x00020000)        /*!< Receive FIFO full */
#define  SDIO_STA_TXFIFOE                    (0x00040000)        /*!< Transmit FIFO empty */
#define  SDIO_STA_RXFIFOE                    (0x00080000)        /*!< Receive FIFO empty */
#define  SDIO_STA_TXDAVL                     (0x00100000)        /*!< Data available in transmit FIFO */
#define  SDIO_STA_RXDAVL                     (0x00200000)        /*!< Data available in receive FIFO */
#define  SDIO_STA_SDIOIT                     (0x00400000)        /*!< SDIO interrupt received */
#define  SDIO_STA_CEATAEND                   (0x00800000)        /*!< CE-ATA command completion signal received for CMD61 */

/*******************  Bit definition for SDIO_ICR register  *******************/
#define  SDIO_ICR_CCRCFAILC                  (0x00000001)        /*!< CCRCFAIL flag clear bit */
#define  SDIO_ICR_DCRCFAILC                  (0x00000002)        /*!< DCRCFAIL flag clear bit */
#define  SDIO_ICR_CTIMEOUTC                  (0x00000004)        /*!< CTIMEOUT flag clear bit */
#define  SDIO_ICR_DTIMEOUTC                  (0x00000008)        /*!< DTIMEOUT flag clear bit */
#define  SDIO_ICR_TXUNDERRC                  (0x00000010)        /*!< TXUNDERR flag clear bit */
#define  SDIO_ICR_RXOVERRC                   (0x00000020)        /*!< RXOVERR flag clear bit */
#define  SDIO_ICR_CMDRENDC                   (0x00000040)        /*!< CMDREND flag clear bit */
#define  SDIO_ICR_CMDSENTC                   (0x00000080)        /*!< CMDSENT flag clear bit */
#define  SDIO_ICR_DATAENDC                   (0x00000100)        /*!< DATAEND flag clear bit */
#define  SDIO_ICR_STBITERRC                  (0x00000200)        /*!< STBITERR flag clear bit */
#define  SDIO_ICR_DBCKENDC                   (0x00000400)        /*!< DBCKEND flag clear bit */
#define  SDIO_ICR_SDIOITC                    (0x00400000)        /*!< SDIOIT flag clear bit */
#define  SDIO_ICR_CEATAENDC                  (0x00800000)        /*!< CEATAEND flag clear bit */

/******************  Bit definition for SDIO_MASK register  *******************/
#define  SDIO_MASK_CCRCFAILIE                (0x00000001)        /*!< Command CRC Fail Interrupt Enable */
#define  SDIO_MASK_DCRCFAILIE                (0x00000002)        /*!< Data CRC Fail Interrupt Enable */
#define  SDIO_MASK_CTIMEOUTIE                (0x00000004)        /*!< Command TimeOut Interrupt Enable */
#define  SDIO_MASK_DTIMEOUTIE                (0x00000008)        /*!< Data TimeOut Interrupt Enable */
#define  SDIO_MASK_TXUNDERRIE                (0x00000010)        /*!< Tx FIFO UnderRun Error Interrupt Enable */
#define  SDIO_MASK_RXOVERRIE                 (0x00000020)        /*!< Rx FIFO OverRun Error Interrupt Enable */
#define  SDIO_MASK_CMDRENDIE                 (0x00000040)        /*!< Command Response Received Interrupt Enable */
#define  SDIO_MASK_CMDSENTIE                 (0x00000080)        /*!< Command Sent Interrupt Enable */
#define  SDIO_MASK_DATAENDIE                 (0x00000100)        /*!< Data End Interrupt Enable */
#define  SDIO_MASK_STBITERRIE                (0x00000200)        /*!< Start Bit Error Interrupt Enable */
#define  SDIO_MASK_DBCKENDIE                 (0x00000400)        /*!< Data Block End Interrupt Enable */
#define  SDIO_MASK_CMDACTIE                  (0x00000800)        /*!< Command Acting Interrupt Enable */
#define  SDIO_MASK_TXACTIE                   (0x00001000)        /*!< Data Transmit Acting Interrupt Enable */
#define  SDIO_MASK_RXACTIE                   (0x00002000)        /*!< Data receive acting interrupt enabled */
#define  SDIO_MASK_TXFIFOHEIE                (0x00004000)        /*!< Tx FIFO Half Empty interrupt Enable */
#define  SDIO_MASK_RXFIFOHFIE                (0x00008000)        /*!< Rx FIFO Half Full interrupt Enable */
#define  SDIO_MASK_TXFIFOFIE                 (0x00010000)        /*!< Tx FIFO Full interrupt Enable */
#define  SDIO_MASK_RXFIFOFIE                 (0x00020000)        /*!< Rx FIFO Full interrupt Enable */
#define  SDIO_MASK_TXFIFOEIE                 (0x00040000)        /*!< Tx FIFO Empty interrupt Enable */
#define  SDIO_MASK_RXFIFOEIE                 (0x00080000)        /*!< Rx FIFO Empty interrupt Enable */
#define  SDIO_MASK_TXDAVLIE                  (0x00100000)        /*!< Data available in Tx FIFO interrupt Enable */
#define  SDIO_MASK_RXDAVLIE                  (0x00200000)        /*!< Data available in Rx FIFO interrupt Enable */
#define  SDIO_MASK_SDIOITIE                  (0x00400000)        /*!< SDIO Mode Interrupt Received interrupt Enable */
#define  SDIO_MASK_CEATAENDIE                (0x00800000)        /*!< CE-ATA command completion signal received Interrupt Enable */

/*****************  Bit definition for SDIO_FIFOCNT register  *****************/
#define  SDIO_FIFOCNT_FIFOCOUNT              (0x00FFFFFF)        /*!< Remaining number of words to be written to or read from the FIFO */

/******************  Bit definition for SDIO_FIFO register  *******************/
#define  SDIO_FIFO_FIFODATA                  (0xFFFFFFFF)        /*!< Receive and transmit FIFO data */

/******************************************************************************/
/*                                                                            */
/*                                   USB Device FS                            */
/*                                                                            */
/******************************************************************************/

/*!< Endpoint-specific registers */
/*******************  Bit definition for USB_EP0R register  *******************/
#define  USB_EP0R_EA                         (0x000F)            /*!< Endpoint Address */

#define  USB_EP0R_STAT_TX                    (0x0030)            /*!< STAT_TX[1:0] bits (Status bits, for transmission transfers) */
#define  USB_EP0R_STAT_TX_0                  (0x0010)            /*!< Bit 0 */
#define  USB_EP0R_STAT_TX_1                  (0x0020)            /*!< Bit 1 */

#define  USB_EP0R_DTOG_TX                    (0x0040)            /*!< Data Toggle, for transmission transfers */
#define  USB_EP0R_CTR_TX                     (0x0080)            /*!< Correct Transfer for transmission */
#define  USB_EP0R_EP_KIND                    (0x0100)            /*!< Endpoint Kind */

#define  USB_EP0R_EP_TYPE                    (0x0600)            /*!< EP_TYPE[1:0] bits (Endpoint type) */
#define  USB_EP0R_EP_TYPE_0                  (0x0200)            /*!< Bit 0 */
#define  USB_EP0R_EP_TYPE_1                  (0x0400)            /*!< Bit 1 */

#define  USB_EP0R_SETUP                      (0x0800)            /*!< Setup transaction completed */

#define  USB_EP0R_STAT_RX                    (0x3000)            /*!< STAT_RX[1:0] bits (Status bits, for reception transfers) */
#define  USB_EP0R_STAT_RX_0                  (0x1000)            /*!< Bit 0 */
#define  USB_EP0R_STAT_RX_1                  (0x2000)            /*!< Bit 1 */

#define  USB_EP0R_DTOG_RX                    (0x4000)            /*!< Data Toggle, for reception transfers */
#define  USB_EP0R_CTR_RX                     (0x8000)            /*!< Correct Transfer for reception */

/*******************  Bit definition for USB_EP1R register  *******************/
#define  USB_EP1R_EA                         (0x000F)            /*!< Endpoint Address */

#define  USB_EP1R_STAT_TX                    (0x0030)            /*!< STAT_TX[1:0] bits (Status bits, for transmission transfers) */
#define  USB_EP1R_STAT_TX_0                  (0x0010)            /*!< Bit 0 */
#define  USB_EP1R_STAT_TX_1                  (0x0020)            /*!< Bit 1 */

#define  USB_EP1R_DTOG_TX                    (0x0040)            /*!< Data Toggle, for transmission transfers */
#define  USB_EP1R_CTR_TX                     (0x0080)            /*!< Correct Transfer for transmission */
#define  USB_EP1R_EP_KIND                    (0x0100)            /*!< Endpoint Kind */

#define  USB_EP1R_EP_TYPE                    (0x0600)            /*!< EP_TYPE[1:0] bits (Endpoint type) */
#define  USB_EP1R_EP_TYPE_0                  (0x0200)            /*!< Bit 0 */
#define  USB_EP1R_EP_TYPE_1                  (0x0400)            /*!< Bit 1 */

#define  USB_EP1R_SETUP                      (0x0800)            /*!< Setup transaction completed */

#define  USB_EP1R_STAT_RX                    (0x3000)            /*!< STAT_RX[1:0] bits (Status bits, for reception transfers) */
#define  USB_EP1R_STAT_RX_0                  (0x1000)            /*!< Bit 0 */
#define  USB_EP1R_STAT_RX_1                  (0x2000)            /*!< Bit 1 */

#define  USB_EP1R_DTOG_RX                    (0x4000)            /*!< Data Toggle, for reception transfers */
#define  USB_EP1R_CTR_RX                     (0x8000)            /*!< Correct Transfer for reception */

/*******************  Bit definition for USB_EP2R register  *******************/
#define  USB_EP2R_EA                         (0x000F)            /*!< Endpoint Address */

#define  USB_EP2R_STAT_TX                    (0x0030)            /*!< STAT_TX[1:0] bits (Status bits, for transmission transfers) */
#define  USB_EP2R_STAT_TX_0                  (0x0010)            /*!< Bit 0 */
#define  USB_EP2R_STAT_TX_1                  (0x0020)            /*!< Bit 1 */

#define  USB_EP2R_DTOG_TX                    (0x0040)            /*!< Data Toggle, for transmission transfers */
#define  USB_EP2R_CTR_TX                     (0x0080)            /*!< Correct Transfer for transmission */
#define  USB_EP2R_EP_KIND                    (0x0100)            /*!< Endpoint Kind */

#define  USB_EP2R_EP_TYPE                    (0x0600)            /*!< EP_TYPE[1:0] bits (Endpoint type) */
#define  USB_EP2R_EP_TYPE_0                  (0x0200)            /*!< Bit 0 */
#define  USB_EP2R_EP_TYPE_1                  (0x0400)            /*!< Bit 1 */

#define  USB_EP2R_SETUP                      (0x0800)            /*!< Setup transaction completed */

#define  USB_EP2R_STAT_RX                    (0x3000)            /*!< STAT_RX[1:0] bits (Status bits, for reception transfers) */
#define  USB_EP2R_STAT_RX_0                  (0x1000)            /*!< Bit 0 */
#define  USB_EP2R_STAT_RX_1                  (0x2000)            /*!< Bit 1 */

#define  USB_EP2R_DTOG_RX                    (0x4000)            /*!< Data Toggle, for reception transfers */
#define  USB_EP2R_CTR_RX                     (0x8000)            /*!< Correct Transfer for reception */

/*******************  Bit definition for USB_EP3R register  *******************/
#define  USB_EP3R_EA                         (0x000F)            /*!< Endpoint Address */

#define  USB_EP3R_STAT_TX                    (0x0030)            /*!< STAT_TX[1:0] bits (Status bits, for transmission transfers) */
#define  USB_EP3R_STAT_TX_0                  (0x0010)            /*!< Bit 0 */
#define  USB_EP3R_STAT_TX_1                  (0x0020)            /*!< Bit 1 */

#define  USB_EP3R_DTOG_TX                    (0x0040)            /*!< Data Toggle, for transmission transfers */
#define  USB_EP3R_CTR_TX                     (0x0080)            /*!< Correct Transfer for transmission */
#define  USB_EP3R_EP_KIND                    (0x0100)            /*!< Endpoint Kind */

#define  USB_EP3R_EP_TYPE                    (0x0600)            /*!< EP_TYPE[1:0] bits (Endpoint type) */
#define  USB_EP3R_EP_TYPE_0                  (0x0200)            /*!< Bit 0 */
#define  USB_EP3R_EP_TYPE_1                  (0x0400)            /*!< Bit 1 */

#define  USB_EP3R_SETUP                      (0x0800)            /*!< Setup transaction completed */

#define  USB_EP3R_STAT_RX                    (0x3000)            /*!< STAT_RX[1:0] bits (Status bits, for reception transfers) */
#define  USB_EP3R_STAT_RX_0                  (0x1000)            /*!< Bit 0 */
#define  USB_EP3R_STAT_RX_1                  (0x2000)            /*!< Bit 1 */

#define  USB_EP3R_DTOG_RX                    (0x4000)            /*!< Data Toggle, for reception transfers */
#define  USB_EP3R_CTR_RX                     (0x8000)            /*!< Correct Transfer for reception */

/*******************  Bit definition for USB_EP4R register  *******************/
#define  USB_EP4R_EA                         (0x000F)            /*!< Endpoint Address */

#define  USB_EP4R_STAT_TX                    (0x0030)            /*!< STAT_TX[1:0] bits (Status bits, for transmission transfers) */
#define  USB_EP4R_STAT_TX_0                  (0x0010)            /*!< Bit 0 */
#define  USB_EP4R_STAT_TX_1                  (0x0020)            /*!< Bit 1 */

#define  USB_EP4R_DTOG_TX                    (0x0040)            /*!< Data Toggle, for transmission transfers */
#define  USB_EP4R_CTR_TX                     (0x0080)            /*!< Correct Transfer for transmission */
#define  USB_EP4R_EP_KIND                    (0x0100)            /*!< Endpoint Kind */

#define  USB_EP4R_EP_TYPE                    (0x0600)            /*!< EP_TYPE[1:0] bits (Endpoint type) */
#define  USB_EP4R_EP_TYPE_0                  (0x0200)            /*!< Bit 0 */
#define  USB_EP4R_EP_TYPE_1                  (0x0400)            /*!< Bit 1 */

#define  USB_EP4R_SETUP                      (0x0800)            /*!< Setup transaction completed */

#define  USB_EP4R_STAT_RX                    (0x3000)            /*!< STAT_RX[1:0] bits (Status bits, for reception transfers) */
#define  USB_EP4R_STAT_RX_0                  (0x1000)            /*!< Bit 0 */
#define  USB_EP4R_STAT_RX_1                  (0x2000)            /*!< Bit 1 */

#define  USB_EP4R_DTOG_RX                    (0x4000)            /*!< Data Toggle, for reception transfers */
#define  USB_EP4R_CTR_RX                     (0x8000)            /*!< Correct Transfer for reception */

/*******************  Bit definition for USB_EP5R register  *******************/
#define  USB_EP5R_EA                         (0x000F)            /*!< Endpoint Address */

#define  USB_EP5R_STAT_TX                    (0x0030)            /*!< STAT_TX[1:0] bits (Status bits, for transmission transfers) */
#define  USB_EP5R_STAT_TX_0                  (0x0010)            /*!< Bit 0 */
#define  USB_EP5R_STAT_TX_1                  (0x0020)            /*!< Bit 1 */

#define  USB_EP5R_DTOG_TX                    (0x0040)            /*!< Data Toggle, for transmission transfers */
#define  USB_EP5R_CTR_TX                     (0x0080)            /*!< Correct Transfer for transmission */
#define  USB_EP5R_EP_KIND                    (0x0100)            /*!< Endpoint Kind */

#define  USB_EP5R_EP_TYPE                    (0x0600)            /*!< EP_TYPE[1:0] bits (Endpoint type) */
#define  USB_EP5R_EP_TYPE_0                  (0x0200)            /*!< Bit 0 */
#define  USB_EP5R_EP_TYPE_1                  (0x0400)            /*!< Bit 1 */

#define  USB_EP5R_SETUP                      (0x0800)            /*!< Setup transaction completed */

#define  USB_EP5R_STAT_RX                    (0x3000)            /*!< STAT_RX[1:0] bits (Status bits, for reception transfers) */
#define  USB_EP5R_STAT_RX_0                  (0x1000)            /*!< Bit 0 */
#define  USB_EP5R_STAT_RX_1                  (0x2000)            /*!< Bit 1 */

#define  USB_EP5R_DTOG_RX                    (0x4000)            /*!< Data Toggle, for reception transfers */
#define  USB_EP5R_CTR_RX                     (0x8000)            /*!< Correct Transfer for reception */

/*******************  Bit definition for USB_EP6R register  *******************/
#define  USB_EP6R_EA                         (0x000F)            /*!< Endpoint Address */

#define  USB_EP6R_STAT_TX                    (0x0030)            /*!< STAT_TX[1:0] bits (Status bits, for transmission transfers) */
#define  USB_EP6R_STAT_TX_0                  (0x0010)            /*!< Bit 0 */
#define  USB_EP6R_STAT_TX_1                  (0x0020)            /*!< Bit 1 */

#define  USB_EP6R_DTOG_TX                    (0x0040)            /*!< Data Toggle, for transmission transfers */
#define  USB_EP6R_CTR_TX                     (0x0080)            /*!< Correct Transfer for transmission */
#define  USB_EP6R_EP_KIND                    (0x0100)            /*!< Endpoint Kind */

#define  USB_EP6R_EP_TYPE                    (0x0600)            /*!< EP_TYPE[1:0] bits (Endpoint type) */
#define  USB_EP6R_EP_TYPE_0                  (0x0200)            /*!< Bit 0 */
#define  USB_EP6R_EP_TYPE_1                  (0x0400)            /*!< Bit 1 */

#define  USB_EP6R_SETUP                      (0x0800)            /*!< Setup transaction completed */

#define  USB_EP6R_STAT_RX                    (0x3000)            /*!< STAT_RX[1:0] bits (Status bits, for reception transfers) */
#define  USB_EP6R_STAT_RX_0                  (0x1000)            /*!< Bit 0 */
#define  USB_EP6R_STAT_RX_1                  (0x2000)            /*!< Bit 1 */

#define  USB_EP6R_DTOG_RX                    (0x4000)            /*!< Data Toggle, for reception transfers */
#define  USB_EP6R_CTR_RX                     (0x8000)            /*!< Correct Transfer for reception */

/*******************  Bit definition for USB_EP7R register  *******************/
#define  USB_EP7R_EA                         (0x000F)            /*!< Endpoint Address */

#define  USB_EP7R_STAT_TX                    (0x0030)            /*!< STAT_TX[1:0] bits (Status bits, for transmission transfers) */
#define  USB_EP7R_STAT_TX_0                  (0x0010)            /*!< Bit 0 */
#define  USB_EP7R_STAT_TX_1                  (0x0020)            /*!< Bit 1 */

#define  USB_EP7R_DTOG_TX                    (0x0040)            /*!< Data Toggle, for transmission transfers */
#define  USB_EP7R_CTR_TX                     (0x0080)            /*!< Correct Transfer for transmission */
#define  USB_EP7R_EP_KIND                    (0x0100)            /*!< Endpoint Kind */

#define  USB_EP7R_EP_TYPE                    (0x0600)            /*!< EP_TYPE[1:0] bits (Endpoint type) */
#define  USB_EP7R_EP_TYPE_0                  (0x0200)            /*!< Bit 0 */
#define  USB_EP7R_EP_TYPE_1                  (0x0400)            /*!< Bit 1 */

#define  USB_EP7R_SETUP                      (0x0800)            /*!< Setup transaction completed */

#define  USB_EP7R_STAT_RX                    (0x3000)            /*!< STAT_RX[1:0] bits (Status bits, for reception transfers) */
#define  USB_EP7R_STAT_RX_0                  (0x1000)            /*!< Bit 0 */
#define  USB_EP7R_STAT_RX_1                  (0x2000)            /*!< Bit 1 */

#define  USB_EP7R_DTOG_RX                    (0x4000)            /*!< Data Toggle, for reception transfers */
#define  USB_EP7R_CTR_RX                     (0x8000)            /*!< Correct Transfer for reception */

/*!< Common registers */
/*******************  Bit definition for USB_CNTR register  *******************/
#define  USB_CNTR_FRES                       (0x0001)            /*!< Force USB Reset */
#define  USB_CNTR_PDWN                       (0x0002)            /*!< Power down */
#define  USB_CNTR_LP_MODE                    (0x0004)            /*!< Low-power mode */
#define  USB_CNTR_FSUSP                      (0x0008)            /*!< Force suspend */
#define  USB_CNTR_RESUME                     (0x0010)            /*!< Resume request */
#define  USB_CNTR_ESOFM                      (0x0100)            /*!< Expected Start Of Frame Interrupt Mask */
#define  USB_CNTR_SOFM                       (0x0200)            /*!< Start Of Frame Interrupt Mask */
#define  USB_CNTR_RESETM                     (0x0400)            /*!< RESET Interrupt Mask */
#define  USB_CNTR_SUSPM                      (0x0800)            /*!< Suspend mode Interrupt Mask */
#define  USB_CNTR_WKUPM                      (0x1000)            /*!< Wakeup Interrupt Mask */
#define  USB_CNTR_ERRM                       (0x2000)            /*!< Error Interrupt Mask */
#define  USB_CNTR_PMAOVRM                    (0x4000)            /*!< Packet Memory Area Over / Underrun Interrupt Mask */
#define  USB_CNTR_CTRM                       (0x8000)            /*!< Correct Transfer Interrupt Mask */

/*******************  Bit definition for USB_ISTR register  *******************/
#define  USB_ISTR_EP_ID                      (0x000F)            /*!< Endpoint Identifier */
#define  USB_ISTR_DIR                        (0x0010)            /*!< Direction of transaction */
#define  USB_ISTR_ESOF                       (0x0100)            /*!< Expected Start Of Frame */
#define  USB_ISTR_SOF                        (0x0200)            /*!< Start Of Frame */
#define  USB_ISTR_RESET                      (0x0400)            /*!< USB RESET request */
#define  USB_ISTR_SUSP                       (0x0800)            /*!< Suspend mode request */
#define  USB_ISTR_WKUP                       (0x1000)            /*!< Wake up */
#define  USB_ISTR_ERR                        (0x2000)            /*!< Error */
#define  USB_ISTR_PMAOVR                     (0x4000)            /*!< Packet Memory Area Over / Underrun */
#define  USB_ISTR_CTR                        (0x8000)            /*!< Correct Transfer */

/*******************  Bit definition for USB_FNR register  ********************/
#define  USB_FNR_FN                          (0x07FF)            /*!< Frame Number */
#define  USB_FNR_LSOF                        (0x1800)            /*!< Lost SOF */
#define  USB_FNR_LCK                         (0x2000)            /*!< Locked */
#define  USB_FNR_RXDM                        (0x4000)            /*!< Receive Data - Line Status */
#define  USB_FNR_RXDP                        (0x8000)            /*!< Receive Data + Line Status */

/******************  Bit definition for USB_DADDR register  *******************/
#define  USB_DADDR_ADD                       ((uint8_t)0x7F)               /*!< ADD[6:0] bits (Device Address) */
#define  USB_DADDR_ADD0                      ((uint8_t)0x01)               /*!< Bit 0 */
#define  USB_DADDR_ADD1                      ((uint8_t)0x02)               /*!< Bit 1 */
#define  USB_DADDR_ADD2                      ((uint8_t)0x04)               /*!< Bit 2 */
#define  USB_DADDR_ADD3                      ((uint8_t)0x08)               /*!< Bit 3 */
#define  USB_DADDR_ADD4                      ((uint8_t)0x10)               /*!< Bit 4 */
#define  USB_DADDR_ADD5                      ((uint8_t)0x20)               /*!< Bit 5 */
#define  USB_DADDR_ADD6                      ((uint8_t)0x40)               /*!< Bit 6 */

#define  USB_DADDR_EF                        ((uint8_t)0x80)               /*!< Enable Function */

/******************  Bit definition for USB_BTABLE register  ******************/    
#define  USB_BTABLE_BTABLE                   (0xFFF8)            /*!< Buffer Table */

/*!< Buffer descriptor table */
/*****************  Bit definition for USB_ADDR0_TX register  *****************/
#define  USB_ADDR0_TX_ADDR0_TX               (0xFFFE)            /*!< Transmission Buffer Address 0 */

/*****************  Bit definition for USB_ADDR1_TX register  *****************/
#define  USB_ADDR1_TX_ADDR1_TX               (0xFFFE)            /*!< Transmission Buffer Address 1 */

/*****************  Bit definition for USB_ADDR2_TX register  *****************/
#define  USB_ADDR2_TX_ADDR2_TX               (0xFFFE)            /*!< Transmission Buffer Address 2 */

/*****************  Bit definition for USB_ADDR3_TX register  *****************/
#define  USB_ADDR3_TX_ADDR3_TX               (0xFFFE)            /*!< Transmission Buffer Address 3 */

/*****************  Bit definition for USB_ADDR4_TX register  *****************/
#define  USB_ADDR4_TX_ADDR4_TX               (0xFFFE)            /*!< Transmission Buffer Address 4 */

/*****************  Bit definition for USB_ADDR5_TX register  *****************/
#define  USB_ADDR5_TX_ADDR5_TX               (0xFFFE)            /*!< Transmission Buffer Address 5 */

/*****************  Bit definition for USB_ADDR6_TX register  *****************/
#define  USB_ADDR6_TX_ADDR6_TX               (0xFFFE)            /*!< Transmission Buffer Address 6 */

/*****************  Bit definition for USB_ADDR7_TX register  *****************/
#define  USB_ADDR7_TX_ADDR7_TX               (0xFFFE)            /*!< Transmission Buffer Address 7 */

/*----------------------------------------------------------------------------*/

/*****************  Bit definition for USB_COUNT0_TX register  ****************/
#define  USB_COUNT0_TX_COUNT0_TX             (0x03FF)            /*!< Transmission Byte Count 0 */

/*****************  Bit definition for USB_COUNT1_TX register  ****************/
#define  USB_COUNT1_TX_COUNT1_TX             (0x03FF)            /*!< Transmission Byte Count 1 */

/*****************  Bit definition for USB_COUNT2_TX register  ****************/
#define  USB_COUNT2_TX_COUNT2_TX             (0x03FF)            /*!< Transmission Byte Count 2 */

/*****************  Bit definition for USB_COUNT3_TX register  ****************/
#define  USB_COUNT3_TX_COUNT3_TX             (0x03FF)            /*!< Transmission Byte Count 3 */

/*****************  Bit definition for USB_COUNT4_TX register  ****************/
#define  USB_COUNT4_TX_COUNT4_TX             (0x03FF)            /*!< Transmission Byte Count 4 */

/*****************  Bit definition for USB_COUNT5_TX register  ****************/
#define  USB_COUNT5_TX_COUNT5_TX             (0x03FF)            /*!< Transmission Byte Count 5 */

/*****************  Bit definition for USB_COUNT6_TX register  ****************/
#define  USB_COUNT6_TX_COUNT6_TX             (0x03FF)            /*!< Transmission Byte Count 6 */

/*****************  Bit definition for USB_COUNT7_TX register  ****************/
#define  USB_COUNT7_TX_COUNT7_TX             (0x03FF)            /*!< Transmission Byte Count 7 */

/*----------------------------------------------------------------------------*/

/****************  Bit definition for USB_COUNT0_TX_0 register  ***************/
#define  USB_COUNT0_TX_0_COUNT0_TX_0         (0x000003FF)        /*!< Transmission Byte Count 0 (low) */

/****************  Bit definition for USB_COUNT0_TX_1 register  ***************/
#define  USB_COUNT0_TX_1_COUNT0_TX_1         (0x03FF0000)        /*!< Transmission Byte Count 0 (high) */

/****************  Bit definition for USB_COUNT1_TX_0 register  ***************/
#define  USB_COUNT1_TX_0_COUNT1_TX_0          (0x000003FF)        /*!< Transmission Byte Count 1 (low) */

/****************  Bit definition for USB_COUNT1_TX_1 register  ***************/
#define  USB_COUNT1_TX_1_COUNT1_TX_1          (0x03FF0000)        /*!< Transmission Byte Count 1 (high) */

/****************  Bit definition for USB_COUNT2_TX_0 register  ***************/
#define  USB_COUNT2_TX_0_COUNT2_TX_0         (0x000003FF)        /*!< Transmission Byte Count 2 (low) */

/****************  Bit definition for USB_COUNT2_TX_1 register  ***************/
#define  USB_COUNT2_TX_1_COUNT2_TX_1         (0x03FF0000)        /*!< Transmission Byte Count 2 (high) */

/****************  Bit definition for USB_COUNT3_TX_0 register  ***************/
#define  USB_COUNT3_TX_0_COUNT3_TX_0         (0x000003FF)        /*!< Transmission Byte Count 3 (low) */

/****************  Bit definition for USB_COUNT3_TX_1 register  ***************/
#define  USB_COUNT3_TX_1_COUNT3_TX_1         (0x03FF0000)        /*!< Transmission Byte Count 3 (high) */

/****************  Bit definition for USB_COUNT4_TX_0 register  ***************/
#define  USB_COUNT4_TX_0_COUNT4_TX_0         (0x000003FF)        /*!< Transmission Byte Count 4 (low) */

/****************  Bit definition for USB_COUNT4_TX_1 register  ***************/
#define  USB_COUNT4_TX_1_COUNT4_TX_1         (0x03FF0000)        /*!< Transmission Byte Count 4 (high) */

/****************  Bit definition for USB_COUNT5_TX_0 register  ***************/
#define  USB_COUNT5_TX_0_COUNT5_TX_0         (0x000003FF)        /*!< Transmission Byte Count 5 (low) */

/****************  Bit definition for USB_COUNT5_TX_1 register  ***************/
#define  USB_COUNT5_TX_1_COUNT5_TX_1         (0x03FF0000)        /*!< Transmission Byte Count 5 (high) */

/****************  Bit definition for USB_COUNT6_TX_0 register  ***************/
#define  USB_COUNT6_TX_0_COUNT6_TX_0         (0x000003FF)        /*!< Transmission Byte Count 6 (low) */

/****************  Bit definition for USB_COUNT6_TX_1 register  ***************/
#define  USB_COUNT6_TX_1_COUNT6_TX_1         (0x03FF0000)        /*!< Transmission Byte Count 6 (high) */

/****************  Bit definition for USB_COUNT7_TX_0 register  ***************/
#define  USB_COUNT7_TX_0_COUNT7_TX_0         (0x000003FF)        /*!< Transmission Byte Count 7 (low) */

/****************  Bit definition for USB_COUNT7_TX_1 register  ***************/
#define  USB_COUNT7_TX_1_COUNT7_TX_1         (0x03FF0000)        /*!< Transmission Byte Count 7 (high) */

/*----------------------------------------------------------------------------*/

/*****************  Bit definition for USB_ADDR0_RX register  *****************/
#define  USB_ADDR0_RX_ADDR0_RX               (0xFFFE)            /*!< Reception Buffer Address 0 */

/*****************  Bit definition for USB_ADDR1_RX register  *****************/
#define  USB_ADDR1_RX_ADDR1_RX               (0xFFFE)            /*!< Reception Buffer Address 1 */

/*****************  Bit definition for USB_ADDR2_RX register  *****************/
#define  USB_ADDR2_RX_ADDR2_RX               (0xFFFE)            /*!< Reception Buffer Address 2 */

/*****************  Bit definition for USB_ADDR3_RX register  *****************/
#define  USB_ADDR3_RX_ADDR3_RX               (0xFFFE)            /*!< Reception Buffer Address 3 */

/*****************  Bit definition for USB_ADDR4_RX register  *****************/
#define  USB_ADDR4_RX_ADDR4_RX               (0xFFFE)            /*!< Reception Buffer Address 4 */

/*****************  Bit definition for USB_ADDR5_RX register  *****************/
#define  USB_ADDR5_RX_ADDR5_RX               (0xFFFE)            /*!< Reception Buffer Address 5 */

/*****************  Bit definition for USB_ADDR6_RX register  *****************/
#define  USB_ADDR6_RX_ADDR6_RX               (0xFFFE)            /*!< Reception Buffer Address 6 */

/*****************  Bit definition for USB_ADDR7_RX register  *****************/
#define  USB_ADDR7_RX_ADDR7_RX               (0xFFFE)            /*!< Reception Buffer Address 7 */

/*----------------------------------------------------------------------------*/

/*****************  Bit definition for USB_COUNT0_RX register  ****************/
#define  USB_COUNT0_RX_COUNT0_RX             (0x03FF)            /*!< Reception Byte Count */

#define  USB_COUNT0_RX_NUM_BLOCK             (0x7C00)            /*!< NUM_BLOCK[4:0] bits (Number of blocks) */
#define  USB_COUNT0_RX_NUM_BLOCK_0           (0x0400)            /*!< Bit 0 */
#define  USB_COUNT0_RX_NUM_BLOCK_1           (0x0800)            /*!< Bit 1 */
#define  USB_COUNT0_RX_NUM_BLOCK_2           (0x1000)            /*!< Bit 2 */
#define  USB_COUNT0_RX_NUM_BLOCK_3           (0x2000)            /*!< Bit 3 */
#define  USB_COUNT0_RX_NUM_BLOCK_4           (0x4000)            /*!< Bit 4 */

#define  USB_COUNT0_RX_BLSIZE                (0x8000)            /*!< BLock SIZE */

/*****************  Bit definition for USB_COUNT1_RX register  ****************/
#define  USB_COUNT1_RX_COUNT1_RX             (0x03FF)            /*!< Reception Byte Count */

#define  USB_COUNT1_RX_NUM_BLOCK             (0x7C00)            /*!< NUM_BLOCK[4:0] bits (Number of blocks) */
#define  USB_COUNT1_RX_NUM_BLOCK_0           (0x0400)            /*!< Bit 0 */
#define  USB_COUNT1_RX_NUM_BLOCK_1           (0x0800)            /*!< Bit 1 */
#define  USB_COUNT1_RX_NUM_BLOCK_2           (0x1000)            /*!< Bit 2 */
#define  USB_COUNT1_RX_NUM_BLOCK_3           (0x2000)            /*!< Bit 3 */
#define  USB_COUNT1_RX_NUM_BLOCK_4           (0x4000)            /*!< Bit 4 */

#define  USB_COUNT1_RX_BLSIZE                (0x8000)            /*!< BLock SIZE */

/*****************  Bit definition for USB_COUNT2_RX register  ****************/
#define  USB_COUNT2_RX_COUNT2_RX             (0x03FF)            /*!< Reception Byte Count */

#define  USB_COUNT2_RX_NUM_BLOCK             (0x7C00)            /*!< NUM_BLOCK[4:0] bits (Number of blocks) */
#define  USB_COUNT2_RX_NUM_BLOCK_0           (0x0400)            /*!< Bit 0 */
#define  USB_COUNT2_RX_NUM_BLOCK_1           (0x0800)            /*!< Bit 1 */
#define  USB_COUNT2_RX_NUM_BLOCK_2           (0x1000)            /*!< Bit 2 */
#define  USB_COUNT2_RX_NUM_BLOCK_3           (0x2000)            /*!< Bit 3 */
#define  USB_COUNT2_RX_NUM_BLOCK_4           (0x4000)            /*!< Bit 4 */

#define  USB_COUNT2_RX_BLSIZE                (0x8000)            /*!< BLock SIZE */

/*****************  Bit definition for USB_COUNT3_RX register  ****************/
#define  USB_COUNT3_RX_COUNT3_RX             (0x03FF)            /*!< Reception Byte Count */

#define  USB_COUNT3_RX_NUM_BLOCK             (0x7C00)            /*!< NUM_BLOCK[4:0] bits (Number of blocks) */
#define  USB_COUNT3_RX_NUM_BLOCK_0           (0x0400)            /*!< Bit 0 */
#define  USB_COUNT3_RX_NUM_BLOCK_1           (0x0800)            /*!< Bit 1 */
#define  USB_COUNT3_RX_NUM_BLOCK_2           (0x1000)            /*!< Bit 2 */
#define  USB_COUNT3_RX_NUM_BLOCK_3           (0x2000)            /*!< Bit 3 */
#define  USB_COUNT3_RX_NUM_BLOCK_4           (0x4000)            /*!< Bit 4 */

#define  USB_COUNT3_RX_BLSIZE                (0x8000)            /*!< BLock SIZE */

/*****************  Bit definition for USB_COUNT4_RX register  ****************/
#define  USB_COUNT4_RX_COUNT4_RX             (0x03FF)            /*!< Reception Byte Count */

#define  USB_COUNT4_RX_NUM_BLOCK             (0x7C00)            /*!< NUM_BLOCK[4:0] bits (Number of blocks) */
#define  USB_COUNT4_RX_NUM_BLOCK_0           (0x0400)            /*!< Bit 0 */
#define  USB_COUNT4_RX_NUM_BLOCK_1           (0x0800)            /*!< Bit 1 */
#define  USB_COUNT4_RX_NUM_BLOCK_2           (0x1000)            /*!< Bit 2 */
#define  USB_COUNT4_RX_NUM_BLOCK_3           (0x2000)            /*!< Bit 3 */
#define  USB_COUNT4_RX_NUM_BLOCK_4           (0x4000)            /*!< Bit 4 */

#define  USB_COUNT4_RX_BLSIZE                (0x8000)            /*!< BLock SIZE */

/*****************  Bit definition for USB_COUNT5_RX register  ****************/
#define  USB_COUNT5_RX_COUNT5_RX             (0x03FF)            /*!< Reception Byte Count */

#define  USB_COUNT5_RX_NUM_BLOCK             (0x7C00)            /*!< NUM_BLOCK[4:0] bits (Number of blocks) */
#define  USB_COUNT5_RX_NUM_BLOCK_0           (0x0400)            /*!< Bit 0 */
#define  USB_COUNT5_RX_NUM_BLOCK_1           (0x0800)            /*!< Bit 1 */
#define  USB_COUNT5_RX_NUM_BLOCK_2           (0x1000)            /*!< Bit 2 */
#define  USB_COUNT5_RX_NUM_BLOCK_3           (0x2000)            /*!< Bit 3 */
#define  USB_COUNT5_RX_NUM_BLOCK_4           (0x4000)            /*!< Bit 4 */

#define  USB_COUNT5_RX_BLSIZE                (0x8000)            /*!< BLock SIZE */

/*****************  Bit definition for USB_COUNT6_RX register  ****************/
#define  USB_COUNT6_RX_COUNT6_RX             (0x03FF)            /*!< Reception Byte Count */

#define  USB_COUNT6_RX_NUM_BLOCK             (0x7C00)            /*!< NUM_BLOCK[4:0] bits (Number of blocks) */
#define  USB_COUNT6_RX_NUM_BLOCK_0           (0x0400)            /*!< Bit 0 */
#define  USB_COUNT6_RX_NUM_BLOCK_1           (0x0800)            /*!< Bit 1 */
#define  USB_COUNT6_RX_NUM_BLOCK_2           (0x1000)            /*!< Bit 2 */
#define  USB_COUNT6_RX_NUM_BLOCK_3           (0x2000)            /*!< Bit 3 */
#define  USB_COUNT6_RX_NUM_BLOCK_4           (0x4000)            /*!< Bit 4 */

#define  USB_COUNT6_RX_BLSIZE                (0x8000)            /*!< BLock SIZE */

/*****************  Bit definition for USB_COUNT7_RX register  ****************/
#define  USB_COUNT7_RX_COUNT7_RX             (0x03FF)            /*!< Reception Byte Count */

#define  USB_COUNT7_RX_NUM_BLOCK             (0x7C00)            /*!< NUM_BLOCK[4:0] bits (Number of blocks) */
#define  USB_COUNT7_RX_NUM_BLOCK_0           (0x0400)            /*!< Bit 0 */
#define  USB_COUNT7_RX_NUM_BLOCK_1           (0x0800)            /*!< Bit 1 */
#define  USB_COUNT7_RX_NUM_BLOCK_2           (0x1000)            /*!< Bit 2 */
#define  USB_COUNT7_RX_NUM_BLOCK_3           (0x2000)            /*!< Bit 3 */
#define  USB_COUNT7_RX_NUM_BLOCK_4           (0x4000)            /*!< Bit 4 */

#define  USB_COUNT7_RX_BLSIZE                (0x8000)            /*!< BLock SIZE */

/*----------------------------------------------------------------------------*/

/****************  Bit definition for USB_COUNT0_RX_0 register  ***************/
#define  USB_COUNT0_RX_0_COUNT0_RX_0         (0x000003FF)        /*!< Reception Byte Count (low) */

#define  USB_COUNT0_RX_0_NUM_BLOCK_0         (0x00007C00)        /*!< NUM_BLOCK_0[4:0] bits (Number of blocks) (low) */
#define  USB_COUNT0_RX_0_NUM_BLOCK_0_0       (0x00000400)        /*!< Bit 0 */
#define  USB_COUNT0_RX_0_NUM_BLOCK_0_1       (0x00000800)        /*!< Bit 1 */
#define  USB_COUNT0_RX_0_NUM_BLOCK_0_2       (0x00001000)        /*!< Bit 2 */
#define  USB_COUNT0_RX_0_NUM_BLOCK_0_3       (0x00002000)        /*!< Bit 3 */
#define  USB_COUNT0_RX_0_NUM_BLOCK_0_4       (0x00004000)        /*!< Bit 4 */

#define  USB_COUNT0_RX_0_BLSIZE_0            (0x00008000)        /*!< BLock SIZE (low) */

/****************  Bit definition for USB_COUNT0_RX_1 register  ***************/
#define  USB_COUNT0_RX_1_COUNT0_RX_1         (0x03FF0000)        /*!< Reception Byte Count (high) */

#define  USB_COUNT0_RX_1_NUM_BLOCK_1         (0x7C000000)        /*!< NUM_BLOCK_1[4:0] bits (Number of blocks) (high) */
#define  USB_COUNT0_RX_1_NUM_BLOCK_1_0       (0x04000000)        /*!< Bit 1 */
#define  USB_COUNT0_RX_1_NUM_BLOCK_1_1       (0x08000000)        /*!< Bit 1 */
#define  USB_COUNT0_RX_1_NUM_BLOCK_1_2       (0x10000000)        /*!< Bit 2 */
#define  USB_COUNT0_RX_1_NUM_BLOCK_1_3       (0x20000000)        /*!< Bit 3 */
#define  USB_COUNT0_RX_1_NUM_BLOCK_1_4       (0x40000000)        /*!< Bit 4 */

#define  USB_COUNT0_RX_1_BLSIZE_1            (0x80000000)        /*!< BLock SIZE (high) */

/****************  Bit definition for USB_COUNT1_RX_0 register  ***************/
#define  USB_COUNT1_RX_0_COUNT1_RX_0         (0x000003FF)        /*!< Reception Byte Count (low) */

#define  USB_COUNT1_RX_0_NUM_BLOCK_0         (0x00007C00)        /*!< NUM_BLOCK_0[4:0] bits (Number of blocks) (low) */
#define  USB_COUNT1_RX_0_NUM_BLOCK_0_0       (0x00000400)        /*!< Bit 0 */
#define  USB_COUNT1_RX_0_NUM_BLOCK_0_1       (0x00000800)        /*!< Bit 1 */
#define  USB_COUNT1_RX_0_NUM_BLOCK_0_2       (0x00001000)        /*!< Bit 2 */
#define  USB_COUNT1_RX_0_NUM_BLOCK_0_3       (0x00002000)        /*!< Bit 3 */
#define  USB_COUNT1_RX_0_NUM_BLOCK_0_4       (0x00004000)        /*!< Bit 4 */

#define  USB_COUNT1_RX_0_BLSIZE_0            (0x00008000)        /*!< BLock SIZE (low) */

/****************  Bit definition for USB_COUNT1_RX_1 register  ***************/
#define  USB_COUNT1_RX_1_COUNT1_RX_1         (0x03FF0000)        /*!< Reception Byte Count (high) */

#define  USB_COUNT1_RX_1_NUM_BLOCK_1         (0x7C000000)        /*!< NUM_BLOCK_1[4:0] bits (Number of blocks) (high) */
#define  USB_COUNT1_RX_1_NUM_BLOCK_1_0       (0x04000000)        /*!< Bit 0 */
#define  USB_COUNT1_RX_1_NUM_BLOCK_1_1       (0x08000000)        /*!< Bit 1 */
#define  USB_COUNT1_RX_1_NUM_BLOCK_1_2       (0x10000000)        /*!< Bit 2 */
#define  USB_COUNT1_RX_1_NUM_BLOCK_1_3       (0x20000000)        /*!< Bit 3 */
#define  USB_COUNT1_RX_1_NUM_BLOCK_1_4       (0x40000000)        /*!< Bit 4 */

#define  USB_COUNT1_RX_1_BLSIZE_1            (0x80000000)        /*!< BLock SIZE (high) */

/****************  Bit definition for USB_COUNT2_RX_0 register  ***************/
#define  USB_COUNT2_RX_0_COUNT2_RX_0         (0x000003FF)        /*!< Reception Byte Count (low) */

#define  USB_COUNT2_RX_0_NUM_BLOCK_0         (0x00007C00)        /*!< NUM_BLOCK_0[4:0] bits (Number of blocks) (low) */
#define  USB_COUNT2_RX_0_NUM_BLOCK_0_0       (0x00000400)        /*!< Bit 0 */
#define  USB_COUNT2_RX_0_NUM_BLOCK_0_1       (0x00000800)        /*!< Bit 1 */
#define  USB_COUNT2_RX_0_NUM_BLOCK_0_2       (0x00001000)        /*!< Bit 2 */
#define  USB_COUNT2_RX_0_NUM_BLOCK_0_3       (0x00002000)        /*!< Bit 3 */
#define  USB_COUNT2_RX_0_NUM_BLOCK_0_4       (0x00004000)        /*!< Bit 4 */

#define  USB_COUNT2_RX_0_BLSIZE_0            (0x00008000)        /*!< BLock SIZE (low) */

/****************  Bit definition for USB_COUNT2_RX_1 register  ***************/
#define  USB_COUNT2_RX_1_COUNT2_RX_1         (0x03FF0000)        /*!< Reception Byte Count (high) */

#define  USB_COUNT2_RX_1_NUM_BLOCK_1         (0x7C000000)        /*!< NUM_BLOCK_1[4:0] bits (Number of blocks) (high) */
#define  USB_COUNT2_RX_1_NUM_BLOCK_1_0       (0x04000000)        /*!< Bit 0 */
#define  USB_COUNT2_RX_1_NUM_BLOCK_1_1       (0x08000000)        /*!< Bit 1 */
#define  USB_COUNT2_RX_1_NUM_BLOCK_1_2       (0x10000000)        /*!< Bit 2 */
#define  USB_COUNT2_RX_1_NUM_BLOCK_1_3       (0x20000000)        /*!< Bit 3 */
#define  USB_COUNT2_RX_1_NUM_BLOCK_1_4       (0x40000000)        /*!< Bit 4 */

#define  USB_COUNT2_RX_1_BLSIZE_1            (0x80000000)        /*!< BLock SIZE (high) */

/****************  Bit definition for USB_COUNT3_RX_0 register  ***************/
#define  USB_COUNT3_RX_0_COUNT3_RX_0         (0x000003FF)        /*!< Reception Byte Count (low) */

#define  USB_COUNT3_RX_0_NUM_BLOCK_0         (0x00007C00)        /*!< NUM_BLOCK_0[4:0] bits (Number of blocks) (low) */
#define  USB_COUNT3_RX_0_NUM_BLOCK_0_0       (0x00000400)        /*!< Bit 0 */
#define  USB_COUNT3_RX_0_NUM_BLOCK_0_1       (0x00000800)        /*!< Bit 1 */
#define  USB_COUNT3_RX_0_NUM_BLOCK_0_2       (0x00001000)        /*!< Bit 2 */
#define  USB_COUNT3_RX_0_NUM_BLOCK_0_3       (0x00002000)        /*!< Bit 3 */
#define  USB_COUNT3_RX_0_NUM_BLOCK_0_4       (0x00004000)        /*!< Bit 4 */

#define  USB_COUNT3_RX_0_BLSIZE_0            (0x00008000)        /*!< BLock SIZE (low) */

/****************  Bit definition for USB_COUNT3_RX_1 register  ***************/
#define  USB_COUNT3_RX_1_COUNT3_RX_1         (0x03FF0000)        /*!< Reception Byte Count (high) */

#define  USB_COUNT3_RX_1_NUM_BLOCK_1         (0x7C000000)        /*!< NUM_BLOCK_1[4:0] bits (Number of blocks) (high) */
#define  USB_COUNT3_RX_1_NUM_BLOCK_1_0       (0x04000000)        /*!< Bit 0 */
#define  USB_COUNT3_RX_1_NUM_BLOCK_1_1       (0x08000000)        /*!< Bit 1 */
#define  USB_COUNT3_RX_1_NUM_BLOCK_1_2       (0x10000000)        /*!< Bit 2 */
#define  USB_COUNT3_RX_1_NUM_BLOCK_1_3       (0x20000000)        /*!< Bit 3 */
#define  USB_COUNT3_RX_1_NUM_BLOCK_1_4       (0x40000000)        /*!< Bit 4 */

#define  USB_COUNT3_RX_1_BLSIZE_1            (0x80000000)        /*!< BLock SIZE (high) */

/****************  Bit definition for USB_COUNT4_RX_0 register  ***************/
#define  USB_COUNT4_RX_0_COUNT4_RX_0         (0x000003FF)        /*!< Reception Byte Count (low) */

#define  USB_COUNT4_RX_0_NUM_BLOCK_0         (0x00007C00)        /*!< NUM_BLOCK_0[4:0] bits (Number of blocks) (low) */
#define  USB_COUNT4_RX_0_NUM_BLOCK_0_0      (0x00000400)        /*!< Bit 0 */
#define  USB_COUNT4_RX_0_NUM_BLOCK_0_1      (0x00000800)        /*!< Bit 1 */
#define  USB_COUNT4_RX_0_NUM_BLOCK_0_2      (0x00001000)        /*!< Bit 2 */
#define  USB_COUNT4_RX_0_NUM_BLOCK_0_3      (0x00002000)        /*!< Bit 3 */
#define  USB_COUNT4_RX_0_NUM_BLOCK_0_4      (0x00004000)        /*!< Bit 4 */

#define  USB_COUNT4_RX_0_BLSIZE_0            (0x00008000)        /*!< BLock SIZE (low) */

/****************  Bit definition for USB_COUNT4_RX_1 register  ***************/
#define  USB_COUNT4_RX_1_COUNT4_RX_1         (0x03FF0000)        /*!< Reception Byte Count (high) */

#define  USB_COUNT4_RX_1_NUM_BLOCK_1         (0x7C000000)        /*!< NUM_BLOCK_1[4:0] bits (Number of blocks) (high) */
#define  USB_COUNT4_RX_1_NUM_BLOCK_1_0       (0x04000000)        /*!< Bit 0 */
#define  USB_COUNT4_RX_1_NUM_BLOCK_1_1       (0x08000000)        /*!< Bit 1 */
#define  USB_COUNT4_RX_1_NUM_BLOCK_1_2       (0x10000000)        /*!< Bit 2 */
#define  USB_COUNT4_RX_1_NUM_BLOCK_1_3       (0x20000000)        /*!< Bit 3 */
#define  USB_COUNT4_RX_1_NUM_BLOCK_1_4       (0x40000000)        /*!< Bit 4 */

#define  USB_COUNT4_RX_1_BLSIZE_1            (0x80000000)        /*!< BLock SIZE (high) */

/****************  Bit definition for USB_COUNT5_RX_0 register  ***************/
#define  USB_COUNT5_RX_0_COUNT5_RX_0         (0x000003FF)        /*!< Reception Byte Count (low) */

#define  USB_COUNT5_RX_0_NUM_BLOCK_0         (0x00007C00)        /*!< NUM_BLOCK_0[4:0] bits (Number of blocks) (low) */
#define  USB_COUNT5_RX_0_NUM_BLOCK_0_0       (0x00000400)        /*!< Bit 0 */
#define  USB_COUNT5_RX_0_NUM_BLOCK_0_1       (0x00000800)        /*!< Bit 1 */
#define  USB_COUNT5_RX_0_NUM_BLOCK_0_2       (0x00001000)        /*!< Bit 2 */
#define  USB_COUNT5_RX_0_NUM_BLOCK_0_3       (0x00002000)        /*!< Bit 3 */
#define  USB_COUNT5_RX_0_NUM_BLOCK_0_4       (0x00004000)        /*!< Bit 4 */

#define  USB_COUNT5_RX_0_BLSIZE_0            (0x00008000)        /*!< BLock SIZE (low) */

/****************  Bit definition for USB_COUNT5_RX_1 register  ***************/
#define  USB_COUNT5_RX_1_COUNT5_RX_1         (0x03FF0000)        /*!< Reception Byte Count (high) */

#define  USB_COUNT5_RX_1_NUM_BLOCK_1         (0x7C000000)        /*!< NUM_BLOCK_1[4:0] bits (Number of blocks) (high) */
#define  USB_COUNT5_RX_1_NUM_BLOCK_1_0       (0x04000000)        /*!< Bit 0 */
#define  USB_COUNT5_RX_1_NUM_BLOCK_1_1       (0x08000000)        /*!< Bit 1 */
#define  USB_COUNT5_RX_1_NUM_BLOCK_1_2       (0x10000000)        /*!< Bit 2 */
#define  USB_COUNT5_RX_1_NUM_BLOCK_1_3       (0x20000000)        /*!< Bit 3 */
#define  USB_COUNT5_RX_1_NUM_BLOCK_1_4       (0x40000000)        /*!< Bit 4 */

#define  USB_COUNT5_RX_1_BLSIZE_1            (0x80000000)        /*!< BLock SIZE (high) */

/***************  Bit definition for USB_COUNT6_RX_0  register  ***************/
#define  USB_COUNT6_RX_0_COUNT6_RX_0         (0x000003FF)        /*!< Reception Byte Count (low) */

#define  USB_COUNT6_RX_0_NUM_BLOCK_0         (0x00007C00)        /*!< NUM_BLOCK_0[4:0] bits (Number of blocks) (low) */
#define  USB_COUNT6_RX_0_NUM_BLOCK_0_0       (0x00000400)        /*!< Bit 0 */
#define  USB_COUNT6_RX_0_NUM_BLOCK_0_1       (0x00000800)        /*!< Bit 1 */
#define  USB_COUNT6_RX_0_NUM_BLOCK_0_2       (0x00001000)        /*!< Bit 2 */
#define  USB_COUNT6_RX_0_NUM_BLOCK_0_3       (0x00002000)        /*!< Bit 3 */
#define  USB_COUNT6_RX_0_NUM_BLOCK_0_4       (0x00004000)        /*!< Bit 4 */

#define  USB_COUNT6_RX_0_BLSIZE_0            (0x00008000)        /*!< BLock SIZE (low) */

/****************  Bit definition for USB_COUNT6_RX_1 register  ***************/
#define  USB_COUNT6_RX_1_COUNT6_RX_1         (0x03FF0000)        /*!< Reception Byte Count (high) */

#define  USB_COUNT6_RX_1_NUM_BLOCK_1         (0x7C000000)        /*!< NUM_BLOCK_1[4:0] bits (Number of blocks) (high) */
#define  USB_COUNT6_RX_1_NUM_BLOCK_1_0       (0x04000000)        /*!< Bit 0 */
#define  USB_COUNT6_RX_1_NUM_BLOCK_1_1       (0x08000000)        /*!< Bit 1 */
#define  USB_COUNT6_RX_1_NUM_BLOCK_1_2       (0x10000000)        /*!< Bit 2 */
#define  USB_COUNT6_RX_1_NUM_BLOCK_1_3       (0x20000000)        /*!< Bit 3 */
#define  USB_COUNT6_RX_1_NUM_BLOCK_1_4       (0x40000000)        /*!< Bit 4 */

#define  USB_COUNT6_RX_1_BLSIZE_1            (0x80000000)        /*!< BLock SIZE (high) */

/***************  Bit definition for USB_COUNT7_RX_0 register  ****************/
#define  USB_COUNT7_RX_0_COUNT7_RX_0         (0x000003FF)        /*!< Reception Byte Count (low) */

#define  USB_COUNT7_RX_0_NUM_BLOCK_0         (0x00007C00)        /*!< NUM_BLOCK_0[4:0] bits (Number of blocks) (low) */
#define  USB_COUNT7_RX_0_NUM_BLOCK_0_0       (0x00000400)        /*!< Bit 0 */
#define  USB_COUNT7_RX_0_NUM_BLOCK_0_1       (0x00000800)        /*!< Bit 1 */
#define  USB_COUNT7_RX_0_NUM_BLOCK_0_2       (0x00001000)        /*!< Bit 2 */
#define  USB_COUNT7_RX_0_NUM_BLOCK_0_3       (0x00002000)        /*!< Bit 3 */
#define  USB_COUNT7_RX_0_NUM_BLOCK_0_4       (0x00004000)        /*!< Bit 4 */

#define  USB_COUNT7_RX_0_BLSIZE_0            (0x00008000)        /*!< BLock SIZE (low) */

/***************  Bit definition for USB_COUNT7_RX_1 register  ****************/
#define  USB_COUNT7_RX_1_COUNT7_RX_1         (0x03FF0000)        /*!< Reception Byte Count (high) */

#define  USB_COUNT7_RX_1_NUM_BLOCK_1         (0x7C000000)        /*!< NUM_BLOCK_1[4:0] bits (Number of blocks) (high) */
#define  USB_COUNT7_RX_1_NUM_BLOCK_1_0       (0x04000000)        /*!< Bit 0 */
#define  USB_COUNT7_RX_1_NUM_BLOCK_1_1       (0x08000000)        /*!< Bit 1 */
#define  USB_COUNT7_RX_1_NUM_BLOCK_1_2       (0x10000000)        /*!< Bit 2 */
#define  USB_COUNT7_RX_1_NUM_BLOCK_1_3       (0x20000000)        /*!< Bit 3 */
#define  USB_COUNT7_RX_1_NUM_BLOCK_1_4       (0x40000000)        /*!< Bit 4 */

#define  USB_COUNT7_RX_1_BLSIZE_1            (0x80000000)        /*!< BLock SIZE (high) */

/******************************************************************************/
/*                                                                            */
/*                         Controller Area Network                            */
/*                                                                            */
/******************************************************************************/

/*!< CAN control and status registers */
/*******************  Bit definition for CAN_MCR register  ********************/
#define  CAN_MCR_INRQ                        (0x0001)            /*!< Initialization Request */
#define  CAN_MCR_SLEEP                       (0x0002)            /*!< Sleep Mode Request */
#define  CAN_MCR_TXFP                        (0x0004)            /*!< Transmit FIFO Priority */
#define  CAN_MCR_RFLM                        (0x0008)            /*!< Receive FIFO Locked Mode */
#define  CAN_MCR_NART                        (0x0010)            /*!< No Automatic Retransmission */
#define  CAN_MCR_AWUM                        (0x0020)            /*!< Automatic Wakeup Mode */
#define  CAN_MCR_ABOM                        (0x0040)            /*!< Automatic Bus-Off Management */
#define  CAN_MCR_TTCM                        (0x0080)            /*!< Time Triggered Communication Mode */
#define  CAN_MCR_RESET                       (0x8000)            /*!< CAN software master reset */

/*******************  Bit definition for CAN_MSR register  ********************/
#define  CAN_MSR_INAK                        (0x0001)            /*!< Initialization Acknowledge */
#define  CAN_MSR_SLAK                        (0x0002)            /*!< Sleep Acknowledge */
#define  CAN_MSR_ERRI                        (0x0004)            /*!< Error Interrupt */
#define  CAN_MSR_WKUI                        (0x0008)            /*!< Wakeup Interrupt */
#define  CAN_MSR_SLAKI                       (0x0010)            /*!< Sleep Acknowledge Interrupt */
#define  CAN_MSR_TXM                         (0x0100)            /*!< Transmit Mode */
#define  CAN_MSR_RXM                         (0x0200)            /*!< Receive Mode */
#define  CAN_MSR_SAMP                        (0x0400)            /*!< Last Sample Point */
#define  CAN_MSR_RX                          (0x0800)            /*!< CAN Rx Signal */

/*******************  Bit definition for CAN_TSR register  ********************/
#define  CAN_TSR_RQCP0                       (0x00000001)        /*!< Request Completed Mailbox0 */
#define  CAN_TSR_TXOK0                       (0x00000002)        /*!< Transmission OK of Mailbox0 */
#define  CAN_TSR_ALST0                       (0x00000004)        /*!< Arbitration Lost for Mailbox0 */
#define  CAN_TSR_TERR0                       (0x00000008)        /*!< Transmission Error of Mailbox0 */
#define  CAN_TSR_ABRQ0                       (0x00000080)        /*!< Abort Request for Mailbox0 */
#define  CAN_TSR_RQCP1                       (0x00000100)        /*!< Request Completed Mailbox1 */
#define  CAN_TSR_TXOK1                       (0x00000200)        /*!< Transmission OK of Mailbox1 */
#define  CAN_TSR_ALST1                       (0x00000400)        /*!< Arbitration Lost for Mailbox1 */
#define  CAN_TSR_TERR1                       (0x00000800)        /*!< Transmission Error of Mailbox1 */
#define  CAN_TSR_ABRQ1                       (0x00008000)        /*!< Abort Request for Mailbox 1 */
#define  CAN_TSR_RQCP2                       (0x00010000)        /*!< Request Completed Mailbox2 */
#define  CAN_TSR_TXOK2                       (0x00020000)        /*!< Transmission OK of Mailbox 2 */
#define  CAN_TSR_ALST2                       (0x00040000)        /*!< Arbitration Lost for mailbox 2 */
#define  CAN_TSR_TERR2                       (0x00080000)        /*!< Transmission Error of Mailbox 2 */
#define  CAN_TSR_ABRQ2                       (0x00800000)        /*!< Abort Request for Mailbox 2 */
#define  CAN_TSR_CODE                        (0x03000000)        /*!< Mailbox Code */

#define  CAN_TSR_TME                         (0x1C000000)        /*!< TME[2:0] bits */
#define  CAN_TSR_TME0                        (0x04000000)        /*!< Transmit Mailbox 0 Empty */
#define  CAN_TSR_TME1                        (0x08000000)        /*!< Transmit Mailbox 1 Empty */
#define  CAN_TSR_TME2                        (0x10000000)        /*!< Transmit Mailbox 2 Empty */

#define  CAN_TSR_LOW                         (0xE0000000)        /*!< LOW[2:0] bits */
#define  CAN_TSR_LOW0                        (0x20000000)        /*!< Lowest Priority Flag for Mailbox 0 */
#define  CAN_TSR_LOW1                        (0x40000000)        /*!< Lowest Priority Flag for Mailbox 1 */
#define  CAN_TSR_LOW2                        (0x80000000)        /*!< Lowest Priority Flag for Mailbox 2 */

/*******************  Bit definition for CAN_RF0R register  *******************/
#define  CAN_RF0R_FMP0                       ((uint8_t)0x03)               /*!< FIFO 0 Message Pending */
#define  CAN_RF0R_FULL0                      ((uint8_t)0x08)               /*!< FIFO 0 Full */
#define  CAN_RF0R_FOVR0                      ((uint8_t)0x10)               /*!< FIFO 0 Overrun */
#define  CAN_RF0R_RFOM0                      ((uint8_t)0x20)               /*!< Release FIFO 0 Output Mailbox */

/*******************  Bit definition for CAN_RF1R register  *******************/
#define  CAN_RF1R_FMP1                       ((uint8_t)0x03)               /*!< FIFO 1 Message Pending */
#define  CAN_RF1R_FULL1                      ((uint8_t)0x08)               /*!< FIFO 1 Full */
#define  CAN_RF1R_FOVR1                      ((uint8_t)0x10)               /*!< FIFO 1 Overrun */
#define  CAN_RF1R_RFOM1                      ((uint8_t)0x20)               /*!< Release FIFO 1 Output Mailbox */

/********************  Bit definition for CAN_IER register  *******************/
#define  CAN_IER_TMEIE                       (0x00000001)        /*!< Transmit Mailbox Empty Interrupt Enable */
#define  CAN_IER_FMPIE0                      (0x00000002)        /*!< FIFO Message Pending Interrupt Enable */
#define  CAN_IER_FFIE0                       (0x00000004)        /*!< FIFO Full Interrupt Enable */
#define  CAN_IER_FOVIE0                      (0x00000008)        /*!< FIFO Overrun Interrupt Enable */
#define  CAN_IER_FMPIE1                      (0x00000010)        /*!< FIFO Message Pending Interrupt Enable */
#define  CAN_IER_FFIE1                       (0x00000020)        /*!< FIFO Full Interrupt Enable */
#define  CAN_IER_FOVIE1                      (0x00000040)        /*!< FIFO Overrun Interrupt Enable */
#define  CAN_IER_EWGIE                       (0x00000100)        /*!< Error Warning Interrupt Enable */
#define  CAN_IER_EPVIE                       (0x00000200)        /*!< Error Passive Interrupt Enable */
#define  CAN_IER_BOFIE                       (0x00000400)        /*!< Bus-Off Interrupt Enable */
#define  CAN_IER_LECIE                       (0x00000800)        /*!< Last Error Code Interrupt Enable */
#define  CAN_IER_ERRIE                       (0x00008000)        /*!< Error Interrupt Enable */
#define  CAN_IER_WKUIE                       (0x00010000)        /*!< Wakeup Interrupt Enable */
#define  CAN_IER_SLKIE                       (0x00020000)        /*!< Sleep Interrupt Enable */

/********************  Bit definition for CAN_ESR register  *******************/
#define  CAN_ESR_EWGF                        (0x00000001)        /*!< Error Warning Flag */
#define  CAN_ESR_EPVF                        (0x00000002)        /*!< Error Passive Flag */
#define  CAN_ESR_BOFF                        (0x00000004)        /*!< Bus-Off Flag */

#define  CAN_ESR_LEC                         (0x00000070)        /*!< LEC[2:0] bits (Last Error Code) */
#define  CAN_ESR_LEC_0                       (0x00000010)        /*!< Bit 0 */
#define  CAN_ESR_LEC_1                       (0x00000020)        /*!< Bit 1 */
#define  CAN_ESR_LEC_2                       (0x00000040)        /*!< Bit 2 */

#define  CAN_ESR_TEC                         (0x00FF0000)        /*!< Least significant byte of the 9-bit Transmit Error Counter */
#define  CAN_ESR_REC                         (0xFF000000)        /*!< Receive Error Counter */

/*******************  Bit definition for CAN_BTR register  ********************/
#define  CAN_BTR_BRP                         (0x000003FF)        /*!< Baud Rate Prescaler */
#define  CAN_BTR_TS1                         (0x000F0000)        /*!< Time Segment 1 */
#define  CAN_BTR_TS2                         (0x00700000)        /*!< Time Segment 2 */
#define  CAN_BTR_SJW                         (0x03000000)        /*!< Resynchronization Jump Width */
#define  CAN_BTR_LBKM                        (0x40000000)        /*!< Loop Back Mode (Debug) */
#define  CAN_BTR_SILM                        (0x80000000)        /*!< Silent Mode */

/*!< Mailbox registers */
/******************  Bit definition for CAN_TI0R register  ********************/
#define  CAN_TI0R_TXRQ                       (0x00000001)        /*!< Transmit Mailbox Request */
#define  CAN_TI0R_RTR                        (0x00000002)        /*!< Remote Transmission Request */
#define  CAN_TI0R_IDE                        (0x00000004)        /*!< Identifier Extension */
#define  CAN_TI0R_EXID                       (0x001FFFF8)        /*!< Extended Identifier */
#define  CAN_TI0R_STID                       (0xFFE00000)        /*!< Standard Identifier or Extended Identifier */

/******************  Bit definition for CAN_TDT0R register  *******************/
#define  CAN_TDT0R_DLC                       (0x0000000F)        /*!< Data Length Code */
#define  CAN_TDT0R_TGT                       (0x00000100)        /*!< Transmit Global Time */
#define  CAN_TDT0R_TIME                      (0xFFFF0000)        /*!< Message Time Stamp */

/******************  Bit definition for CAN_TDL0R register  *******************/
#define  CAN_TDL0R_DATA0                     (0x000000FF)        /*!< Data byte 0 */
#define  CAN_TDL0R_DATA1                     (0x0000FF00)        /*!< Data byte 1 */
#define  CAN_TDL0R_DATA2                     (0x00FF0000)        /*!< Data byte 2 */
#define  CAN_TDL0R_DATA3                     (0xFF000000)        /*!< Data byte 3 */

/******************  Bit definition for CAN_TDH0R register  *******************/
#define  CAN_TDH0R_DATA4                     (0x000000FF)        /*!< Data byte 4 */
#define  CAN_TDH0R_DATA5                     (0x0000FF00)        /*!< Data byte 5 */
#define  CAN_TDH0R_DATA6                     (0x00FF0000)        /*!< Data byte 6 */
#define  CAN_TDH0R_DATA7                     (0xFF000000)        /*!< Data byte 7 */

/*******************  Bit definition for CAN_TI1R register  *******************/
#define  CAN_TI1R_TXRQ                       (0x00000001)        /*!< Transmit Mailbox Request */
#define  CAN_TI1R_RTR                        (0x00000002)        /*!< Remote Transmission Request */
#define  CAN_TI1R_IDE                        (0x00000004)        /*!< Identifier Extension */
#define  CAN_TI1R_EXID                       (0x001FFFF8)        /*!< Extended Identifier */
#define  CAN_TI1R_STID                       (0xFFE00000)        /*!< Standard Identifier or Extended Identifier */

/*******************  Bit definition for CAN_TDT1R register  ******************/
#define  CAN_TDT1R_DLC                       (0x0000000F)        /*!< Data Length Code */
#define  CAN_TDT1R_TGT                       (0x00000100)        /*!< Transmit Global Time */
#define  CAN_TDT1R_TIME                      (0xFFFF0000)        /*!< Message Time Stamp */

/*******************  Bit definition for CAN_TDL1R register  ******************/
#define  CAN_TDL1R_DATA0                     (0x000000FF)        /*!< Data byte 0 */
#define  CAN_TDL1R_DATA1                     (0x0000FF00)        /*!< Data byte 1 */
#define  CAN_TDL1R_DATA2                     (0x00FF0000)        /*!< Data byte 2 */
#define  CAN_TDL1R_DATA3                     (0xFF000000)        /*!< Data byte 3 */

/*******************  Bit definition for CAN_TDH1R register  ******************/
#define  CAN_TDH1R_DATA4                     (0x000000FF)        /*!< Data byte 4 */
#define  CAN_TDH1R_DATA5                     (0x0000FF00)        /*!< Data byte 5 */
#define  CAN_TDH1R_DATA6                     (0x00FF0000)        /*!< Data byte 6 */
#define  CAN_TDH1R_DATA7                     (0xFF000000)        /*!< Data byte 7 */

/*******************  Bit definition for CAN_TI2R register  *******************/
#define  CAN_TI2R_TXRQ                       (0x00000001)        /*!< Transmit Mailbox Request */
#define  CAN_TI2R_RTR                        (0x00000002)        /*!< Remote Transmission Request */
#define  CAN_TI2R_IDE                        (0x00000004)        /*!< Identifier Extension */
#define  CAN_TI2R_EXID                       (0x001FFFF8)        /*!< Extended identifier */
#define  CAN_TI2R_STID                       (0xFFE00000)        /*!< Standard Identifier or Extended Identifier */

/*******************  Bit definition for CAN_TDT2R register  ******************/  
#define  CAN_TDT2R_DLC                       (0x0000000F)        /*!< Data Length Code */
#define  CAN_TDT2R_TGT                       (0x00000100)        /*!< Transmit Global Time */
#define  CAN_TDT2R_TIME                      (0xFFFF0000)        /*!< Message Time Stamp */

/*******************  Bit definition for CAN_TDL2R register  ******************/
#define  CAN_TDL2R_DATA0                     (0x000000FF)        /*!< Data byte 0 */
#define  CAN_TDL2R_DATA1                     (0x0000FF00)        /*!< Data byte 1 */
#define  CAN_TDL2R_DATA2                     (0x00FF0000)        /*!< Data byte 2 */
#define  CAN_TDL2R_DATA3                     (0xFF000000)        /*!< Data byte 3 */

/*******************  Bit definition for CAN_TDH2R register  ******************/
#define  CAN_TDH2R_DATA4                     (0x000000FF)        /*!< Data byte 4 */
#define  CAN_TDH2R_DATA5                     (0x0000FF00)        /*!< Data byte 5 */
#define  CAN_TDH2R_DATA6                     (0x00FF0000)        /*!< Data byte 6 */
#define  CAN_TDH2R_DATA7                     (0xFF000000)        /*!< Data byte 7 */

/*******************  Bit definition for CAN_RI0R register  *******************/
#define  CAN_RI0R_RTR                        (0x00000002)        /*!< Remote Transmission Request */
#define  CAN_RI0R_IDE                        (0x00000004)        /*!< Identifier Extension */
#define  CAN_RI0R_EXID                       (0x001FFFF8)        /*!< Extended Identifier */
#define  CAN_RI0R_STID                       (0xFFE00000)        /*!< Standard Identifier or Extended Identifier */

/*******************  Bit definition for CAN_RDT0R register  ******************/
#define  CAN_RDT0R_DLC                       (0x0000000F)        /*!< Data Length Code */
#define  CAN_RDT0R_FMI                       (0x0000FF00)        /*!< Filter Match Index */
#define  CAN_RDT0R_TIME                      (0xFFFF0000)        /*!< Message Time Stamp */

/*******************  Bit definition for CAN_RDL0R register  ******************/
#define  CAN_RDL0R_DATA0                     (0x000000FF)        /*!< Data byte 0 */
#define  CAN_RDL0R_DATA1                     (0x0000FF00)        /*!< Data byte 1 */
#define  CAN_RDL0R_DATA2                     (0x00FF0000)        /*!< Data byte 2 */
#define  CAN_RDL0R_DATA3                     (0xFF000000)        /*!< Data byte 3 */

/*******************  Bit definition for CAN_RDH0R register  ******************/
#define  CAN_RDH0R_DATA4                     (0x000000FF)        /*!< Data byte 4 */
#define  CAN_RDH0R_DATA5                     (0x0000FF00)        /*!< Data byte 5 */
#define  CAN_RDH0R_DATA6                     (0x00FF0000)        /*!< Data byte 6 */
#define  CAN_RDH0R_DATA7                     (0xFF000000)        /*!< Data byte 7 */

/*******************  Bit definition for CAN_RI1R register  *******************/
#define  CAN_RI1R_RTR                        (0x00000002)        /*!< Remote Transmission Request */
#define  CAN_RI1R_IDE                        (0x00000004)        /*!< Identifier Extension */
#define  CAN_RI1R_EXID                       (0x001FFFF8)        /*!< Extended identifier */
#define  CAN_RI1R_STID                       (0xFFE00000)        /*!< Standard Identifier or Extended Identifier */

/*******************  Bit definition for CAN_RDT1R register  ******************/
#define  CAN_RDT1R_DLC                       (0x0000000F)        /*!< Data Length Code */
#define  CAN_RDT1R_FMI                       (0x0000FF00)        /*!< Filter Match Index */
#define  CAN_RDT1R_TIME                      (0xFFFF0000)        /*!< Message Time Stamp */

/*******************  Bit definition for CAN_RDL1R register  ******************/
#define  CAN_RDL1R_DATA0                     (0x000000FF)        /*!< Data byte 0 */
#define  CAN_RDL1R_DATA1                     (0x0000FF00)        /*!< Data byte 1 */
#define  CAN_RDL1R_DATA2                     (0x00FF0000)        /*!< Data byte 2 */
#define  CAN_RDL1R_DATA3                     (0xFF000000)        /*!< Data byte 3 */

/*******************  Bit definition for CAN_RDH1R register  ******************/
#define  CAN_RDH1R_DATA4                     (0x000000FF)        /*!< Data byte 4 */
#define  CAN_RDH1R_DATA5                     (0x0000FF00)        /*!< Data byte 5 */
#define  CAN_RDH1R_DATA6                     (0x00FF0000)        /*!< Data byte 6 */
#define  CAN_RDH1R_DATA7                     (0xFF000000)        /*!< Data byte 7 */

/*!< CAN filter registers */
/*******************  Bit definition for CAN_FMR register  ********************/
#define  CAN_FMR_FINIT                       ((uint8_t)0x01)               /*!< Filter Init Mode */

/*******************  Bit definition for CAN_FM1R register  *******************/
#define  CAN_FM1R_FBM                        (0x3FFF)            /*!< Filter Mode */
#define  CAN_FM1R_FBM0                       (0x0001)            /*!< Filter Init Mode bit 0 */
#define  CAN_FM1R_FBM1                       (0x0002)            /*!< Filter Init Mode bit 1 */
#define  CAN_FM1R_FBM2                       (0x0004)            /*!< Filter Init Mode bit 2 */
#define  CAN_FM1R_FBM3                       (0x0008)            /*!< Filter Init Mode bit 3 */
#define  CAN_FM1R_FBM4                       (0x0010)            /*!< Filter Init Mode bit 4 */
#define  CAN_FM1R_FBM5                       (0x0020)            /*!< Filter Init Mode bit 5 */
#define  CAN_FM1R_FBM6                       (0x0040)            /*!< Filter Init Mode bit 6 */
#define  CAN_FM1R_FBM7                       (0x0080)            /*!< Filter Init Mode bit 7 */
#define  CAN_FM1R_FBM8                       (0x0100)            /*!< Filter Init Mode bit 8 */
#define  CAN_FM1R_FBM9                       (0x0200)            /*!< Filter Init Mode bit 9 */
#define  CAN_FM1R_FBM10                      (0x0400)            /*!< Filter Init Mode bit 10 */
#define  CAN_FM1R_FBM11                      (0x0800)            /*!< Filter Init Mode bit 11 */
#define  CAN_FM1R_FBM12                      (0x1000)            /*!< Filter Init Mode bit 12 */
#define  CAN_FM1R_FBM13                      (0x2000)            /*!< Filter Init Mode bit 13 */

/*******************  Bit definition for CAN_FS1R register  *******************/
#define  CAN_FS1R_FSC                        (0x3FFF)            /*!< Filter Scale Configuration */
#define  CAN_FS1R_FSC0                       (0x0001)            /*!< Filter Scale Configuration bit 0 */
#define  CAN_FS1R_FSC1                       (0x0002)            /*!< Filter Scale Configuration bit 1 */
#define  CAN_FS1R_FSC2                       (0x0004)            /*!< Filter Scale Configuration bit 2 */
#define  CAN_FS1R_FSC3                       (0x0008)            /*!< Filter Scale Configuration bit 3 */
#define  CAN_FS1R_FSC4                       (0x0010)            /*!< Filter Scale Configuration bit 4 */
#define  CAN_FS1R_FSC5                       (0x0020)            /*!< Filter Scale Configuration bit 5 */
#define  CAN_FS1R_FSC6                       (0x0040)            /*!< Filter Scale Configuration bit 6 */
#define  CAN_FS1R_FSC7                       (0x0080)            /*!< Filter Scale Configuration bit 7 */
#define  CAN_FS1R_FSC8                       (0x0100)            /*!< Filter Scale Configuration bit 8 */
#define  CAN_FS1R_FSC9                       (0x0200)            /*!< Filter Scale Configuration bit 9 */
#define  CAN_FS1R_FSC10                      (0x0400)            /*!< Filter Scale Configuration bit 10 */
#define  CAN_FS1R_FSC11                      (0x0800)            /*!< Filter Scale Configuration bit 11 */
#define  CAN_FS1R_FSC12                      (0x1000)            /*!< Filter Scale Configuration bit 12 */
#define  CAN_FS1R_FSC13                      (0x2000)            /*!< Filter Scale Configuration bit 13 */

/******************  Bit definition for CAN_FFA1R register  *******************/
#define  CAN_FFA1R_FFA                       (0x3FFF)            /*!< Filter FIFO Assignment */
#define  CAN_FFA1R_FFA0                      (0x0001)            /*!< Filter FIFO Assignment for Filter 0 */
#define  CAN_FFA1R_FFA1                      (0x0002)            /*!< Filter FIFO Assignment for Filter 1 */
#define  CAN_FFA1R_FFA2                      (0x0004)            /*!< Filter FIFO Assignment for Filter 2 */
#define  CAN_FFA1R_FFA3                      (0x0008)            /*!< Filter FIFO Assignment for Filter 3 */
#define  CAN_FFA1R_FFA4                      (0x0010)            /*!< Filter FIFO Assignment for Filter 4 */
#define  CAN_FFA1R_FFA5                      (0x0020)            /*!< Filter FIFO Assignment for Filter 5 */
#define  CAN_FFA1R_FFA6                      (0x0040)            /*!< Filter FIFO Assignment for Filter 6 */
#define  CAN_FFA1R_FFA7                      (0x0080)            /*!< Filter FIFO Assignment for Filter 7 */
#define  CAN_FFA1R_FFA8                      (0x0100)            /*!< Filter FIFO Assignment for Filter 8 */
#define  CAN_FFA1R_FFA9                      (0x0200)            /*!< Filter FIFO Assignment for Filter 9 */
#define  CAN_FFA1R_FFA10                     (0x0400)            /*!< Filter FIFO Assignment for Filter 10 */
#define  CAN_FFA1R_FFA11                     (0x0800)            /*!< Filter FIFO Assignment for Filter 11 */
#define  CAN_FFA1R_FFA12                     (0x1000)            /*!< Filter FIFO Assignment for Filter 12 */
#define  CAN_FFA1R_FFA13                     (0x2000)            /*!< Filter FIFO Assignment for Filter 13 */

/*******************  Bit definition for CAN_FA1R register  *******************/
#define  CAN_FA1R_FACT                       (0x3FFF)            /*!< Filter Active */
#define  CAN_FA1R_FACT0                      (0x0001)            /*!< Filter 0 Active */
#define  CAN_FA1R_FACT1                      (0x0002)            /*!< Filter 1 Active */
#define  CAN_FA1R_FACT2                      (0x0004)            /*!< Filter 2 Active */
#define  CAN_FA1R_FACT3                      (0x0008)            /*!< Filter 3 Active */
#define  CAN_FA1R_FACT4                      (0x0010)            /*!< Filter 4 Active */
#define  CAN_FA1R_FACT5                      (0x0020)            /*!< Filter 5 Active */
#define  CAN_FA1R_FACT6                      (0x0040)            /*!< Filter 6 Active */
#define  CAN_FA1R_FACT7                      (0x0080)            /*!< Filter 7 Active */
#define  CAN_FA1R_FACT8                      (0x0100)            /*!< Filter 8 Active */
#define  CAN_FA1R_FACT9                      (0x0200)            /*!< Filter 9 Active */
#define  CAN_FA1R_FACT10                     (0x0400)            /*!< Filter 10 Active */
#define  CAN_FA1R_FACT11                     (0x0800)            /*!< Filter 11 Active */
#define  CAN_FA1R_FACT12                     (0x1000)            /*!< Filter 12 Active */
#define  CAN_FA1R_FACT13                     (0x2000)            /*!< Filter 13 Active */

/*******************  Bit definition for CAN_F0R1 register  *******************/
#define  CAN_F0R1_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F0R1_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F0R1_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F0R1_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F0R1_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F0R1_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F0R1_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F0R1_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F0R1_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F0R1_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F0R1_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F0R1_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F0R1_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F0R1_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F0R1_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F0R1_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F0R1_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F0R1_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F0R1_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F0R1_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F0R1_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F0R1_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F0R1_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F0R1_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F0R1_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F0R1_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F0R1_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F0R1_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F0R1_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F0R1_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F0R1_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F0R1_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F1R1 register  *******************/
#define  CAN_F1R1_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F1R1_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F1R1_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F1R1_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F1R1_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F1R1_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F1R1_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F1R1_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F1R1_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F1R1_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F1R1_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F1R1_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F1R1_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F1R1_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F1R1_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F1R1_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F1R1_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F1R1_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F1R1_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F1R1_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F1R1_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F1R1_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F1R1_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F1R1_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F1R1_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F1R1_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F1R1_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F1R1_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F1R1_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F1R1_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F1R1_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F1R1_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F2R1 register  *******************/
#define  CAN_F2R1_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F2R1_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F2R1_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F2R1_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F2R1_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F2R1_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F2R1_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F2R1_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F2R1_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F2R1_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F2R1_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F2R1_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F2R1_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F2R1_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F2R1_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F2R1_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F2R1_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F2R1_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F2R1_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F2R1_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F2R1_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F2R1_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F2R1_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F2R1_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F2R1_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F2R1_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F2R1_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F2R1_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F2R1_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F2R1_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F2R1_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F2R1_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F3R1 register  *******************/
#define  CAN_F3R1_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F3R1_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F3R1_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F3R1_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F3R1_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F3R1_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F3R1_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F3R1_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F3R1_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F3R1_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F3R1_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F3R1_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F3R1_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F3R1_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F3R1_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F3R1_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F3R1_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F3R1_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F3R1_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F3R1_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F3R1_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F3R1_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F3R1_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F3R1_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F3R1_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F3R1_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F3R1_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F3R1_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F3R1_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F3R1_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F3R1_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F3R1_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F4R1 register  *******************/
#define  CAN_F4R1_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F4R1_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F4R1_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F4R1_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F4R1_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F4R1_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F4R1_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F4R1_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F4R1_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F4R1_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F4R1_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F4R1_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F4R1_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F4R1_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F4R1_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F4R1_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F4R1_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F4R1_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F4R1_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F4R1_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F4R1_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F4R1_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F4R1_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F4R1_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F4R1_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F4R1_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F4R1_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F4R1_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F4R1_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F4R1_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F4R1_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F4R1_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F5R1 register  *******************/
#define  CAN_F5R1_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F5R1_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F5R1_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F5R1_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F5R1_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F5R1_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F5R1_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F5R1_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F5R1_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F5R1_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F5R1_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F5R1_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F5R1_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F5R1_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F5R1_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F5R1_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F5R1_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F5R1_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F5R1_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F5R1_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F5R1_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F5R1_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F5R1_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F5R1_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F5R1_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F5R1_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F5R1_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F5R1_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F5R1_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F5R1_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F5R1_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F5R1_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F6R1 register  *******************/
#define  CAN_F6R1_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F6R1_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F6R1_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F6R1_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F6R1_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F6R1_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F6R1_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F6R1_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F6R1_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F6R1_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F6R1_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F6R1_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F6R1_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F6R1_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F6R1_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F6R1_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F6R1_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F6R1_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F6R1_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F6R1_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F6R1_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F6R1_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F6R1_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F6R1_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F6R1_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F6R1_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F6R1_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F6R1_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F6R1_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F6R1_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F6R1_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F6R1_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F7R1 register  *******************/
#define  CAN_F7R1_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F7R1_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F7R1_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F7R1_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F7R1_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F7R1_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F7R1_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F7R1_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F7R1_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F7R1_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F7R1_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F7R1_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F7R1_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F7R1_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F7R1_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F7R1_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F7R1_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F7R1_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F7R1_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F7R1_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F7R1_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F7R1_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F7R1_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F7R1_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F7R1_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F7R1_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F7R1_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F7R1_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F7R1_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F7R1_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F7R1_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F7R1_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F8R1 register  *******************/
#define  CAN_F8R1_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F8R1_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F8R1_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F8R1_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F8R1_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F8R1_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F8R1_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F8R1_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F8R1_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F8R1_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F8R1_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F8R1_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F8R1_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F8R1_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F8R1_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F8R1_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F8R1_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F8R1_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F8R1_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F8R1_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F8R1_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F8R1_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F8R1_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F8R1_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F8R1_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F8R1_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F8R1_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F8R1_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F8R1_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F8R1_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F8R1_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F8R1_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F9R1 register  *******************/
#define  CAN_F9R1_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F9R1_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F9R1_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F9R1_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F9R1_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F9R1_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F9R1_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F9R1_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F9R1_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F9R1_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F9R1_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F9R1_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F9R1_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F9R1_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F9R1_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F9R1_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F9R1_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F9R1_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F9R1_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F9R1_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F9R1_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F9R1_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F9R1_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F9R1_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F9R1_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F9R1_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F9R1_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F9R1_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F9R1_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F9R1_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F9R1_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F9R1_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F10R1 register  ******************/
#define  CAN_F10R1_FB0                       (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F10R1_FB1                       (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F10R1_FB2                       (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F10R1_FB3                       (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F10R1_FB4                       (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F10R1_FB5                       (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F10R1_FB6                       (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F10R1_FB7                       (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F10R1_FB8                       (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F10R1_FB9                       (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F10R1_FB10                      (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F10R1_FB11                      (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F10R1_FB12                      (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F10R1_FB13                      (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F10R1_FB14                      (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F10R1_FB15                      (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F10R1_FB16                      (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F10R1_FB17                      (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F10R1_FB18                      (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F10R1_FB19                      (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F10R1_FB20                      (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F10R1_FB21                      (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F10R1_FB22                      (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F10R1_FB23                      (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F10R1_FB24                      (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F10R1_FB25                      (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F10R1_FB26                      (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F10R1_FB27                      (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F10R1_FB28                      (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F10R1_FB29                      (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F10R1_FB30                      (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F10R1_FB31                      (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F11R1 register  ******************/
#define  CAN_F11R1_FB0                       (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F11R1_FB1                       (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F11R1_FB2                       (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F11R1_FB3                       (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F11R1_FB4                       (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F11R1_FB5                       (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F11R1_FB6                       (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F11R1_FB7                       (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F11R1_FB8                       (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F11R1_FB9                       (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F11R1_FB10                      (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F11R1_FB11                      (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F11R1_FB12                      (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F11R1_FB13                      (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F11R1_FB14                      (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F11R1_FB15                      (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F11R1_FB16                      (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F11R1_FB17                      (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F11R1_FB18                      (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F11R1_FB19                      (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F11R1_FB20                      (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F11R1_FB21                      (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F11R1_FB22                      (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F11R1_FB23                      (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F11R1_FB24                      (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F11R1_FB25                      (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F11R1_FB26                      (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F11R1_FB27                      (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F11R1_FB28                      (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F11R1_FB29                      (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F11R1_FB30                      (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F11R1_FB31                      (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F12R1 register  ******************/
#define  CAN_F12R1_FB0                       (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F12R1_FB1                       (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F12R1_FB2                       (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F12R1_FB3                       (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F12R1_FB4                       (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F12R1_FB5                       (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F12R1_FB6                       (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F12R1_FB7                       (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F12R1_FB8                       (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F12R1_FB9                       (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F12R1_FB10                      (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F12R1_FB11                      (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F12R1_FB12                      (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F12R1_FB13                      (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F12R1_FB14                      (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F12R1_FB15                      (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F12R1_FB16                      (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F12R1_FB17                      (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F12R1_FB18                      (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F12R1_FB19                      (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F12R1_FB20                      (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F12R1_FB21                      (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F12R1_FB22                      (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F12R1_FB23                      (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F12R1_FB24                      (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F12R1_FB25                      (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F12R1_FB26                      (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F12R1_FB27                      (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F12R1_FB28                      (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F12R1_FB29                      (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F12R1_FB30                      (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F12R1_FB31                      (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F13R1 register  ******************/
#define  CAN_F13R1_FB0                       (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F13R1_FB1                       (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F13R1_FB2                       (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F13R1_FB3                       (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F13R1_FB4                       (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F13R1_FB5                       (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F13R1_FB6                       (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F13R1_FB7                       (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F13R1_FB8                       (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F13R1_FB9                       (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F13R1_FB10                      (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F13R1_FB11                      (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F13R1_FB12                      (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F13R1_FB13                      (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F13R1_FB14                      (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F13R1_FB15                      (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F13R1_FB16                      (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F13R1_FB17                      (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F13R1_FB18                      (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F13R1_FB19                      (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F13R1_FB20                      (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F13R1_FB21                      (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F13R1_FB22                      (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F13R1_FB23                      (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F13R1_FB24                      (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F13R1_FB25                      (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F13R1_FB26                      (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F13R1_FB27                      (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F13R1_FB28                      (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F13R1_FB29                      (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F13R1_FB30                      (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F13R1_FB31                      (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F0R2 register  *******************/
#define  CAN_F0R2_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F0R2_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F0R2_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F0R2_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F0R2_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F0R2_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F0R2_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F0R2_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F0R2_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F0R2_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F0R2_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F0R2_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F0R2_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F0R2_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F0R2_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F0R2_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F0R2_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F0R2_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F0R2_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F0R2_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F0R2_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F0R2_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F0R2_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F0R2_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F0R2_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F0R2_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F0R2_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F0R2_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F0R2_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F0R2_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F0R2_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F0R2_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F1R2 register  *******************/
#define  CAN_F1R2_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F1R2_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F1R2_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F1R2_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F1R2_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F1R2_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F1R2_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F1R2_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F1R2_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F1R2_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F1R2_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F1R2_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F1R2_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F1R2_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F1R2_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F1R2_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F1R2_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F1R2_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F1R2_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F1R2_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F1R2_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F1R2_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F1R2_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F1R2_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F1R2_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F1R2_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F1R2_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F1R2_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F1R2_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F1R2_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F1R2_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F1R2_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F2R2 register  *******************/
#define  CAN_F2R2_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F2R2_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F2R2_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F2R2_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F2R2_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F2R2_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F2R2_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F2R2_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F2R2_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F2R2_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F2R2_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F2R2_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F2R2_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F2R2_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F2R2_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F2R2_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F2R2_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F2R2_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F2R2_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F2R2_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F2R2_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F2R2_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F2R2_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F2R2_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F2R2_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F2R2_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F2R2_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F2R2_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F2R2_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F2R2_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F2R2_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F2R2_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F3R2 register  *******************/
#define  CAN_F3R2_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F3R2_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F3R2_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F3R2_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F3R2_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F3R2_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F3R2_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F3R2_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F3R2_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F3R2_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F3R2_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F3R2_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F3R2_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F3R2_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F3R2_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F3R2_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F3R2_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F3R2_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F3R2_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F3R2_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F3R2_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F3R2_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F3R2_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F3R2_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F3R2_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F3R2_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F3R2_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F3R2_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F3R2_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F3R2_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F3R2_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F3R2_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F4R2 register  *******************/
#define  CAN_F4R2_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F4R2_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F4R2_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F4R2_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F4R2_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F4R2_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F4R2_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F4R2_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F4R2_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F4R2_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F4R2_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F4R2_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F4R2_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F4R2_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F4R2_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F4R2_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F4R2_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F4R2_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F4R2_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F4R2_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F4R2_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F4R2_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F4R2_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F4R2_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F4R2_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F4R2_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F4R2_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F4R2_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F4R2_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F4R2_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F4R2_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F4R2_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F5R2 register  *******************/
#define  CAN_F5R2_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F5R2_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F5R2_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F5R2_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F5R2_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F5R2_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F5R2_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F5R2_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F5R2_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F5R2_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F5R2_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F5R2_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F5R2_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F5R2_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F5R2_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F5R2_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F5R2_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F5R2_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F5R2_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F5R2_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F5R2_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F5R2_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F5R2_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F5R2_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F5R2_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F5R2_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F5R2_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F5R2_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F5R2_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F5R2_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F5R2_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F5R2_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F6R2 register  *******************/
#define  CAN_F6R2_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F6R2_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F6R2_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F6R2_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F6R2_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F6R2_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F6R2_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F6R2_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F6R2_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F6R2_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F6R2_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F6R2_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F6R2_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F6R2_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F6R2_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F6R2_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F6R2_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F6R2_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F6R2_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F6R2_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F6R2_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F6R2_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F6R2_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F6R2_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F6R2_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F6R2_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F6R2_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F6R2_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F6R2_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F6R2_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F6R2_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F6R2_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F7R2 register  *******************/
#define  CAN_F7R2_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F7R2_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F7R2_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F7R2_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F7R2_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F7R2_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F7R2_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F7R2_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F7R2_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F7R2_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F7R2_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F7R2_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F7R2_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F7R2_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F7R2_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F7R2_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F7R2_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F7R2_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F7R2_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F7R2_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F7R2_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F7R2_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F7R2_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F7R2_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F7R2_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F7R2_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F7R2_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F7R2_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F7R2_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F7R2_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F7R2_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F7R2_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F8R2 register  *******************/
#define  CAN_F8R2_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F8R2_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F8R2_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F8R2_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F8R2_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F8R2_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F8R2_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F8R2_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F8R2_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F8R2_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F8R2_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F8R2_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F8R2_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F8R2_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F8R2_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F8R2_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F8R2_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F8R2_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F8R2_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F8R2_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F8R2_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F8R2_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F8R2_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F8R2_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F8R2_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F8R2_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F8R2_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F8R2_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F8R2_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F8R2_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F8R2_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F8R2_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F9R2 register  *******************/
#define  CAN_F9R2_FB0                        (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F9R2_FB1                        (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F9R2_FB2                        (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F9R2_FB3                        (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F9R2_FB4                        (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F9R2_FB5                        (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F9R2_FB6                        (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F9R2_FB7                        (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F9R2_FB8                        (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F9R2_FB9                        (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F9R2_FB10                       (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F9R2_FB11                       (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F9R2_FB12                       (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F9R2_FB13                       (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F9R2_FB14                       (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F9R2_FB15                       (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F9R2_FB16                       (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F9R2_FB17                       (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F9R2_FB18                       (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F9R2_FB19                       (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F9R2_FB20                       (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F9R2_FB21                       (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F9R2_FB22                       (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F9R2_FB23                       (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F9R2_FB24                       (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F9R2_FB25                       (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F9R2_FB26                       (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F9R2_FB27                       (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F9R2_FB28                       (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F9R2_FB29                       (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F9R2_FB30                       (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F9R2_FB31                       (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F10R2 register  ******************/
#define  CAN_F10R2_FB0                       (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F10R2_FB1                       (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F10R2_FB2                       (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F10R2_FB3                       (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F10R2_FB4                       (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F10R2_FB5                       (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F10R2_FB6                       (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F10R2_FB7                       (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F10R2_FB8                       (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F10R2_FB9                       (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F10R2_FB10                      (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F10R2_FB11                      (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F10R2_FB12                      (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F10R2_FB13                      (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F10R2_FB14                      (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F10R2_FB15                      (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F10R2_FB16                      (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F10R2_FB17                      (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F10R2_FB18                      (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F10R2_FB19                      (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F10R2_FB20                      (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F10R2_FB21                      (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F10R2_FB22                      (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F10R2_FB23                      (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F10R2_FB24                      (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F10R2_FB25                      (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F10R2_FB26                      (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F10R2_FB27                      (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F10R2_FB28                      (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F10R2_FB29                      (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F10R2_FB30                      (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F10R2_FB31                      (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F11R2 register  ******************/
#define  CAN_F11R2_FB0                       (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F11R2_FB1                       (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F11R2_FB2                       (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F11R2_FB3                       (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F11R2_FB4                       (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F11R2_FB5                       (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F11R2_FB6                       (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F11R2_FB7                       (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F11R2_FB8                       (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F11R2_FB9                       (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F11R2_FB10                      (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F11R2_FB11                      (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F11R2_FB12                      (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F11R2_FB13                      (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F11R2_FB14                      (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F11R2_FB15                      (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F11R2_FB16                      (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F11R2_FB17                      (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F11R2_FB18                      (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F11R2_FB19                      (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F11R2_FB20                      (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F11R2_FB21                      (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F11R2_FB22                      (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F11R2_FB23                      (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F11R2_FB24                      (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F11R2_FB25                      (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F11R2_FB26                      (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F11R2_FB27                      (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F11R2_FB28                      (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F11R2_FB29                      (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F11R2_FB30                      (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F11R2_FB31                      (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F12R2 register  ******************/
#define  CAN_F12R2_FB0                       (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F12R2_FB1                       (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F12R2_FB2                       (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F12R2_FB3                       (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F12R2_FB4                       (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F12R2_FB5                       (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F12R2_FB6                       (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F12R2_FB7                       (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F12R2_FB8                       (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F12R2_FB9                       (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F12R2_FB10                      (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F12R2_FB11                      (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F12R2_FB12                      (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F12R2_FB13                      (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F12R2_FB14                      (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F12R2_FB15                      (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F12R2_FB16                      (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F12R2_FB17                      (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F12R2_FB18                      (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F12R2_FB19                      (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F12R2_FB20                      (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F12R2_FB21                      (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F12R2_FB22                      (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F12R2_FB23                      (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F12R2_FB24                      (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F12R2_FB25                      (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F12R2_FB26                      (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F12R2_FB27                      (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F12R2_FB28                      (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F12R2_FB29                      (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F12R2_FB30                      (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F12R2_FB31                      (0x80000000)        /*!< Filter bit 31 */

/*******************  Bit definition for CAN_F13R2 register  ******************/
#define  CAN_F13R2_FB0                       (0x00000001)        /*!< Filter bit 0 */
#define  CAN_F13R2_FB1                       (0x00000002)        /*!< Filter bit 1 */
#define  CAN_F13R2_FB2                       (0x00000004)        /*!< Filter bit 2 */
#define  CAN_F13R2_FB3                       (0x00000008)        /*!< Filter bit 3 */
#define  CAN_F13R2_FB4                       (0x00000010)        /*!< Filter bit 4 */
#define  CAN_F13R2_FB5                       (0x00000020)        /*!< Filter bit 5 */
#define  CAN_F13R2_FB6                       (0x00000040)        /*!< Filter bit 6 */
#define  CAN_F13R2_FB7                       (0x00000080)        /*!< Filter bit 7 */
#define  CAN_F13R2_FB8                       (0x00000100)        /*!< Filter bit 8 */
#define  CAN_F13R2_FB9                       (0x00000200)        /*!< Filter bit 9 */
#define  CAN_F13R2_FB10                      (0x00000400)        /*!< Filter bit 10 */
#define  CAN_F13R2_FB11                      (0x00000800)        /*!< Filter bit 11 */
#define  CAN_F13R2_FB12                      (0x00001000)        /*!< Filter bit 12 */
#define  CAN_F13R2_FB13                      (0x00002000)        /*!< Filter bit 13 */
#define  CAN_F13R2_FB14                      (0x00004000)        /*!< Filter bit 14 */
#define  CAN_F13R2_FB15                      (0x00008000)        /*!< Filter bit 15 */
#define  CAN_F13R2_FB16                      (0x00010000)        /*!< Filter bit 16 */
#define  CAN_F13R2_FB17                      (0x00020000)        /*!< Filter bit 17 */
#define  CAN_F13R2_FB18                      (0x00040000)        /*!< Filter bit 18 */
#define  CAN_F13R2_FB19                      (0x00080000)        /*!< Filter bit 19 */
#define  CAN_F13R2_FB20                      (0x00100000)        /*!< Filter bit 20 */
#define  CAN_F13R2_FB21                      (0x00200000)        /*!< Filter bit 21 */
#define  CAN_F13R2_FB22                      (0x00400000)        /*!< Filter bit 22 */
#define  CAN_F13R2_FB23                      (0x00800000)        /*!< Filter bit 23 */
#define  CAN_F13R2_FB24                      (0x01000000)        /*!< Filter bit 24 */
#define  CAN_F13R2_FB25                      (0x02000000)        /*!< Filter bit 25 */
#define  CAN_F13R2_FB26                      (0x04000000)        /*!< Filter bit 26 */
#define  CAN_F13R2_FB27                      (0x08000000)        /*!< Filter bit 27 */
#define  CAN_F13R2_FB28                      (0x10000000)        /*!< Filter bit 28 */
#define  CAN_F13R2_FB29                      (0x20000000)        /*!< Filter bit 29 */
#define  CAN_F13R2_FB30                      (0x40000000)        /*!< Filter bit 30 */
#define  CAN_F13R2_FB31                      (0x80000000)        /*!< Filter bit 31 */

/******************************************************************************/
/*                                                                            */
/*                        Serial Peripheral Interface                         */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for SPI_CR1 register  ********************/
#define  SPI_CR1_CPHA                        (0x0001)            /*!< Clock Phase */
#define  SPI_CR1_CPOL                        (0x0002)            /*!< Clock Polarity */
#define  SPI_CR1_MSTR                        (0x0004)            /*!< Master Selection */

#define  SPI_CR1_BR                          (0x0038)            /*!< BR[2:0] bits (Baud Rate Control) */
#define  SPI_CR1_BR_0                        (0x0008)            /*!< Bit 0 */
#define  SPI_CR1_BR_1                        (0x0010)            /*!< Bit 1 */
#define  SPI_CR1_BR_2                        (0x0020)            /*!< Bit 2 */

#define  SPI_CR1_SPE                         (0x0040)            /*!< SPI Enable */
#define  SPI_CR1_LSBFIRST                    (0x0080)            /*!< Frame Format */
#define  SPI_CR1_SSI                         (0x0100)            /*!< Internal slave select */
#define  SPI_CR1_SSM                         (0x0200)            /*!< Software slave management */
#define  SPI_CR1_RXONLY                      (0x0400)            /*!< Receive only */
#define  SPI_CR1_DFF                         (0x0800)            /*!< Data Frame Format */
#define  SPI_CR1_CRCNEXT                     (0x1000)            /*!< Transmit CRC next */
#define  SPI_CR1_CRCEN                       (0x2000)            /*!< Hardware CRC calculation enable */
#define  SPI_CR1_BIDIOE                      (0x4000)            /*!< Output enable in bidirectional mode */
#define  SPI_CR1_BIDIMODE                    (0x8000)            /*!< Bidirectional data mode enable */

/*******************  Bit definition for SPI_CR2 register  ********************/
#define  SPI_CR2_RXDMAEN                     ((uint8_t)0x01)               /*!< Rx Buffer DMA Enable */
#define  SPI_CR2_TXDMAEN                     ((uint8_t)0x02)               /*!< Tx Buffer DMA Enable */
#define  SPI_CR2_SSOE                        ((uint8_t)0x04)               /*!< SS Output Enable */
#define  SPI_CR2_ERRIE                       ((uint8_t)0x20)               /*!< Error Interrupt Enable */
#define  SPI_CR2_RXNEIE                      ((uint8_t)0x40)               /*!< RX buffer Not Empty Interrupt Enable */
#define  SPI_CR2_TXEIE                       ((uint8_t)0x80)               /*!< Tx buffer Empty Interrupt Enable */

/********************  Bit definition for SPI_SR register  ********************/
#define  SPI_SR_RXNE                         ((uint8_t)0x01)               /*!< Receive buffer Not Empty */
#define  SPI_SR_TXE                          ((uint8_t)0x02)               /*!< Transmit buffer Empty */
#define  SPI_SR_CHSIDE                       ((uint8_t)0x04)               /*!< Channel side */
#define  SPI_SR_UDR                          ((uint8_t)0x08)               /*!< Underrun flag */
#define  SPI_SR_CRCERR                       ((uint8_t)0x10)               /*!< CRC Error flag */
#define  SPI_SR_MODF                         ((uint8_t)0x20)               /*!< Mode fault */
#define  SPI_SR_OVR                          ((uint8_t)0x40)               /*!< Overrun flag */
#define  SPI_SR_BSY                          ((uint8_t)0x80)               /*!< Busy flag */

/********************  Bit definition for SPI_DR register  ********************/
#define  SPI_DR_DR                           (0xFFFF)            /*!< Data Register */

/*******************  Bit definition for SPI_CRCPR register  ******************/
#define  SPI_CRCPR_CRCPOLY                   (0xFFFF)            /*!< CRC polynomial register */

/******************  Bit definition for SPI_RXCRCR register  ******************/
#define  SPI_RXCRCR_RXCRC                    (0xFFFF)            /*!< Rx CRC Register */

/******************  Bit definition for SPI_TXCRCR register  ******************/
#define  SPI_TXCRCR_TXCRC                    (0xFFFF)            /*!< Tx CRC Register */

/******************  Bit definition for SPI_I2SCFGR register  *****************/
#define  SPI_I2SCFGR_CHLEN                   (0x0001)            /*!< Channel length (number of bits per audio channel) */

#define  SPI_I2SCFGR_DATLEN                  (0x0006)            /*!< DATLEN[1:0] bits (Data length to be transferred) */
#define  SPI_I2SCFGR_DATLEN_0                (0x0002)            /*!< Bit 0 */
#define  SPI_I2SCFGR_DATLEN_1                (0x0004)            /*!< Bit 1 */

#define  SPI_I2SCFGR_CKPOL                   (0x0008)            /*!< steady state clock polarity */

#define  SPI_I2SCFGR_I2SSTD                  (0x0030)            /*!< I2SSTD[1:0] bits (I2S standard selection) */
#define  SPI_I2SCFGR_I2SSTD_0                (0x0010)            /*!< Bit 0 */
#define  SPI_I2SCFGR_I2SSTD_1                (0x0020)            /*!< Bit 1 */

#define  SPI_I2SCFGR_PCMSYNC                 (0x0080)            /*!< PCM frame synchronization */

#define  SPI_I2SCFGR_I2SCFG                  (0x0300)            /*!< I2SCFG[1:0] bits (I2S configuration mode) */
#define  SPI_I2SCFGR_I2SCFG_0                (0x0100)            /*!< Bit 0 */
#define  SPI_I2SCFGR_I2SCFG_1                (0x0200)            /*!< Bit 1 */

#define  SPI_I2SCFGR_I2SE                    (0x0400)            /*!< I2S Enable */
#define  SPI_I2SCFGR_I2SMOD                  (0x0800)            /*!< I2S mode selection */

/******************  Bit definition for SPI_I2SPR register  *******************/
#define  SPI_I2SPR_I2SDIV                    (0x00FF)            /*!< I2S Linear prescaler */
#define  SPI_I2SPR_ODD                       (0x0100)            /*!< Odd factor for the prescaler */
#define  SPI_I2SPR_MCKOE                     (0x0200)            /*!< Master Clock Output Enable */

/******************************************************************************/
/*                                                                            */
/*                      Inter-integrated Circuit Interface                    */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for I2C_CR1 register  ********************/
#define  I2C_CR1_PE                          (0x0001)            /*!< Peripheral Enable */
#define  I2C_CR1_SMBUS                       (0x0002)            /*!< SMBus Mode */
#define  I2C_CR1_SMBTYPE                     (0x0008)            /*!< SMBus Type */
#define  I2C_CR1_ENARP                       (0x0010)            /*!< ARP Enable */
#define  I2C_CR1_ENPEC                       (0x0020)            /*!< PEC Enable */
#define  I2C_CR1_ENGC                        (0x0040)            /*!< General Call Enable */
#define  I2C_CR1_NOSTRETCH                   (0x0080)            /*!< Clock Stretching Disable (Slave mode) */
#define  I2C_CR1_START                       (0x0100)            /*!< Start Generation */
#define  I2C_CR1_STOP                        (0x0200)            /*!< Stop Generation */
#define  I2C_CR1_ACK                         (0x0400)            /*!< Acknowledge Enable */
#define  I2C_CR1_POS                         (0x0800)            /*!< Acknowledge/PEC Position (for data reception) */
#define  I2C_CR1_PEC                         (0x1000)            /*!< Packet Error Checking */
#define  I2C_CR1_ALERT                       (0x2000)            /*!< SMBus Alert */
#define  I2C_CR1_SWRST                       (0x8000)            /*!< Software Reset */

/*******************  Bit definition for I2C_CR2 register  ********************/
#define  I2C_CR2_FREQ                        (0x003F)            /*!< FREQ[5:0] bits (Peripheral Clock Frequency) */
#define  I2C_CR2_FREQ_0                      (0x0001)            /*!< Bit 0 */
#define  I2C_CR2_FREQ_1                      (0x0002)            /*!< Bit 1 */
#define  I2C_CR2_FREQ_2                      (0x0004)            /*!< Bit 2 */
#define  I2C_CR2_FREQ_3                      (0x0008)            /*!< Bit 3 */
#define  I2C_CR2_FREQ_4                      (0x0010)            /*!< Bit 4 */
#define  I2C_CR2_FREQ_5                      (0x0020)            /*!< Bit 5 */

#define  I2C_CR2_ITERREN                     (0x0100)            /*!< Error Interrupt Enable */
#define  I2C_CR2_ITEVTEN                     (0x0200)            /*!< Event Interrupt Enable */
#define  I2C_CR2_ITBUFEN                     (0x0400)            /*!< Buffer Interrupt Enable */
#define  I2C_CR2_DMAEN                       (0x0800)            /*!< DMA Requests Enable */
#define  I2C_CR2_LAST                        (0x1000)            /*!< DMA Last Transfer */

/*******************  Bit definition for I2C_OAR1 register  *******************/
#define  I2C_OAR1_ADD1_7                     (0x00FE)            /*!< Interface Address */
#define  I2C_OAR1_ADD8_9                     (0x0300)            /*!< Interface Address */

#define  I2C_OAR1_ADD0                       (0x0001)            /*!< Bit 0 */
#define  I2C_OAR1_ADD1                       (0x0002)            /*!< Bit 1 */
#define  I2C_OAR1_ADD2                       (0x0004)            /*!< Bit 2 */
#define  I2C_OAR1_ADD3                       (0x0008)            /*!< Bit 3 */
#define  I2C_OAR1_ADD4                       (0x0010)            /*!< Bit 4 */
#define  I2C_OAR1_ADD5                       (0x0020)            /*!< Bit 5 */
#define  I2C_OAR1_ADD6                       (0x0040)            /*!< Bit 6 */
#define  I2C_OAR1_ADD7                       (0x0080)            /*!< Bit 7 */
#define  I2C_OAR1_ADD8                       (0x0100)            /*!< Bit 8 */
#define  I2C_OAR1_ADD9                       (0x0200)            /*!< Bit 9 */

#define  I2C_OAR1_ADDMODE                    (0x8000)            /*!< Addressing Mode (Slave mode) */

/*******************  Bit definition for I2C_OAR2 register  *******************/
#define  I2C_OAR2_ENDUAL                     ((uint8_t)0x01)               /*!< Dual addressing mode enable */
#define  I2C_OAR2_ADD2                       ((uint8_t)0xFE)               /*!< Interface address */

/********************  Bit definition for I2C_DR register  ********************/
#define  I2C_DR_DR                           ((uint8_t)0xFF)               /*!< 8-bit Data Register */

/*******************  Bit definition for I2C_SR1 register  ********************/
#define  I2C_SR1_SB                          (0x0001)            /*!< Start Bit (Master mode) */
#define  I2C_SR1_ADDR                        (0x0002)            /*!< Address sent (master mode)/matched (slave mode) */
#define  I2C_SR1_BTF                         (0x0004)            /*!< Byte Transfer Finished */
#define  I2C_SR1_ADD10                       (0x0008)            /*!< 10-bit header sent (Master mode) */
#define  I2C_SR1_STOPF                       (0x0010)            /*!< Stop detection (Slave mode) */
#define  I2C_SR1_RXNE                        (0x0040)            /*!< Data Register not Empty (receivers) */
#define  I2C_SR1_TXE                         (0x0080)            /*!< Data Register Empty (transmitters) */
#define  I2C_SR1_BERR                        (0x0100)            /*!< Bus Error */
#define  I2C_SR1_ARLO                        (0x0200)            /*!< Arbitration Lost (master mode) */
#define  I2C_SR1_AF                          (0x0400)            /*!< Acknowledge Failure */
#define  I2C_SR1_OVR                         (0x0800)            /*!< Overrun/Underrun */
#define  I2C_SR1_PECERR                      (0x1000)            /*!< PEC Error in reception */
#define  I2C_SR1_TIMEOUT                     (0x4000)            /*!< Timeout or Tlow Error */
#define  I2C_SR1_SMBALERT                    (0x8000)            /*!< SMBus Alert */

/*******************  Bit definition for I2C_SR2 register  ********************/
#define  I2C_SR2_MSL                         (0x0001)            /*!< Master/Slave */
#define  I2C_SR2_BUSY                        (0x0002)            /*!< Bus Busy */
#define  I2C_SR2_TRA                         (0x0004)            /*!< Transmitter/Receiver */
#define  I2C_SR2_GENCALL                     (0x0010)            /*!< General Call Address (Slave mode) */
#define  I2C_SR2_SMBDEFAULT                  (0x0020)            /*!< SMBus Device Default Address (Slave mode) */
#define  I2C_SR2_SMBHOST                     (0x0040)            /*!< SMBus Host Header (Slave mode) */
#define  I2C_SR2_DUALF                       (0x0080)            /*!< Dual Flag (Slave mode) */
#define  I2C_SR2_PEC                         (0xFF00)            /*!< Packet Error Checking Register */

/*******************  Bit definition for I2C_CCR register  ********************/
#define  I2C_CCR_CCR                         (0x0FFF)            /*!< Clock Control Register in Fast/Standard mode (Master mode) */
#define  I2C_CCR_DUTY                        (0x4000)            /*!< Fast Mode Duty Cycle */
#define  I2C_CCR_FS                          (0x8000)            /*!< I2C Master Mode Selection */

/******************  Bit definition for I2C_TRISE register  *******************/
#define  I2C_TRISE_TRISE                     ((uint8_t)0x3F)               /*!< Maximum Rise Time in Fast/Standard mode (Master mode) */

/******************************************************************************/
/*                                                                            */
/*         Universal Synchronous Asynchronous Receiver Transmitter            */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for USART_SR register  *******************/
#define  USART_SR_PE                         (0x0001)            /*!< Parity Error */
#define  USART_SR_FE                         (0x0002)            /*!< Framing Error */
#define  USART_SR_NE                         (0x0004)            /*!< Noise Error Flag */
#define  USART_SR_ORE                        (0x0008)            /*!< OverRun Error */
#define  USART_SR_IDLE                       (0x0010)            /*!< IDLE line detected */
#define  USART_SR_RXNE                       (0x0020)            /*!< Read Data Register Not Empty */
#define  USART_SR_TC                         (0x0040)            /*!< Transmission Complete */
#define  USART_SR_TXE                        (0x0080)            /*!< Transmit Data Register Empty */
#define  USART_SR_LBD                        (0x0100)            /*!< LIN Break Detection Flag */
#define  USART_SR_CTS                        (0x0200)            /*!< CTS Flag */

/*******************  Bit definition for USART_DR register  *******************/
#define  USART_DR_DR                         (0x01FF)            /*!< Data value */

/******************  Bit definition for USART_BRR register  *******************/
#define  USART_BRR_DIV_Fraction              (0x000F)            /*!< Fraction of USARTDIV */
#define  USART_BRR_DIV_Mantissa              (0xFFF0)            /*!< Mantissa of USARTDIV */

/******************  Bit definition for USART_CR1 register  *******************/
#define  USART_CR1_SBK                       (0x0001)            /*!< Send Break */
#define  USART_CR1_RWU                       (0x0002)            /*!< Receiver wakeup */
#define  USART_CR1_RE                        (0x0004)            /*!< Receiver Enable */
#define  USART_CR1_TE                        (0x0008)            /*!< Transmitter Enable */
#define  USART_CR1_IDLEIE                    (0x0010)            /*!< IDLE Interrupt Enable */
#define  USART_CR1_RXNEIE                    (0x0020)            /*!< RXNE Interrupt Enable */
#define  USART_CR1_TCIE                      (0x0040)            /*!< Transmission Complete Interrupt Enable */
#define  USART_CR1_TXEIE                     (0x0080)            /*!< PE Interrupt Enable */
#define  USART_CR1_PEIE                      (0x0100)            /*!< PE Interrupt Enable */
#define  USART_CR1_PS                        (0x0200)            /*!< Parity Selection */
#define  USART_CR1_PCE                       (0x0400)            /*!< Parity Control Enable */
#define  USART_CR1_WAKE                      (0x0800)            /*!< Wakeup method */
#define  USART_CR1_M                         (0x1000)            /*!< Word length */
#define  USART_CR1_UE                        (0x2000)            /*!< USART Enable */
#define  USART_CR1_OVER8                     (0x8000)            /*!< USART Oversmapling 8-bits */

/******************  Bit definition for USART_CR2 register  *******************/
#define  USART_CR2_ADD                       (0x000F)            /*!< Address of the USART node */
#define  USART_CR2_LBDL                      (0x0020)            /*!< LIN Break Detection Length */
#define  USART_CR2_LBDIE                     (0x0040)            /*!< LIN Break Detection Interrupt Enable */
#define  USART_CR2_LBCL                      (0x0100)            /*!< Last Bit Clock pulse */
#define  USART_CR2_CPHA                      (0x0200)            /*!< Clock Phase */
#define  USART_CR2_CPOL                      (0x0400)            /*!< Clock Polarity */
#define  USART_CR2_CLKEN                     (0x0800)            /*!< Clock Enable */

#define  USART_CR2_STOP                      (0x3000)            /*!< STOP[1:0] bits (STOP bits) */
#define  USART_CR2_STOP_0                    (0x1000)            /*!< Bit 0 */
#define  USART_CR2_STOP_1                    (0x2000)            /*!< Bit 1 */

#define  USART_CR2_LINEN                     (0x4000)            /*!< LIN mode enable */

/******************  Bit definition for USART_CR3 register  *******************/
#define  USART_CR3_EIE                       (0x0001)            /*!< Error Interrupt Enable */
#define  USART_CR3_IREN                      (0x0002)            /*!< IrDA mode Enable */
#define  USART_CR3_IRLP                      (0x0004)            /*!< IrDA Low-Power */
#define  USART_CR3_HDSEL                     (0x0008)            /*!< Half-Duplex Selection */
#define  USART_CR3_NACK                      (0x0010)            /*!< Smartcard NACK enable */
#define  USART_CR3_SCEN                      (0x0020)            /*!< Smartcard mode enable */
#define  USART_CR3_DMAR                      (0x0040)            /*!< DMA Enable Receiver */
#define  USART_CR3_DMAT                      (0x0080)            /*!< DMA Enable Transmitter */
#define  USART_CR3_RTSE                      (0x0100)            /*!< RTS Enable */
#define  USART_CR3_CTSE                      (0x0200)            /*!< CTS Enable */
#define  USART_CR3_CTSIE                     (0x0400)            /*!< CTS Interrupt Enable */
#define  USART_CR3_ONEBIT                    (0x0800)            /*!< One Bit method */

/******************  Bit definition for USART_GTPR register  ******************/
#define  USART_GTPR_PSC                      (0x00FF)            /*!< PSC[7:0] bits (Prescaler value) */
#define  USART_GTPR_PSC_0                    (0x0001)            /*!< Bit 0 */
#define  USART_GTPR_PSC_1                    (0x0002)            /*!< Bit 1 */
#define  USART_GTPR_PSC_2                    (0x0004)            /*!< Bit 2 */
#define  USART_GTPR_PSC_3                    (0x0008)            /*!< Bit 3 */
#define  USART_GTPR_PSC_4                    (0x0010)            /*!< Bit 4 */
#define  USART_GTPR_PSC_5                    (0x0020)            /*!< Bit 5 */
#define  USART_GTPR_PSC_6                    (0x0040)            /*!< Bit 6 */
#define  USART_GTPR_PSC_7                    (0x0080)            /*!< Bit 7 */

#define  USART_GTPR_GT                       (0xFF00)            /*!< Guard time value */

/******************************************************************************/
/*                                                                            */
/*                                 Debug MCU                                  */
/*                                                                            */
/******************************************************************************/

/****************  Bit definition for DBGMCU_IDCODE register  *****************/
#define  DBGMCU_IDCODE_DEV_ID                (0x00000FFF)        /*!< Device Identifier */

#define  DBGMCU_IDCODE_REV_ID                (0xFFFF0000)        /*!< REV_ID[15:0] bits (Revision Identifier) */
#define  DBGMCU_IDCODE_REV_ID_0              (0x00010000)        /*!< Bit 0 */
#define  DBGMCU_IDCODE_REV_ID_1              (0x00020000)        /*!< Bit 1 */
#define  DBGMCU_IDCODE_REV_ID_2              (0x00040000)        /*!< Bit 2 */
#define  DBGMCU_IDCODE_REV_ID_3              (0x00080000)        /*!< Bit 3 */
#define  DBGMCU_IDCODE_REV_ID_4              (0x00100000)        /*!< Bit 4 */
#define  DBGMCU_IDCODE_REV_ID_5              (0x00200000)        /*!< Bit 5 */
#define  DBGMCU_IDCODE_REV_ID_6              (0x00400000)        /*!< Bit 6 */
#define  DBGMCU_IDCODE_REV_ID_7              (0x00800000)        /*!< Bit 7 */
#define  DBGMCU_IDCODE_REV_ID_8              (0x01000000)        /*!< Bit 8 */
#define  DBGMCU_IDCODE_REV_ID_9              (0x02000000)        /*!< Bit 9 */
#define  DBGMCU_IDCODE_REV_ID_10             (0x04000000)        /*!< Bit 10 */
#define  DBGMCU_IDCODE_REV_ID_11             (0x08000000)        /*!< Bit 11 */
#define  DBGMCU_IDCODE_REV_ID_12             (0x10000000)        /*!< Bit 12 */
#define  DBGMCU_IDCODE_REV_ID_13             (0x20000000)        /*!< Bit 13 */
#define  DBGMCU_IDCODE_REV_ID_14             (0x40000000)        /*!< Bit 14 */
#define  DBGMCU_IDCODE_REV_ID_15             (0x80000000)        /*!< Bit 15 */

/******************  Bit definition for DBGMCU_CR register  *******************/
#define  DBGMCU_CR_DBG_SLEEP                 (0x00000001)        /*!< Debug Sleep Mode */
#define  DBGMCU_CR_DBG_STOP                  (0x00000002)        /*!< Debug Stop Mode */
#define  DBGMCU_CR_DBG_STANDBY               (0x00000004)        /*!< Debug Standby mode */
#define  DBGMCU_CR_TRACE_IOEN                (0x00000020)        /*!< Trace Pin Assignment Control */

#define  DBGMCU_CR_TRACE_MODE                (0x000000C0)        /*!< TRACE_MODE[1:0] bits (Trace Pin Assignment Control) */
#define  DBGMCU_CR_TRACE_MODE_0              (0x00000040)        /*!< Bit 0 */
#define  DBGMCU_CR_TRACE_MODE_1              (0x00000080)        /*!< Bit 1 */

#define  DBGMCU_CR_DBG_IWDG_STOP             (0x00000100)        /*!< Debug Independent Watchdog stopped when Core is halted */
#define  DBGMCU_CR_DBG_WWDG_STOP             (0x00000200)        /*!< Debug Window Watchdog stopped when Core is halted */
#define  DBGMCU_CR_DBG_TIM1_STOP             (0x00000400)        /*!< TIM1 counter stopped when core is halted */
#define  DBGMCU_CR_DBG_TIM2_STOP             (0x00000800)        /*!< TIM2 counter stopped when core is halted */
#define  DBGMCU_CR_DBG_TIM3_STOP             (0x00001000)        /*!< TIM3 counter stopped when core is halted */
#define  DBGMCU_CR_DBG_TIM4_STOP             (0x00002000)        /*!< TIM4 counter stopped when core is halted */
#define  DBGMCU_CR_DBG_CAN1_STOP             (0x00004000)        /*!< Debug CAN1 stopped when Core is halted */
#define  DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT    (0x00008000)        /*!< SMBUS timeout mode stopped when Core is halted */
#define  DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT    (0x00010000)        /*!< SMBUS timeout mode stopped when Core is halted */
#define  DBGMCU_CR_DBG_TIM8_STOP             (0x00020000)        /*!< TIM8 counter stopped when core is halted */
#define  DBGMCU_CR_DBG_TIM5_STOP             (0x00040000)        /*!< TIM5 counter stopped when core is halted */
#define  DBGMCU_CR_DBG_TIM6_STOP             (0x00080000)        /*!< TIM6 counter stopped when core is halted */
#define  DBGMCU_CR_DBG_TIM7_STOP             (0x00100000)        /*!< TIM7 counter stopped when core is halted */
#define  DBGMCU_CR_DBG_CAN2_STOP             (0x00200000)        /*!< Debug CAN2 stopped when Core is halted */
#define  DBGMCU_CR_DBG_TIM15_STOP            (0x00400000)        /*!< Debug TIM15 stopped when Core is halted */
#define  DBGMCU_CR_DBG_TIM16_STOP            (0x00800000)        /*!< Debug TIM16 stopped when Core is halted */
#define  DBGMCU_CR_DBG_TIM17_STOP            (0x01000000)        /*!< Debug TIM17 stopped when Core is halted */
#define  DBGMCU_CR_DBG_TIM12_STOP            (0x02000000)        /*!< Debug TIM12 stopped when Core is halted */
#define  DBGMCU_CR_DBG_TIM13_STOP            (0x04000000)        /*!< Debug TIM13 stopped when Core is halted */
#define  DBGMCU_CR_DBG_TIM14_STOP            (0x08000000)        /*!< Debug TIM14 stopped when Core is halted */
#define  DBGMCU_CR_DBG_TIM9_STOP             (0x10000000)        /*!< Debug TIM9 stopped when Core is halted */
#define  DBGMCU_CR_DBG_TIM10_STOP            (0x20000000)        /*!< Debug TIM10 stopped when Core is halted */
#define  DBGMCU_CR_DBG_TIM11_STOP            (0x40000000)        /*!< Debug TIM11 stopped when Core is halted */

/******************************************************************************/
/*                                                                            */
/*                      FLASH and Option Bytes Registers                      */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for FLASH_ACR register  ******************/
#define  FLASH_ACR_LATENCY                   ((uint8_t)0x03)               /*!< LATENCY[2:0] bits (Latency) */
#define  FLASH_ACR_LATENCY_0                 ((uint8_t)0x00)               /*!< Bit 0 */
#define  FLASH_ACR_LATENCY_1                 ((uint8_t)0x01)               /*!< Bit 0 */
#define  FLASH_ACR_LATENCY_2                 ((uint8_t)0x02)               /*!< Bit 1 */

#define  FLASH_ACR_HLFCYA                    ((uint8_t)0x08)               /*!< Flash Half Cycle Access Enable */
#define  FLASH_ACR_PRFTBE                    ((uint8_t)0x10)               /*!< Prefetch Buffer Enable */
#define  FLASH_ACR_PRFTBS                    ((uint8_t)0x20)               /*!< Prefetch Buffer Status */

/******************  Bit definition for FLASH_KEYR register  ******************/
#define  FLASH_KEYR_FKEYR                    (0xFFFFFFFF)        /*!< FPEC Key */

/*****************  Bit definition for FLASH_OPTKEYR register  ****************/
#define  FLASH_OPTKEYR_OPTKEYR               (0xFFFFFFFF)        /*!< Option Byte Key */

/******************  Bit definition for FLASH_SR register  *******************/
#define  FLASH_SR_BSY                        ((uint8_t)0x01)               /*!< Busy */
#define  FLASH_SR_PGERR                      ((uint8_t)0x04)               /*!< Programming Error */
#define  FLASH_SR_WRPRTERR                   ((uint8_t)0x10)               /*!< Write Protection Error */
#define  FLASH_SR_EOP                        ((uint8_t)0x20)               /*!< End of operation */

/*******************  Bit definition for FLASH_CR register  *******************/
#define  FLASH_CR_PG                         (0x0001)            /*!< Programming */
#define  FLASH_CR_PER                        (0x0002)            /*!< Page Erase */
#define  FLASH_CR_MER                        (0x0004)            /*!< Mass Erase */
#define  FLASH_CR_OPTPG                      (0x0010)            /*!< Option Byte Programming */
#define  FLASH_CR_OPTER                      (0x0020)            /*!< Option Byte Erase */
#define  FLASH_CR_STRT                       (0x0040)            /*!< Start */
#define  FLASH_CR_LOCK                       (0x0080)            /*!< Lock */
#define  FLASH_CR_OPTWRE                     (0x0200)            /*!< Option Bytes Write Enable */
#define  FLASH_CR_ERRIE                      (0x0400)            /*!< Error Interrupt Enable */
#define  FLASH_CR_EOPIE                      (0x1000)            /*!< End of operation interrupt enable */

/*******************  Bit definition for FLASH_AR register  *******************/
#define  FLASH_AR_FAR                        (0xFFFFFFFF)        /*!< Flash Address */

/******************  Bit definition for FLASH_OBR register  *******************/
#define  FLASH_OBR_OPTERR                    (0x0001)            /*!< Option Byte Error */
#define  FLASH_OBR_RDPRT                     (0x0002)            /*!< Read protection */

#define  FLASH_OBR_USER                      (0x03FC)            /*!< User Option Bytes */
#define  FLASH_OBR_WDG_SW                    (0x0004)            /*!< WDG_SW */
#define  FLASH_OBR_nRST_STOP                 (0x0008)            /*!< nRST_STOP */
#define  FLASH_OBR_nRST_STDBY                (0x0010)            /*!< nRST_STDBY */
#define  FLASH_OBR_BFB2                      (0x0020)            /*!< BFB2 */

/******************  Bit definition for FLASH_WRPR register  ******************/
#define  FLASH_WRPR_WRP                        (0xFFFFFFFF)        /*!< Write Protect */

/*----------------------------------------------------------------------------*/

/******************  Bit definition for FLASH_RDP register  *******************/
#define  FLASH_RDP_RDP                       (0x000000FF)        /*!< Read protection option byte */
#define  FLASH_RDP_nRDP                      (0x0000FF00)        /*!< Read protection complemented option byte */

/******************  Bit definition for FLASH_USER register  ******************/
#define  FLASH_USER_USER                     (0x00FF0000)        /*!< User option byte */
#define  FLASH_USER_nUSER                    (0xFF000000)        /*!< User complemented option byte */

/******************  Bit definition for FLASH_Data0 register  *****************/
#define  FLASH_Data0_Data0                   (0x000000FF)        /*!< User data storage option byte */
#define  FLASH_Data0_nData0                  (0x0000FF00)        /*!< User data storage complemented option byte */

/******************  Bit definition for FLASH_Data1 register  *****************/
#define  FLASH_Data1_Data1                   (0x00FF0000)        /*!< User data storage option byte */
#define  FLASH_Data1_nData1                  (0xFF000000)        /*!< User data storage complemented option byte */

/******************  Bit definition for FLASH_WRP0 register  ******************/
#define  FLASH_WRP0_WRP0                     (0x000000FF)        /*!< Flash memory write protection option bytes */
#define  FLASH_WRP0_nWRP0                    (0x0000FF00)        /*!< Flash memory write protection complemented option bytes */

/******************  Bit definition for FLASH_WRP1 register  ******************/
#define  FLASH_WRP1_WRP1                     (0x00FF0000)        /*!< Flash memory write protection option bytes */
#define  FLASH_WRP1_nWRP1                    (0xFF000000)        /*!< Flash memory write protection complemented option bytes */

/******************  Bit definition for FLASH_WRP2 register  ******************/
#define  FLASH_WRP2_WRP2                     (0x000000FF)        /*!< Flash memory write protection option bytes */
#define  FLASH_WRP2_nWRP2                    (0x0000FF00)        /*!< Flash memory write protection complemented option bytes */

/******************  Bit definition for FLASH_WRP3 register  ******************/
#define  FLASH_WRP3_WRP3                     (0x00FF0000)        /*!< Flash memory write protection option bytes */
#define  FLASH_WRP3_nWRP3                    (0xFF000000)        /*!< Flash memory write protection complemented option bytes */

#ifdef STM32F10X_CL
/******************************************************************************/
/*                Ethernet MAC Registers bits definitions                     */
/******************************************************************************/
/* Bit definition for Ethernet MAC Control Register register */
#define ETH_MACCR_WD      (0x00800000)  /* Watchdog disable */
#define ETH_MACCR_JD      (0x00400000)  /* Jabber disable */
#define ETH_MACCR_IFG     (0x000E0000)  /* Inter-frame gap */
  #define ETH_MACCR_IFG_96Bit     (0x00000000)  /* Minimum IFG between frames during transmission is 96Bit */
  #define ETH_MACCR_IFG_88Bit     (0x00020000)  /* Minimum IFG between frames during transmission is 88Bit */
  #define ETH_MACCR_IFG_80Bit     (0x00040000)  /* Minimum IFG between frames during transmission is 80Bit */
  #define ETH_MACCR_IFG_72Bit     (0x00060000)  /* Minimum IFG between frames during transmission is 72Bit */
  #define ETH_MACCR_IFG_64Bit     (0x00080000)  /* Minimum IFG between frames during transmission is 64Bit */        
  #define ETH_MACCR_IFG_56Bit     (0x000A0000)  /* Minimum IFG between frames during transmission is 56Bit */
  #define ETH_MACCR_IFG_48Bit     (0x000C0000)  /* Minimum IFG between frames during transmission is 48Bit */
  #define ETH_MACCR_IFG_40Bit     (0x000E0000)  /* Minimum IFG between frames during transmission is 40Bit */              
#define ETH_MACCR_CSD     (0x00010000)  /* Carrier sense disable (during transmission) */
#define ETH_MACCR_FES     (0x00004000)  /* Fast ethernet speed */
#define ETH_MACCR_ROD     (0x00002000)  /* Receive own disable */
#define ETH_MACCR_LM      (0x00001000)  /* loopback mode */
#define ETH_MACCR_DM      (0x00000800)  /* Duplex mode */
#define ETH_MACCR_IPCO    (0x00000400)  /* IP Checksum offload */
#define ETH_MACCR_RD      (0x00000200)  /* Retry disable */
#define ETH_MACCR_APCS    (0x00000080)  /* Automatic Pad/CRC stripping */
#define ETH_MACCR_BL      (0x00000060)  /* Back-off limit: random integer number (r) of slot time delays before rescheduling
                                                       a transmission attempt during retries after a collision: 0 =< r <2^k */
  #define ETH_MACCR_BL_10    (0x00000000)  /* k = min (n, 10) */
  #define ETH_MACCR_BL_8     (0x00000020)  /* k = min (n, 8) */
  #define ETH_MACCR_BL_4     (0x00000040)  /* k = min (n, 4) */
  #define ETH_MACCR_BL_1     (0x00000060)  /* k = min (n, 1) */ 
#define ETH_MACCR_DC      (0x00000010)  /* Defferal check */
#define ETH_MACCR_TE      (0x00000008)  /* Transmitter enable */
#define ETH_MACCR_RE      (0x00000004)  /* Receiver enable */

/* Bit definition for Ethernet MAC Frame Filter Register */
#define ETH_MACFFR_RA     (0x80000000)  /* Receive all */ 
#define ETH_MACFFR_HPF    (0x00000400)  /* Hash or perfect filter */ 
#define ETH_MACFFR_SAF    (0x00000200)  /* Source address filter enable */ 
#define ETH_MACFFR_SAIF   (0x00000100)  /* SA inverse filtering */ 
#define ETH_MACFFR_PCF    (0x000000C0)  /* Pass control frames: 3 cases */
  #define ETH_MACFFR_PCF_BlockAll                (0x00000040)  /* MAC filters all control frames from reaching the application */
  #define ETH_MACFFR_PCF_ForwardAll              (0x00000080)  /* MAC forwards all control frames to application even if they fail the Address Filter */
  #define ETH_MACFFR_PCF_ForwardPassedAddrFilter (0x000000C0)  /* MAC forwards control frames that pass the Address Filter. */ 
#define ETH_MACFFR_BFD    (0x00000020)  /* Broadcast frame disable */ 
#define ETH_MACFFR_PAM 	  (0x00000010)  /* Pass all mutlicast */ 
#define ETH_MACFFR_DAIF   (0x00000008)  /* DA Inverse filtering */ 
#define ETH_MACFFR_HM     (0x00000004)  /* Hash multicast */ 
#define ETH_MACFFR_HU     (0x00000002)  /* Hash unicast */
#define ETH_MACFFR_PM     (0x00000001)  /* Promiscuous mode */

/* Bit definition for Ethernet MAC Hash Table High Register */
#define ETH_MACHTHR_HTH   (0xFFFFFFFF)  /* Hash table high */

/* Bit definition for Ethernet MAC Hash Table Low Register */
#define ETH_MACHTLR_HTL   (0xFFFFFFFF)  /* Hash table low */

/* Bit definition for Ethernet MAC MII Address Register */
#define ETH_MACMIIAR_PA   (0x0000F800)  /* Physical layer address */ 
#define ETH_MACMIIAR_MR   (0x000007C0)  /* MII register in the selected PHY */ 
#define ETH_MACMIIAR_CR   (0x0000001C)  /* CR clock range: 6 cases */ 
  #define ETH_MACMIIAR_CR_Div42   (0x00000000)  /* HCLK:60-72 MHz; MDC clock= HCLK/42 */
  #define ETH_MACMIIAR_CR_Div16   (0x00000008)  /* HCLK:20-35 MHz; MDC clock= HCLK/16 */
  #define ETH_MACMIIAR_CR_Div26   (0x0000000C)  /* HCLK:35-60 MHz; MDC clock= HCLK/26 */
#define ETH_MACMIIAR_MW   (0x00000002)  /* MII write */ 
#define ETH_MACMIIAR_MB   (0x00000001)  /* MII busy */ 
  
/* Bit definition for Ethernet MAC MII Data Register */
#define ETH_MACMIIDR_MD   (0x0000FFFF)  /* MII data: read/write data from/to PHY */

/* Bit definition for Ethernet MAC Flow Control Register */
#define ETH_MACFCR_PT     (0xFFFF0000)  /* Pause time */
#define ETH_MACFCR_ZQPD   (0x00000080)  /* Zero-quanta pause disable */
#define ETH_MACFCR_PLT    (0x00000030)  /* Pause low threshold: 4 cases */
  #define ETH_MACFCR_PLT_Minus4   (0x00000000)  /* Pause time minus 4 slot times */
  #define ETH_MACFCR_PLT_Minus28  (0x00000010)  /* Pause time minus 28 slot times */
  #define ETH_MACFCR_PLT_Minus144 (0x00000020)  /* Pause time minus 144 slot times */
  #define ETH_MACFCR_PLT_Minus256 (0x00000030)  /* Pause time minus 256 slot times */      
#define ETH_MACFCR_UPFD   (0x00000008)  /* Unicast pause frame detect */
#define ETH_MACFCR_RFCE   (0x00000004)  /* Receive flow control enable */
#define ETH_MACFCR_TFCE   (0x00000002)  /* Transmit flow control enable */
#define ETH_MACFCR_FCBBPA (0x00000001)  /* Flow control busy/backpressure activate */

/* Bit definition for Ethernet MAC VLAN Tag Register */
#define ETH_MACVLANTR_VLANTC (0x00010000)  /* 12-bit VLAN tag comparison */
#define ETH_MACVLANTR_VLANTI (0x0000FFFF)  /* VLAN tag identifier (for receive frames) */

/* Bit definition for Ethernet MAC Remote Wake-UpFrame Filter Register */ 
#define ETH_MACRWUFFR_D   (0xFFFFFFFF)  /* Wake-up frame filter register data */
/* Eight sequential Writes to this address (offset 0x28) will write all Wake-UpFrame Filter Registers.
   Eight sequential Reads from this address (offset 0x28) will read all Wake-UpFrame Filter Registers. */
/* Wake-UpFrame Filter Reg0 : Filter 0 Byte Mask
   Wake-UpFrame Filter Reg1 : Filter 1 Byte Mask
   Wake-UpFrame Filter Reg2 : Filter 2 Byte Mask
   Wake-UpFrame Filter Reg3 : Filter 3 Byte Mask
   Wake-UpFrame Filter Reg4 : RSVD - Filter3 Command - RSVD - Filter2 Command - 
                              RSVD - Filter1 Command - RSVD - Filter0 Command
   Wake-UpFrame Filter Re5 : Filter3 Offset - Filter2 Offset - Filter1 Offset - Filter0 Offset
   Wake-UpFrame Filter Re6 : Filter1 CRC16 - Filter0 CRC16
   Wake-UpFrame Filter Re7 : Filter3 CRC16 - Filter2 CRC16 */

/* Bit definition for Ethernet MAC PMT Control and Status Register */ 
#define ETH_MACPMTCSR_WFFRPR (0x80000000)  /* Wake-Up Frame Filter Register Pointer Reset */
#define ETH_MACPMTCSR_GU     (0x00000200)  /* Global Unicast */
#define ETH_MACPMTCSR_WFR    (0x00000040)  /* Wake-Up Frame Received */
#define ETH_MACPMTCSR_MPR    (0x00000020)  /* Magic Packet Received */
#define ETH_MACPMTCSR_WFE    (0x00000004)  /* Wake-Up Frame Enable */
#define ETH_MACPMTCSR_MPE    (0x00000002)  /* Magic Packet Enable */
#define ETH_MACPMTCSR_PD     (0x00000001)  /* Power Down */

/* Bit definition for Ethernet MAC Status Register */
#define ETH_MACSR_TSTS      (0x00000200)  /* Time stamp trigger status */
#define ETH_MACSR_MMCTS     (0x00000040)  /* MMC transmit status */
#define ETH_MACSR_MMMCRS    (0x00000020)  /* MMC receive status */
#define ETH_MACSR_MMCS      (0x00000010)  /* MMC status */
#define ETH_MACSR_PMTS      (0x00000008)  /* PMT status */

/* Bit definition for Ethernet MAC Interrupt Mask Register */
#define ETH_MACIMR_TSTIM     (0x00000200)  /* Time stamp trigger interrupt mask */
#define ETH_MACIMR_PMTIM     (0x00000008)  /* PMT interrupt mask */

/* Bit definition for Ethernet MAC Address0 High Register */
#define ETH_MACA0HR_MACA0H   (0x0000FFFF)  /* MAC address0 high */

/* Bit definition for Ethernet MAC Address0 Low Register */
#define ETH_MACA0LR_MACA0L   (0xFFFFFFFF)  /* MAC address0 low */

/* Bit definition for Ethernet MAC Address1 High Register */
#define ETH_MACA1HR_AE       (0x80000000)  /* Address enable */
#define ETH_MACA1HR_SA       (0x40000000)  /* Source address */
#define ETH_MACA1HR_MBC      (0x3F000000)  /* Mask byte control: bits to mask for comparison of the MAC Address bytes */
  #define ETH_MACA1HR_MBC_HBits15_8    (0x20000000)  /* Mask MAC Address high reg bits [15:8] */
  #define ETH_MACA1HR_MBC_HBits7_0     (0x10000000)  /* Mask MAC Address high reg bits [7:0] */
  #define ETH_MACA1HR_MBC_LBits31_24   (0x08000000)  /* Mask MAC Address low reg bits [31:24] */
  #define ETH_MACA1HR_MBC_LBits23_16   (0x04000000)  /* Mask MAC Address low reg bits [23:16] */
  #define ETH_MACA1HR_MBC_LBits15_8    (0x02000000)  /* Mask MAC Address low reg bits [15:8] */
  #define ETH_MACA1HR_MBC_LBits7_0     (0x01000000)  /* Mask MAC Address low reg bits [7:0] */ 
#define ETH_MACA1HR_MACA1H   (0x0000FFFF)  /* MAC address1 high */

/* Bit definition for Ethernet MAC Address1 Low Register */
#define ETH_MACA1LR_MACA1L   (0xFFFFFFFF)  /* MAC address1 low */

/* Bit definition for Ethernet MAC Address2 High Register */
#define ETH_MACA2HR_AE       (0x80000000)  /* Address enable */
#define ETH_MACA2HR_SA       (0x40000000)  /* Source address */
#define ETH_MACA2HR_MBC      (0x3F000000)  /* Mask byte control */
  #define ETH_MACA2HR_MBC_HBits15_8    (0x20000000)  /* Mask MAC Address high reg bits [15:8] */
  #define ETH_MACA2HR_MBC_HBits7_0     (0x10000000)  /* Mask MAC Address high reg bits [7:0] */
  #define ETH_MACA2HR_MBC_LBits31_24   (0x08000000)  /* Mask MAC Address low reg bits [31:24] */
  #define ETH_MACA2HR_MBC_LBits23_16   (0x04000000)  /* Mask MAC Address low reg bits [23:16] */
  #define ETH_MACA2HR_MBC_LBits15_8    (0x02000000)  /* Mask MAC Address low reg bits [15:8] */
  #define ETH_MACA2HR_MBC_LBits7_0     (0x01000000)  /* Mask MAC Address low reg bits [70] */
#define ETH_MACA2HR_MACA2H   (0x0000FFFF)  /* MAC address1 high */

/* Bit definition for Ethernet MAC Address2 Low Register */
#define ETH_MACA2LR_MACA2L   (0xFFFFFFFF)  /* MAC address2 low */

/* Bit definition for Ethernet MAC Address3 High Register */
#define ETH_MACA3HR_AE       (0x80000000)  /* Address enable */
#define ETH_MACA3HR_SA       (0x40000000)  /* Source address */
#define ETH_MACA3HR_MBC      (0x3F000000)  /* Mask byte control */
  #define ETH_MACA3HR_MBC_HBits15_8    (0x20000000)  /* Mask MAC Address high reg bits [15:8] */
  #define ETH_MACA3HR_MBC_HBits7_0     (0x10000000)  /* Mask MAC Address high reg bits [7:0] */
  #define ETH_MACA3HR_MBC_LBits31_24   (0x08000000)  /* Mask MAC Address low reg bits [31:24] */
  #define ETH_MACA3HR_MBC_LBits23_16   (0x04000000)  /* Mask MAC Address low reg bits [23:16] */
  #define ETH_MACA3HR_MBC_LBits15_8    (0x02000000)  /* Mask MAC Address low reg bits [15:8] */
  #define ETH_MACA3HR_MBC_LBits7_0     (0x01000000)  /* Mask MAC Address low reg bits [70] */
#define ETH_MACA3HR_MACA3H   (0x0000FFFF)  /* MAC address3 high */

/* Bit definition for Ethernet MAC Address3 Low Register */
#define ETH_MACA3LR_MACA3L   (0xFFFFFFFF)  /* MAC address3 low */

/******************************************************************************/
/*                Ethernet MMC Registers bits definition                      */
/******************************************************************************/

/* Bit definition for Ethernet MMC Contol Register */
#define ETH_MMCCR_MCF        (0x00000008)  /* MMC Counter Freeze */
#define ETH_MMCCR_ROR        (0x00000004)  /* Reset on Read */
#define ETH_MMCCR_CSR        (0x00000002)  /* Counter Stop Rollover */
#define ETH_MMCCR_CR         (0x00000001)  /* Counters Reset */

/* Bit definition for Ethernet MMC Receive Interrupt Register */
#define ETH_MMCRIR_RGUFS     (0x00020000)  /* Set when Rx good unicast frames counter reaches half the maximum value */
#define ETH_MMCRIR_RFAES     (0x00000040)  /* Set when Rx alignment error counter reaches half the maximum value */
#define ETH_MMCRIR_RFCES     (0x00000020)  /* Set when Rx crc error counter reaches half the maximum value */

/* Bit definition for Ethernet MMC Transmit Interrupt Register */
#define ETH_MMCTIR_TGFS      (0x00200000)  /* Set when Tx good frame count counter reaches half the maximum value */
#define ETH_MMCTIR_TGFMSCS   (0x00008000)  /* Set when Tx good multi col counter reaches half the maximum value */
#define ETH_MMCTIR_TGFSCS    (0x00004000)  /* Set when Tx good single col counter reaches half the maximum value */

/* Bit definition for Ethernet MMC Receive Interrupt Mask Register */
#define ETH_MMCRIMR_RGUFM    (0x00020000)  /* Mask the interrupt when Rx good unicast frames counter reaches half the maximum value */
#define ETH_MMCRIMR_RFAEM    (0x00000040)  /* Mask the interrupt when when Rx alignment error counter reaches half the maximum value */
#define ETH_MMCRIMR_RFCEM    (0x00000020)  /* Mask the interrupt when Rx crc error counter reaches half the maximum value */

/* Bit definition for Ethernet MMC Transmit Interrupt Mask Register */
#define ETH_MMCTIMR_TGFM     (0x00200000)  /* Mask the interrupt when Tx good frame count counter reaches half the maximum value */
#define ETH_MMCTIMR_TGFMSCM  (0x00008000)  /* Mask the interrupt when Tx good multi col counter reaches half the maximum value */
#define ETH_MMCTIMR_TGFSCM   (0x00004000)  /* Mask the interrupt when Tx good single col counter reaches half the maximum value */

/* Bit definition for Ethernet MMC Transmitted Good Frames after Single Collision Counter Register */
#define ETH_MMCTGFSCCR_TGFSCC     (0xFFFFFFFF)  /* Number of successfully transmitted frames after a single collision in Half-duplex mode. */

/* Bit definition for Ethernet MMC Transmitted Good Frames after More than a Single Collision Counter Register */
#define ETH_MMCTGFMSCCR_TGFMSCC   (0xFFFFFFFF)  /* Number of successfully transmitted frames after more than a single collision in Half-duplex mode. */

/* Bit definition for Ethernet MMC Transmitted Good Frames Counter Register */
#define ETH_MMCTGFCR_TGFC    (0xFFFFFFFF)  /* Number of good frames transmitted. */

/* Bit definition for Ethernet MMC Received Frames with CRC Error Counter Register */
#define ETH_MMCRFCECR_RFCEC  (0xFFFFFFFF)  /* Number of frames received with CRC error. */

/* Bit definition for Ethernet MMC Received Frames with Alignement Error Counter Register */
#define ETH_MMCRFAECR_RFAEC  (0xFFFFFFFF)  /* Number of frames received with alignment (dribble) error */

/* Bit definition for Ethernet MMC Received Good Unicast Frames Counter Register */
#define ETH_MMCRGUFCR_RGUFC  (0xFFFFFFFF)  /* Number of good unicast frames received. */

/******************************************************************************/
/*               Ethernet PTP Registers bits definition                       */
/******************************************************************************/

/* Bit definition for Ethernet PTP Time Stamp Contol Register */
#define ETH_PTPTSCR_TSARU    (0x00000020)  /* Addend register update */
#define ETH_PTPTSCR_TSITE    (0x00000010)  /* Time stamp interrupt trigger enable */
#define ETH_PTPTSCR_TSSTU    (0x00000008)  /* Time stamp update */
#define ETH_PTPTSCR_TSSTI    (0x00000004)  /* Time stamp initialize */
#define ETH_PTPTSCR_TSFCU    (0x00000002)  /* Time stamp fine or coarse update */
#define ETH_PTPTSCR_TSE      (0x00000001)  /* Time stamp enable */

/* Bit definition for Ethernet PTP Sub-Second Increment Register */
#define ETH_PTPSSIR_STSSI    (0x000000FF)  /* System time Sub-second increment value */

/* Bit definition for Ethernet PTP Time Stamp High Register */
#define ETH_PTPTSHR_STS      (0xFFFFFFFF)  /* System Time second */

/* Bit definition for Ethernet PTP Time Stamp Low Register */
#define ETH_PTPTSLR_STPNS    (0x80000000)  /* System Time Positive or negative time */
#define ETH_PTPTSLR_STSS     (0x7FFFFFFF)  /* System Time sub-seconds */

/* Bit definition for Ethernet PTP Time Stamp High Update Register */
#define ETH_PTPTSHUR_TSUS    (0xFFFFFFFF)  /* Time stamp update seconds */

/* Bit definition for Ethernet PTP Time Stamp Low Update Register */
#define ETH_PTPTSLUR_TSUPNS  (0x80000000)  /* Time stamp update Positive or negative time */
#define ETH_PTPTSLUR_TSUSS   (0x7FFFFFFF)  /* Time stamp update sub-seconds */

/* Bit definition for Ethernet PTP Time Stamp Addend Register */
#define ETH_PTPTSAR_TSA      (0xFFFFFFFF)  /* Time stamp addend */

/* Bit definition for Ethernet PTP Target Time High Register */
#define ETH_PTPTTHR_TTSH     (0xFFFFFFFF)  /* Target time stamp high */

/* Bit definition for Ethernet PTP Target Time Low Register */
#define ETH_PTPTTLR_TTSL     (0xFFFFFFFF)  /* Target time stamp low */

/******************************************************************************/
/*                 Ethernet DMA Registers bits definition                     */
/******************************************************************************/

/* Bit definition for Ethernet DMA Bus Mode Register */
#define ETH_DMABMR_AAB       (0x02000000)  /* Address-Aligned beats */
#define ETH_DMABMR_FPM        (0x01000000)  /* 4xPBL mode */
#define ETH_DMABMR_USP       (0x00800000)  /* Use separate PBL */
#define ETH_DMABMR_RDP       (0x007E0000)  /* RxDMA PBL */
  #define ETH_DMABMR_RDP_1Beat    (0x00020000)  /* maximum number of beats to be transferred in one RxDMA transaction is 1 */
  #define ETH_DMABMR_RDP_2Beat    (0x00040000)  /* maximum number of beats to be transferred in one RxDMA transaction is 2 */
  #define ETH_DMABMR_RDP_4Beat    (0x00080000)  /* maximum number of beats to be transferred in one RxDMA transaction is 4 */
  #define ETH_DMABMR_RDP_8Beat    (0x00100000)  /* maximum number of beats to be transferred in one RxDMA transaction is 8 */
  #define ETH_DMABMR_RDP_16Beat   (0x00200000)  /* maximum number of beats to be transferred in one RxDMA transaction is 16 */
  #define ETH_DMABMR_RDP_32Beat   (0x00400000)  /* maximum number of beats to be transferred in one RxDMA transaction is 32 */                
  #define ETH_DMABMR_RDP_4xPBL_4Beat   (0x01020000)  /* maximum number of beats to be transferred in one RxDMA transaction is 4 */
  #define ETH_DMABMR_RDP_4xPBL_8Beat   (0x01040000)  /* maximum number of beats to be transferred in one RxDMA transaction is 8 */
  #define ETH_DMABMR_RDP_4xPBL_16Beat  (0x01080000)  /* maximum number of beats to be transferred in one RxDMA transaction is 16 */
  #define ETH_DMABMR_RDP_4xPBL_32Beat  (0x01100000)  /* maximum number of beats to be transferred in one RxDMA transaction is 32 */
  #define ETH_DMABMR_RDP_4xPBL_64Beat  (0x01200000)  /* maximum number of beats to be transferred in one RxDMA transaction is 64 */
  #define ETH_DMABMR_RDP_4xPBL_128Beat (0x01400000)  /* maximum number of beats to be transferred in one RxDMA transaction is 128 */  
#define ETH_DMABMR_FB        (0x00010000)  /* Fixed Burst */
#define ETH_DMABMR_RTPR      (0x0000C000)  /* Rx Tx priority ratio */
  #define ETH_DMABMR_RTPR_1_1     (0x00000000)  /* Rx Tx priority ratio */
  #define ETH_DMABMR_RTPR_2_1     (0x00004000)  /* Rx Tx priority ratio */
  #define ETH_DMABMR_RTPR_3_1     (0x00008000)  /* Rx Tx priority ratio */
  #define ETH_DMABMR_RTPR_4_1     (0x0000C000)  /* Rx Tx priority ratio */  
#define ETH_DMABMR_PBL    (0x00003F00)  /* Programmable burst length */
  #define ETH_DMABMR_PBL_1Beat    (0x00000100)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 1 */
  #define ETH_DMABMR_PBL_2Beat    (0x00000200)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 2 */
  #define ETH_DMABMR_PBL_4Beat    (0x00000400)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 4 */
  #define ETH_DMABMR_PBL_8Beat    (0x00000800)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 8 */
  #define ETH_DMABMR_PBL_16Beat   (0x00001000)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 16 */
  #define ETH_DMABMR_PBL_32Beat   (0x00002000)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 32 */                
  #define ETH_DMABMR_PBL_4xPBL_4Beat   (0x01000100)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 4 */
  #define ETH_DMABMR_PBL_4xPBL_8Beat   (0x01000200)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 8 */
  #define ETH_DMABMR_PBL_4xPBL_16Beat  (0x01000400)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 16 */
  #define ETH_DMABMR_PBL_4xPBL_32Beat  (0x01000800)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 32 */
  #define ETH_DMABMR_PBL_4xPBL_64Beat  (0x01001000)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 64 */
  #define ETH_DMABMR_PBL_4xPBL_128Beat (0x01002000)  /* maximum number of beats to be transferred in one TxDMA (or both) transaction is 128 */
#define ETH_DMABMR_DSL       (0x0000007C)  /* Descriptor Skip Length */
#define ETH_DMABMR_DA        (0x00000002)  /* DMA arbitration scheme */
#define ETH_DMABMR_SR        (0x00000001)  /* Software reset */

/* Bit definition for Ethernet DMA Transmit Poll Demand Register */
#define ETH_DMATPDR_TPD      (0xFFFFFFFF)  /* Transmit poll demand */

/* Bit definition for Ethernet DMA Receive Poll Demand Register */
#define ETH_DMARPDR_RPD      (0xFFFFFFFF)  /* Receive poll demand  */

/* Bit definition for Ethernet DMA Receive Descriptor List Address Register */
#define ETH_DMARDLAR_SRL     (0xFFFFFFFF)  /* Start of receive list */

/* Bit definition for Ethernet DMA Transmit Descriptor List Address Register */
#define ETH_DMATDLAR_STL     (0xFFFFFFFF)  /* Start of transmit list */

/* Bit definition for Ethernet DMA Status Register */
#define ETH_DMASR_TSTS       (0x20000000)  /* Time-stamp trigger status */
#define ETH_DMASR_PMTS       (0x10000000)  /* PMT status */
#define ETH_DMASR_MMCS       (0x08000000)  /* MMC status */
#define ETH_DMASR_EBS        (0x03800000)  /* Error bits status */
  /* combination with EBS[2:0] for GetFlagStatus function */
  #define ETH_DMASR_EBS_DescAccess      (0x02000000)  /* Error bits 0-data buffer, 1-desc. access */
  #define ETH_DMASR_EBS_ReadTransf      (0x01000000)  /* Error bits 0-write trnsf, 1-read transfr */
  #define ETH_DMASR_EBS_DataTransfTx    (0x00800000)  /* Error bits 0-Rx DMA, 1-Tx DMA */
#define ETH_DMASR_TPS         (0x00700000)  /* Transmit process state */
  #define ETH_DMASR_TPS_Stopped         (0x00000000)  /* Stopped - Reset or Stop Tx Command issued  */
  #define ETH_DMASR_TPS_Fetching        (0x00100000)  /* Running - fetching the Tx descriptor */
  #define ETH_DMASR_TPS_Waiting         (0x00200000)  /* Running - waiting for status */
  #define ETH_DMASR_TPS_Reading         (0x00300000)  /* Running - reading the data from host memory */
  #define ETH_DMASR_TPS_Suspended       (0x00600000)  /* Suspended - Tx Descriptor unavailabe */
  #define ETH_DMASR_TPS_Closing         (0x00700000)  /* Running - closing Rx descriptor */
#define ETH_DMASR_RPS         (0x000E0000)  /* Receive process state */
  #define ETH_DMASR_RPS_Stopped         (0x00000000)  /* Stopped - Reset or Stop Rx Command issued */
  #define ETH_DMASR_RPS_Fetching        (0x00020000)  /* Running - fetching the Rx descriptor */
  #define ETH_DMASR_RPS_Waiting         (0x00060000)  /* Running - waiting for packet */
  #define ETH_DMASR_RPS_Suspended       (0x00080000)  /* Suspended - Rx Descriptor unavailable */
  #define ETH_DMASR_RPS_Closing         (0x000A0000)  /* Running - closing descriptor */
  #define ETH_DMASR_RPS_Queuing         (0x000E0000)  /* Running - queuing the recieve frame into host memory */
#define ETH_DMASR_NIS        (0x00010000)  /* Normal interrupt summary */
#define ETH_DMASR_AIS        (0x00008000)  /* Abnormal interrupt summary */
#define ETH_DMASR_ERS        (0x00004000)  /* Early receive status */
#define ETH_DMASR_FBES       (0x00002000)  /* Fatal bus error status */
#define ETH_DMASR_ETS        (0x00000400)  /* Early transmit status */
#define ETH_DMASR_RWTS       (0x00000200)  /* Receive watchdog timeout status */
#define ETH_DMASR_RPSS       (0x00000100)  /* Receive process stopped status */
#define ETH_DMASR_RBUS       (0x00000080)  /* Receive buffer unavailable status */
#define ETH_DMASR_RS         (0x00000040)  /* Receive status */
#define ETH_DMASR_TUS        (0x00000020)  /* Transmit underflow status */
#define ETH_DMASR_ROS        (0x00000010)  /* Receive overflow status */
#define ETH_DMASR_TJTS       (0x00000008)  /* Transmit jabber timeout status */
#define ETH_DMASR_TBUS       (0x00000004)  /* Transmit buffer unavailable status */
#define ETH_DMASR_TPSS       (0x00000002)  /* Transmit process stopped status */
#define ETH_DMASR_TS         (0x00000001)  /* Transmit status */

/* Bit definition for Ethernet DMA Operation Mode Register */
#define ETH_DMAOMR_DTCEFD    (0x04000000)  /* Disable Dropping of TCP/IP checksum error frames */
#define ETH_DMAOMR_RSF       (0x02000000)  /* Receive store and forward */
#define ETH_DMAOMR_DFRF      (0x01000000)  /* Disable flushing of received frames */
#define ETH_DMAOMR_TSF       (0x00200000)  /* Transmit store and forward */
#define ETH_DMAOMR_FTF       (0x00100000)  /* Flush transmit FIFO */
#define ETH_DMAOMR_TTC       (0x0001C000)  /* Transmit threshold control */
  #define ETH_DMAOMR_TTC_64Bytes       (0x00000000)  /* threshold level of the MTL Transmit FIFO is 64 Bytes */
  #define ETH_DMAOMR_TTC_128Bytes      (0x00004000)  /* threshold level of the MTL Transmit FIFO is 128 Bytes */
  #define ETH_DMAOMR_TTC_192Bytes      (0x00008000)  /* threshold level of the MTL Transmit FIFO is 192 Bytes */
  #define ETH_DMAOMR_TTC_256Bytes      (0x0000C000)  /* threshold level of the MTL Transmit FIFO is 256 Bytes */
  #define ETH_DMAOMR_TTC_40Bytes       (0x00010000)  /* threshold level of the MTL Transmit FIFO is 40 Bytes */
  #define ETH_DMAOMR_TTC_32Bytes       (0x00014000)  /* threshold level of the MTL Transmit FIFO is 32 Bytes */
  #define ETH_DMAOMR_TTC_24Bytes       (0x00018000)  /* threshold level of the MTL Transmit FIFO is 24 Bytes */
  #define ETH_DMAOMR_TTC_16Bytes       (0x0001C000)  /* threshold level of the MTL Transmit FIFO is 16 Bytes */
#define ETH_DMAOMR_ST        (0x00002000)  /* Start/stop transmission command */
#define ETH_DMAOMR_FEF       (0x00000080)  /* Forward error frames */
#define ETH_DMAOMR_FUGF      (0x00000040)  /* Forward undersized good frames */
#define ETH_DMAOMR_RTC       (0x00000018)  /* receive threshold control */
  #define ETH_DMAOMR_RTC_64Bytes       (0x00000000)  /* threshold level of the MTL Receive FIFO is 64 Bytes */
  #define ETH_DMAOMR_RTC_32Bytes       (0x00000008)  /* threshold level of the MTL Receive FIFO is 32 Bytes */
  #define ETH_DMAOMR_RTC_96Bytes       (0x00000010)  /* threshold level of the MTL Receive FIFO is 96 Bytes */
  #define ETH_DMAOMR_RTC_128Bytes      (0x00000018)  /* threshold level of the MTL Receive FIFO is 128 Bytes */
#define ETH_DMAOMR_OSF       (0x00000004)  /* operate on second frame */
#define ETH_DMAOMR_SR        (0x00000002)  /* Start/stop receive */

/* Bit definition for Ethernet DMA Interrupt Enable Register */
#define ETH_DMAIER_NISE      (0x00010000)  /* Normal interrupt summary enable */
#define ETH_DMAIER_AISE      (0x00008000)  /* Abnormal interrupt summary enable */
#define ETH_DMAIER_ERIE      (0x00004000)  /* Early receive interrupt enable */
#define ETH_DMAIER_FBEIE     (0x00002000)  /* Fatal bus error interrupt enable */
#define ETH_DMAIER_ETIE      (0x00000400)  /* Early transmit interrupt enable */
#define ETH_DMAIER_RWTIE     (0x00000200)  /* Receive watchdog timeout interrupt enable */
#define ETH_DMAIER_RPSIE     (0x00000100)  /* Receive process stopped interrupt enable */
#define ETH_DMAIER_RBUIE     (0x00000080)  /* Receive buffer unavailable interrupt enable */
#define ETH_DMAIER_RIE       (0x00000040)  /* Receive interrupt enable */
#define ETH_DMAIER_TUIE      (0x00000020)  /* Transmit Underflow interrupt enable */
#define ETH_DMAIER_ROIE      (0x00000010)  /* Receive Overflow interrupt enable */
#define ETH_DMAIER_TJTIE     (0x00000008)  /* Transmit jabber timeout interrupt enable */
#define ETH_DMAIER_TBUIE     (0x00000004)  /* Transmit buffer unavailable interrupt enable */
#define ETH_DMAIER_TPSIE     (0x00000002)  /* Transmit process stopped interrupt enable */
#define ETH_DMAIER_TIE       (0x00000001)  /* Transmit interrupt enable */

/* Bit definition for Ethernet DMA Missed Frame and Buffer Overflow Counter Register */
#define ETH_DMAMFBOCR_OFOC   (0x10000000)  /* Overflow bit for FIFO overflow counter */
#define ETH_DMAMFBOCR_MFA    (0x0FFE0000)  /* Number of frames missed by the application */
#define ETH_DMAMFBOCR_OMFC   (0x00010000)  /* Overflow bit for missed frame counter */
#define ETH_DMAMFBOCR_MFC    (0x0000FFFF)  /* Number of frames missed by the controller */

/* Bit definition for Ethernet DMA Current Host Transmit Descriptor Register */
#define ETH_DMACHTDR_HTDAP   (0xFFFFFFFF)  /* Host transmit descriptor address pointer */

/* Bit definition for Ethernet DMA Current Host Receive Descriptor Register */
#define ETH_DMACHRDR_HRDAP   (0xFFFFFFFF)  /* Host receive descriptor address pointer */

/* Bit definition for Ethernet DMA Current Host Transmit Buffer Address Register */
#define ETH_DMACHTBAR_HTBAP  (0xFFFFFFFF)  /* Host transmit buffer address pointer */

/* Bit definition for Ethernet DMA Current Host Receive Buffer Address Register */
#define ETH_DMACHRBAR_HRBAP  (0xFFFFFFFF)  /* Host receive buffer address pointer */
#endif /* STM32F10X_CL */


