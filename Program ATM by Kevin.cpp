#include <iostream>
#include <string>
using namespace std;

void Pilihan1(),Pilihan2(),program_norek(),btmenu(),program_tf(),saldo(),saldoa(),pilopsi1(),falsepinforbanklain(),iftfsaldo(),sisasaldo(),logout(),isilogout(),ikjatd(),upjps();
   	 const int jumdat=1000;
	 int jwb1,f,pilnor,i=0,a,b,intsaldo0,intsaldo1,intsaldo2,intsaldo3,c,intsaldo4,tf,pilbank,norekbanklain,tfotherbank,jwb4,piltarik,jumlahtarik,jwb5;
    int intsaldo[1000];
		string data_ATM[jumdat][5];
	    char jwb2,jwb3,jwb6;
	    string norek1[10],norek2,pin10,pin1;
	    bool pwbenar = false;
	    
	

int main (){
	cout << "++ ============================================================================ ++" << endl;
	cout << "==                             Program ATM by Kevin                             ==" << endl;
	cout << "++ ============================================================================ ++" << endl;
	cout << endl;
	cout << "Silahkan pilih menu dibawah ini" << endl;
	cout << "1.Sign up (daftar)" << endl;
	cout << "2.Sign in (jika sudah mempunyai akun)" << endl;
	cout << "3.Keluar program" << endl;
	cout << endl;
	cin >> jwb1;
	
	system("cls");
	
	switch(jwb1){
		case 1:
				Pilihan1();
				break;
		case 2:
				cout << "Maaf, belum ada data yang di input." << endl;
				break;
		case 3:
			 	cout << "Baiklah." << endl;
			 	break;
		default:
				cout << "input error" << endl;
	}
	

	return 0;
}


