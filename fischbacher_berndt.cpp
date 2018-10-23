/*
Berndt Fischbacher
5BHIF
5.10.2018
*/

#include <iostream>
#include <thread>
#include <cmath>
#include <unistd.h>
#include <vector>
#include <algorithm>
#include <pthread.h>
#include <chrono>
#include <stdio.h>

std::vector<int> n;

static const unsigned int ms = 10;
static const double PI = 3.14159265;
void work(){
    for(int i = 0;i < 1000; i++){
        double r;
        r = sin(i * PI/180);
        r *= r;
        usleep(ms);
    }
}

void fill(int anz){
    std::vector<int> ln;
    for(int i = 0;i <  anz; i++){
        ln.push_back(i);
    }
    n.insert(n.end(),ln.begin(),ln.end());
}


int main(int argc, char** argv)
{
    std::clock_t start;
    int n_threads = 4;
    int n_anz = 200;

    for(int j = 0;j < argc;j++){
        if(std::string(argv[j])=="-t"){
            n_threads = atoi(argv[j + 1]);
        }
        else if(std::string(argv[j])=="-n"){
            n_anz = atoi(argv[j + 1]);
        }
    }

    std::thread threads[n_threads];

    for(int i = 0;i < n_threads; i++){
        threads[i] = std::thread(fill,work);
    }

    for(std::thread &_thread : threads){
        _thread.join();
    }

    std::sort(n.begin(),n.end());
    for(int &n : n){
        std::cout << n << std::endl;
    }
    for(int k = 0;k < n_threads; k++){
        printf("Thread took %6.5f seconds,time");
    }
    return 0;
}
