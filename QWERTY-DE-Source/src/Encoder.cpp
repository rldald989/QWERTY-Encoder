#include "EncoderDecoder.hpp"
#include <fstream>


//Encoder
int main()
{
    std::ifstream infile;
    infile.open("MsgToEncode.qwerty");
    std::string temp;
    std::string message;
    while(std::getline(infile, temp))
    {
        message.append(temp);
    }

    Encode decodedMsg(message);

    std::ofstream outfile;
    outfile.open("EncodedMsg.qwerty");
    outfile << decodedMsg.GetEncodedMsg();

    return 0;
}