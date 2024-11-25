#include <iostream>
#include <string>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);

  std::string s;
  int o = 0, t = 0, r = 0;

  std::cin >> s;

  for(int i = 0; i < s.size(); i+=2) {
	switch(s[i]) {
		case '1':
		  o++;
		  break;
		case '2':
		  t++;
		  break;
		case '3':
		  r++;
		  break;
	}
  }

  for(int i = 0; i< o; i++) { 
	if(i > 0) std::cout << "+";
	std::cout << 1;
  }

  if(t > 0) {
    if(o > 0) std::cout << "+";

    for(int i = 0; i< t; i++) { 
  	if(i > 0) std::cout << "+";
  	std::cout << 2;
    }
  }

  if(r > 0) {
	if(o > 0 || t > 0) std::cout << "+";
	for(int i = 0; i< r; i++) { 
		if(i > 0) std::cout << "+";
		std::cout << 3;
	}
  }

  std::cout << std::endl;

  return 0;
}