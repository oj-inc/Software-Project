/**

 Created by lenovo on ${DTE}
 **/


#ifndef SOFTWARE_PROJECT_BOARD_H
#define SOFTWARE_PROJECT_BOARD_H
typedef struct{
    int row;
    int col;
    int value;
    int is_fixed;
    int is_error;
}Cell;
typedef struct {
    int rows;
    int cols;
    Cell **matrix;


}Board;
#endif //SOFTWARE_PROJECT_BOARD_H
