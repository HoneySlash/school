/*
Berndt Fischbacher
5BHIF
17.10.2018
*/

#include <iostream>
#include <thread>
#include <iomanip>
#include <vector>
#include <math.h>
#include <unistd.h> 

using namespace std;

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

void parse_args(int argc, char* argv[],int& threads, int& nums){
    if(argc > 5){
        cerr << "Falsche verwendung von Argumenten!" << endl;
        cerr << "Richtig: ./Verbesserung_Fischbacher [-t <threads>] [-n <nums>]" << endl;
        exit(1);
    }
    for (int i = 1; i < argc; i++){
        if(string(argv[i]) == "-t" && (i + 1) < argc){
            try{
                int threads_tmp = stoi(string(argv[i + 1]));
                threads = (threads_tmp > 0) ? threads_tmp : threads;
            }catch( ... ){
            }
        }
        else if (string(argv[i]) == "-n" && (i + 1) < argc){
            try{
                int nums_tmp = stoi(string(argv[i + 1]));
                nums = (nums_tmp > 0) ? nums_tmp : nums;
            }catch( ... ){
            }
        }
    }
    if(threads > nums){
        cerr << "Es müssen mehr Nummern als Threads angegeben werden!" << endl;
        exit(1);
    }

}

void func (int* arr, double* time,int start, int end){
    auto start_time = clock();
    for(int i = start; i < end; i++){
        *(arr + i) = i + 1;
        work();
    }
    *time = double(clock() - start_time) / CLOCKS_PER_SEC;
}

void print(int nums_arr[], int nums){
    int cntr{0};
    int width = to_string(nums).size();
    for(int i = 0; i < nums; i++){
        cout << setw(width) <<nums_arr[i] << " ";
        cntr++;
        if(cntr == 20){
            cout << endl;
            cntr = 0;
        }
    }
    cout << endl;
}


int main(int argc, char* argv[]){
    int threads{4};
    int nums{200};
    parse_args(argc, argv, threads, nums);
    vector<thread> running_threads;
    int nums_arr[nums];
    double thread_times[threads];
    int start{0};
    int step{nums / threads};
    int end{start + step};
    for(int i{0}; i < threads - 1; i++){
        running_threads.push_back(thread{func, &nums_arr[0], &thread_times[i], start, end});
        start = end;
        end = start + step;
    }
    running_threads.push_back(thread{func, &nums_arr[0], &thread_times[threads - 1], start, nums});
    for(thread& t : running_threads){
        t.join();
    }
    print(nums_arr,nums);
    double total{0};
    for(int i = 0; i < threads; i++){
        cout << "Thread " << i << " took " << thread_times[i] << "s!" << endl;
        total += thread_times[i];
    }
    cout << "Total time: " << total << "s!" << endl;

}
