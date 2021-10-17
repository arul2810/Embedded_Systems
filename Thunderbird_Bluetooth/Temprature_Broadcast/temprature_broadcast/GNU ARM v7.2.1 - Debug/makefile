################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_psa_driver/src/subdir.mk
-include gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_protocol_crypto/src/subdir.mk
-include gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_mbedtls_support/src/subdir.mk
-include gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_cryptoacc_library/src/subdir.mk
-include gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_alt/source/subdir.mk
-include gecko_sdk_3.1.0/util/third_party/crypto/sl_component/se_manager/src/subdir.mk
-include gecko_sdk_3.1.0/util/third_party/crypto/mbedtls/library/subdir.mk
-include gecko_sdk_3.1.0/util/silicon_labs/silabs_core/memory_manager/subdir.mk
-include gecko_sdk_3.1.0/protocol/bluetooth/src/subdir.mk
-include gecko_sdk_3.1.0/protocol/bluetooth/lib/EFR32BG22/GCC/subdir.mk
-include gecko_sdk_3.1.0/platform/service/udelay/src/subdir.mk
-include gecko_sdk_3.1.0/platform/service/system/src/subdir.mk
-include gecko_sdk_3.1.0/platform/service/sleeptimer/src/subdir.mk
-include gecko_sdk_3.1.0/platform/service/ram_interrupt_vector_init/src/subdir.mk
-include gecko_sdk_3.1.0/platform/service/power_manager/src/subdir.mk
-include gecko_sdk_3.1.0/platform/service/mpu/src/subdir.mk
-include gecko_sdk_3.1.0/platform/service/hfxo_manager/src/subdir.mk
-include gecko_sdk_3.1.0/platform/service/device_init/src/subdir.mk
-include gecko_sdk_3.1.0/platform/radio/rail_lib/plugin/rail_util_pti/subdir.mk
-include gecko_sdk_3.1.0/platform/radio/rail_lib/plugin/pa-conversions/subdir.mk
-include gecko_sdk_3.1.0/platform/emlib/src/subdir.mk
-include gecko_sdk_3.1.0/platform/emdrv/tempdrv/src/subdir.mk
-include gecko_sdk_3.1.0/platform/emdrv/nvm3/src/subdir.mk
-include gecko_sdk_3.1.0/platform/common/toolchain/src/subdir.mk
-include gecko_sdk_3.1.0/platform/common/src/subdir.mk
-include gecko_sdk_3.1.0/platform/bootloader/api/subdir.mk
-include gecko_sdk_3.1.0/platform/Device/SiliconLabs/EFR32BG22/Source/GCC/subdir.mk
-include gecko_sdk_3.1.0/platform/Device/SiliconLabs/EFR32BG22/Source/subdir.mk
-include gecko_sdk_3.1.0/hardware/driver/mx25_flash_shutdown/src/sl_mx25_flash_shutdown_usart/subdir.mk
-include gecko_sdk_3.1.0/hardware/board/src/subdir.mk
-include gecko_sdk_3.1.0/app/bluetooth/common/ota_dfu/subdir.mk
-include gecko_sdk_3.1.0/app/bluetooth/common/health_thermometer/subdir.mk
-include autogen/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: temprature_broadcast.axf

