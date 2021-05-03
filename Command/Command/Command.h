#ifndef DESIGN_PATTERNS_COMMAND_H
#define DESIGN_PATTERNS_COMMAND_H
class Command
{
public:
    Command();
    virtual ~Command();

    virtual void execute();
};
#endif //DESIGN_PATTERNS_COMMAND_H
