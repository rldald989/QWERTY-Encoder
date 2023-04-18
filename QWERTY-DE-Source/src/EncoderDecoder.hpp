#pragma once

#include <iostream>
#include <string>

class Encode
{
private:
    std::string m_encodedMsg;
public:
    Encode(std::string msgToEncode)
    {
        std::string encodedMsg = " ";

        char c = ' ';

        for(int i = 0; i < msgToEncode.size(); i++)
        {
            c = msgToEncode[i];
            switch (c)
            {
            case 'a' /* constant-expression */:
                encodedMsg += "q";
                break;
            case 'b' /* constant-expression */:
                encodedMsg += "w";
                break;
            case 'c' /* constant-expression */:
                encodedMsg += "e";
                break;
            case 'd' /* constant-expression */:
                encodedMsg += "r";
                break;
            case 'e' /* constant-expression */:
                encodedMsg += "t";
                break;
            case 'f' /* constant-expression */:
                encodedMsg += "y";
                break;
            case 'g' /* constant-expression */:
                encodedMsg += "u";
                break;
            case 'h' /* constant-expression */:
                encodedMsg += "i";
                break;
            case 'i' /* constant-expression */:
                encodedMsg += "o";
                break;
            case 'j' /* constant-expression */:
                encodedMsg += "p";
                break;
            case 'k' /* constant-expression */:
                encodedMsg += "a";
                break;
            case 'l' /* constant-expression */:
                encodedMsg += "s";
                break;
            case 'm' /* constant-expression */:
                encodedMsg += "d";
                break;
            case 'n' /* constant-expression */:
                encodedMsg += "f";
                break;
            case 'o' /* constant-expression */:
                encodedMsg += "g";
                break;
            case 'p' /* constant-expression */:
                encodedMsg += "h";
                break;
            case 'q' /* constant-expression */:
                encodedMsg += "j";
                break;
            case 'r' /* constant-expression */:
                encodedMsg += "k";
                break;
            case 's' /* constant-expression */:
                encodedMsg += "l";
                break;
            case 't' /* constant-expression */:
                encodedMsg += "z";
                break;
            case 'u' /* constant-expression */:
                encodedMsg += "x";
                break;
            case 'v' /* constant-expression */:
                encodedMsg += "c";
                break;
            case 'w' /* constant-expression */:
                encodedMsg += "v";
                break;
            case 'x' /* constant-expression */:
                encodedMsg += "b";
                break;
            case 'y' /* constant-expression */:
                encodedMsg += "n";
                break;
            case 'z' /* constant-expression */:
                encodedMsg += "m";
                break;
            case ' ' /* constant-expression */:
                encodedMsg += " ";
                break;
            default:
                break;
            }
        }

        m_encodedMsg = encodedMsg;
    }
    ~Encode(){}

    std::string GetEncodedMsg()
    {
        return m_encodedMsg;
    }
};

class Decode
{
private:
    std::string m_decodedMsg;
public:
    Decode(std::string msgToDecode)
    {
        std::string encodedMsg = " ";

        char c = ' ';

        for(int i = 0; i < msgToDecode.size(); i++)
        {
            c = msgToDecode[i];
            switch (c)
            {
            case 'q' /* constant-expression */:
                encodedMsg += "a";
                break;
            case 'w' /* constant-expression */:
                encodedMsg += "b";
                break;
            case 'e' /* constant-expression */:
                encodedMsg += "c";
                break;
            case 'r' /* constant-expression */:
                encodedMsg += "d";
                break;
            case 't' /* constant-expression */:
                encodedMsg += "e";
                break;
            case 'y' /* constant-expression */:
                encodedMsg += "f";
                break;
            case 'u' /* constant-expression */:
                encodedMsg += "g";
                break;
            case 'i' /* constant-expression */:
                encodedMsg += "h";
                break;
            case 'o' /* constant-expression */:
                encodedMsg += "i";
                break;
            case 'p' /* constant-expression */:
                encodedMsg += "j";
                break;
            case 'a' /* constant-expression */:
                encodedMsg += "k";
                break;
            case 's' /* constant-expression */:
                encodedMsg += "l";
                break;
            case 'd' /* constant-expression */:
                encodedMsg += "m";
                break;
            case 'f' /* constant-expression */:
                encodedMsg += "n";
                break;
            case 'g' /* constant-expression */:
                encodedMsg += "o";
                break;
            case 'h' /* constant-expression */:
                encodedMsg += "p";
                break;
            case 'j' /* constant-expression */:
                encodedMsg += "q";
                break;
            case 'k' /* constant-expression */:
                encodedMsg += "r";
                break;
            case 'l' /* constant-expression */:
                encodedMsg += "s";
                break;
            case 'z' /* constant-expression */:
                encodedMsg += "t";
                break;
            case 'x' /* constant-expression */:
                encodedMsg += "u";
                break;
            case 'c' /* constant-expression */:
                encodedMsg += "v";
                break;
            case 'v' /* constant-expression */:
                encodedMsg += "w";
                break;
            case 'b' /* constant-expression */:
                encodedMsg += "x";
                break;
            case 'n' /* constant-expression */:
                encodedMsg += "y";
                break;
            case 'm' /* constant-expression */:
                encodedMsg += "z";
                break;
            case ' ' /* constant-expression */:
                encodedMsg += " ";
                break;
            default:
                break;
            }
        }

        m_decodedMsg = encodedMsg;
    }
    ~Decode(){}

    std::string GetDecodedMsg()
    {
        return m_decodedMsg;
    }
};