# Tool invocations
temprature_broadcast.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m33 -mthumb -T "D:\Projects\Embedded Systems\Thunderbird_Bluetooth\Temprature_Broadcast\temprature_broadcast/autogen/linkerfile.ld" -Xlinker --gc-sections -Xlinker -Map="temprature_broadcast.map" -mfpu=fpv5-sp-d16 -mfloat-abi=hard --specs=nano.specs -o temprature_broadcast.axf -Wl,--start-group "./app.o" "./app_properties.o" "./main.o" "./autogen/gatt_db.o" "./autogen/sl_bluetooth.o" "./autogen/sl_board_default_init.o" "./autogen/sl_device_init_clocks.o" "./autogen/sl_event_handler.o" "./autogen/sl_power_manager_handler.o" "./gecko_sdk_3.1.0/app/bluetooth/common/health_thermometer/sl_health_thermometer.o" "./gecko_sdk_3.1.0/app/bluetooth/common/ota_dfu/sl_ota_dfu.o" "./gecko_sdk_3.1.0/hardware/board/src/sl_board_control_gpio.o" "./gecko_sdk_3.1.0/hardware/board/src/sl_board_init.o" "./gecko_sdk_3.1.0/hardware/driver/mx25_flash_shutdown/src/sl_mx25_flash_shutdown_usart/sl_mx25_flash_shutdown.o" "./gecko_sdk_3.1.0/platform/Device/SiliconLabs/EFR32BG22/Source/GCC/startup_efr32bg22.o" "./gecko_sdk_3.1.0/platform/Device/SiliconLabs/EFR32BG22/Source/system_efr32bg22.o" "./gecko_sdk_3.1.0/platform/bootloader/api/btl_interface.o" "./gecko_sdk_3.1.0/platform/bootloader/api/btl_interface_storage.o" "./gecko_sdk_3.1.0/platform/common/src/sl_slist.o" "./gecko_sdk_3.1.0/platform/common/toolchain/src/sl_memory.o" "./gecko_sdk_3.1.0/platform/emdrv/nvm3/src/nvm3_default_common_linker.o" "./gecko_sdk_3.1.0/platform/emdrv/nvm3/src/nvm3_hal_flash.o" "./gecko_sdk_3.1.0/platform/emdrv/nvm3/src/nvm3_lock.o" "./gecko_sdk_3.1.0/platform/emdrv/tempdrv/src/tempdrv.o" "./gecko_sdk_3.1.0/platform/emlib/src/em_assert.o" "./gecko_sdk_3.1.0/platform/emlib/src/em_burtc.o" "./gecko_sdk_3.1.0/platform/emlib/src/em_cmu.o" "./gecko_sdk_3.1.0/platform/emlib/src/em_core.o" "./gecko_sdk_3.1.0/platform/emlib/src/em_emu.o" "./gecko_sdk_3.1.0/platform/emlib/src/em_gpio.o" "./gecko_sdk_3.1.0/platform/emlib/src/em_msc.o" "./gecko_sdk_3.1.0/platform/emlib/src/em_rtcc.o" "./gecko_sdk_3.1.0/platform/emlib/src/em_se.o" "./gecko_sdk_3.1.0/platform/emlib/src/em_system.o" "./gecko_sdk_3.1.0/platform/emlib/src/em_usart.o" "./gecko_sdk_3.1.0/platform/radio/rail_lib/plugin/pa-conversions/pa_conversions_efr32.o" "./gecko_sdk_3.1.0/platform/radio/rail_lib/plugin/pa-conversions/pa_curves_efr32.o" "./gecko_sdk_3.1.0/platform/radio/rail_lib/plugin/rail_util_pti/sl_rail_util_pti.o" "./gecko_sdk_3.1.0/platform/service/device_init/src/sl_device_init_dcdc_s2.o" "./gecko_sdk_3.1.0/platform/service/device_init/src/sl_device_init_emu_s2.o" "./gecko_sdk_3.1.0/platform/service/device_init/src/sl_device_init_hfxo_s2.o" "./gecko_sdk_3.1.0/platform/service/device_init/src/sl_device_init_lfrco.o" "./gecko_sdk_3.1.0/platform/service/device_init/src/sl_device_init_lfxo_s2.o" "./gecko_sdk_3.1.0/platform/service/device_init/src/sl_device_init_nvic.o" "./gecko_sdk_3.1.0/platform/service/hfxo_manager/src/sl_hfxo_manager.o" "./gecko_sdk_3.1.0/platform/service/hfxo_manager/src/sl_hfxo_manager_hal_s2.o" "./gecko_sdk_3.1.0/platform/service/mpu/src/sl_mpu.o" "./gecko_sdk_3.1.0/platform/service/power_manager/src/sl_power_manager.o" "./gecko_sdk_3.1.0/platform/service/power_manager/src/sl_power_manager_debug.o" "./gecko_sdk_3.1.0/platform/service/power_manager/src/sl_power_manager_hal_s2.o" "./gecko_sdk_3.1.0/platform/service/ram_interrupt_vector_init/src/sl_ram_interrupt_vector_init.o" "./gecko_sdk_3.1.0/platform/service/sleeptimer/src/sl_sleeptimer.o" "./gecko_sdk_3.1.0/platform/service/sleeptimer/src/sl_sleeptimer_hal_burtc.o" "./gecko_sdk_3.1.0/platform/service/sleeptimer/src/sl_sleeptimer_hal_prortc.o" "./gecko_sdk_3.1.0/platform/service/sleeptimer/src/sl_sleeptimer_hal_rtcc.o" "./gecko_sdk_3.1.0/platform/service/system/src/sl_system_init.o" "./gecko_sdk_3.1.0/platform/service/system/src/sl_system_process_action.o" "./gecko_sdk_3.1.0/platform/service/udelay/src/sl_udelay.o" "./gecko_sdk_3.1.0/platform/service/udelay/src/sl_udelay_armv6m_gcc.o" "./gecko_sdk_3.1.0/protocol/bluetooth/src/sl_bt_mbedtls_context.o" "./gecko_sdk_3.1.0/util/silicon_labs/silabs_core/memory_manager/sl_malloc.o" "./gecko_sdk_3.1.0/util/third_party/crypto/mbedtls/library/aes.o" "./gecko_sdk_3.1.0/util/third_party/crypto/mbedtls/library/bignum.o" "./gecko_sdk_3.1.0/util/third_party/crypto/mbedtls/library/ccm.o" "./gecko_sdk_3.1.0/util/third_party/crypto/mbedtls/library/cipher.o" "./gecko_sdk_3.1.0/util/third_party/crypto/mbedtls/library/cipher_wrap.o" "./gecko_sdk_3.1.0/util/third_party/crypto/mbedtls/library/cmac.o" "./gecko_sdk_3.1.0/util/third_party/crypto/mbedtls/library/ctr_drbg.o" "./gecko_sdk_3.1.0/util/third_party/crypto/mbedtls/library/ecdh.o" "./gecko_sdk_3.1.0/util/third_party/crypto/mbedtls/library/ecdsa.o" "./gecko_sdk_3.1.0/util/third_party/crypto/mbedtls/library/ecp.o" "./gecko_sdk_3.1.0/util/third_party/crypto/mbedtls/library/ecp_curves.o" "./gecko_sdk_3.1.0/util/third_party/crypto/mbedtls/library/entropy.o" "./gecko_sdk_3.1.0/util/third_party/crypto/mbedtls/library/error.o" "./gecko_sdk_3.1.0/util/third_party/crypto/mbedtls/library/platform.o" "./gecko_sdk_3.1.0/util/third_party/crypto/mbedtls/library/platform_util.o" "./gecko_sdk_3.1.0/util/third_party/crypto/mbedtls/library/sha256.o" "./gecko_sdk_3.1.0/util/third_party/crypto/mbedtls/library/threading.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/se_manager/src/sl_se_manager.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/se_manager/src/sl_se_manager_attestation.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/se_manager/src/sl_se_manager_cipher.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/se_manager/src/sl_se_manager_entropy.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/se_manager/src/sl_se_manager_hash.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/se_manager/src/sl_se_manager_key_derivation.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/se_manager/src/sl_se_manager_key_handling.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/se_manager/src/sl_se_manager_signature.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/se_manager/src/sl_se_manager_util.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_alt/source/sl_entropy.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_alt/source/sl_mbedtls.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_cryptoacc_library/src/ba414ep_config.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_cryptoacc_library/src/ba431_config.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_cryptoacc_library/src/cryptodma_internal.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_cryptoacc_library/src/cryptolib_types.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_cryptoacc_library/src/sx_aes.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_cryptoacc_library/src/sx_blk_cipher.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_cryptoacc_library/src/sx_dh_alg.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_cryptoacc_library/src/sx_ecc_curves.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_cryptoacc_library/src/sx_ecc_keygen_alg.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_cryptoacc_library/src/sx_ecdsa_alg.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_cryptoacc_library/src/sx_hash.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_cryptoacc_library/src/sx_math.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_cryptoacc_library/src/sx_memcmp.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_cryptoacc_library/src/sx_memcpy.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_cryptoacc_library/src/sx_primitives.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_cryptoacc_library/src/sx_rng.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_cryptoacc_library/src/sx_trng.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_mbedtls_support/src/cryptoacc_aes.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_mbedtls_support/src/cryptoacc_ccm.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_mbedtls_support/src/cryptoacc_gcm.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_mbedtls_support/src/mbedtls_cmac.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_mbedtls_support/src/mbedtls_ecdsa_ecdh.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_mbedtls_support/src/mbedtls_sha.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_protocol_crypto/src/sli_protocol_crypto_radioaes.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_protocol_crypto/src/sli_radioaes_management.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_psa_driver/src/cryptoacc_management.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_psa_driver/src/sli_cryptoacc_transparent_driver_aead.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_psa_driver/src/sli_cryptoacc_transparent_driver_cipher.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_psa_driver/src/sli_cryptoacc_transparent_driver_hash.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_psa_driver/src/sli_cryptoacc_transparent_driver_key_derivation.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_psa_driver/src/sli_cryptoacc_transparent_driver_key_management.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_psa_driver/src/sli_cryptoacc_transparent_driver_mac.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_psa_driver/src/sli_cryptoacc_transparent_driver_signature.o" "./gecko_sdk_3.1.0/util/third_party/crypto/sl_component/sl_psa_driver/src/sli_psa_driver_init.o" "C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk_suite/v3.1//platform/emdrv/nvm3/lib/libnvm3_CM33_gcc.a" "C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk_suite/v3.1//protocol/bluetooth/lib/EFR32BG22/GCC/libbluetooth.a" "C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk_suite/v3.1//platform/radio/rail_lib/autogen/librail_release/librail_efr32xg22_gcc_release.a" "C:/SiliconLabs/SimplicityStudio/v5/developer/sdks/gecko_sdk_suite/v3.1//protocol/bluetooth/lib/EFR32BG22/GCC/binapploader.o" -lgcc -lc -lm -lnosys -Wl,--end-group -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building hex file: temprature_broadcast.hex'
	arm-none-eabi-objcopy -O ihex "temprature_broadcast.axf" "temprature_broadcast.hex"
	@echo ' '

	@echo 'Building bin file: temprature_broadcast.bin'
	arm-none-eabi-objcopy -O binary "temprature_broadcast.axf" "temprature_broadcast.bin"
	@echo ' '

	@echo 'Building s37 file: temprature_broadcast.s37'
	arm-none-eabi-objcopy -O srec "temprature_broadcast.axf" "temprature_broadcast.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "temprature_broadcast.axf" -A
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) temprature_broadcast.axf
	-@echo ' '

.PHONY: all clean dependents

-include ../makefile.targets
