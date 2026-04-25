/*
Làm lại bài phân khúc sinh viên (Xuất sắc, Giỏi, Khá, Trung Bình, Yếu)
Xuất sắc: >= 9
Giỏi >= 7 && < 9
Khá >= 5 && < 7
Trung bình >= 3 && < 5
Yếu < 3

1. Làm lại bài này
2. Sửa lại (refactor) các trường hợp đặc biệt và trường hợp biên
3. Viết lại theo hướng khác (score <)
*/

#include <stdio.h>

int main(){
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);

    if (score < 0 || score > 10){
        printf("Invalid score!");
    } else if (score == 0){
        printf("Học sinh quá tệ!");
    } else if (score < 3){
        printf("Học sinh yếu!");
    } else if (score < 5){
        printf("Học sinh trung bình!");
    } else if (score < 7){
        printf("Học sinh khá!");
    } else if (score < 9){
        printf("Học sinh giỏi!");
    } else {
        printf("Học sinh xuất sắc!");
    }
}