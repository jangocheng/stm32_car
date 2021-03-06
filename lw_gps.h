#ifndef __LW_GPS_H__
#define __LW_GPS_H__

#include <stdint.h>
#include <stdbool.h>

void lw_gps_init(void);
void lw_gps_param_init(void);
int32_t lw_gps_recv(uint8_t val);
int32_t lw_gps_test(void);
uint8_t *lw_gps_get_result_buf(void);

#endif
