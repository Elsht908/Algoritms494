#include  <iostream>		
#include  <intrin.h> 

int nTwin = 1;
namespace TwinSpace { int nTwin = 2; }

#define	  stop __nop();	

int main()
{

	char cByte = 'A';
	cByte = 0x42;
	cByte = 66;
	cByte = -1;

	unsigned char ucByte = 0x41;
	ucByte = 'B';
	ucByte = -1;

	int iInt = 0xffffffff;

	unsigned int uiInt = 0xffffffff;

	float fFloat = 1.f;
	double dDouble = 1.;

	double d = 0.1234567890123456789123456789;
	float  f = 0.1234567890123456789123456789;

	d = 1.; //  1.0000000000000000 ѕеременна€ получила такое значение, потому что в double должно быть много знаков после зап€той
	d = 0.999999999999999999999999999999999;

	stop

		wchar_t cw = L'‘';
	size_t n = sizeof(cw); // 2 байт

	stop


		iInt = 1;
	double dDouble1 = iInt / 3;		// 	0.0000000000000000	¬ этой строке мы делим на целое
	double dDouble2 = iInt / 3.;	// 	0.33333333333333331 ј в этой на дробное

	short sShort;
	dDouble = (fFloat = (iInt = (sShort = (cByte = 3.3 / 3))));			// dDouble =  1.0999999999999999  fFloat = 1.10000002  iInt = 1  sShort = 1  cByte = 1 '\x1'
	cByte = (sShort = (iInt = (fFloat = (dDouble = 3.3 / 3))));			// cByte=1 '\x1' sShort= 1  iInt=1  fFloat=1.10000002 dDouble=1.0999999999999999
	//  омпил€тор предупреждает, что преобразование типов даннных может привести к потере точности. 
	// “ак происходит, потому что под разные типы данных отводитс€ разноке количество пам€ти


	iInt = 257;
	cByte = iInt; // cByte = 1 '\x1'

	unsigned char cN1 = 255, cN2 = 2, cSum;
	cSum = cN1 + cN2; // cSum = '\x1' 
	// Ќежелательный результат: складываютс€ разные типы данных

	int iSum = cN1 + cN2; // iSum=257  ѕравильна€ работа с типами данных позволила найти верную сумму

	char c1 = 0xff, c2 = 2;
	unsigned char uc1 = 0xff, uc2 = 2;
	int iSum1 = c1 + c2;   //iSum1 = 1
	int iSum2 = uc1 + uc2; //iSum2 = 32761
	//cтарший бит char - это знаковый бит, поэтому диапазон данных, который может представл€ть char, составл€ет -128 ~ 127, 
	// unsigned char не имеет знакового бита, поэтому диапазон данных, который может быть представлен, составл€ет 0 ~ 255

	stop

		int nTmp = 100, nn = 3;
	dDouble = 3.3 + nTmp / nn; // 36.299999999999997
	double dDouble3 = 3.3 + nTmp / nn;		// 36.299999999999997


	stop