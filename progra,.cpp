#include<iostream>
int calculation(int );
int main(){
	int Money_user;
	int place_id;
	std::string place;
	std::string hello;
	char condition;
	std::cout<<"Real state in Nepal: \n";
	std::cout<<"we'll recommend the Land according to your budjet:\n";
	std::cout<<"Which place you want to buy land\n";
	std::cout<<"1. Kathmandu \t 2. Bhaktapur \t 3. Lalitpur \n";
	std::cin>>place_id;
	
	std::cout<<"hello";
	switch (place_id)
	{
	case 1:
	std::cout<<"you want to settle in ktm"<<std::endl<<"input the place:";
	std::cin>>place;
	if(place == "kirtipur") {
		std::cout<<"15 lakh  per ana\n";
		std::cout<<"You want to buy or not (y/n):\n";
		std::cin>>condition;
		if (condition == 'y'){
			std::cout<<"contact the land lord 9834***** \n";
			break;
		}
		else {
			break;
		}
		
	}
	
    
	
	case 2:
	std::cout<<"you want to settle in Bhaktapur \n"<<"input the place";
    std::cin>>place;
	if(place == "siddha pokhari") {
		std::cout<<"15 lakh  per ana";
		std::cout<<"You want to buy or not (y/n):\n";
		std::cin>>condition;
		if (condition == 'y'){
			std::cout<<"contact the land lord 9834***** \n";
			break;
		}
		else {
			break;
		}
	}
	case 3:
	std::cout<<"you want to settle in lalitpur \n"<<"input the place:";
	std::cin>>place;
	if(place == "dhobighat") {
		std::cout<<"18 lakh  per ana";
		std::cout<<"You want to buy or not (y/n):\n";
		std::cin>>condition;
		if (condition == 'y'){
			std::cout<<"contact the land lord 9834***** \n";
			break;
		}
		else {
			break;
		}
	}
	break;

	default:
	break;
	}
}

