#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main(){	
  
  string arrCityData[47][3]=
	{
		{"Alaminos","99,397","Pangasinan"},
		{"Angeles City","462,928","Pampanga"},
		{"Antipolo","887,399","Rizal"},
		{"Bacolod","600,783","Negros Occidental"},
		{"Bacoor","664,625","Cavite"},
		{"Bago","191,210","Negros Occidental"},
		{"Baguio","366,358", "Benguet"},
		{"Bais", "84,317",	"Negros Oriental"},
		{	"	Balanga	"	,	"	104,173	"	,	"	Bataan	"	,	}	,
		{	"	Batac	"	,	"	55,484	"	,	"	Ilocos Norte	"	,	}	,
		{	"	Batangas City	"	,	"	351,437	"	,	"	Batangas	"	,	}	,
		{	"	Bayawan	"	,	"	122,747	"	,	"	Negros Oriental	"	,	}	,
		{	"	Baybay	"	,	"	111,848	"	,	"	Leyte	"	,	}	,
		{	"	Bayugan	"	,	"	109,499	"	,	"	Agusan del Sur	"	,	}	,
		{	"	Biñan	"	,	"	407,437	"	,	"Laguna",},
{"	Bislig	","	99,290	","	Surigao del Sur	",},
{"	Bogo	","	88,867	","	Cebu	",},
{"	Borongan	","	71,961	","	Eastern Samar	",},
{"	Butuan	","	372,910	","	Agusan del Norte	",},
{"	Cabadbaran	","	80,354	","	Agusan del Norte	",},
{"	Cabanatuan	","	327,325	","	Nueva Ecija	",},
{"	Cabuyao	","	355,330	","	Laguna	",},
{"	Cadiz	","	158,544	","	Negros Occidental	",},
{"	Cagayan de Oro	","	728,402	","	Misamis Oriental	",},
{"	Calaca	","	87,361	","	Batangas	",},
{"	Calamba	","	539,671	","	Laguna	",},
{"	Calapan	","	145,786	","	Oriental Mindoro	",},
{"	Calbayog	","	186,960	","	Samar	",},
{"	Caloocan	","	1,661,584	","	none?[g]",},
{"	Candon	","	61,432	","	Ilocos Sur	",},
{"	Canlaon	","	58,822	","	Negros Oriental	",},
{"	Carcar	","	136,453	","	Cebu	",},
{"	Catbalogan	","	106,440	","	Samar	",},
{"	Cauayan	","	143,403	","	Isabela	",},
{"	Cavite City	","	100,674	","	Cavite	",},
{"	Cebu City	","	964,169	","	Cebu	",},
{"	Cotabato City	","	325,079	","	Maguindanao del Norte	",},
{"	Dagupan	","	174,302	","	Pangasinan	",},
{"	Danao	","	156,321	","	Cebu	",},
{"	Dapitan	","	85,202	","	Zamboanga del Norte	",},
{"	Dasmariñas	","	703,141	","	Cavite	",},
{"	Davao City	","	1,776,949	","	Davao del Sur	",},
{"	Digos	","	188,376	","	Davao del Sur	",},
{"	Dipolog	","	138,141	","	Zamboanga del Norte	",},
{"	Dumaguete	","	134,103	","	Negros Oriental	",},
{"	El Salvador	","	58,771	","	Misamis Oriental	",},
{"	Escalante	","	96,159	","	Negros Occidental	",},
{"	Gapan	","	122,968	","	Nueva Ecija	",},
{"	General Santos	","	697,315	","	South Cotabato	",},

}; 

  
  char city[256];
  bool cityfound=false;
  
  
  puts("Enter a city: ");
  gets(city);
  
  int i=0;
  int foundindex=0;
  
  for(i=0; i<=5 ;i++)
  {
  	if(city == arrCityData[i][0])
  {
  	cityfound=true;
  	foundindex =i;
}
  }
  
  if(cityfound==true)
  {
  	cout << "\nThe city " <<  arrCityData[foundindex][0] << " has a land area of " <<  arrCityData[foundindex][1] << " and is located in the province of " << arrCityData[foundindex][2];
  }
  else 
  {
  	cout << "City not found.";
  }
  
}
