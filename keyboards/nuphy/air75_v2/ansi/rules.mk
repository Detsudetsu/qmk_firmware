<<<<<<< HEAD
SRC += side.c
SRC += rf.c
SRC += sleep.c
SRC += side_driver.c
QUANTUM_LIB_SRC += uart.c
KEY_OVERRIDE_ENABLE = yes 
=======
SRC += side.c rf.c sleep.c side_driver.c rf_driver.c
UART_DRIVER_REQUIRED = yes

>>>>>>> d968e533d1fb369b90feb78d49518ee028430212
