#ifndef GAME_CMD_PANZERWAR_H
#define GAME_CMD_PANZERWAR_H

///////////////////////////////////////////////////////////////////////////////

class PanzerWar : public AbstractBuiltin
{
protected:
    PostAction doExecute( Context& );

public:
    PanzerWar();
    ~PanzerWar();
};

///////////////////////////////////////////////////////////////////////////////

#endif // GAME_CMD_PANZERWAR_H