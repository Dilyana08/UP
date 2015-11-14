#include <iostream>
using namespace std;

int main ()
{

 int DenDnes, MesecDnes, GodinaDnes;
 int DenRoden, MesecRoden, GodinaRoden;

 cout << " Enter a date (day, month, year): " ;
 cin >> DenDnes >> MesecDnes >> GodinaDnes;
 cout << DenDnes << " \: " << MesecDnes << " \: " << GodinaDnes << endl;


 cout << " Enter the date of birth (day, month, year): " ;
 cin >> DenRoden >> MesecRoden >> GodinaRoden;
 cout << DenRoden << " \: " << MesecRoden << " \: " << GodinaRoden << endl;


    if ((MesecDnes <= 0) || (MesecDnes >= 13) || (MesecRoden <= 0) || (MesecRoden >= 13))
        {
        cout << " Error in the month! " << endl;
        }

    else
    {

        if ((MesecDnes > 0) || (MesecDnes < 13) || (MesecRoden > 0) || (MesecRoden < 13))
        {
            if (GodinaDnes < GodinaRoden)
            {
            cout << " Error in the year! " << endl;
            }

            if (GodinaDnes >= GodinaRoden)
            {

                if (DenDnes > DenRoden)
                {

                    if  (MesecDnes < MesecRoden)
                    {
                    cout << " Chovekat e na " << ((GodinaDnes - GodinaRoden) - 1) << " godini." << endl;
                    cout << " Chovekat e na " << (12 - (MesecRoden - MesecDnes)) << " meseca." << endl;
                    cout << " Chovekat e na " << (DenDnes - DenRoden) << " dni." << endl;
                    }

                    if (MesecDnes > MesecRoden)
                    {
                    cout << " Chovekat e na " << (GodinaDnes - GodinaRoden) << " godini." << endl;
                    cout << " Chovekat e na " << (MesecDnes - MesecRoden) << " meseca." << endl;
                    cout << " Chovekat e na " << (DenDnes - DenRoden) << " dni." << endl;
                    }
                 }

                if (DenDnes < DenRoden)
                {
                    if  (MesecDnes < MesecRoden)
                    {
                    cout << " Chovekat e na " << ((GodinaDnes - GodinaRoden) - 1) << " godini." << endl;
                    cout << " Chovekat e na " << (12 - (MesecRoden - MesecDnes)- 1) << " meseca." << endl;

                    if ((MesecDnes == 1) || (MesecDnes == 2) || (MesecDnes == 4) || (MesecDnes == 6) || (MesecDnes == 8) || (MesecDnes == 9) || (MesecDnes == 11))
                    {
                    cout << " Chovekat e na " << (31 - (DenRoden - DenDnes)) << " dni." << endl;
                    }

                    if ((MesecDnes == 5) || (MesecDnes == 7) || (MesecDnes == 10) || (MesecDnes == 12))
                    {
                    cout << " Chovekat e na " << (30 - (DenRoden - DenDnes)) << " dni." << endl;
                    }

                    if (MesecDnes == 3)
                    {
                        if ((GodinaDnes%4==0) && (GodinaDnes%100!=0))
                        {
                        cout << " Chovekat e na " << (29 - (DenRoden - DenDnes)) << " dni." << endl;
                        }

                        else
                        {
                        cout << " Chovekat e na " << (28 - (DenRoden - DenDnes)) << " dni." << endl;
                        }
                    }
                    }


                    if (MesecDnes > MesecRoden)
                    {
                    cout << " Chovekat e na " << (GodinaDnes - GodinaRoden) << " godini." << endl;
                    cout << " Chovekat e na " << ((MesecDnes - MesecRoden) - 1) << " meseca." << endl;

                        if ((MesecDnes == 1) || (MesecDnes == 2) || (MesecDnes == 4) || (MesecDnes == 6) || (MesecDnes == 8) || (MesecDnes == 9) || (MesecDnes == 11))
                        {
                        cout << " Chovekat e na " << (31 - (DenRoden - DenDnes)) << " dni." << endl;
                        }

                        if ((MesecDnes == 5) || (MesecDnes == 7) || (MesecDnes == 10) || (MesecDnes == 12))
                        {
                        cout << " Chovekat e na " << (30 - (DenRoden - DenDnes)) << " dni." << endl;
                        }

                        if (MesecDnes == 3)
                        {
                            if ((GodinaDnes%4==0) && (GodinaDnes%100!=0))
                            {
                            cout << " Chovekat e na " << (29 - (DenRoden - DenDnes)) << " dni." << endl;
                            }

                            else
                            {
                            cout << " Chovekat e na " << (28 - (DenRoden - DenDnes)) << " dni." << endl;
                            }
                        }
                    }
            }
        }
        }
    }

return 0;
 }





