#include <iostream>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Applicant
{
  public:
     string name;
     string lastName;
     string dateOfBirth;
     string city;
     string email;

     Applicant (string applicantName, string applicantLastName, string applicantDateOfBirth, string applicantCity,
             string applicantEmail)
             {
                 name = applicantName;
                 lastName = applicantLastName;
                 dateOfBirth = applicantDateOfBirth;
                 city = applicantCity;
                 email = applicantEmail;
             }
};

class JobExperience
{
  public:
      string company;
      string period;
      string position;
      string responsibilities;

      JobExperience(string companyName, string periodWorkedThere,
                    string positionOcupied, string mainResponsibilities)
                    {
                        company = companyName;
                        period = periodWorkedThere;
                        position = positionOcupied;
                        responsibilities = mainResponsibilities;
                    }
};

class Education
{
  public:
      string school;
      string educationPeriod;
      string specialty;
      string subjectStudied;

      Education(string applicantSchool, string periodStudiedThere,
                    string applicantSpecialty, string applicantSubjectStudied)
                    {
                        school = applicantSchool;
                        educationPeriod = periodStudiedThere;
                        specialty = applicantSpecialty;
                        subjectStudied = applicantSubjectStudied;
                    }
};

class Languages
{
  public:
      string language;
      string listenning;
      string reading;
      string conversationParticipation;
      string oralPresentation;
      string writing;

      Languages(string applicantLanguage, string applicantListenning,
                string applicantReading, string applicantConversationParticipation,
                string applicantOralPresentation, string applicantWriting)
                    {
                       language = applicantLanguage;
                       listenning = applicantListenning;
                       reading = applicantReading;
                       conversationParticipation = applicantConversationParticipation;
                       oralPresentation = applicantOralPresentation;
                       writing = applicantWriting;
                    }
};

class SoftwareSkills
{
  public:
      string softwareName;
      string levelOfProficiency;

      SoftwareSkills(string availableSoftwareName, string applicantLevelOfProficiency)
                    {
                       softwareName = availableSoftwareName;
                       levelOfProficiency = applicantLevelOfProficiency;
                    }
};

void printApplicantInfo(Applicant applicant)
{
    cout <<"Name: " << applicant.name << endl;
    cout <<"Last name: " << applicant.lastName << endl;
    cout <<"Date of birth: " << applicant.dateOfBirth << endl;
    cout <<"City: " << applicant.city << endl;
    cout << "E-mail: " << applicant.email <<endl;
}

void printJobExperience(JobExperience jobExperience)
{
    cout << "Company name: " << jobExperience.company << endl;
    cout << "Period worked there: " << jobExperience.period << endl;
    cout << "Position occupied: " << jobExperience.position << endl;
    cout << "Main responsibilities: " << jobExperience.responsibilities << endl;
}

void printEducation(Education education)
{
    cout << "School name: " << education.school << endl;
    cout << "Period studied there: " << education.educationPeriod << endl;
    cout << "Specialty: " << education.specialty << endl;
    cout << "Subjects studied there: " << education.subjectStudied << endl;
}

void printLanguages(Languages languages)
{
    cout << "Language: " << languages.language << endl;
    cout << "Listening: " << languages.listenning << endl;
    cout << "Reading: " << languages.reading << endl;
    cout << "Conversation participation: " << languages.conversationParticipation << endl;
    cout << "Oral representation: " << languages.oralPresentation << endl;
    cout << "Writing: " << languages.writing << endl;
}

void printProgrammingLanguages(Languages languages)
{
    cout << "Language: " << languages.language << endl;
    cout << "Reading: " << languages.reading << endl;
    cout << "Writing: " << languages.writing << endl;
}

void printSoftwareSkills (SoftwareSkills softwareSkills)
{
    cout << "Software name: " << softwareSkills.softwareName << endl;
    cout << "Level of proficiency: " << softwareSkills.levelOfProficiency << endl;
}

int main()
{
  cout << endl;
  Applicant Johny ("Yordan", "Yanakiev", "21.03.1988", "Plovdiv", "jordan.yanakiev@gmail.com");
  cout << "============= Applicant General Info =====================" << endl;
  cout << endl;
  printApplicantInfo(Johny);
  cout << endl;

  cout << "============= Applicant Job Experience ===================" << endl;
  cout << endl;
  JobExperience agria ("AGRIA AD", "04.01.2017 - present", "Automation Mechanic", "Eliminates accidents with the machines and the automated equipment");
  printJobExperience(agria);
  cout << endl;
  JobExperience sixtyK ("60K", "June.2016 - January.2017", "Technical support agent", "Provide support for broadband and landline");
  printJobExperience(sixtyK);
  cout << endl;
  JobExperience nik47 ("NIK 47", "02.2016 - 2010", "CNC milling machine operator", "Create main program for the machine, measure the parameters of the pieces");
  printJobExperience(nik47);
  cout << endl;

  cout << "============= Applicant Education ========================" << endl;
  cout << endl;
  Education technicalUniversity ("Technical University - Gabrovo", "2016 - 2012", "Automation", "PLC & Microcontrolers programming");
  printEducation(technicalUniversity);
  cout << endl;
  Education mechanicalSchool ("Mechanical School - Plovdiv", "2007 - 2003", "Programmer – setter of CNC machines", "Programming of CNC turning and milling machines");
  printEducation(mechanicalSchool);
  cout << endl;

  cout << "============= Applicant Languages ========================" << endl;
  cout << endl;
  Languages english ("English", "C1", "C1", "C1", "C1", "B2");
  printLanguages(english);
  cout << endl;
  Languages c ("C/C++", "0", "B2", "0", "0", "B2");
  printProgrammingLanguages(c);
  cout << endl;

  cout << "============= Applicant Software Skills ==================" << endl;
  cout << endl;
  SoftwareSkills solidWorks ("Solid Works", "Basic");
  printSoftwareSkills(solidWorks);
  cout << endl;
  SoftwareSkills visualStudio ("Visual Studio", "Basic level of proficiency");
  printSoftwareSkills(visualStudio);
  cout << endl;
  SoftwareSkills codeBlocks ("Code::Blocks", "Basic level of proficiency");
  printSoftwareSkills(codeBlocks);
  cout << endl;
  SoftwareSkills oop ("Object oriented programming", "Basic level of proficiency");
  printSoftwareSkills(oop);
  cout << endl;
  //Little bid more information not included in any class
  cout << "Personal skills: " << "Willing to learn new things, fast learner, great teamwork." << endl;
  cout << "Driving license: category B" << endl;
  cout << endl;
 return 0;
}
