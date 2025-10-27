#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>  //For getch() function

// Structure definitions for each category
typedef struct
{
    char history[1000];
    char division[50];
    char established[50];
    float area;
    int population;
    float literacy;
    int postcode;
    char dc[50];
    char sp[50];
} Pabna;

typedef struct
{
    char name[50];
    int population;
    float area;
    char chairman[50];
    char uno[50];
    char unions[150];
} Upazila;

typedef struct
{
    char name[50];
    char type[20]; // Primary, High School, College, University
    int students;
    int teachers;
    int established;
    char address[100];
} Education;

typedef struct
{
    char name[50];
    int doctors;
    int nurses;
    int beds;
    char services[100];
} Healthcare;

typedef struct
{
    char name[50];
    int officers;
    char oc[50];
    char contact[15];
} PoliceStation;


typedef struct
{
    char hname[50];
    char owner[50];
    char contact[15];
    char location[100];
} ToLet;


typedef struct
{
    char name[50];
    int established;
    char era[30];
    char founder[50];
    char significance[200];
    char location[100];
} HistoricalPlace;


typedef struct
{
    char name[50];
    float area;
    char address[100];
} River;

typedef struct
{
    char name[50];
    char birth[50];
    char death[50];
    char title[50];
    char address[100];
} Person;

typedef struct
{
    char category[100];
    char details[500];
} Other;

// Function prototypes
void initializeData();
void saveDataToFile();
void displayMainMenu();
void displayPabna();
void displayUpazilas();
void displayEducation();
void displayHealthcare();
void displayPoliceStations();
void displayToLets();
void displayHistoricalPlaces();
void displayRiver();
void displayPersons();
void displayOthers();

// Global arrays to store data
Pabna pabnas[1];
Upazila upazilas[9];
Education education[8];
Healthcare healthcare[6];
PoliceStation policeStations[11];
ToLet tolets[5];
HistoricalPlace historicalPlaces[6];
River rivers[5];
Person persons[8];
Other others[10];

int main()
{
    // Initialize hardcoded data
    initializeData();

    // Display main menu
    displayMainMenu();

    // Save data to file before exiting
    saveDataToFile();

    printf("\nThank you for using District Management System!\n");
    printf("All data has been saved to 'district_data.txt' file.\n");

    return 0;
}

