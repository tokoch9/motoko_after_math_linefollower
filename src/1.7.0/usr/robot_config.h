#ifndef _ROBOT_CONFIG_H_
#define _ROBOT_CONFIG_H_


#define MOTOR_AFTERMATH   1
//#define UNTOLD_TRUTH   1

#ifdef MOTOR_AFTERMATH

//#define OBSTACLE_SENSOR_TRESHOLD		500
//#define OBSTACLE_SENSOR_TRESHOLD		800
#define OBSTACLE_SENSOR_TRESHOLD		700

#define LINE_SENSOR_TRESHOLD	(i32)150

#define LINE_OFFSET               (i32)0

#define MOTOR_OFFSET                  0

#define CONFIG_USE_CAMERA                  0
/*
  line following parameters
*/
#define CONFIG_USE_RAMP_SPEED        1      /*this enables speed ramp controller - KS parameter*/
#define CONFIG_USE_PREDICTOR         1      /*this enables line shape predictor to estimate erro value*/

#define   CONFIG_KP                 (float)0.326  /*proportional, 0.326*/
#define   CONFIG_KI                 (float)0.0    /*integrate*/
#define   CONFIG_KD                 (float)4.53  /*derivative., 10.53*/
#define   CONFIG_KD2                (float)0.0    /*second derivative*/


#define   CONFIG_SPEED_MIN          (float)0.5    /*minimal robot speed*/
//#define   CONFIG_SPEED_MAX          (float)0.9    /*maximal robot speed*/
#define   CONFIG_SPEED_MAX          (float)0.8    /*maximal robot speed*/
#define   CONFIG_SPEED_BASE         (float)0.4    /*base robot speed - for mode without speed ramp controller*/
#define   CONFIG_KS                 (float)0.02   /*speed rising time*/
#define   CONFIG_KS_2                (float)5.0   /*speed rising time*/


#define CONFIG_REQUIRED_MIN         (float)0.0
#define CONFIG_REQUIRED_MAX         (float)0.5

#define CONFIG_Q_ETA                (float)(0.96875)  /*neural network learning rate <0, 1>*/
#define CONFIG_Q_ALPHA              (float)(0.96875)  /*learning low pass filter constant <0, 1>, process is stochastic*/
#define CONFIG_Q_GAMMA              (float)0.3       /*discount factor <0, 1>*/
#define CONFIG_Q_DELTA              (float)0.01     /*spped ILC learning rate <0, 1> */


/*
  broken line search parameters
*/

#define CONFIG_LINE_SEARCH_TIME 	  (u32)500     /*one curve time in ms*/
#define CONFIG_LINE_SEARCH_SPEED 	  (i32)50      /*in 0..100 range*/


/*
  obstacle parameters
*/

/*
  0 - just stop before obstacle
  1 - turn back 180deg or avoid, depends on get_mode_jumper()
*/
#define CONFIG_OBSTACLE_MODE       1

#endif



#ifdef UNTOLD_TRUTH

#define OBSTACLE_SENSOR_TRESHOLD		800


#define LINE_SENSOR_TRESHOLD	(i32)150

#define LINE_OFFSET               (i32)0


#define CONFIG_USE_CAMERA                  1


#define CUSTOM_BRIDGE               1
#define MOTOR_OFFSET                -20
/*
  line following parameters
*/
#define CONFIG_USE_RAMP_SPEED        1      /*this enables speed ramp controller - KS parameter*/
#define CONFIG_USE_PREDICTOR         0      /*this enables line shape predictor to estimate erro value*/

#define   CONFIG_KP                 (float)0.426  /*proportional, 0.326*/
#define   CONFIG_KI                 (float)0.0    /*integrate*/
#define   CONFIG_KD                 (float)4.53   /*derivative., 10.53*/
#define   CONFIG_KD2                (float)0.0    /*second derivative*/


#define   CONFIG_SPEED_MIN          (float)0.3    /* minimal robot speed */
#define   CONFIG_SPEED_MAX          (float)0.6    /* maximal robot speed */
#define   CONFIG_SPEED_BASE         (float)0.3    /* base robot speed - for mode without speed ramp controller */
#define   CONFIG_KS                 (float)0.004   /*speed rising time*/
#define   CONFIG_KS_2                (float)3.5   /*speed rising time*/

#define CONFIG_REQUIRED_MIN         (float)0.0
#define CONFIG_REQUIRED_MAX         (float)0.5

#define CONFIG_Q_ETA                (float)(0.96875)  /*neural network learning rate <0, 1>*/
#define CONFIG_Q_ALPHA              (float)(0.96875)  /*learning low pass filter constant <0, 1>, process is stochastic*/
#define CONFIG_Q_GAMMA              (float)0.3       /*discount factor <0, 1>*/
#define CONFIG_Q_DELTA              (float)0.01     /*spped ILC learning rate <0, 1> */


/*
  broken line search parameters
*/

#define CONFIG_LINE_SEARCH_TIME 	  (u32)400     /*one curve time in ms*/
#define CONFIG_LINE_SEARCH_SPEED 	  (i32)50      /*in 0..100 range*/


/*
  obstacle parameters
*/

/*
  0 - just stop before obstacle
  1 - turn back 180deg or avoid, depends on get_mode_jumper()
*/
#define CONFIG_OBSTACLE_MODE       1

#endif

#endif
