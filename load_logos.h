		/* ./logos/banner.logo -- The Default Banner Logos */
	new_logo=calloc(1,sizeof(struct logo_info));

	logo_info_head=new_logo;

	new_logo->description=strdup("The Default Banner Logos");
	(char *)new_logo->logo=strdup("[0;1;37;47m#################################################################[0;30;47m#####[1;37m#########[1;37;40m\n[0;1;37;47m################################################################[0;30;47m#######[1;37m########[1;37;40m\n[0;1;37;47m###################[31m#[37m############################################[0;30;47m##[1;37mO[0;30;47m#[1;37mO[0;30;47m##[1;37m########[1;37;40m\n[0;1;37;47m##[0;30;47m######[1;37m##########[31m##[0;30;47m#[1;37m###########################################[0;30;47m#[1;33m#####[0;30;47m#[1;37m########[1;37;40m\n[0;1;37;47m####[0;30;47m##[1;37m#############[0;30;47m#[1;37m##########################################[0;30;47m##[1;37m##[33m###[37m##[0;30;47m##[1;37m######[1;37;40m\n[0;1;37;47m####[0;30;47m##[1;37m#########[31m###[37m###[0;30;47m###[1;37m#[0;30;47m####[1;37m###[0;30;47m###[1;37m####[0;30;47m###[1;37m##[0;30;47m#####[1;37m#[0;30;47m######[1;37m#####[0;30;47m#[1;37m##########[0;30;47m##[1;37m#####[1;37;40m\n[0;1;37;47m####[0;30;47m##[1;37m########[31m#[37m##[31m#[0;30;47m#[1;37m###[0;30;47m###[1;37m####[0;30;47m##[1;37m##[0;30;47m##[1;37m#####[0;30;47m##[1;37m####[0;30;47m##[1;37m###[0;30;47m##[1;37m#######[0;30;47m#[1;37m############[0;30;47m##[1;37m####[1;37;40m\n[0;1;37;47m####[0;30;47m##[1;37m#######[31m#[37m###[31m#[0;30;47m#[1;37m###[0;30;47m##[1;37m#####[0;30;47m##[1;37m##[0;30;47m##[1;37m#####[0;30;47m##[1;37m######[0;30;47m###[1;37m#########[0;30;47m#[1;37m############[0;30;47m###[1;37m###[1;37;40m\n[0;1;37;47m####[0;30;47m##[1;37m##########[31m##[0;30;47m#[1;37m###[0;30;47m##[1;37m#####[0;30;47m##[1;37m##[0;30;47m##[1;37m#####[0;30;47m##[1;37m######[0;30;47m###[1;37m########[33m##[0;30;47m#[1;37m###########[0;30;47m##[1;33m#[37m###[1;37;40m\n[0;1;37;47m####[0;30;47m##[1;37m#######[0;30;47m#[1;37m#[31m##[0;30;47m#[1;37m####[0;30;47m##[1;37m#####[0;30;47m##[1;37m##[0;30;47m##[1;37m#####[0;30;47m##[1;37m#####[0;30;47m##[1;37m#[0;30;47m##[1;37m#####[33m######[0;30;47m#[1;37m#######[30m#[33m######[37m#[1;37;40m\n[0;1;37;47m####[0;30;47m##[1;37m######[0;30;47m##[1;37m#[31m##[0;30;47m#[1;37m#[0;30;47m#[1;37m##[0;30;47m##[1;37m#####[0;30;47m##[1;37m##[0;30;47m###[1;37m###[0;30;47m###[1;37m####[0;30;47m##[1;37m###[0;30;47m##[1;37m####[33m#######[0;30;47m#[1;37m#####[0;30;47m#[1;33m#######[37m#[1;37;40m\n[0;1;37;47m##[0;30;47m############[1;37m##[0;30;47m###[1;37m##[0;30;47m####[1;37m###[0;30;47m####[1;37m###[0;30;47m####[1;37m#[0;30;47m###[1;37m#[0;30;47m#####[1;37m#[0;30;47m######[1;37m###[33m#####[30m#[0;30;47m#####[1m#[33m#####[37m###[1;37;40m\n");
	new_logo->ysize=12;
	(char *)new_logo->ascii_logo=strdup("                                                                 #####         \n                                                                #######        \n                   @                                            ##O#O##        \n  ######          @@#                                           #VVVVV#\n    ##             #                                          ##  VVV  ##      \n    ##         @@@   ### ####   ###    ###  ##### ######     #          ##     \n    ##        @  @#   ###    ##  ##     ##    ###  ##       #            ##    \n    ##       @   @#   ##     ##  ##     ##      ###         #            ###   \n    ##          @@#   ##     ##  ##     ##      ###        QQ#           ##Q   \n    ##       # @@#    ##     ##  ##     ##     ## ##     QQQQQQ#       #QQQQQQ \n    ##      ## @@# #  ##     ##  ###   ###    ##   ##    QQQQQQQ#     #QQQQQQQ \n  ############  ###  ####   ####   #### ### ##### ######   QQQQQ#######QQQQQ   \n");
	new_logo->ascii_ysize=12;
	new_logo->sysinfo_position=1;
	new_logo->next_logo=NULL;
	logo_info_tail=new_logo;
		/* ./logos/classic.logo -- The Classic Logos */
	new_logo=calloc(1,sizeof(struct logo_info));

	logo_info_tail->next_logo=new_logo;

	new_logo->description=strdup("The Classic Logos");
	(char *)new_logo->logo=strdup("[0;1;30;44m.........[40m      [44m.......[40m\n[1;44m........[40m        [44m......[2C[47mLL[5CIIIIII[1CNN[3CNN[1CUU[2CUU[1CXX[2CXX[40m\n[1;30;44m........[40m [47m  [40m [47m  [40m  [44m......[2C[47mLL[7CII[3CNNN[2CNN[1CUU[2CUU[2CXXXX[40m\n[1;30;44m........[40m [47m [40m   [47m [40m   [44m.....[2C[47mLL[7CII[3CNNNN[1CNN[1CUU[2CUU[3CXX[40m\n[1;30;44m........[40m  [43m    [40m   [44m.....[2C[47mLL[7CII[3CNN[1CNNNN[1CUU[2CUU[2CXXXX[40m\n[1;30;44m........[40m [0;30;43m`----\'[40m  [1;44m.....[2C[47mLLLLLL[1CIIIIII[1CNN[3CNN[2CUUUU[2CXX[2CXX[40m\n[1;30;44m........[40m [47m.[37m....[30m.[40m   [44m....[40m\n[1;30;44m.......[40m [47m........[40m    [44m..[40m\n[1;30;44m.......[40m [47m.........[40m    [44m.[40m\n[1;30;44m.......[40m [47m.........[40m    [30;44m.[40m\n[1;30;44m......[40m [47m..........[40m     \n[1;30;44m.....[40m  [47m..........[40m     \n[1;30;44m.....[43m   [30;47m........[43m   [40m   \n[1;30;44m...[43m     [47m........[43m    [40m  \n[1;30;44m.[43m       [47m........[43m      [40m\n[1;30;44m.[43m       [40m [47m......[40m [43m      [40m\n\n");
	new_logo->ysize=17;
	(char *)new_logo->ascii_logo=strdup("         $$$$$$       \n        $$$$$$$$        LL     IIIIII NN   NN UU  UU XX  XX\n        $  $  $$        LL       II   NNN  NN UU  UU  XXXX \n        $/o$o\\$$        LL       II   NNNN NN UU  UU   XX \n        $////$$$$       LL       II   NN NNNN UU  UU  XXXX \n        <<<<<$$$$       LLLLLL IIIIII NN   NN  UUUU  XX  XX\n        $......$$$    \n       $........$$$$  \n       $.........$$$$ \n       $.........$$$$ \n      $..........$$$$$\n     $$..........$$$$$\n     ###........###$$$\n   #####........####$$\n #######........######\n #######$......$######\n\n");
	new_logo->ascii_ysize=17;
	new_logo->sysinfo_position=0;
	new_logo->next_logo=NULL;
	logo_info_tail=new_logo;
