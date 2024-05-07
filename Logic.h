#include <fstream> 
#include <string>
class Logic{
  public:
  
    static std::string LoadText() {
        std::string toReturn;
        std::ifstream iFile("Story.txt");
        if (iFile.is_open()) {
            std::string line;
            while (std::getline(iFile, line)) {
                toReturn += line;
                toReturn += "\n";
            }
            iFile.close();
        }   
    return toReturn;
}
    
};