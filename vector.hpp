#pragma once
//vector.h


namespace ALGEBRA_LINEARE {

    class Vettore {
    
        public:

            typedef struct
            {
                float x, y, len;
            } vector;

            float abs(float x) {
                return x < 0 && -x || x;
            }

            float sin(float x) {
                const float pi = 3.14;
                const float B = 4 / pi;
                const float C = -4 / (pi * pi);
                float y = B * x + C * x * abs(x);
                return y;
            }

            float cos(float x) {
                const float pi = 3.14;
                const float B = 4 / pi;
                const float C = -4 / (pi * pi);
                x -= (x > pi) && (2 * pi);
                float y = B * x + C * x * abs(x);

            }

            vector arr_to_vector(int a[3]) {
                vector v;
                v.x = a[0];
                v.y = a[1];
                v.len = a[2];
                return v;
            }

            int* vector_to_arr(vector a, int arr[3]) {
                arr[0] = a.x;
                arr[1] = a.y;
                arr[2] = a.len;
                return arr;
            }

            vector transform(vector v0, float rad, double zoom_size) {
                //向量综合性变换
                vector v1 = {
                   v0.x * cos(rad) - v0.y * sin(rad),
                   v0.x * sin(rad) + v0.y * cos(rad),
                   v0.len * zoom_size,
                };
                return v1;
            }

    };
}

    

//草

//忍不住用class草
//代 码 复 用
//本来写了就没用上，能用上真是太好了
//太好了草草草草
//cnm，这什么东西
//看不懂，我这么厉害的吗？
//看懂了，好耶
//草草草，光速看懂
//>mod
//namespace草
//我到底再写什么东西
//我到底再写什么东西//←松鼠装备了一键复读
//但是c++效率好高///？
//vim?kana//不在vsc里用Vim是好文明（）
//Ctrl+Shift+P duplicate selection
//好多红线
//此文件的语言：C?
//此文件的语言：C++