#include<stdio.h>

int main(){
	printf ("hello world\n");
	
	//SUb string 
	size_t pos_ = 0;
	std::string token;
	while ((pos_ = line.find(delimiter)) != std::string::npos) {
	token = line.substr(0, pos_);
	arr.push_back(token);
	line.erase(0, pos_ + delimiter.length());
	}
	arr.push_back(line);

	return 0;
}
