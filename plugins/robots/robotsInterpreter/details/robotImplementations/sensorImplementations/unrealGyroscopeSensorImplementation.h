#pragma once

#include "unrealSensorImplementation.h"

namespace qReal {
namespace interpreters {
namespace robots {
namespace details {
namespace robotImplementations {
namespace sensorImplementations {

class UnrealGyroscopeSensorImplementation : public UnrealSensorImplementation
{
	Q_OBJECT

public:
	UnrealGyroscopeSensorImplementation(inputPort::InputPortEnum const port, d2Model::D2RobotModel *d2Model);
	virtual void read();
};

}
}
}
}
}
}