// Initialize data
void initializeData()
{

//Initialize Pabna data
    strcpy(pabnas[0].history, "In 1828, Pabna was formed into a district with some police stations of Rajshahi and Jessore.\n \t              Joint magistrates were appointed due to robbery and administrative problems.\n\t              Later, the posts of collector, deputy collector, and session judge were established.\n\t              The boundaries were changed several times; Sirajganj was added, Kushtia was separated.\n\t              Municipality and district board were formed.");
    strcpy(pabnas[0].division,"Rajshahi");
    strcpy(pabnas[0].established, "16 Octobor 1828");
    pabnas[0].area = 2371.50;
    pabnas[0].population = 2909624;
    pabnas[0].literacy = 58.47;
    pabnas[0].postcode = 6600;
    strcpy(pabnas[0].dc, "Muhammad Mofizul Islam (dcpabna@mopa.gov.bd)");
    strcpy(pabnas[0].sp, "Md.Mortoza Ali Khan(sppabna@police.gov.bd)");


// Initialize Upazila dat
    // Atghoria Upazila data
    strcpy(upazilas[0].name, "Atghoria");
    upazilas[0].population = 157254;
    upazilas[0].area = 186.15;
    strcpy(upazilas[0].chairman, "Md.Tanvir Islam (Former)");
    strcpy(upazilas[0].uno, "Md.Minhazul islam (unoatghoria@mopa.gov.bd)");
    strcpy(upazilas[0].unions,"Chandba , Debotter , Ekdoanta , Laxmipur , Majhpara");

    //Bera Upazila data
    strcpy(upazilas[1].name, "Bera");
    upazilas[1].population = 301494;
    upazilas[1].area = 243.43;
    strcpy(upazilas[1].uno, "Md.Morshedul Islam (unobera@mopa.gov.bd)");
    strcpy(upazilas[1].chairman, "Rezaul Huq Babu (Former)");
    strcpy(upazilas[1].unions,"Dhalarchar , Haturia Nakalia , Jatsakini , Masumdia , \n\t            Notun Bharenga , Puran Bharenga , Ruppur , Chakla , Kaityola" );

    //Bhangura Upazila data
    strcpy(upazilas[2].name, "Bhangura");
    upazilas[2].population = 136576;
    upazilas[2].area = 138.36;
    strcpy(upazilas[2].chairman, "Absent");
    strcpy(upazilas[2].uno, "Mst.Najmun nahar (unobhangura@mopa.gov.bd)");
    strcpy(upazilas[2].unions, "Vangura , Khanmorich , Ashtamanisha , Dilpashar , Parvangura , Mondotosh" );

    // Chatmohor Upazila data
    strcpy(upazilas[3].name, "Chatmohar");
    upazilas[3].population = 334240;
    upazilas[3].area = 310.10;
    strcpy(upazilas[3].chairman, "Abdul Hamid (Former)");
    strcpy(upazilas[3].uno, "Musa Naser Chowddhury (unochatmohar@mopa.gov.bd)" );
    strcpy(upazilas[3].unions, "Handial , Chaikola , Nimaichora , Gunaigacha , Mulgram , \n\t            Foiljana , Parshodanga , Dibigram , Mothurapur , Horipur , Bilcholon");

    //Faridpur Upazila data
    strcpy(upazilas[4].name, "Faridpur");
    upazilas[4].population = 140399;
    upazilas[4].area = 137.67;
    strcpy(upazilas[4].chairman, "Absent");
    strcpy(upazilas[4].uno, "Mahbub Hasan (unofaridpurpabna@mopa.gov.bd)" );
    strcpy(upazilas[4].unions, "Brilahiribari , Pungali , Faridpur , Hadal , Banwarinagar , Demra" );

    //Ishwardi Upazila data
    strcpy(upazilas[5].name, "Ishwardi");
    upazilas[5].population = 390402;
    upazilas[5].area = 250.89;
    strcpy(upazilas[5].chairman, "Md.Nayeb Ali Biswas (Former)");
    strcpy(upazilas[5].uno, "Subir kumar das (unoishurdi@mopa.gov.bd)");
    strcpy(upazilas[5].unions, "Sara , Pakshi , Muladuli , Dashuriya , Salimpur , Sahapur , Laxmikunda " );

    //Sujanagar Upazila data
    strcpy(upazilas[6].name, "Sujanagar");
    upazilas[6].population = 305576;
    upazilas[6].area = 334.34;
    strcpy(upazilas[6].chairman, "Shahinuzzaman (Former)");
    strcpy(upazilas[6].uno, "Mir Rasheduzzaman (unosujanagar@gmail.com)");
    strcpy(upazilas[6].unions, "Ahammadpur , Dulai , Hatkhali , Manikhat , Nazirgang , \n\t            Rainnagar , Sagarkandi , Satbaria , Sujanagar , Tantiband");

    //Santhia Upazila data
    strcpy(upazilas[7].name, "Santhia");
    upazilas[7].population = 410767;
    upazilas[7].area = 331.56;
    strcpy(upazilas[7].chairman, "Absent");
    strcpy(upazilas[7].uno, "Rizu Tamanna (www.santhia.pabna.gov.bd) ");
    strcpy(upazilas[7].unions,"Ar-Ataikola , Bhulbaria , Dhopadaha , Dhulauri , Gaurigram , \n\t            Karamja , Kashinathpur , Khetupara , Nagdemra , Nandanpur ");

    //Pabna Sadar Upazila data
    strcpy(upazilas[8].name, "Pabna-Sadar");
    upazilas[8].population = 590914;
    upazilas[8].area = 439.30;
    strcpy(upazilas[8].chairman, "Mosharof Hossain (Former)");
    strcpy(upazilas[8].uno, "Md.Naharul Islam (unopabna@mopa.gov.bd)");
    strcpy(upazilas[8].unions, "Ataikula , Bharara , Chartarapur , Dapunia , Dogachhi , \n\t            Gayeshpur , Hemayetpur , Malnanchi , Maligachha , Sadullapur" );


//Initialize Education data
    //PMC data
    strcpy(education[0].name, "Pabna Medical College");
    strcpy(education[0].type, "University");
    education[0].students = 384;
    education[0].teachers = 25;
    education[0].established = 2008;
    strcpy(education[0].address, "Hemayetpur,Pabna Sadar");

    strcpy(education[1].name, "Pabna University of Science and Technology");
    strcpy(education[1].type, "University");
    education[1].students = 4500;
    education[1].teachers = 185;
    education[1].established = 2008;
    strcpy(education[1].address, "Jalalpur,Pabna Sadar");

    strcpy(education[2].name, "Govt. Edward College");
    strcpy(education[2].type, "College");
    education[2].students = 30052;
    education[2].teachers = 160;
    education[2].established = 1898;
    strcpy(education[2].address, "Radhanagar,Pabna Sadar");

    strcpy(education[3].name, "Pabna Textile Engineering College");
    strcpy(education[3].type, "College");
    education[3].students = 480;
    education[3].teachers = 00;
    education[3].established = 2006;
    strcpy(education[3].address, "Meril Bypass,Shalgaria,Pabna");

    strcpy(education[4].name, "Pabna Cadet College");
    strcpy(education[4].type, "College");
    education[4].students = 300;
    education[4].teachers = 00;
    education[4].established = 1981;
    strcpy(education[4].address, "Jalalpur,Pabna");

    strcpy(education[5].name, "Pabna Zila School");
    strcpy(education[5].type, "High School");
    education[5].students = 2000;
    education[5].teachers = 52;
    education[5].established = 1853;
    strcpy(education[5].address, "Abdul Hamid Road,Pabna");

    strcpy(education[6].name, "Pabna Government Girls' High School");
    strcpy(education[6].type, "High School");
    education[6].students = 1920;
    education[6].teachers = 00;
    education[6].established = 1883;
    strcpy(education[6].address, "Dilalpur,Boro Bazar,Pabna");

    strcpy(education[7].name, "Ikkshu Gobeswana High School");
    strcpy(education[7].type, "High School");
    education[7].students = 400;
    education[7].teachers = 00;
    education[7].established = 1981;
    strcpy(education[7].address, "Alhaz Mor,Ishwardi,Pabna");

// Initialize Healthcare data
    //Mental hospital data
    strcpy(healthcare[0].name, "Pabna Mental Hospital");
    healthcare[0].doctors = 50;
    healthcare[0].nurses = 100;
    healthcare[0].beds = 500 ;
    strcpy(healthcare[0].services, "All brain treatments");

    //Sadar hospital data
    strcpy(healthcare[1].name, "250 Bedded General Hospital");
    healthcare[1].doctors = 30;
    healthcare[1].nurses = 50;
    healthcare[1].beds = 250;
    strcpy(healthcare[1].services, "Emergency, OPD, Surgery, Maternity");

    //Sadar hospital data
    strcpy(healthcare[2].name, "Lab Aid Hospital");
    healthcare[2].doctors = 40;
    healthcare[2].nurses = 45;
    healthcare[2].beds = 30;
    strcpy(healthcare[2].services, "Emergency, OPD, Surgery, Maternity & All treatment");

    //Sadar hospital data
    strcpy(healthcare[3].name, "Sental Hospital");
    healthcare[3].doctors = 60;
    healthcare[3].nurses = 70;
    healthcare[3].beds = 20;
    strcpy(healthcare[3].services, "Emergency, OPD, Surgery, Maternity");

    //Sadar hospital data
    strcpy(healthcare[4].name, "PDC Hospital");
    healthcare[4].doctors = 30;
    healthcare[4].nurses = 40;
    healthcare[4].beds = 00;
    strcpy(healthcare[4].services, "All treatments");

    //Sadar hospital data
    strcpy(healthcare[5].name, "Pabna Diabetes Hospital");
    healthcare[5].doctors = 20;
    healthcare[5].nurses = 20;
    healthcare[5].beds = 00;
    strcpy(healthcare[5].services, "Diabetes treatment");

// Initialize Police Station data
    //Pabna Sadar thana data
    strcpy(policeStations[0].name, "Pabna Sadar Police Station");
    policeStations[0].officers = 40;
    strcpy(policeStations[0].contact, "01320128586");
    strcpy(policeStations[0].oc, "Md. Abdus Salam");

    //Ishwardi thana data
    strcpy(policeStations[1].name, "Isurdi Police Station");
    policeStations[1].officers = 40;
    strcpy(policeStations[1].contact, "01320128612");
    strcpy(policeStations[1].oc, "A.SA.MA, Abdur Nur");

    //Atghoria thana data
    strcpy(policeStations[2].name, "Atghoria Police Station");
    policeStations[2].officers = 30;
    strcpy(policeStations[2].contact, "01320128638");
    strcpy(policeStations[2].oc, "Md. Shafiquzzam Sarkar");

    //Chatmohor thana data
    strcpy(policeStations[3].name, "Chatmohor Police Station");
    policeStations[3].officers = 30;
    strcpy(policeStations[3].contact, "01320128664");
    strcpy(policeStations[3].oc, "Md. Salim Reza");

    //Bangura thana data
    strcpy(policeStations[4].name, "Bangura Police Station");
    policeStations[4].officers = 25;
    strcpy(policeStations[4].contact, "01320128664");
    strcpy(policeStations[4].oc, "Md. Nazmul Haq");

    //Faridpur thana data
    strcpy(policeStations[5].name, "Faridpur Police Station");
    policeStations[5].officers = 35;
    strcpy(policeStations[5].contact, "01320128716");
    strcpy(policeStations[5].oc, "Md. Hafizur Rahman");

    //Sujanagar thana data
    strcpy(policeStations[6].name, "Sujanagar Police Station");
    policeStations[6].officers = 30;
    strcpy(policeStations[6].contact, "01320128742");
    strcpy(policeStations[6].oc, "Mohammad Jalal Uddin");

    //Betra thana data
    strcpy(policeStations[7].name, "Bera Model Police Station");
    policeStations[7].officers = 30;
    strcpy(policeStations[7].contact, "01320128768");
    strcpy(policeStations[7].oc, "Md. Rashidul Islam");

    //Shathia thana data
    strcpy(policeStations[8].name, "Shathia Police Station");
    policeStations[8].officers = 35;
    strcpy(policeStations[8].contact, "01320128794");
    strcpy(policeStations[8].oc, "Md. Anwar Hossain");

    //Aminpur thana data
    strcpy(policeStations[9].name, "Aminpur Police Station");
    policeStations[9].officers = 35;
    strcpy(policeStations[9].contact, "01320128846");
    strcpy(policeStations[9].oc, "Md. Harunur Rashid");

    //Ataikula thana data
    strcpy(policeStations[10].name, "Ataikula Police Station");
    policeStations[10].officers = 20;
    strcpy(policeStations[10].contact, "01713-374025");
    strcpy(policeStations[10].oc, "A.K.M Habibul Islam");

//Initialize To-Let Data
    //saudia data
    strcpy(tolets[0].hname, "Saudia Chatrabas");
    strcpy(tolets[0].owner, "abc");
    strcpy(tolets[0].contact, "01712345678");
    strcpy(tolets[0].location, "Radhanagar,Pabna");

    //saudia data
    strcpy(tolets[1].hname, "Vorer Alo");
    strcpy(tolets[1].owner, "xyz");
    strcpy(tolets[1].contact, "01812345678");
    strcpy(tolets[1].location, "Degree Bortola,Pabna");

    //saudia data
    strcpy(tolets[2].hname, "Othiti Nibas");
    strcpy(tolets[2].owner, "mno");
    strcpy(tolets[2].contact, "01912345678");
    strcpy(tolets[2].location, "Narayanpur,Pabna");

    //saudia data
    strcpy(tolets[3].hname, "Raj Mohol");
    strcpy(tolets[3].owner, "xyz");
    strcpy(tolets[3].contact, "01512345678");
    strcpy(tolets[3].location, "Radhanagar,Pabna");

    //saudia data
    strcpy(tolets[4].hname, "Sobur Tower");
    strcpy(tolets[4].owner, "xyz");
    strcpy(tolets[4].contact, "01312345678");
    strcpy(tolets[4].location, "Abdul Hamid Road,Pabna");


// Initialize Historical Places data
    //Taras Bhaban data
    strcpy(historicalPlaces[0].name, "Tarash Bhaban");
    strcpy(historicalPlaces[0].era, "British Period");
    strcpy(historicalPlaces[0].founder,"Ray Bahadur Banamali Roy");
    strcpy(historicalPlaces[0].significance, "Manor house & Archaeological remains");
    strcpy(historicalPlaces[0].location, "Abdul Hamid Road,Pabna");

    //Shahi Mosjid data
    strcpy(historicalPlaces[1].name, "Chatmohor Shahi Mosjid");
    strcpy(historicalPlaces[1].era, "Moghol Period");
    strcpy(historicalPlaces[1].founder,"Khan Muhammad Bin Tuwi");
    strcpy(historicalPlaces[1].significance, "Muslim tradition & A reserved archaeological place");
    strcpy(historicalPlaces[1].location, "Chatmohor,Pabna");

    //Jor Bangla Temple data
    strcpy(historicalPlaces[2].name, "Jor Bangla Temple");
    strcpy(historicalPlaces[2].era, "British Period");
    strcpy(historicalPlaces[2].founder,"Brajnohan Krori ");
    strcpy(historicalPlaces[2].significance, "Hindu tradition & Archaeological remains");
    strcpy(historicalPlaces[2].location, "Kalachad Para,Pabna");

    //Azim Chowdhuri data
    strcpy(historicalPlaces[3].name, "Dulai Zamindar Bari");
    strcpy(historicalPlaces[3].era, "British Period");
    strcpy(historicalPlaces[3].founder,"Azim Chowdhury");
    strcpy(historicalPlaces[3].significance, "Manor house & Archaeological remains");
    strcpy(historicalPlaces[3].location, "Sujanagar,Pabna");

    //Sucitra Sen data
    strcpy(historicalPlaces[4].name, "Suchitra Sen Memorial Meseum");
    strcpy(historicalPlaces[4].era, "British Period");
    strcpy(historicalPlaces[4].founder,"District Administration(Management)");
    strcpy(historicalPlaces[4].significance, "His Biography & Archaeological remains");
    strcpy(historicalPlaces[4].location, "Kachari Para,Pabna");

    //Harding bridge data
    strcpy(historicalPlaces[5].name, "Hardinge Bridge");
    strcpy(historicalPlaces[5].era, "British Period");
    strcpy(historicalPlaces[5].founder,"Lord Hardinge ");
    strcpy(historicalPlaces[5].significance, "Traditional Place");
    strcpy(historicalPlaces[5].location, "Pakshi,Ishwardi,Pabna");

//Initialize River data
    //Padma data
    strcpy(rivers[0].name, "Padma");
    rivers[0].area = 356.38;
    strcpy(rivers[0].address, "Ishwardi,Pabna Sadar");

    //Padma data
    strcpy(rivers[1].name, "Jamuna");
    rivers[1].area = 205.81;
    strcpy(rivers[1].address, "Kashinathpur,Bera");

    //Ichimoti data
    strcpy(rivers[2].name, "Ichamoti");
    rivers[2].area = 50.48;
    strcpy(rivers[2].address, "Sujanagar,Bera,Pabna Sadar");

    //Boral data
    strcpy(rivers[3].name, "Boral");
    rivers[3].area = 89.65;
    strcpy(rivers[3].address, "Chatmohor,Bhangura,Faridpur");

    //Atrai data
    strcpy(rivers[4].name, "Atrai");
    rivers[4].area = 85.23;
    strcpy(rivers[4].address, "Chatmohor");

// Iniatializa Person data
    //Cuppu data
    strcpy(persons[0].name, "Mohammed Shahabuddin");
    strcpy(persons[0].birth, "10 December 1949");
    strcpy(persons[0].death, "No");
    strcpy(persons[0].title, "President Of Bangladesh");
    strcpy(persons[0].address, "Jubli Water Tank,Shibrampur,Pabna");

    //Samson H. data
    strcpy(persons[1].name, "Samson H. Chowdhury");
    strcpy(persons[1].birth, "25 September 1925");
    strcpy(persons[1].death, "05 January 2012");
    strcpy(persons[1].title, "Businessman(Founder:Square Group)");
    strcpy(persons[1].address, "Kashipur,Pabna");

    //Promoth Chowdhury data
    strcpy(persons[2].name, "Promoth Chowdhury");
    strcpy(persons[2].birth, "07 August 1868");
    strcpy(persons[2].death, "02 September 1946");
    strcpy(persons[2].title, "Poet");
    strcpy(persons[2].address, "Horipur,Chatmohor,Pabna");

    //Bonde Ali Miya data
    strcpy(persons[3].name, "Bande Ali Miya");
    strcpy(persons[3].birth, "17 January 1906");
    strcpy(persons[3].death, "27 June 1979");
    strcpy(persons[3].title, "Poet");
    strcpy(persons[3].address, "Radhanagar,Pabna sadar,Pabna");

    //Suchitra data
    strcpy(persons[4].name, "Suchitra Sen");
    strcpy(persons[4].birth, "06 April 1931");
    strcpy(persons[4].death, "17 January 1014");
    strcpy(persons[4].title, "Actress");
    strcpy(persons[4].address, "Kachari Para,Pabna");

    //Chancal data
    strcpy(persons[5].name, "Chancanl Chowdhury");
    strcpy(persons[5].birth, "01 June 1974");
    strcpy(persons[5].death, "No");
    strcpy(persons[5].title, "Actor");
    strcpy(persons[5].address, "Boalia,Sujanagar,Pabna");

    //Brindaban Das data
    strcpy(persons[6].name, "Brindaban Das");
    strcpy(persons[6].birth, "07 December 1965");
    strcpy(persons[6].death, "No");
    strcpy(persons[6].title, "Actor");
    strcpy(persons[6].address, "Sharora,Chatmohor,Pabna");

    //Shahnaz Khushi data
    strcpy(persons[7].name, "Shahnaz Khushi");
    strcpy(persons[7].birth, "30 July 1972");
    strcpy(persons[7].death, "No");
    strcpy(persons[7].title, "Actress");
    strcpy(persons[7].address, "Sharora,Chatmohor,Pabna");


// Initialize Other data
    strcpy(others[0].category, "Annada Govinda Public Library");
    strcpy(others[0].details, " 50,000+ books, reading rooms, and digital sections");

    strcpy(others[1].category, "Sri Sri Anukul Thakur Ashram");
    strcpy(others[1].details, " Satsang Mondir(The birthplace of Sri Sri Thakur Anukul Chandra, it is a site of large religious festivals.)\n");

    strcpy(others[2].category, "Ruppur Nuclear Power Plant");
    strcpy(others[2].details, " It is a 24 GW nuclear power plant located in Rooppur, Ishwardi Upazila, Pabna District, Bangladesh.\n  \t               The power plant was built in collaboration with the Russian Rosatom State Atomic Energy Corporation.");


    strcpy(others[3].category, "Chalan Beel ");
    strcpy(others[3].details, " Chalan Beel is a large beel in northern Bangladesh. It extends across Natore, Sirajganj, and Pabna districts. ");

    strcpy(others[4].category, "Ishwardi Aiport ");
    strcpy(others[4].details, " Currently no passengers fly.\n\t     Last United Airways managed commercial aircraft; They shut the service in mid-2014.");

    strcpy(others[5].category, "Ishwardi Railway Junction ");
    strcpy(others[5].details, " It is one of the oldest and largest rail junctions in the country. \n\t               The largest rail junction in Bangladesh is Ishwardi Rail Junction.\n\t               It is a junction of 19 lines, which has both broad gauge and meter gauge railway lines. ");

    strcpy(others[6].category, "Pabna Sugar Mill Ltd. ");
    strcpy(others[6].details, " This massive industrial complex houses a sugar factory, commercial farms and an organic fertilizer factory, \n\t               It was established on December 27, 1992, in Dashuria, Ishwardi Upazila but is now closed.");

    strcpy(others[7].category, " North Bengal Paper Mills Limited");
    strcpy(others[7].details, "  North Bengal Paper Mill is one of the leading paper mills in Bangladesh, established in 1970 in Pakshi.\n\t                But is now closed.");

    strcpy(others[8].category, " Bangladesh Sugargroup Research Institute");
    strcpy(others[8].details, "  Located on 235 acres of land, this institution conducts research on sugarcane and\n\t                It's versatile uses, including sugar, molasses, and chewing. ");

    strcpy(others[9].category,"Ishwardi Export Processing Zone (EPZ)");
    strcpy(others[9].details, "  Established in 2001, this EPZ,It is the 3rd largest export processing zone in Bangladesh.");



}


