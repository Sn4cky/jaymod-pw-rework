#ifndef GAME_CMD_PASSVOTE_H
#define GAME_CMD_PASSVOTE_H

///////////////////////////////////////////////////////////////////////////////

class PassVote : public AbstractBuiltin
{
protected:
    PostAction doExecute( Context& );

public:
    PassVote();
    ~PassVote();
};

///////////////////////////////////////////////////////////////////////////////

#endif // GAME_CMD_PASSVOTE_H
