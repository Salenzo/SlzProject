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
                //�����ۺ��Ա任
                vector v1 = {
                   v0.x * cos(rad) - v0.y * sin(rad),
                   v0.x * sin(rad) + v0.y * cos(rad),
                   v0.len * zoom_size,
                };
                return v1;
            }

    };
}

    

//��

//�̲�ס��class��
//�� �� �� ��
//����д�˾�û���ϣ�����������̫����
//̫���˲ݲݲݲ�
//cnm����ʲô����
//������������ô��������
//�����ˣ���Ү
//�ݲݲݣ����ٿ���
//>mod
//namespace��
//�ҵ�����дʲô����
//�ҵ�����дʲô����//������װ����һ������
//����c++Ч�ʺø�///��
//vim?kana//����vsc����Vim�Ǻ���������
//Ctrl+Shift+P duplicate selection
//�ö����
//���ļ������ԣ�C?
//���ļ������ԣ�C++