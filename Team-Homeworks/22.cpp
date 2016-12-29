#include <iostream>

using namespace std;

int address(int nw, int ip){
	int temp = 255;
	for (int i = 0; i < 8 - (nw % 8); i++){
		temp = temp - pow(2, i);
	}
	return ip & temp;
}

int Network(int nw, int ip, int d){
	int n = 8 - (nw % 8), temp = 0;
	for (int i = 0; i < n; i++){
		temp = temp + pow(2, i);
	}
	return temp | ip;
}

int main(){
	int ip[5], nw[5],area[3], able, temp;
	char c;
	cin >> ip[1] >> c >> ip[2] >> c >> ip[3] >> c >> ip[4] >> c >> nw[0];
	for (int i = 1; i <= 4; i++){				//sure ip address.
		if (ip[i] > 255 || ip[i] < 0){
			cout << "Error not is ip address.";
			return 1;
		}
		nw[i] = ip[i];
	}
	if (nw[0] > 30 || nw[0] < 8) {
		cout << "Error not is ip network";
		return 1;
	}
	int d = nw[0] / 8;
	switch (d){
	case 3:								//IP X.X.X.[4]
		ip[4] = address(nw[0], ip[4]);
		nw[4] = Network(nw[0], ip[4], d);
		break;
	case 2:								//IP X.X.[3].X
		for (int i = 4; i >= 3; i--){
			ip[i] = address(nw[0], ip[i]);
			nw[i] = Network(nw[0], ip[i], d);
		}
		nw[4] = 255;
		break;
	case 1:								//IP X.[2].X.X
		for (int i = 4; i >= 2; i--){
			ip[i] = address(nw[0], ip[i]);
			nw[i] = Network(nw[0], ip[i], d);
		}
		nw[3] = nw[4] = 255;
		break;
	case 0:								//IP [1].X.X.X
		for (int i = 4; i >= 1; i--){
			ip[i] = address(nw[0], ip[i]);
			nw[i] = Network(nw[0], ip[i], d);
		}

		break;
	}

	able = pow(2,(32-nw[0])) - 2;

	cout << "網路位址：" << ip[1] << '.' << ip[2] << '.' << ip[3] << '.' << ip[4] << endl;
	cout << "廣播位址：" << nw[1] << '.' << nw[2] << '.' << nw[3] << '.' << nw[4] << endl;
	cout << "位址範圍：" << ip[1] << '.' << ip[2] << '.' << ip[3] << '.' << ip[4];
	cout << " - " << nw[1] << '.' << nw[2] << '.' << nw[3] << '.' << nw[4] << endl;
	cout << "該網路可用 IP 數：" << able << endl;
	system("pause");
	return 0;
}