void saveDataToFile()
{
    FILE *file = fopen("district_data.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file for writing!\n");
        return;
    }

    fprintf(file, "DISTRICT MANAGEMENT SYSTEM DATA\n");
    fprintf(file, "================================\n\n");

    //Pabna zila
    fprintf(file, "PABNA INFORMATION:\n");
    fprintf(file, "=================:\n");
    for(int i = 0; i <=2; i++)
    {
        fprintf(file, "%d History: %s, Established: %s, Division: %s, Area: %.2f sq km, Population: %d, Literacy Rate: %.2f, Post Code: %d, Deputy Commissioner: %s , Police Super: %s\n",i+1, pabnas[i].history, pabnas[i].established, pabnas[i].division, pabnas[i].area, pabnas[i].population, pabnas[i].literacy, pabnas[i].postcode, pabnas[i].dc, pabnas[i].sp );
    }
    fprintf(file, "\n");

    // Save Upazila data
    fprintf(file, "UPAZILA INFORMATION:\n");
    fprintf(file, "====================\n");
    for (int i = 0; i < 9; i++)
    {
        fprintf(file, "%d. Name: %s, Population: %d, Area: %.2f sq km, Chairman: %s, UNO: %s\n",
                i+1, upazilas[i].name, upazilas[i].population, upazilas[i].area, upazilas[i].chairman, upazilas[i].uno, upazilas[i].unions);
    }
    fprintf(file, "\n");

    // Save Education data
    fprintf(file, "EDUCATION INSTITUTIONS:\n");
    fprintf(file, "=======================\n");
    for (int i = 0; i < 8; i++)
    {
        fprintf(file, "%d. Name: %s, Type: %s, Students: %d, Teachers: %d, Established: %d, Address: %s\n",
                i+1, education[i].name, education[i].type, education[i].students, education[i].teachers, education[i].established, education[i].address);
    }
    fprintf(file, "\n");

    // Save Healthcare data
    fprintf(file, "HEALTHCARE FACILITIES:\n");
    fprintf(file, "======================\n");
    for (int i = 0; i < 6; i++)
    {
        fprintf(file, "%d. Name: %s, Doctors: %d, Nurses: %d, Beds: %d, Services: %s\n",
                i+1, healthcare[i].name, healthcare[i].doctors, healthcare[i].nurses, healthcare[i].beds, healthcare[i].services);
    }
    fprintf(file, "\n");

    // Save Police Station data
    fprintf(file, "POLICE STATIONS:\n");
    fprintf(file, "================\n");
    for (int i = 0; i < 11; i++)
    {
        fprintf(file, "%d. Name: %s, Officers: %d, oc: %s, Contact: %s\n",
                i+1, policeStations[i].name, policeStations[i].officers, policeStations[i].oc, policeStations[i].contact);
    }
    fprintf(file, "\n");

    //save tolet data
    fprintf(file, "TO-LET INFORMAION:\n");
    fprintf(file, "=================\n");
    for (int i=0; i < 5; i++)
    {
        fprintf(file, "%d. House Name: %s, Owner: %s, Contact: %s, Location: %s\n",
                i+1, tolets[i].hname, tolets[i].owner, tolets[i].contact, tolets[i].location);
    }
    fprintf(file, "\n");

    // Save Historical Places data
    fprintf(file, "HISTORICAL PLACES:\n");
    fprintf(file, "==================\n");
    for (int i = 0; i < 6; i++)
    {
        fprintf(file, "%d. Name: %s, Era: %s, Founder: %s, Significance: %s, Location: %s\n",
                i+1, historicalPlaces[i].name, historicalPlaces[i].era,historicalPlaces[i].founder, historicalPlaces[i].significance, historicalPlaces[i].location);
    }
    fprintf(file, "\n");


    //save river data
    fprintf(file, "RIVER INFORMAION:\n");
    fprintf(file, "=================\n");
    for (int i=0; i < 5; i++)
    {
        fprintf(file, "%d. Name: %s, Area: %.2f, Address: %s\n",
                i+1, rivers[i].name, rivers[i].area, rivers[i].address);
    }
    fprintf(file, "\n");


    //save person data
    fprintf(file, "PERSON INFORMAION:\n");
    fprintf(file, "=================\n");
    for (int i=0; i < 8; i++)
    {
        fprintf(file, "%d. Name: %s, Birth: %s, Death: %s, Designation: %s, Address: %s\n",
                i+1, persons[i].name, persons[i].birth, persons[i].death, persons[i].title, persons[i].address);
    }
    fprintf(file, "\n");


    // Save Other data
    fprintf(file, "OTHER INFORMATION:\n");
    fprintf(file, "==================\n");
    for (int i = 0; i < 10; i++)
    {
        fprintf(file, "%d. Category: %s, Details: %s\n",
                i+1, others[i].category, others[i].details);
    }

    fclose(file);

}


