#pragma once

#include "../../controller/commands/nodeElementCommand.h"
#include "resizeCommand.h"

namespace qReal
{
namespace commands
{

class ExpandCommand : public NodeElementCommand
{
public:
	ExpandCommand(NodeElement const *node);
	virtual ~ExpandCommand();

protected:
	bool execute();
	bool restoreState();

private:
	void changeExpanded();

	void initRenderedDiagram();

	QMap<Id, QPointF> mShifting;
	ResizeCommand *mResizeCommand;
};

}
}
