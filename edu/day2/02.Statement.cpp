/******************************************************************

switch
- ¿©·¯Á¶°ÇÀ» Ã³¸®ÇØ¾ßÇÒ ¶§, »ç¿ëÇÏ´Â Á¶°Ç¹® Áß ÇÏ³ª.
- ÁÖ·Î »ó¼ö°ªÀ» ±âÁØÀ¸·Î ºÐ±âÇÒ ¶§ »ç¿ëµÇ¸ç, °¡µ¶¼ºÀÌ ÁÁÀ½.

[switchÀÇ ±¸Á¶]
- ÇÏ³ªÀÇ º¯¼ö¸¦ °Ë»çÇÏ°í ±× º¯¼öÀÇ °ª¿¡ µû¶ó ¿©·¯ case ºí·Ï Áß ÇÏ³ª¸¦ ½ÇÇà
- break Å°¿öµå¸¦ ÅëÇØ °¢ caseÀÇ ½ÇÇàÀ» Á¾·á.
- break°¡ ¾øÀ¸¸é ´ÙÀ½ case ºí·ÏÀÌ ¿¬¼ÓÇØ¼­ ½ÇÇàµÈ´Ù.
- Ç¥Çö½Ä¿¡´Â ¹®ÀÚ, Á¤¼ö, ¿­°ÅÅ¸ÀÔ µîÀÌ µé¾î¿Â´Ù.

[¿ä¾à]
- »ó¼ö°ªÀ» ±âÁØÀ¸·Î ¿©·¯ ¼±ÅÃÁö Áß ÇÏ³ª¸¦ ¼±ÅÃÇÏ´Â »óÈ²¿¡¼­ »ç¿ëÇÏ±â ÁÁ´Ù.
- ÄÚµåÀÇ °¡µ¶¼ºÀ» ³ôÀÌ°í È¿À²¼ºÀ» °³¼±ÇÒ ¼ö´Â ÀÖÁö¸¸ Ç¥Çö½ÄÀÇ Á¦ÇÑÀÌ ÀÖ´Ù.
- ¹üÀ§±â¹Ý ºñ±³´Â ºÒ°¡(10<x<20 µî)
- if¹®Àº ¹ü¿ëÀûÀ¸·Î ´Ù¾çÇÑ Á¶°ÇÀ» ´Ù·ç±â¿¡ À¯¿ë. ³í¸®¿¬»êÀÚ¸¦ »ç¿ëÇÏ¿© º¹ÀâÇÑ Á¶°ÇÀ» ¸¸µé ¼ö ÀÖÀ½.


	switch (Ç¥Çö½Ä)
	{
	case °ª1 :
		//°ª1¿¡ ÇØ´çµÇ´Â ÄÚµå..
		break;
	case °ª2 :
		//°ª2¿¡ ÇØ´çµÇ´Â ÄÚµå..
		break;
	default:
		//¾î¶² case¿¡µµ ÇØ´çÇÏÁö ¾ÊÀ» ¶§ ½ÇÇàµÇ´Â ÄÚµå(»ý·«°¡´É)
		break;
	}

[break¶õ?]
- ¹Ýº¹¹®ÀÌ³ª switch¹®À» Á¦¾îÇÒ ´ë »ç¿ëÇÔ.
- break°¡ ½ÇÇàµÇ¸é ÇØ´ç ·çÇÁ³ª switch¹®À» Á¾·áÇÏ°í break ´ÙÀ½À¸·Î ÀÌµ¿ÇÏ¿© ½ÇÇàµÈ´Ù.
- ´ÙÁß switch³ª ÁßÃ¸¹Ýº¹¹®¿¡¼­´Â break°¡ ÀÖ´Â ÇØ´ç ½ºÄÚÇÁ¸¸!!!ºüÁ®³ª°£´Ù.

******************************************************************/


#include<iostream>

int main()
{
	int choice;

	std::cout << "°ÔÀÓÀ» ¼±ÅÃÇÏ¼¼¿ä! " << std::endl;
	std::cout << "1. ·Ñ" << std::endl;
	std::cout << "2. ¹ß·Î¶õÆ®" << std::endl;
	std::cout << "3. ¿À¹ö¿öÄ¡" << std::endl;
	std::cout << "4. ½ºÅ¸Å©·¡ÇÁÆ®" << std::endl;
	std::cout << "5. µð¾Æºí·Î2" << std::endl;

	std::cin >> choice;

	switch (choice)
	{
	case 1: //if(choice==1)
		std::cout << "·Ñ ¼±ÅÃ" << std::endl;
	break;
	case 2:
		std::cout << "¹ß·Î¶õÆ® ¼±ÅÃ" << std::endl;
		break;
	case 3:
		std::cout << "¿À¹ö¿öÄ¡ ¼±ÅÃ" << std::endl;
		break;
	case 4:
		std::cout << "½ºÅ¸Å©·¡ÇÁÆ® ¼±ÅÃ" << std::endl;
		break;
	case 5:
		std::cout << "µð¾Æºí·Î2" << std::endl;
		break;
	default: //else
		std::cout << "°ªÀÌ Àß¸øµÆ½À´Ï´Ù." << std::endl;
		break;
	} //break¸¦ ¸¸³ª¸é ¿©±â¸¦ ºüÁ®³ª¿Â´Ù.(switch¹®À» ºüÁ®³ª¿À°Ô µÈ´Ù.)



	int jobChoice;
	int skillChoice;

	std::cout << "Á÷¾÷À» ¼±ÅÃÇØ¶ó!(1: Àü»ç, 2: ¸¶¹ý»ç, 3: µµÀû) : ";
	std::cin >> jobChoice;
	switch (jobChoice)
	{
	case 1:
		std::cout << "Àü»ç¸¦ ¼±ÅÃÇß´Ù. ¾î¶² ½ºÅ³À» »ç¿ëÇÒ²¨³Ä?(1: ´ë½¬°ø°Ý, 2. ¹æÆÐ°ø°Ý) : ";
		std::cin >> skillChoice;
			
		switch (skillChoice)
		{
			case 1:
				std::cout << "´ë½¬°ø°Ý!!!" << std::endl;
				break;
			case 2:
				std::cout << "¹æÆÐ°ø°Ý!!!" << std::endl;
				break;

		}
	break;

	case 2:
		std::cout << "È÷È÷ÆR";
		break;
	default:
		break;

	}



}
