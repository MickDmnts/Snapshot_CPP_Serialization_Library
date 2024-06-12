/*
* Developed by Michael-Evangelos Diamantis Aug-2024
* Source: https://github.com/MickDmnts/Snapshot_CPP_Serialization_Library
*/
#pragma once

#include "pch.h"

namespace fs = std::filesystem;

/*Method declaration*/
int getFileCount(std::string _path);
/*Method declaration*/
std::string getCurrentDate();
/*Method declaration*/
std::string formatSaveString(const std::string& _format, const std::string& date, const int cnt);
/*Method declaration*/
std::string combinePath(const std::string _base, const  std::string _exte);
/*Method declaration*/
void handleSaveDirectory(const std::string& path);
/*Method declaration*/
bool fileExists(const std::string& path);