void Pilihan1(){
		while(jwb2!='t' && i<=4){
		cout << "Data ke- " << i+1 << endl;
		cout << "*Maksimal hanya dapat memasukkan data sebanyak 5." << endl;
		cout << endl;
		cout << "1.Masukkan nama anda : ";
		cin >> data_ATM[i][0];
		cout << "2.Masukkan No.Rekening : ";
		cin >> data_ATM[i][1];
		cout << "3.Buat pin yang mudah anda ingat : ";
		cin >> data_ATM[i][2];
		cout << "Saldo yang diinginkan : ";
		if(i==0){
			cin >> intsaldo[0];
		}
		else if(i==1){
			cin >> intsaldo[1];
		}
		else if(i==2){
			cin  >> intsaldo[2];
		}
		else if(i==3){
			cin >> intsaldo[3];
		}
		else if(i==4){
			cin >> intsaldo[4];
		}
		i++;
		
		cout << "Apakah anda ingin membuat data lagi? (y/t)" << endl;
		cin >> jwb2;
	}
	
	system("cls");
	if(i>4){
		cout << "Data yang anda masukkan sudah mencapai maksimum." << endl;
	}
	cout << "++ ============================================================================ ++" << endl;
	cout << "==                             Program ATM by Kevin                             ==" << endl;
	cout << "++ ============================================================================ ++" << endl;
	cout << endl;
	cout << "Masukkan No.Rekening anda : ";
	c=0;
	cin >> norek1[c];
		if(norek1[c]==data_ATM[0][1]){
			a=0;
		}
		else if(norek1[c]==data_ATM[1][1]){
			a=1;
		}
		else if(norek1[c]==data_ATM[2][1]){
			a=2;
		}
		else if(norek1[c]==data_ATM[3][1]){
			a=3;
		}
		else if(norek1[c]==data_ATM[4][1]){
			a=4;
		}
	    if(norek1[c]==data_ATM[a][1]){
			string pin1;
			cout << "Masukkan pin anda : ";
			cin >> pin1;
			system("cls");
        	if(pin1==data_ATM[a][2]){
        		//jika pin yang dimasukkan benar dan no. rek nya benar
        		cout << "Selamat datang, " << data_ATM[a][0] << " ! " << endl;
        		cout << endl;
        		cout << endl;
				cout << "Silahkan pilih salah satu dari opsi dibawah ini :" << endl;
				cout << endl;
				cout << "1.Informasi saldo" << endl;
				cout << "2.Ganti pin" << endl;
				cout << "3.Tranfer" << endl;
				cout << "4.Tarik Tunai" << endl;
				cout << "5.Log out dari akun ini" << endl;
				cout << endl;
				cin >> pilnor;
				system("cls");
				if(pilnor==1){
					system("cls");
						cout << "++ ============================================================================ ++" << endl;
						cout << "==                                  Saldo                                       ==" << endl;
						cout << "++ ============================================================================ ++" << endl;
					if(a==0){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[0]; 
					}
					else if(a==1){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[1]; 	
					}
					else if(a==2){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[2]; 
					}
					else if(a==3){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[3]; 
					}
					else if(a==4){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[4]; 
					}
					cout << endl;
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
					cin >> jwb3;
					if(jwb3=='t'){
						cout << "Terimakasih telah mengunjungi ATM ini!";
					}
					else if(jwb3=='y'){
					 system("cls");
					 btmenu();
				}
					else{
			    	//lakukan fungsi
					}
				}
				else if(pilnor==2){
					system("cls");
					cout << "++ ============================================================================ ++" << endl;
					cout << "==                             Ganti Password                                   ==" << endl;
					cout << "++ ============================================================================ ++" << endl;
					cout << "Silahkan buat password yang mudah diingat." << endl;
					cin >> data_ATM[a][2];
					cout << "Password baru sekarang adalah " << data_ATM[a][2] << endl;
					cout << endl;
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
					cin >> jwb3;
					if(jwb3=='t'){
						cout << "Terimakasih telah mengunjungi ATM ini!";
					}
					else if(jwb3=='y'){
						system("cls");
				   	 btmenu();
					}
					else{
			    	//lakukan fungsi
					}
				  }
				  
				else if(pilnor==3){
					system("cls");
					cout << "++ ============================================================================ ++" << endl;
					cout << "==                                 Transfer                                     ==" << endl;
					cout << "++ ============================================================================ ++" << endl;
					cout << "Ingin transfer ke :" << endl;
					cout << "1.Bank ini" << endl;
					cout << "2.Bank lain" << endl;
					cin >> pilbank;
					system("cls");
				if (pilbank==1){
					cout << "Tolong masukkan no. rekening yang anda tuju." << endl;
					cout << endl;
					cin >> norek2;
					if(norek2==data_ATM[0][1]){
					b=0;
						}
					else if(norek2==data_ATM[1][1]){
					b=1;
					}
					else if(norek2==data_ATM[2][1]){
					b=2;
					}
					else if(norek2==data_ATM[3][1]){
					b=3;
					}
					else if(norek2==data_ATM[4][1]){
					b=4;
}
					if(norek2==data_ATM[b][1]){
						cout << endl;
						cout << "Masukkan nominal yang ingin anda transfer: ";
						cin >> tf;
						cout << "Silahkan masukkan pin anda untuk konfirmasi lebih lanjut." << endl;
						cin >> pin1;
						if(norek1[c]==data_ATM[0][1]){
	   	 				if(tf<=intsaldo[0]){
							if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[0]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[0] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo0){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek1[c]!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}	
		}
		else if(norek1[c]==data_ATM[1][1]){
			if(tf<=intsaldo[1]){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[1]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[1] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo1){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek2!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}
		else if(norek1[c]==data_ATM[2][1]){
			if(tf<=intsaldo[2]){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[2]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[2] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								 btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo2){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek2!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}
		else if(norek1[c]==data_ATM[3][1]){
			if(tf<=intsaldo[3]){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[3]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[3] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								 btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo3){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek1[c]!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}
		else if(norek1[c]==data_ATM[4][1]){
			if(tf<=intsaldo[4]){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[4]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[4] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo4){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek1[c]!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}}
						}
		else if (pilbank==2){
			cout << "Masukkan no.rekening yang anda tuju : ";
			cin >> norekbanklain;
			cout << "Masukkan pin anda : ";
			cin >> pin1;
			if  (pin1==data_ATM[a][2]){
				//jika pin benar
				cout << "*Akan dikurangi sebesar 5% dari jumlah transfer*" << endl;
				cout << "Masukkan nominal yang ingin anda transfer : ";
				cin >> tfotherbank;
				if (tfotherbank<=intsaldo[0]){
						intsaldo[0]-=tfotherbank-0.05*tfotherbank;
						cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
						cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[0] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
			 		else if (tfotherbank<=intsaldo[1]){
			 			intsaldo[1]-=tfotherbank-0.05*tfotherbank;
			 			cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
			 			cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[1] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
					else if (tfotherbank<=intsaldo[2]){
						intsaldo[2]-=tfotherbank-0.05*tfotherbank;
						cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
						cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[2] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
					else if (tfotherbank<=intsaldo[3]){
						intsaldo[3]-=tfotherbank-0.05*tfotherbank;
						cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
						cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[3] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								 btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
					else if (tfotherbank<=intsaldo[4]){
						intsaldo[4]-=tfotherbank-0.05*tfotherbank;
						cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
						cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[4] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
				}
				else if(pin1!=data_ATM[a][2]){
					cout << "Pin yang anda masukkan salah." << endl;
					cout << "Apakah anda ingin mengulang pin (y) atau ingin keluar ke menu(t)" << endl;
					cin >> jwb4;
					if (jwb4=='y'){
						falsepinforbanklain();
					}
					else if (jwb4=='t'){
						system("cls");
						btmenu();
					}
				}
						
				}
				    }
			else if(pilnor==4){
				system("cls");
					cout << "++ ============================================================================ ++" << endl;
					cout << "==                               Tarik Tunai                                    ==" << endl;
					cout << "++ ============================================================================ ++" << endl;
				cout << endl;
				cout << "Silahkan pilih jumlah nominal yang ingin anda tarik :" << endl;
				cout << "1. Rp. 50.000,00" << endl;
				cout << "2. Rp. 100.000,00" << endl;
				cout << "3. Rp. 150.000,00" << endl;
				cout << "4. Rp. 200.000,00" << endl;
				cout << "5. Rp. 250.000,00" << endl;
				cout << "6. Rp. 300.000,00" << endl;
				cout << "7. Rp. 350.000,00" << endl;
				cout << "8. Rp. 400.000,00" << endl;
				cout << "9. Rp. 450.000,00" << endl;
				cout << "10. Rp. 500.000,00" << endl;
				cout << endl;
				cin >> piltarik;
				if (piltarik==1){
					jumlahtarik=50000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << endl;
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==2){
					jumlahtarik=100000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==3){
					jumlahtarik=150000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==4){
					jumlahtarik=200000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==5){
					jumlahtarik=250000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==6){
					jumlahtarik=300000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==7){
					jumlahtarik=350000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==8){
					jumlahtarik=400000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==9){
					jumlahtarik=450000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==10){
					jumlahtarik=500000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				
				
			}
			else if(pilnor==5){
				logout();
			}
			
				}
		else if (pin1!=data_ATM[a][2]){
			upjps();
		}
			}
		else if (norek1[c]!=data_ATM[a][1]){
			cout << "Maaf, data tidak valid.";
			cout << "Input kembali (y) atau keluar dari ATM (t)" << endl;
			cin >> jwb6;
			if (jwb6=='y'){
				system("cls");
				ikjatd();
			}
		}
}
	


void btmenu(){
	    	cout << "++ ============================================================================ ++" << endl;
			cout << "==                             Program ATM by Kevin                             ==" << endl;
			cout << "++ ============================================================================ ++" << endl;
			    cout << "Selamat datang, " << data_ATM[a][0] << " ! " << endl;
        		cout << endl;
        		cout << endl;
				cout << "Silahkan pilih salah satu dari opsi dibawah ini :" << endl;
				cout << endl;
				cout << "1.Informasi saldo" << endl;
				cout << "2.Ganti pin" << endl;
				cout << "3.Tranfer" << endl;
				cout << "4.Tarik Tunai" << endl;
				cout << "5.Log out dari akun ini" << endl;
				cout << endl;
				cin >> pilnor;
				system("cls");
				if(pilnor==1){
					system("cls");
					cout << "++ ============================================================================ ++" << endl;
					cout << "==                                  Saldo                                       ==" << endl;
					cout << "++ ============================================================================ ++" << endl;
					if(a==0){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[0]; 
					}
					else if(a==1){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[1]; 	
					}
					else if(a==2){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[2]; 
					}
					else if(a==3){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[3]; 
					}
					else if(a==4){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[4]; 
					}
					cout << endl;
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
					cin >> jwb3;
					if(jwb3=='t'){
						cout << "Terimakasih telah mengunjungi ATM ini!";
					}
					else if(jwb3=='y'){
						system("cls");
					btmenu();
					}
					else{
			    	//lakukan fungsi
					}
				}
				else if(pilnor==2){
					system("cls");
					cout << "++ ============================================================================ ++" << endl;
					cout << "==                             Ganti Password                                   ==" << endl;
					cout << "++ ============================================================================ ++" << endl;
					cout << "Silahkan buat password yang mudah diingat." << endl;
					cin >> data_ATM[a][2];
					cout << "Password baru sekarang adalah " << data_ATM[a][2] << endl;
					cout << endl;
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
					cin >> jwb3;
					if(jwb3=='t'){
						cout << "Terimakasih telah mengunjungi ATM ini!";
					}
					else if(jwb3=='y'){
						system("cls");
					btmenu();
					}
					else{
			    	//lakukan fungsi
					}
				  }
				  
				else if(pilnor==3){
					system("cls");
					cout << "++ ============================================================================ ++" << endl;
					cout << "==                                 Transfer                                     ==" << endl;
					cout << "++ ============================================================================ ++" << endl;
					cout << "Ingin transfer ke :" << endl;
					cout << "1.Bank ini" << endl;
					cout << "2.Bank lain" << endl;
					cin >> pilbank;
					system("cls");
				if (pilbank==1){
					cout << "Tolong masukkan no. rekening yang anda tuju." << endl;
					cout << endl;
					cin >> norek2;
					if(norek2==data_ATM[0][1]){
					b=0;
						}
					else if(norek2==data_ATM[1][1]){
					b=1;
					}
					else if(norek2==data_ATM[2][1]){
					b=2;
					}
					else if(norek2==data_ATM[3][1]){
					b=3;
					}
					else if(norek2==data_ATM[4][1]){
					b=4;
}
					if(norek2==data_ATM[b][1]){
						cout << endl;
						cout << "Masukkan nominal yang ingin anda transfer: ";
						cin >> tf;
						cout << "Silahkan masukkan pin anda untuk konfirmasi lebih lanjut." << endl;
						cin >> pin1;
						if(norek1[c]==data_ATM[0][1]){
	   	 				if(tf<=intsaldo[0]){
							if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[0]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[0] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo0){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek1[c]!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}	
		}
		else if(norek1[c]==data_ATM[1][1]){
			if(tf<=intsaldo[1]){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[1]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[1] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo1){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek2!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}
		else if(norek1[c]==data_ATM[2][1]){
			if(tf<=intsaldo[2]){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[2]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[2] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo2){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek2!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}
		else if(norek1[c]==data_ATM[3][1]){
			if(tf<=intsaldo[3]){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[3]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[3] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo3){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek1[c]!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}
		else if(norek1[c]==data_ATM[4][1]){
			if(tf<=intsaldo[4]){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[4]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[4] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo4){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek1[c]!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}}
						}
		else if (pilbank==2){
			cout << "Masukkan no.rekening yang anda tuju : ";
			cin >> norekbanklain;
			cout << "Masukkan pin anda : ";
			cin >> pin1;
			if  (pin1==data_ATM[a][2]){
				//jika pin benar
				cout << "*Akan dikurangi sebesar 5% dari jumlah transfer*" << endl;
				cout << "Masukkan nominal yang ingin anda transfer : ";
				cin >> tfotherbank;
				if (tfotherbank<=intsaldo[0]){
						intsaldo[0]-=tfotherbank-0.05*tfotherbank;
						cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
						cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[0] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
			 		else if (tfotherbank<=intsaldo[1]){
			 			intsaldo[1]-=tfotherbank-0.05*tfotherbank;
			 			cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
			 			cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[1] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
					else if (tfotherbank<=intsaldo[2]){
						intsaldo[2]-=tfotherbank-0.05*tfotherbank;
						cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
						cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[2] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
					else if (tfotherbank<=intsaldo[3]){
						intsaldo[3]-=tfotherbank-0.05*tfotherbank;
						cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
						cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[3] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								 btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
					else if (tfotherbank<=intsaldo[4]){
						intsaldo[4]-=tfotherbank-0.05*tfotherbank;
						cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
						cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[4] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
				}
				else if(pin1!=data_ATM[a][2]){
					cout << "Pin yang anda masukkan salah." << endl;
					cout << "Apakah anda ingin mengulang pin (y) atau ingin keluar ke menu(t)" << endl;
					cin >> jwb4;
					if (jwb4=='y'){
				 		falsepinforbanklain();
					}
					else if (jwb4=='t'){
						system("cls");
						btmenu();
					}
				}
						
				}
				    }
			else if(pilnor==4){
			system("cls");
					cout << "++ ============================================================================ ++" << endl;
					cout << "==                               Tarik Tunai                                    ==" << endl;
					cout << "++ ============================================================================ ++" << endl;
				cout << endl;
				cout << "Silahkan pilih jumlah nominal yang ingin anda tarik :" << endl;
				cout << "1. Rp. 50.000,00" << endl;
				cout << "2. Rp. 100.000,00" << endl;
				cout << "3. Rp. 150.000,00" << endl;
				cout << "4. Rp. 200.000,00" << endl;
				cout << "5. Rp. 250.000,00" << endl;
				cout << "6. Rp. 300.000,00" << endl;
				cout << "7. Rp. 350.000,00" << endl;
				cout << "8. Rp. 400.000,00" << endl;
				cout << "9. Rp. 450.000,00" << endl;
				cout << "10. Rp. 500.000,00" << endl;
				cout << endl;
				cin >> piltarik;
				if (piltarik==1){
					jumlahtarik=50000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << endl;
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==2){
					jumlahtarik=100000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==3){
					jumlahtarik=150000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==4){
					jumlahtarik=200000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==5){
					jumlahtarik=250000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==6){
					jumlahtarik=300000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==7){
					jumlahtarik=350000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==8){
					jumlahtarik=400000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==9){
					jumlahtarik=450000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==10){
					jumlahtarik=500000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}	
			}
			else if (pilnor==5){
				logout();
			}
}

void pinftff(){
	int jumdat=1000,jwb1,jwb3,pilopsi,i=0,a,b,tf,jwb4;
		string data_ATM[jumdat][5];
	    char jwb2;
	//pin for transfer (false)
	cout << "Password yang anda masukkan salah." << endl;
	cout << "Ulang lagi (y) atau keluar ke menu (t)?" << endl;
	cin >> jwb4;
	if(jwb4='y'){
		//lakukan fungsi untuk mengulang
	}
	else if(jwb4='t'){
		//lakukan fungsi btmenu
	}
}

void ulangtf(){
	int jumdat=1000,jwb1,jwb3,pilopsi,i=0,a,b,tf,jwb4;
		string data_ATM[jumdat][5];
	    char jwb2;
	    // mengulang tf
	    cout << "Saldo yang anda miliki tidak mencukupi." << endl;
	    cout << endl;
	    cout << "Ulang lagi (y) atau keluar ke menu (t)?" << endl;
		cin >> jwb4;
			if(jwb4='y'){
			//lakukan fungsi untuk mengulang
		}
			else if(jwb4='t'){
			//lakukan fungsi btmenu
	}
}


void saldo(){
	int jumdat=1000,jwb1,jwb3,pilopsi,i=0,a,b,intsaldo0,intsaldo1,intsaldo2,intsaldo3,intsaldo4,tf;
		string data_ATM[jumdat][5];
	    char jwb2;
	    string norek1;
		if(i==0){
			cin >> intsaldo0;
		}
		else if(i==1){
			cin >> intsaldo1;
		}
		else if(i==2){
			cin  >> intsaldo2;
		}
		else if(i==3){
			cin >> intsaldo3;
		}
		else if(i==4){
			cin >> intsaldo4;
		}
}


void saldoa(){
	int jumdat=1000,jwb1,jwb3,pilopsi,i=0,a,b,intsaldo0,intsaldo1,itsaldo2,intsaldo3,intsaldo4,tf;
		string data_ATM[jumdat][5];
	    char jwb2;
	    string norek1;
		if(a==0){
			
		}
		else if(a==1){
				
		}
		else if(a==2){
			
		}
		else if(a==3){
			
		}
		else if(a==4){
			
		}
}

void pilopsi1(){
	int jumdat=1000,jwb1,jwb3,pilopsi,i=0,a,b,intsaldo0,intsaldo1,intsaldo2,intsaldo3,intsaldo4,tf;
		string data_ATM[jumdat][5];
	    char jwb2;
	    string norek1;
		if(a==0){
			cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo0; 
		}
		else if(a==1){
			cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo1; 	
		}
		else if(a==2){
			cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo2; 
		}
		else if(a==3){
			cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo3; 
		}
		else if(a==4){
			cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo4; 
		}
}


void iftfsaldo(){
	int jumdat=1000,jwb1,jwb3,pilopsi,i=0,a,b,intsaldo0,intsaldo1,intsaldo2,intsaldo3,intsaldo4,tf;
		string data_ATM[jumdat][5];
	    char jwb2;
	    string norek1,pin1;
	   if(norek1==data_ATM[0][1]){
	   	 	if(tf<=intsaldo0){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo0-tf;
								cout << "Sisa saldo anda adalah " << intsaldo0;
								+tf;
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3='y'){
								//lakukan fungsi btmenu
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo0){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek1!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}	
		}
		else if(norek1==data_ATM[1][1]){
			if(tf<=intsaldo1){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo1-tf;
								cout << "Sisa saldo anda adalah " << data_ATM[a][3];
								intsaldo1+tf;
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3='y'){
								//lakukan fungsi btmenu
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo1){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek1!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}
		else if(norek1==data_ATM[2][1]){
			if(tf<=intsaldo2){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo2-tf;
								cout << "Sisa saldo anda adalah " << data_ATM[a][3];
								intsaldo2+tf;
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3='y'){
								//lakukan fungsi btmenu
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo2){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek1!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}
		else if(norek1==data_ATM[3][1]){
			if(tf<=intsaldo3){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo3-tf;
								cout << "Sisa saldo anda adalah " << data_ATM[a][3];
								intsaldo3+tf;
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3='y'){
								//lakukan fungsi btmenu
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo3){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek1!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}
		else if(norek1==data_ATM[4][1]){
			if(tf<=intsaldo4){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo4-tf;
								cout << "Sisa saldo anda adalah " << data_ATM[a][3];
								intsaldo4+tf;
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3='y'){
								//lakukan fungsi btmenu
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo4){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek1!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}
}

void logout(){
	system("cls");
	cout << "++ ============================================================================ ++" << endl;
	cout << "==                             Program ATM by Kevin                             ==" << endl;
	cout << "++ ============================================================================ ++" << endl;
	cout << endl;
	cout << "Silahkan pilih menu dibawah ini" << endl;
	cout << "1.Sign in" << endl;
	cout << "2.Keluar dari program ini" << endl;
	cin >> jwb5;
	system("cls");
	
	switch(jwb5){
		case 1:
			isilogout();
			break;
		case 2:
			cout << " baiklah. ";
			break;
		default:
			cout << " baiklah. ";
	}
}


void isilogout(){
	cout << "++ ============================================================================ ++" << endl;
	cout << "==                             Program ATM by Kevin                             ==" << endl;
	cout << "++ ============================================================================ ++" << endl;
	cout << endl;
	cout << "Masukkan No.Rekening anda : ";
	c=0;
	cin >> norek1[c];
		if(norek1[c]==data_ATM[0][1]){
			a=0;
		}
		else if(norek1[c]==data_ATM[1][1]){
			a=1;
		}
		else if(norek1[c]==data_ATM[2][1]){
			a=2;
		}
		else if(norek1[c]==data_ATM[3][1]){
			a=3;
		}
		else if(norek1[c]==data_ATM[4][1]){
			a=4;
		}
	    if(norek1[c]==data_ATM[a][1]){
			string pin1;
			cout << "Masukkan pin anda : ";
			cin >> pin1;
        	if(pin1==data_ATM[a][2]){
        		cout << "Selamat datang, " << data_ATM[a][0] << " ! " << endl;
        		cout << endl;
        		cout << endl;
				cout << "Silahkan pilih salah satu dari opsi dibawah ini :" << endl;
				cout << endl;
				cout << "1.Informasi saldo" << endl;
				cout << "2.Ganti pin" << endl;
				cout << "3.Tranfer" << endl;
				cout << "4.Tarik Tunai" << endl;
				cout << "5.Log out dari akun ini" << endl;
				cout << endl;
				cin >> pilnor;
				system("cls");
				if(pilnor==1){
					system("cls");
					cout << "++ ============================================================================ ++" << endl;
					cout << "==                                  Saldo                                       ==" << endl;
					cout << "++ ============================================================================ ++" << endl;
					if(a==0){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[0]; 
					}
					else if(a==1){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[1]; 	
					}
					else if(a==2){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[2]; 
					}
					else if(a==3){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[3]; 
					}
					else if(a==4){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[4]; 
					}
					cout << endl;
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
					cin >> jwb3;
					if(jwb3=='t'){
						cout << "Terimakasih telah mengunjungi ATM ini!";
					}
					else if(jwb3=='y'){
					 system("cls");
					 btmenu();
				}
					else{
			    	//lakukan fungsi
					}
				}
				else if(pilnor==2){
					system("cls");
					cout << "++ ============================================================================ ++" << endl;
					cout << "==                             Ganti Password                                   ==" << endl;
					cout << "++ ============================================================================ ++" << endl;
					cout << "Silahkan buat password yang mudah diingat." << endl;
					cin >> data_ATM[a][2];
					cout << "Password baru sekarang adalah " << data_ATM[a][2] << endl;
					cout << endl;
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
					cin >> jwb3;
					if(jwb3=='t'){
						cout << "Terimakasih telah mengunjungi ATM ini!";
					}
					else if(jwb3=='y'){
						system("cls");
				   	 btmenu();
					}
					else{
			    	//lakukan fungsi
					}
				  }
				  
				else if(pilnor==3){
					system("cls");
					cout << "++ ============================================================================ ++" << endl;
					cout << "==                                 Transfer                                     ==" << endl;
					cout << "++ ============================================================================ ++" << endl;
					cout << "Ingin transfer ke :" << endl;
					cout << "1.Bank ini" << endl;
					cout << "2.Bank lain" << endl;
					cin >> pilbank;
					system("cls");
				if (pilbank==1){
					cout << "Tolong masukkan no. rekening yang anda tuju." << endl;
					cout << endl;
					cin >> norek2;
					if(norek2==data_ATM[0][1]){
					b=0;
						}
					else if(norek2==data_ATM[1][1]){
					b=1;
					}
					else if(norek2==data_ATM[2][1]){
					b=2;
					}
					else if(norek2==data_ATM[3][1]){
					b=3;
					}
					else if(norek2==data_ATM[4][1]){
					b=4;
}
					if(norek2==data_ATM[b][1]){
						cout << endl;
						cout << "Masukkan nominal yang ingin anda transfer: ";
						cin >> tf;
						cout << "Silahkan masukkan pin anda untuk konfirmasi lebih lanjut." << endl;
						cin >> pin1;
						if(norek1[c]==data_ATM[0][1]){
	   	 				if(tf<=intsaldo[0]){
							if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[0]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[0] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo0){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek1[c]!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}	
		}
		else if(norek1[c]==data_ATM[1][1]){
			if(tf<=intsaldo[1]){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[1]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[1] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo1){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek2!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}
		else if(norek1[c]==data_ATM[2][1]){
			if(tf<=intsaldo[2]){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[2]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[2] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								 btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo2){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek2!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}
		else if(norek1[c]==data_ATM[3][1]){
			if(tf<=intsaldo[3]){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[3]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[3] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								 btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo3){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek1[c]!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}
		else if(norek1[c]==data_ATM[4][1]){
			if(tf<=intsaldo[4]){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[4]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[4] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo4){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek1[c]!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}}
						}
		else if (pilbank==2){
			cout << "Masukkan no.rekening yang anda tuju : ";
			cin >> norekbanklain;
			cout << "Masukkan pin anda : ";
			cin >> pin1;
			if  (pin1==data_ATM[a][2]){
				//jika pin benar
				cout << "*Akan dikurangi sebesar 5% dari jumlah transfer*" << endl;
				cout << "Masukkan nominal yang ingin anda transfer : ";
				cin >> tfotherbank;
				if (tfotherbank<=intsaldo[0]){
						intsaldo[0]-=tfotherbank-0.05*tfotherbank;
						cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
						cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[0] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
			 		else if (tfotherbank<=intsaldo[1]){
			 			intsaldo[1]-=tfotherbank-0.05*tfotherbank;
			 			cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
			 			cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[1] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
					else if (tfotherbank<=intsaldo[2]){
						intsaldo[2]-=tfotherbank-0.05*tfotherbank;
						cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
						cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[2] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
					else if (tfotherbank<=intsaldo[3]){
						intsaldo[3]-=tfotherbank-0.05*tfotherbank;
						cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
						cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[3] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								 btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
					else if (tfotherbank<=intsaldo[4]){
						intsaldo[4]-=tfotherbank-0.05*tfotherbank;
						cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
						cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[4] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
				}
				else if(pin1!=data_ATM[a][2]){
					cout << "Pin yang anda masukkan salah." << endl;
					cout << "Apakah anda ingin mengulang pin (y) atau ingin keluar ke menu(t)" << endl;
					cin >> jwb4;
					if (jwb4=='y'){
				 		falsepinforbanklain();
					}
					else if (jwb4=='t'){
						system("cls");
						btmenu();
					}
				}
						
				}
				    }
			else if(pilnor==4){
				system("cls");
					cout << "++ ============================================================================ ++" << endl;
					cout << "==                               Tarik Tunai                                    ==" << endl;
					cout << "++ ============================================================================ ++" << endl;
				cout << endl;
				cout << "Silahkan pilih jumlah nominal yang ingin anda tarik :" << endl;
				cout << "1. Rp. 50.000,00" << endl;
				cout << "2. Rp. 100.000,00" << endl;
				cout << "3. Rp. 150.000,00" << endl;
				cout << "4. Rp. 200.000,00" << endl;
				cout << "5. Rp. 250.000,00" << endl;
				cout << "6. Rp. 300.000,00" << endl;
				cout << "7. Rp. 350.000,00" << endl;
				cout << "8. Rp. 400.000,00" << endl;
				cout << "9. Rp. 450.000,00" << endl;
				cout << "10. Rp. 500.000,00" << endl;
				cout << endl;
				cin >> piltarik;
				if (piltarik==1){
					jumlahtarik=50000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << endl;
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==2){
					jumlahtarik=100000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==3){
					jumlahtarik=150000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==4){
					jumlahtarik=200000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==5){
					jumlahtarik=250000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==6){
					jumlahtarik=300000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==7){
					jumlahtarik=350000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==8){
					jumlahtarik=400000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==9){
					jumlahtarik=450000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==10){
					jumlahtarik=500000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				
				
			}
			
			else if(pilnor==5){
				isilogout();
			}
				}
			else if(pin1!=data_ATM[a][2]){
				upjps;
			}
				
				}
		else if (norek1[c]!=data_ATM[a][1]){
			cout << "Maaf, data tidak valid.";
			cout << "Input kembali (y) atau keluar dari ATM (t)" << endl;
			cin >> jwb6;
			if (jwb6=='y'){
				system("cls");
				ikjatd();
			}
		}
}

void ikjatd(){
cout << "Program ATM by Kevin" << endl;
	cout << endl;
	cout << "Masukkan No.Rekening anda : ";
	c=0;
	cin >> norek1[c];
		if(norek1[c]==data_ATM[0][1]){
			a=0;
		}
		else if(norek1[c]==data_ATM[1][1]){
			a=1;
		}
		else if(norek1[c]==data_ATM[2][1]){
			a=2;
		}
		else if(norek1[c]==data_ATM[3][1]){
			a=3;
		}
		else if(norek1[c]==data_ATM[4][1]){
			a=4;
		}
	    if(norek1[c]==data_ATM[a][1]){
			string pin1;
			cout << "Masukkan pin anda : ";
			cin >> pin1;
        	if(pin1==data_ATM[a][2]){
        		cout << "Selamat datang, " << data_ATM[a][0] << " ! " << endl;
        		cout << endl;
        		cout << endl;
				cout << "Silahkan pilih salah satu dari opsi dibawah ini :" << endl;
				cout << endl;
				cout << "1.Informasi saldo" << endl;
				cout << "2.Ganti pin" << endl;
				cout << "3.Tranfer" << endl;
				cout << "4.Tarik Tunai" << endl;
				cout << "5.Log out dari akun ini" << endl;
				cout << endl;
				cin >> pilnor;
				system("cls");
				if(pilnor==1){
					system("cls");
					if(a==0){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[0]; 
					}
					else if(a==1){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[1]; 	
					}
					else if(a==2){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[2]; 
					}
					else if(a==3){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[3]; 
					}
					else if(a==4){
					cout << "Saldo yang anda miliki sekarang adalah Rp. " << intsaldo[4]; 
					}
					cout << endl;
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
					cin >> jwb3;
					if(jwb3=='t'){
						cout << "Terimakasih telah mengunjungi ATM ini!";
					}
					else if(jwb3=='y'){
					 system("cls");
					 btmenu();
				}
					else{
			    	//lakukan fungsi
					}
				}
				else if(pilnor==2){
					cout << "Silahkan buat password yang mudah diingat." << endl;
					cin >> data_ATM[a][2];
					cout << "Password baru sekarang adalah " << data_ATM[a][2] << endl;
					cout << endl;
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
					cin >> jwb3;
					if(jwb3=='t'){
						cout << "Terimakasih telah mengunjungi ATM ini!";
					}
					else if(jwb3=='y'){
						system("cls");
				   	 btmenu();
					}
					else{
			    	//lakukan fungsi
					}
				  }
				  
				else if(pilnor==3){
					cout << "Ingin transfer ke :" << endl;
					cout << "1.Bank ini" << endl;
					cout << "2.Bank lain" << endl;
					cin >> pilbank;
					system("cls");
				if (pilbank==1){
					cout << "Tolong masukkan no. rekening yang anda tuju." << endl;
					cout << endl;
					cin >> norek2;
					if(norek2==data_ATM[0][1]){
					b=0;
						}
					else if(norek2==data_ATM[1][1]){
					b=1;
					}
					else if(norek2==data_ATM[2][1]){
					b=2;
					}
					else if(norek2==data_ATM[3][1]){
					b=3;
					}
					else if(norek2==data_ATM[4][1]){
					b=4;
}
					if(norek2==data_ATM[b][1]){
						cout << endl;
						cout << "Masukkan nominal yang ingin anda transfer: ";
						cin >> tf;
						cout << "Silahkan masukkan pin anda untuk konfirmasi lebih lanjut." << endl;
						cin >> pin1;
						if(norek1[c]==data_ATM[0][1]){
	   	 				if(tf<=intsaldo[0]){
							if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[0]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[0] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo0){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek1[c]!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}	
		}
		else if(norek1[c]==data_ATM[1][1]){
			if(tf<=intsaldo[1]){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[1]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[1] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo1){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek2!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}
		else if(norek1[c]==data_ATM[2][1]){
			if(tf<=intsaldo[2]){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[2]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[2] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								 btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo2){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek2!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}
		else if(norek1[c]==data_ATM[3][1]){
			if(tf<=intsaldo[3]){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[3]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[3] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								 btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo3){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek1[c]!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}
		else if(norek1[c]==data_ATM[4][1]){
			if(tf<=intsaldo[4]){
				if(pin1==data_ATM[a][2]){
								//jika pin benar
								intsaldo[4]-=tf;
								cout << "Sisa saldo anda adalah " << intsaldo[4] << endl;
								if(norek2==data_ATM[0][1]){
									intsaldo[0]+=tf;
								}
								else if(norek2==data_ATM[1][1]){
									intsaldo[1]+=tf;
								}
								else if(norek2==data_ATM[2][1]){
									intsaldo[2]+=tf;
								}
								else if(norek2==data_ATM[3][1]){
									intsaldo[3]+=tf;
								}
								else if(norek2==data_ATM[4][1]){
									intsaldo[4]+=tf;
								}
								cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
							}
							else if(pin1!=data_ATM[a][2]){
								//jika pin salah yagesya
			                    //lakukan fungsi pinftff
							}
						else if(tf>intsaldo4){
							// lakukan fungsi untuk mengulang tf
							}
					else if(norek1[c]!=data_ATM[b][1]){
						//jika no rekening yang dituju tidak ada didata
					}
				}
		}}
						}
		else if (pilbank==2){
			cout << "Masukkan no.rekening yang anda tuju : ";
			cin >> norekbanklain;
			cout << "Masukkan pin anda : ";
			cin >> pin1;
			if  (pin1==data_ATM[a][2]){
				//jika pin benar
				cout << "Masukkan nominal yang ingin anda transfer : ";
				cin >> tfotherbank;
				if (tfotherbank<=intsaldo[0]){
						intsaldo[0]-=tfotherbank;
						cout << "Sisa saldo anda adalah " << intsaldo[0] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
			 		else if (tfotherbank<=intsaldo[1]){
			 			intsaldo[1]-tfotherbank;
						cout << "Sisa saldo anda adalah " << intsaldo[1] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
					else if (tfotherbank<=intsaldo[2]){
						intsaldo[2]-tfotherbank;
						cout << "Sisa saldo anda adalah " << intsaldo[2] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
					else if (tfotherbank<=intsaldo[3]){
						intsaldo[3]-tfotherbank;
						cout << "Sisa saldo anda adalah " << intsaldo[3] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								 btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
					else if (tfotherbank<=intsaldo[4]){
						intsaldo[4]-tfotherbank;
						cout << "Sisa saldo anda adalah " << intsaldo[4] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
				}
				else if(pin1!=data_ATM[a][2]){
					cout << "Pin yang anda masukkan salah." << endl;
					cout << "Apakah anda ingin mengulang pin (y) atau ingin keluar ke menu(t)" << endl;
					cin >> jwb4;
					if (jwb4=='y'){
						//lakukan fungsi pengulangan pin
					}
					else if (jwb4=='t'){
						system("cls");
						btmenu();
					}
				}
						
				}
				    }
			else if(pilnor==4){
				cout << "||| Tarik Tunai |||" << endl;
				cout << endl;
				cout << "Silahkan pilih jumlah nominal yang ingin anda tarik :" << endl;
				cout << "1. Rp. 50.000,00" << endl;
				cout << "2. Rp. 100.000,00" << endl;
				cout << "3. Rp. 150.000,00" << endl;
				cout << "4. Rp. 200.000,00" << endl;
				cout << "5. Rp. 250.000,00" << endl;
				cout << "6. Rp. 300.000,00" << endl;
				cout << "7. Rp. 350.000,00" << endl;
				cout << "8. Rp. 400.000,00" << endl;
				cout << "9. Rp. 450.000,00" << endl;
				cout << "10. Rp. 500.000,00" << endl;
				cout << endl;
				cin >> piltarik;
				if (piltarik==1){
					jumlahtarik=50000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << endl;
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==2){
					jumlahtarik=100000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==3){
					jumlahtarik=150000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==4){
					jumlahtarik=200000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==5){
					jumlahtarik=250000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==6){
					jumlahtarik=300000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==7){
					jumlahtarik=350000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==8){
					jumlahtarik=400000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==9){
					jumlahtarik=450000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				else if(piltarik==10){
					jumlahtarik=500000;
					if(norek1[c]==data_ATM[0][1]){
						intsaldo[0]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[1][1]){
						intsaldo[1]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[2][1]){
						intsaldo[2]-=jumlahtarik;
					    cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					else if(norek1[c]==data_ATM[3][1]){
						intsaldo[3]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;;
					}
					else if(norek1[c]==data_ATM[4][1]){
						intsaldo[4]-=jumlahtarik;
						cout << "Saldo anda akan dikurangi sebanyak " << jumlahtarik << endl;
					}
					cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
				}
				
				
			}
			else if(pilnor==5){
				logout();
			}
			
				}
			}
		else if (norek1[c]!=data_ATM[a][1]){
			cout << "Maaf, data tidak valid.";
			cout << "Input kembali (y) atau keluar dari ATM (t)" << endl;
			cin >> jwb6;
			if (jwb6=='y'){
				system("cls");
				ikjatd();
			}
		}	
}

void upjps(){

	for (int g = 0; g < 5; ++g) {
        if (pin1 == data_ATM[a][2]) {
            pwbenar = true;
            break;
        }
    }
	system("cls");
	for (f=0;f<3;){
		if(!pwbenar){
			f++;
			cout << "pin yang anda masukan salah." << endl;
			cout << endl;
			cout << "Silahkan masukkan pin dengan benar." << endl;
			cin >> pin1;
			system("cls");
		}
		else {
			btmenu();
		}
		 if(f>2){
		 	cout << "Pin yang anda masukkan telah salah sebanyak 3 kali." << endl;
		 	cout << "Kembali ke halaman sign in (y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
							logout();
							}
								else{
			    				//lakukan fungsi
							}
		 }
		}
}

void falsepinforbanklain(){
	cout << "Masukkan pin anda : ";
			cin >> pin1;
			if  (pin1==data_ATM[a][2]){
				//jika pin benar
				cout << "*Akan dikurangi sebesar 5% dari jumlah transfer*" << endl;
				cout << "Masukkan nominal yang ingin anda transfer : ";
				cin >> tfotherbank;
				if (tfotherbank<=intsaldo[0]){
						intsaldo[0]-=tfotherbank-0.05*tfotherbank;
						cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
						cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[0] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
			 		else if (tfotherbank<=intsaldo[1]){
			 			intsaldo[1]-=tfotherbank-0.05*tfotherbank;
			 			cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
			 			cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[1] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
					else if (tfotherbank<=intsaldo[2]){
						intsaldo[2]-=tfotherbank-0.05*tfotherbank;
						cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
						cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[2] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
					else if (tfotherbank<=intsaldo[3]){
						intsaldo[3]-=tfotherbank-0.05*tfotherbank;
						cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
						cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[3] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								 btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
					else if (tfotherbank<=intsaldo[4]){
						intsaldo[4]-=tfotherbank-0.05*tfotherbank;
						cout << "Dipotong pajak 5% sebesar Rp. " << 0.05*tfotherbank << endl;
						cout << "Jumlah saldo berkurang sebanyak Rp. " << tfotherbank+0.05*tfotherbank << endl;
						cout << "Sisa saldo anda adalah " << intsaldo[4] << endl;
						cout << "Kembali ke menu(y) atau keluar dari ATM ini(t)" << endl;
								cin >> jwb3;
								if(jwb3=='t'){
								cout << "Terimakasih telah mengunjungi ATM ini!";
								}
								else if(jwb3=='y'){
									system("cls");
								btmenu();
							}
								else{
			    				//lakukan fungsi
							}
					}
				}
				else if(pin1!=data_ATM[a][2]){
					cout << "Pin yang anda masukkan salah." << endl;
					cout << "Apakah anda ingin mengulang pin (y) atau ingin keluar ke menu(t)" << endl;
					cin >> jwb4;
					if (jwb4=='y'){
						//lakukan fungsi pengulangan pin
					}
					else if (jwb4=='t'){
						system("cls");
						btmenu();
					}
				}
}
	