void displayMainMenu()
{
    int choice;

    do
    {
        system("cls"); // Clear screen (for Windows)
        printf("\n           WELCOME TO PABNA ZILA\n");
        printf("          =======================\n\n");


        printf("          1. Pabna Information\n");
        printf("          2. Upazila Information\n");
        printf("          3. Education Institutions\n");
        printf("          4. Healthcare Facilities\n");
        printf("          5. Police Stations\n");
        printf("          6. To-Let Information\n");
        printf("          7. Historical Places\n");
        printf("          8. Rivers of Pabna\n");
        printf("          9. Prominent Persons\n");
        printf("          10. Other Information\n");
        printf("          0. Exit\n         ");
        printf("\n          Enter your choice: ");

        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            displayPabna();
            break;
        case 2:
            displayUpazilas();
            break;
        case 3:
            displayEducation();
            break;
        case 4:
            displayHealthcare();
            break;
        case 5:
            displayPoliceStations();
            break;
        case 6:
            displayToLets();
            break;
        case 7:
            displayHistoricalPlaces();
            break;
        case 8:
            displayRiver();
            break;
        case 9:
            displayPersons();
            break;
        case 10:
            displayOthers();
        case 0:
            printf("\n            Exiting program...\n");
            break;
        default:
            printf("\n          Invalid choice! Please try again.\n");
        }

        if (choice != 0)
        {
            printf("\n            Press any key to continue...");
            getch(); // Wait for key press
        }
    }
    while (choice != 0);
}

