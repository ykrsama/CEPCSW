#ifndef DummyDedxSimTool_h
#define DummyDedxSimTool_h

#include "GaudiKernel/AlgTool.h"
#include "DetSimInterface/IDedxSimTool.h"

class DummyDedxSimTool: public extends<AlgTool, IDedxSimTool> {

public:
    using extends::extends;

    /// Overriding initialize and finalize
    StatusCode initialize() override;
    StatusCode finalize() override;

    /// Overriding dedx tool
    double dedx(const G4Step* aStep) override;

};

#endif
