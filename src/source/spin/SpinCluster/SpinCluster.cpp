#include "include/spin/SpinCluster.h"
#include "include/spin/SpinGrouping.h"

////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////
// cSpinCluster
cSpinCluster::cSpinCluster(cSpinGrouping * grouping)
{
    _grouping = grouping;
}

cSpinCluster::~cSpinCluster()
{
    if (!_grouping) delete _grouping;
}

void cSpinCluster::make()
{
    _cluster_index_list = _grouping->generate();
}