void displayPabna()
{
    system("cls");
    printf("\n               PABNA INFORMATION\n");
    printf("               ===================\n\n");

    for(int i = 0; i < 1; i++)
    {
        printf("          %d. History: %s\n\n", i+1, pabnas[i].history);
        printf("             Division: %s\n\n", pabnas[i].division);
        printf("             Established: %s\n\n", pabnas[i].established);
        printf("             Area: %.2f sq km\n\n", pabnas[i].area);
        printf("             Population: %d\n\n", pabnas[i].population);
        printf("             Literacy Rate: %.2f\n\n", pabnas[i].literacy);
        printf("             Post Code: %d\n\n", pabnas[i].postcode);
        printf("             Police Super: %s\n\n", pabnas[i].sp);
        printf("             Deputy Commissioner: %s\n\n", pabnas[i].dc);
    }
}

void displayUpazilas()
{
    system("cls");
    printf("\n               UPAZILA INFORMATION\n");
    printf("               ===================\n\n");

    for (int i = 0; i < 9; i++)
    {
        printf("          %d. Name: %s\n", i+1, upazilas[i].name);
        printf("             Population: %d\n", upazilas[i].population);
        printf("             Area: %.2f sq km\n", upazilas[i].area);
        printf("             Chairman: %s\n", upazilas[i].chairman);
        printf("             UNO: %s\n", upazilas[i].uno);
        printf("             Union: %s\n\n", upazilas[i].unions);

    }
}

