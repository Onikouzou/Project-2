#include <string>

static QString addCharacter(QString masterList, QString list, int charPos)
{
	int mstPos = 0, slvPos = 0;
	bool done = false;
	while (!done)
	{
		if (list[slvPos] == masterList[mstPos])
		{
			if (mstPos == charPos)
			{
				done = true;
				break;
			}
			slvPos++;
			mstPos++;
		}
		else if (list[slvPos] != masterList[mstPos])
		{
			if (mstPos == charPos)
			{
                QString temp = masterList.mid(charPos, 2);
				list.insert(slvPos, temp);
				done = true;
				break;
			}

			mstPos++;
		}
	}

	return list;
}


static QString removeCharacter(QString masterList, QString list, int charPos)
{
    for (int i = 0; i < list.length(); i++)
    {
        if (list[i] == masterList[charPos])
        {
            list = list.remove(i, 2);
        }
    }

    return list;
}
