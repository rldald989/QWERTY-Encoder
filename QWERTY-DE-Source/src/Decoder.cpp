#include "EncoderDecoder.hpp"
#include <fstream>


//Decoder
int main()
{
    std::ifstream infile;
    infile.open("EncodedMsg.qwerty");
    std::string temp;
    std::string message;
    while(std::getline(infile, temp))
    {
        message.append(temp);
    }

    Decode decodedMsg(message);

    std::ofstream outfile;
    outfile.open("DecodedMsg.qwerty");
    outfile << decodedMsg.GetDecodedMsg();

    return 0;
}