void displayEducation()
{
    system("cls");
    printf("\n               EDUCATION INSTITUTIONS\n");
    printf("               ======================\n\n");

    for (int i = 0; i < 8; i++)
    {
        printf("          %d. Name: %s\n", i+1, education[i].name);
        printf("             Type: %s\n", education[i].type);
        printf("             Students: %d\n", education[i].students);
        printf("             Teachers: %d\n", education[i].teachers);
        printf("             Established: %d\n", education[i].established);
        printf("             Address: %s\n\n", education[i].address);
    }
}

void displayHealthcare()
{
    system("cls");
    printf("\n               HEALTHCARE FACILITIES\n");
    printf("               ====================\n\n");

    for (int i = 0; i < 6; i++)
    {
        printf("          %d. Name: %s\n", i+1, healthcare[i].name);
        printf("             Doctors: %d\n", healthcare[i].doctors);
        printf("             Nurses: %d\n", healthcare[i].nurses);
        printf("             Beds: %d\n", healthcare[i].beds);
        printf("             Services: %s\n\n", healthcare[i].services);
    }
}

void displayPoliceStations()
{
    system("cls");
    printf("\n               POLICE STATIONS\n");
    printf("               ===============\n\n");

    for (int i = 0; i < 11; i++)
    {
        printf("          %d. Name: %s\n", i+1, policeStations[i].name);
        printf("             Officers: %d\n", policeStations[i].officers);
        printf("             Contact: %s\n", policeStations[i].contact);
        printf("             Officer Incharge: %s\n\n", policeStations[i].oc);
    }
}

