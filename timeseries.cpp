#include <string>
#include<vector>
#include <fstream>
#include "timeseries.h"
#include <sstream>

using namespace std;


	const char* CsvfileName;

public:

	TimeSeries(const char* CSVfileName) {
		this->CsvfileName = CSVfileName;


	};

	char getData(const char* CSVfileName) {
		vector<string> rows;
		fstream fs;
		string line;
		getline(fs, line);
		vector<vector<string>> columns;
		fs.open(CsvfileName);
		while (getline(fs, line, ',')) {
			rows.clear();
			rows.push_back(line);
			columns.push_back(rows);
		}
		fs.close();

	}



