//
// Created by Maikol Guzman Alan on 3/1/22.
//
#include <iostream>
#include "PhysicalProduct.h"
#include "DigitalProduct.h"

using namespace std;

int main() {
    std::cout << "Welcome to the UNA! (VIRTUAL)\n" << std::endl;

    PhysicalProduct physicalProduct;
    physicalProduct.setName("Nintendo");
    physicalProduct.setPrice(500);
    physicalProduct.setWeight(1200);

    DigitalProduct digitalProduct;
    digitalProduct.setName("Game");
    digitalProduct.setPrice(120);
    digitalProduct.setFilePath("c:\\file\\game.app");

    std::cout << "Physical Product Weight: " << physicalProduct.getWeight() << "\n" << std::endl;
    std::cout << "Digital Product filePath: " << digitalProduct.getFilePath() << "\n" << std::endl;

    return 0;
}