void displayToLets()
{
    system("cls");
    printf("\n               TO-LET INFORMATION\n");
    printf("               ==================\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("          %d. House Name: %s\n", i+1, tolets[i].hname);
        printf("             Owner: %s\n", tolets[i].owner);
        printf("             Contact: %s\n", tolets[i].contact);
        printf("             Location: %s\n\n", tolets[i].location);
    }
}

void displayHistoricalPlaces()
{
    system("cls");
    printf("\n               HISTORICAL PLACES\n");
    printf("               =================\n\n");

    for (int i = 0; i < 6; i++)
    {
        printf("          %d. Name: %s\n", i+1, historicalPlaces[i].name);
        printf("             Era: %s\n", historicalPlaces[i].era);
        printf("             Founder: %s\n", historicalPlaces[i].founder);
        printf("             Significance: %s\n", historicalPlaces[i].significance);
        printf("             Location: %s\n\n", historicalPlaces[i].location);
    }
}


void displayRiver()
{
    system("cls");
    printf("\n              RIVERS INFORMATION\n");
    printf("              ==================\n\n");

    for (int i = 0 ; i <5 ; i++)
    {
        printf("          %d. Name: %s\n", i+1, rivers[i].name);
        printf("             Area: %.2f\n", rivers[i].area);
        printf("             Address: %s\n\n", rivers[i].address);
    }
}


void displayPersons()
{
    system("cls");
    printf("\n               PERSONS INFORMATION\n");
    printf("               ==================\n\n");

    for (int i = 0 ; i <8 ; i++)
    {
        printf("          %d. Name: %s\n", i+1, persons[i].name);
        printf("             Birth: %s\n", persons[i].birth);
        printf("             Death: %s\n", persons[i].death);
        printf("             Designation: %s\n", persons[i].title);
        printf("             Address: %s\n\n", persons[i].address);
    }
}


void displayOthers()
{
    system("cls");
    printf("\n               OTHER INFORMATION\n");
    printf("               =================\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("          %d. Category: %s\n", i+1, others[i].category);
        printf("             Details: %s\n\n", others[i].details);
    }
}

