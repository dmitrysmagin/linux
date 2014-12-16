#ifndef __JZ4760_TVE_H__
#define __JZ4760_TVE_H__


#define PANEL_MODE_LCD_PANEL	0
#define PANEL_MODE_TVE_PAL	1
#define PANEL_MODE_TVE_NTSC	2

/* TV parameter */
#define TVE_WIDTH_PAL 		704
#define TVE_WIDTH_PAL16         704
#define TVE_HEIGHT_PAL 		575
#define TVE_HEIGHT_PAL16	575
#define TVE_FREQ_PAL 		50

#define TVE_WIDTH_NTSC 		720
#define TVE_WIDTH_NTSC16	720
#define TVE_HEIGHT_NTSC 	482
#define TVE_HEIGHT_NTSC16 	482
#define TVE_FREQ_NTSC 		60

extern void jz4760tve_enable_tve(void);
extern void jz4760tve_disable_tve(void);

extern void jz4760tve_init( int tve_mode );


#endif	/* __JZ4760_TVE_H__ */
