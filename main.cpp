//
// Created by ggl on 2018/1/11.
//
#include "LDPC_5G.h"
#include<iostream>
#include <LDPC_helper.h>
#include <windows.h>
using namespace std;

int main1() {
    vector<int> v1 = {0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0};
    vector<int> v2 = {0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0};
    vector<int> v3 = {1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0};
    vector<int> v4 = {0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0};
    vector<int> v5 = {0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    vector<vector<int>> v{v1, v2, v3, v4, v5};
    vector<vector<int>> res;
    Gaussian_Elimination(v);
    coutmat(v);
    cout << endl;
    getParityPoint(res, v);
    coutmat(res);
    cout << endl;
    return 0;

}

int main() {
    SYSTEMTIME sys;
    GetLocalTime( &sys );
    printf( "%4d/%02d/%02d %02d:%02d:%02d.%03d \n",sys.wYear,sys.wMonth,sys.wDay,sys.wHour,sys.wMinute, sys.wSecond,sys.wMilliseconds);
    LDPC_5G *ldpc = new LDPC_5G(5200, 10000, 2, 0, 2);
    GetLocalTime( &sys );
    printf( "%4d/%02d/%02d %02d:%02d:%02d.%03d \n",sys.wYear,sys.wMonth,sys.wDay,sys.wHour,sys.wMinute, sys.wSecond,sys.wMilliseconds);



    //cout << -1 % 20 << endl;
    system("pause");
    main1();

    return 0;
}