#include <iostream>

int main()
{
    short int a;
    std::cout << " Input number " ;
    std::cin >> a;
    if(a<1)
        std::cout<<" Wrong number!!!";
    else
    {
        switch(a/1000)
        {
            case 1:
                std::cout << "M";
                break;
            case 2:
                std::cout << "MM";
                break;
            case 3:
                std::cout << "MMM";
                break;
            default:
                {
                    switch(a/100000)
                    {
                        case 1:
                            std::cout << "C";
                            break;
                        case 2:
                            std::cout <<"CC";
                            break;
                        case 3:
                            std::cout <<"CCC";
                            break;
                        case 4:
                            std::cout <<"CD";
                            break;
                        case 5:
                            std::cout <<"D";
                            break;
                        case 6:
                            std::cout <<"DC";
                            break;
                        case 7:
                            std::cout <<"DCC";
                            break;
                        case 8:
                            std::cout <<"DCCC";
                            break;
                        case 9:
                            std::cout <<"CM";
                            break;
                    }
                    switch(a/10000)
                    {
                        case 1:
                            std::cout <<"X";
                            break;
                        case 2:
                            std::cout <<"XX";
                            break;
                        case 3:
                            std::cout <<"XXX";
                            break;
                        case 4:
                            std::cout <<"XL";
                            break;
                        case 5:
                            std::cout <<"L";
                            break;
                        case 6:
                            std::cout <<"LX";
                            break;
                        case 7:
                            std::cout <<"LXX";
                            break;
                        case 8:
                            std::cout <<"LXXX";
                            break;
                        case 9:
                            std::cout <<"LC";
                            break;
                    }
                    switch(a/1000%10)
                    {
                        case 1:
                            std::cout <<"I";
                            break;
                        case 2:
                            std::cout <<"II";
                            break;
                        case 3:
                            std::cout <<"III";
                            break;
                        case 4:
                            std::cout <<"IV";
                            break;
                        case 5:
                            std::cout <<"V";
                            break;
                        case 6:
                            std::cout <<"VI";
                            break;
                        case 7:
                            std::cout <<"VII";
                            break;
                        case 8:
                            std::cout <<"VIII";
                            break;
                        case 9:
                            std::cout <<"IX";
                            break;
                    }
                }
                break;
        }
        switch(a%1000 / 100)
        {
            case 1:
                std::cout << "C";
                break;
            case 2:
                std::cout <<"CC";
                break;
            case 3:
                std::cout <<"CCC";
                break;
            case 4:
                std::cout <<"CD";
                break;
            case 5:
                std::cout <<"D";
                break;
            case 6:
                std::cout <<"DC";
                break;
            case 7:
                std::cout <<"DCC";
                break;
            case 8:
                std::cout <<"DCCC";
                break;
            case 9:
                std::cout <<"CM";
                break;
        }
        switch(a%100 / 10)
        {
            case 1:
                std::cout <<"X";
                break;
            case 2:
                std::cout <<"XX";
                break;
            case 3:
                std::cout <<"XXX";
                break;
            case 4:
                std::cout <<"XL";
                break;
            case 5:
                std::cout <<"L";
                break;
            case 6:
                std::cout <<"LX";
                break;
            case 7:
                std::cout <<"LXX";
                break;
            case 8:
                std::cout <<"LXXX";
                break;
            case 9:
                std::cout <<"LC";
                break;
        }
        switch(a%10)
        {
            case 1:
                std::cout <<"I";
                break;
            case 2:
                std::cout <<"II";
                break;
            case 3:
                std::cout <<"III";
                break;
            case 4:
                std::cout <<"IV";
                break;
            case 5:
                std::cout <<"V";
                break;
            case 6:
                std::cout <<"VI";
                break;
            case 7:
                std::cout <<"VII";
                break;
            case 8:
                std::cout <<"VIII";
                break;
            case 9:
                std::cout <<"IX";
                break;
        }
    }
    return 0;
}
