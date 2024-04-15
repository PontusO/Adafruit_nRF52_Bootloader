#include "boards.h"
#include "board.h"
#include "uf2/configkeys.h"

__attribute__((used, section(".bootloaderConfig")))
const uint32_t bootloaderConfig[] =
{
  /* CF2 START */
  CFG_MAGIC0, CFG_MAGIC1,                       // magic
  5, 100,                                       // used entries, total entries

  204, 0x100000,                                // FLASH_BYTES = 0x100000
  205, 0x40000,                                 // RAM_BYTES = 0x40000
  208, (USB_DESC_VID << 16) | USB_DESC_UF2_PID, // BOOTLOADER_BOARD_ID = USB VID+PID, used for verification when updating bootloader via uf2
  209, 0xada52840,                              // UF2_FAMILY = 0xada52840
  210, 0x20,                                    // PINS_PORT_SIZE = PA_32

  0, 0, 0, 0, 0, 0, 0, 0
  /* CF2 END */
};

void board_init2(void)
{
  // Turn both radios off to start with.
  nrf_gpio_cfg_output(LORA_POWER_ENABLE);
  nrf_gpio_pin_write(LORA_POWER_ENABLE, 0);

  nrf_gpio_cfg_output(NBIOT_POWER_ENABLE);
  nrf_gpio_pin_write(NBIOT_POWER_ENABLE, 0);
}
