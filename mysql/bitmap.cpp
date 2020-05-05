//
// Created by liuxu on 2020/5/5.
//

#include "bitmap.h"
#include <iostream>

struct Lock_t {
    Lock_t(int page_number, int index) {
        this->page_number = page_number;
        this->index = index;
    }

    int page_number;
    int index;
};

void bitmap_operation() {
    Lock_t bitmap = Lock_t(12, 13);
    Lock_t *pointer = &bitmap;
    ((byte *) &pointer[0])[1] |= 1 << 2;
    std::cout << "测试一下bitmap的操作" << std::endl;
}