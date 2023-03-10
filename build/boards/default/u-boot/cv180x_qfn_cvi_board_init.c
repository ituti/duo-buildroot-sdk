int cvi_board_init(void)
{
#if defined(CV180X_QFN_88_PIN)
	PINMUX_CONFIG(PAD_MIPI_TXP1, IIC2_SCL);
	PINMUX_CONFIG(PAD_MIPI_TXM1, IIC2_SDA);
	PINMUX_CONFIG(PAD_MIPI_TXP0, XGPIOC_13);
	PINMUX_CONFIG(PAD_MIPI_TXM0, CAM_MCLK1);
#elif defined(CV180X_QFN_88_PIN_38)
	//I2C2
	PINMUX_CONFIG(PAD_MIPI_TXP1, IIC2_SCL);
	PINMUX_CONFIG(PAD_MIPI_TXM1, IIC2_SDA);
	//CAM_RST0
	PINMUX_CONFIG(PAD_MIPI_TXP2, XGPIOC_17);
	PINMUX_CONFIG(PAD_MIPI_TXM2, XGPIOC_16);
	//CAM_MCLK0
	PINMUX_CONFIG(PAD_MIPI_TXP0, CAM_MCLK0);
	PINMUX_CONFIG(PAD_MIPI_TXM0, XGPIOC_12);
	//IRCUT
	//PINMUX_CONFIG(SD1_D2, PWR_GPIO19);
	//PINMUX_CONFIG(SD1_D3, PWR_GPIO18);

#elif defined(CV180X_QFN_68_PIN)
	PINMUX_CONFIG(PAD_MIPIRX1P, IIC1_SDA);
	PINMUX_CONFIG(PAD_MIPIRX0N, IIC1_SCL);
	PINMUX_CONFIG(PAD_MIPIRX1N, XGPIOC_8);
	PINMUX_CONFIG(PAD_MIPIRX0P, CAM_MCLK0);
	//IRCUT
	//PINMUX_CONFIG(SD1_D2, PWR_GPIO19);
	//PINMUX_CONFIG(SD1_D3, PWR_GPIO18);

#endif
	return 0;
}