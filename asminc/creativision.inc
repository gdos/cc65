;*
;** VTech Creativision Definitions
;*

;** Screen
SCREEN_ROWS             = 24
SCREEN_COLS             = 32
SCREEN_PTR              = $3A
CURSOR_X                = $3C
CURSOR_Y                = $3D

;** VDP
VDP_CONTROL_W           = $3001
VDP_DATA_W              = $3000
VDP_STATUS_R            = $2001
VDP_DATA_R              = $2000

;** PIA
PIA0_DATA               = $1000
PIA0_STATUS             = $1001
PIA1_DATA               = $1002
PIA1_STATUS             = $1003

;** General
CH_VLINE                = 33
CH_HLINE                = 34
CH_ULCORNER             = 35
CH_URCORNER             = 36
CH_LLCORNER             = 37
CH_LRCORNER             = 38

;** I/O (Zero-page variables)
ZP_KEYBOARD             = $10
ZP_JOY0_DIR             = $11
ZP_JOY1_DIR             = $13
ZP_JOY0_BUTTONS         = $16
ZP_JOY1_BUTTONS         = $17

;** BIOS
BIOS_IRQ1_ADDR          = $FF3F
BIOS_IRQ2_ADDR          = $FF52
BIOS_NMI_RESET_ADDR     = $F808
