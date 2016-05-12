#include <bgame/impl.h>

///////////////////////////////////////////////////////////////////////////////

EtmainBulletModel::EtmainBulletModel( Client& client_, bool reference_ )
    : AbstractBulletModel ( TYPE_ETMAIN, client_, reference_ )
    , _bulletVol          ( *this, true )
{
}

///////////////////////////////////////////////////////////////////////////////

EtmainBulletModel::~EtmainBulletModel()
{
}

///////////////////////////////////////////////////////////////////////////////

void
EtmainBulletModel::adjustStartPoint( vec3_t start )
{
    // No adjustment necessary.
}