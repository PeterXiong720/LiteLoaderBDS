// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
enum CommandPermissionLevel : char;
enum class CommandFlagValue : char;
enum SemanticConstraint : unsigned char;
class CommandParameterData;
#include "CommandFlag.hpp"
#include <memory>
//#include "typeid_t.hpp"
//#include "Command.hpp"
#include "CommandPosition.hpp"
#include "CommandPositionFloat.hpp"
#include "CommandMessage.hpp"
#include "CommandSelector.hpp"
#include "CommandOrigin.hpp"
#include "CommandVersion.hpp"
#include "CommandRawText.hpp"
#include "CommandItem.hpp"
#include "CommandIntegerRange.hpp"


#pragma region typeid

template <typename T>
class typeid_t
{
public:
    inline static unsigned short count = 0;
    unsigned short value;
    typeid_t<T>(typeid_t<T> const& id)
        : value(id.value){};
    typeid_t<T>(unsigned short value)
        : value(value){};
};
template <>
class typeid_t<CommandRegistry>
{
public:
    MCAPI static unsigned short count;
    unsigned short value;
    typeid_t<CommandRegistry>(typeid_t<CommandRegistry> const& id)
        : value(id.value){};
    typeid_t<CommandRegistry>(unsigned short value)
        : value(value){};
};
template <typename T, typename T2>
typeid_t<T> type_id()
{
    static typeid_t<T> id = typeid_t<T>::count++;
    return id;
}
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, ActorDamageCause>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, AutomaticID<class Dimension, int>>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class Block const*>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, bool>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandMessage>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, enum CommandOperator>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandPosition>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandPositionFloat>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandPositionFloat>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandSelector<class Actor>>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class CommandSelector<class Player>>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, enum EquipmentSlot>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, float>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, int>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, Json::Value>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, enum Mirror>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class MobEffect const*>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class RelativeFloat>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, std::string>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, std::unique_ptr<class Command>>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, class WildcardCommandSelector<Actor>>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, CommandItem>();
template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, CommandIntegerRange>();
//template MCAPI typeid_t<CommandRegistry> type_id<CommandRegistry, ActorDefinitionIdentifier const*>();
template<>
inline typeid_t<CommandRegistry> type_id<CommandRegistry, ActorDefinitionIdentifier const*>()
{
    static typeid_t<CommandRegistry> id = *(typeid_t<CommandRegistry>*)dlsym_real("?id@?1???$type_id@VCommandRegistry@@PEBUActorDefinitionIdentifier@@@@YA?AV?$typeid_t@VCommandRegistry@@@@XZ@4V1@A");
    //static typeid_t<CommandRegistry> id = ([]() -> typeid_t<CommandRegistry> {
    //    CommandParameterData data = SymCall("??$mandatory@VRideCommand@@PEBUActorDefinitionIdentifier@@@commands@@YA?AVCommandParameterData@@PEQRideCommand@@PEBUActorDefinitionIdentifier@@PEBDPEQ2@_N@Z",
    //            CommandParameterData, void*, char const*, uintptr_t)(nullptr, "entityType", 0);
    //    return data.tid;
    //    })();
    return id;
};

#pragma endregion

#undef BEFORE_EXTRA

class CommandRegistry {

#define AFTER_EXTRA
// Add Member There
public:

    class Symbol {
    public:
        unsigned val;
        MCAPI Symbol(unsigned __int64 = -1);
        MCAPI Symbol(class Symbol const&);
        MCAPI unsigned __int64 toIndex() const;
        MCAPI int value() const;
    };

    struct ParseToken
    {
        std::unique_ptr<CommandRegistry::ParseToken> child;
        std::unique_ptr<CommandRegistry::ParseToken> next;
        CommandRegistry::ParseToken* parent;
        const char* text; //24
        uint32_t length;  //32
        Symbol type;      //36
        MCAPI std::string toString() const;
        //{
        //    if (text)
        //        return std::string(text, length);
        //    auto v6 = child.get();
        //    auto v8 = child.get();
        //    while (v8->child)
        //    {
        //        v8 = v8->child.get();
        //    }
        //    while (v6->child || v6->next)
        //    {
        //        v6 = v6->next ? v6->next.get() : v6->child.get();
        //    }
        //    auto v10 = v6->text + v6->length;
        //    auto v11 = v8->text;
        //    return std::string(v11, v10 - v11);
        //};
    };
    static_assert(sizeof(ParseToken) == 40);
    using ParseFn = bool (CommandRegistry::*)(
        void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&,
        std::vector<std::string>&) const;

    struct Overload {
        using FactoryFn = std::unique_ptr<class Command>(*)();

        CommandVersion version;                    // 0
        FactoryFn factory;                         // 8
        std::vector<CommandParameterData> params;  // 16
        unsigned char unk;                         // 40
        double  a = 0;                             // 48
        double  b = 0;                             // 56
        double  c = 0;                             // 64
        inline Overload(CommandVersion version,
            FactoryFn factory,
            std::vector<CommandParameterData>&& args)
            : version(version),
            factory(factory),
            params(std::forward<std::vector<CommandParameterData>>(args)),
            unk(255) {}
    };

    struct Signature {
        std::string name;                                  // 0
        std::string desc;                                  // 32
        std::vector<CommandRegistry::Overload> overloads;  // 64
        CommandPermissionLevel perm;                       // 88
        CommandRegistry::Symbol main_symbol;               // 92
        CommandRegistry::Symbol alt_symbol;                // 96
        CommandFlag flag;                                  // 100
        int unk72;
        int unk76;
        int unk80;
        bool b84;

        inline Signature(std::string_view name,
            std::string_view desc,
            CommandPermissionLevel perm,
            CommandRegistry::Symbol symbol,
            CommandFlag flag)
            : name(name), desc(desc), perm(perm), main_symbol(symbol), flag(flag) {}
    };

    struct SoftEnum {
        std::string name;               // 0
        std::vector<std::string> list;  // 32
    };

    template <typename Type>
    struct DefaultIdConverter {
        template <typename Target, typename Source>
        static Target convert(Source source) {
            return (Target)source;
        }
        uint64_t operator()(Type value) const {
            return convert<uint64_t, Type>(value);
        }
        Type operator()(uint64_t value) const {
            return convert<Type, uint64_t>(value);
        }
    };
    
    template <typename T>
    inline static std::unique_ptr<class Command> allocateCommand() {
        return std::make_unique<T>();
    }
    inline void registerOverload(
        std::string const& name, Overload::FactoryFn factory, std::vector<CommandParameterData>&& args) {
        Signature* signature = const_cast<Signature*>(findCommand(name));
        auto& overload = signature->overloads.emplace_back(CommandVersion{}, factory, std::move(args));
        registerOverloadInternal(*signature, overload);
    }
    template <typename T, typename... Params>
    inline void registerOverload(std::string const& name, Params... params) {
        registerOverload(name, &allocateCommand<T>, {params...});
    }
    
    template <typename Type>
    bool
        fakeParse(void*, ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&) const {
        return false;
    }
    struct ParseTable {};
    inline static std::unordered_map<string, void*> parse_ptr = {
        {typeid(CommandMessage).name(),
         dlsym_real(
             "??$parse@VCommandMessage@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@"
             "@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_"
             "string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$"
             "char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(std::string).name(),
         dlsym_real("??$parse@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@"
                    "CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_"
                    "string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@"
                    "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$"
                    "char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(bool).name(),
         dlsym_real("??$parse@_N@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$"
                    "basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@"
                    "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_"
                    "traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(float).name(),
         dlsym_real("??$parse@M@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$"
                    "basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_"
                    "string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@"
                    "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(int).name(),
         dlsym_real("??$parse@H@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$"
                    "basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_"
                    "string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@"
                    "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(CommandSelector<Actor>).name(),
         dlsym_real(
             "??$parse@V?$CommandSelector@VActor@@@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@"
             "AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@"
             "AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@"
             "V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(CommandSelector<Player>).name(),
         dlsym_real(
             "??$parse@V?$CommandSelector@VPlayer@@@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@"
             "AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@"
             "AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@"
             "V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(CommandPosition).name(),
         dlsym_real(
             "??$parse@VCommandPosition@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@"
             "HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@"
             "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@"
             "std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(CommandPositionFloat).name(),
         dlsym_real(
             "??$parse@VCommandPositionFloat@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@"
             "HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@"
             "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@"
             "V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(Json::Value).name(),
         dlsym_real(
             "??$parse@VValue@Json@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@"
             "HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@"
             "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@"
             "V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(std::unique_ptr<class Command>).name(),
         dlsym_real(
             "??$parse@V?$unique_ptr@VCommand@@U?$default_delete@VCommand@@@std@@@std@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(RelativeFloat).name(),
         dlsym_real(
             "??$parse@VRelativeFloat@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(CommandRawText).name(),
         dlsym_real(
             "??$parse@VCommandRawText@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(Block const*).name(),
         dlsym_real(
             "??$parse@PEBVBlock@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(MobEffect const*).name(),
         dlsym_real(
             "??$parse@PEBVMobEffect@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(CommandItem).name(),
         dlsym_real(
             "??$parse@VCommandItem@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(WildcardCommandSelector<Actor>).name(),
         dlsym_real(
             "??$parse@V?$WildcardCommandSelector@VActor@@@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
        {typeid(ActorDefinitionIdentifier const*).name(),
         dlsym_real(
             "??$parse@PEBUActorDefinitionIdentifier@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
    };

private:
    template <typename T>
    bool parse(void*, ParseToken const&, CommandOrigin const&, int, std::string&, std::vector<std::string>&) const {
            
    };

public:
    template <typename T>
    inline static ParseFn getParseFn(){
        if constexpr (!std::is_same_v<enum CommandOperator,T> && std::is_enum_v<T>)
            return &fakeParse<T>;
        //else
        //    return &parse<T>;
        bool (CommandRegistry::*ptr)(void*, CommandRegistry::ParseToken const&,
                                     CommandOrigin const&, int, std::string&,
                                     std::vector<std::string>&) const;
        *(void**)&ptr = parse_ptr[typeid(T).name()];
        if (!ptr) {
            printf("Cant parse cmd data %s\n", typeid(T).name());
            std::this_thread::sleep_for(std::chrono::seconds(10));
            exit(1);
        }
        return ptr;
    }
    bool parseEnumInt(void* target,
                      CommandRegistry::ParseToken const& token,
                      CommandOrigin const&,
                      int,
                      std::string&,
                      std::vector<std::string>&) const
    {
        auto data = getEnumData(token);
        *(int*)target = (int)data;
        return true;
    }
    bool parseEnumString(void* target,
                         CommandRegistry::ParseToken const& token,
                         CommandOrigin const&,
                         int,
                         std::string&,
                         std::vector<std::string>&) const
    {
        auto data = token.toString();
        *(std::string*)target = data;
        return true;
    }

    template <typename Type, typename IDConverter = CommandRegistry::DefaultIdConverter<Type>>
    bool parseEnum(
        void* target, CommandRegistry::ParseToken const& token, CommandOrigin const&, int, std::string&,
        std::vector<std::string>&) const
    {
        //fmt::print(token.toString() + '\n');
        auto data = getEnumData(token);
        *(Type*)target = IDConverter{}(data);
        return true;
    }

    template <typename Type, typename IDConverter = CommandRegistry::DefaultIdConverter<Type>>
    unsigned addEnumValues(
        std::string const& name, typeid_t<CommandRegistry> tid,
        std::vector<std::pair<std::string, Type>> const& values) {
        std::vector<std::pair<std::string, uint64_t>> converted;
        IDConverter converter;
        for (auto& value : values)
            converted.emplace_back(value.first, converter(value.second));
        return _addEnumValuesInternal(name, converted, tid, &CommandRegistry::parseEnum<Type, IDConverter>).val;
    }
    unsigned addEnumValues(std::string const& name,
                           typeid_t<CommandRegistry> tid,
                           std::initializer_list<std::string> const& values) {
        std::vector<std::pair<std::string, uint64_t>> converted;
        uint64_t idx = 0;
        for (auto& value : values)
            converted.emplace_back(value, ++idx);
        return _addEnumValuesInternal(name, converted, tid, &CommandRegistry::parseEnumInt).val;
    }

    //inline static typeid_t<CommandRegistry> getNextTypeId() {
    //    return typeid_t<CommandRegistry>::count++;
    //}

    template <typename T>
    CommandRegistry* addEnum(char const* name, std::vector<std::pair<std::string, T>> const& values) {
        this->addEnumValues<T>(name, type_id<CommandRegistry, T>(), values);
        return this;
    }

    friend class DynamicCommand;
    friend class DynamicCommandInstance;


#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDREGISTRY
public:
    class CommandRegistry& operator=(class CommandRegistry const&) = delete;
    CommandRegistry(class CommandRegistry const&) = delete;
#endif

public:
    MCAPI CommandRegistry();
    MCAPI void addEnumValueConstraints(std::string const&, std::vector<std::string> const&, enum SemanticConstraint);
    MCAPI int addEnumValues(std::string const&, std::vector<std::string> const&);
    MCAPI int addSoftEnum(std::string const&, std::vector<std::string>);
    MCAPI void addSoftEnumValues(std::string const&, std::vector<std::string>);
    MCAPI bool buildSelector(struct ActorSelectorArgs const&, class CommandSelectorBase*, std::string&) const;
    MCAPI std::vector<std::string> getAliases(std::string const&) const;
    MCAPI std::vector<std::string> getAlphabeticalLookup(class CommandOrigin const&) const;
    MCAPI std::string getCommandName(std::string const&) const;
    MCAPI struct CommandSyntaxInformation getCommandOverloadSyntaxInformation(class CommandOrigin const&, std::string const&) const;
    MCAPI enum CommandStatus getCommandStatus(std::string const&) const;
    MCAPI bool isCommandOfType(std::string const&, enum CommandTypeFlag) const;
    MCAPI bool isValidCommand(std::string const&) const;
    MCAPI void registerAlias(std::string, std::string);
    MCAPI void registerCommand(std::string const&, char const*, enum CommandPermissionLevel, struct CommandFlag, struct CommandFlag);
    MCAPI void removeSoftEnumValues(std::string const&, std::vector<std::string>);
    MCAPI bool requiresCheatsEnabled(std::string const&) const;
    MCAPI class AvailableCommandsPacket serializeAvailableCommands() const;
    MCAPI void setCommandRegistrationOverride(class std::function<void (struct CommandFlag& , std::string const& )>);
    MCAPI void setNetworkUpdateCallback(class std::function<void (class Packet const& )>);
    MCAPI void setScoreCallback(class std::function<int (bool& , std::string const& , class Actor const& )>);
    MCAPI ~CommandRegistry();
    MCAPI static char const* COMMAND_NAME_ENUM_NAME;
    MCAPI static char const* FUNCTION_NAME_SOFTENUM_NAME;
    MCAPI static char const* TAG_VALUES_SOFTENUM_NAME;

protected:

private:
    MCAPI void _addEnumValueConstraintsInternal(std::vector<struct std::pair<unsigned __int64, unsigned int>> const&, enum SemanticConstraint);
    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(std::string const&, std::vector<struct std::pair<std::string, unsigned __int64>> const&, class typeid_t<class CommandRegistry>, bool (CommandRegistry::*)(void* , struct CommandRegistry::ParseToken const& , class CommandOrigin const& , int, std::string& , std::vector<std::string>& ) const);
    MCAPI class CommandRegistry::Symbol _addEnumValuesInternal(std::string const&, std::vector<struct std::pair<unsigned __int64, unsigned __int64>> const&, class typeid_t<class CommandRegistry>, bool (CommandRegistry::*)(void* , struct CommandRegistry::ParseToken const& , class CommandOrigin const& , int, std::string& , std::vector<std::string>& ) const);
    MCAPI class CommandRegistry::Symbol _addFunctionSoftEnum();
    MCAPI class CommandRegistry::Symbol _getConstrainedParamEnumSymbol(class CommandRegistry::Symbol) const;
    MCAPI bool _isCommandElementValid(std::string const&) const;
    MCAPI bool _matchesEnumConstraintsSet(class CommandRegistry::Symbol const&, class CommandOrigin const&, class CommandRegistry::Symbol const&, enum SemanticConstraint) const;
    MCAPI void addEnumValuesToExisting(unsigned int, std::vector<struct std::pair<unsigned __int64, unsigned __int64>> const&);
    MCAPI class CommandRegistry::Symbol addPostfix(std::string const&);
    MCAPI void addRule(class CommandRegistry::Symbol, std::vector<class CommandRegistry::Symbol>&&, class std::function<struct CommandRegistry::ParseToken* (struct CommandRegistry::ParseToken& , class CommandRegistry::Symbol)>, class CommandVersion);
    MCAPI void addSemanticConstraint(enum SemanticConstraint);
    MCAPI class CommandRegistry::Symbol addSoftTerminal(std::string const&);
    MCAPI void buildFirstSet(struct CommandRegistry::ParseTable&, class CommandRegistry::Symbol, unsigned int) const;
    MCAPI void buildFollowSet(struct CommandRegistry::ParseTable&, class CommandRegistry::Symbol, unsigned int, class std::set<class CommandRegistry::Symbol, struct std::less<class CommandRegistry::Symbol>, class std::allocator<class CommandRegistry::Symbol> >&) const;
    MCAPI class CommandRegistry::Symbol buildOptionalRuleChain(struct CommandRegistry::Signature const&, std::vector<class CommandParameterData> const&, std::vector<class CommandRegistry::Symbol> const&);
    MCAPI void buildOverload(struct CommandRegistry::Overload&);
    MCAPI void buildParseTable(unsigned int) const;
    MCAPI class CommandRegistry::Symbol buildRules(struct CommandRegistry::Signature&, std::vector<struct CommandRegistry::Overload* > const&, unsigned __int64);
    MCAPI bool checkOriginCommandFlags(class CommandOrigin const&, struct CommandFlag, enum CommandPermissionLevel) const;
    MCAPI std::unique_ptr<class Command> createCommand(struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&) const;
    MCAPI std::string describe(struct CommandRegistry::Signature const&, std::string const&, struct CommandRegistry::Overload const&, unsigned int, unsigned int*, unsigned int*) const;
    MCAPI std::string describe(class CommandParameterData const&) const;
    MCAPI std::string describe(class CommandRegistry::Symbol) const;
    MCAPI struct CommandRegistry::Signature const* findCommand(std::string const&) const;
    MCAPI struct CommandRegistry::Signature* findCommand(std::string const&);
    MCAPI class CommandRegistry::Symbol findEnumValue(std::string const&) const;
    MCAPI class CommandRegistry::Symbol findIdentifierInfo(std::string const&) const;
    MCAPI class CommandRegistry::Symbol findPostfix(std::string const&) const;
    MCAPI std::vector<class CommandRegistry::Symbol> first(struct CommandRegistry::ParseTable&, std::vector<class CommandRegistry::Symbol> const&) const;
    MCAPI void forEachNonTerminal(class std::function<void (class CommandRegistry::Symbol)>) const;
    MCAPI unsigned __int64 getEnumData(struct CommandRegistry::ParseToken const&) const;
    MCAPI struct InvertableFilter<std::string > getInvertableFilter(struct CommandRegistry::ParseToken const&) const;
    MCAPI bool isValid(class CommandRegistry::Symbol) const;
    MCAPI bool originCanRun(class CommandOrigin const&, struct CommandRegistry::Overload const&) const;
    MCAPI bool originCanRun(class CommandOrigin const&, struct CommandRegistry::Signature const&) const;
    MCAPI bool parseOperator(enum CommandOperator*, struct CommandRegistry::ParseToken const&, std::string&, std::vector<std::string>&) const;
    MCAPI bool parseSelector(struct ActorSelectorArgs&, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&) const;
    MCAPI bool parseSelector(class CommandSelectorBase*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&, bool) const;
    MCAPI void registerOverloadInternal(struct CommandRegistry::Signature&, struct CommandRegistry::Overload&);
    MCAPI void setupOverloadRules(struct CommandRegistry::Signature&, struct CommandRegistry::Overload&);
    MCAPI std::string symbolToString(class CommandRegistry::Symbol) const;
    MCAPI static std::string _removeStringQuotes(std::string const&);
    MCAPI static struct CommandRegistry::ParseToken* collapse(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol);
    MCAPI static struct CommandRegistry::ParseToken* collapseOn(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol, class CommandRegistry::Symbol);
    MCAPI static struct CommandRegistry::ParseToken* expand(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol);
    MCAPI static struct CommandRegistry::ParseToken* expandExcept(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol, class CommandRegistry::Symbol);
    MCAPI static struct CommandRegistry::ParseToken* fold(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol, class CommandRegistry::Symbol);
    MCAPI static struct CommandRegistry::ParseToken* kill(struct CommandRegistry::ParseToken&, class CommandRegistry::Symbol);
    MCAPI static bool readFloat(float&, struct CommandRegistry::ParseToken const&, std::string&, std::vector<std::string>&);
    MCAPI static bool readInt(int&, struct CommandRegistry::ParseToken const&, std::string&, std::vector<std::string>&);
    MCAPI static bool readRelativeCoordinate(bool&, float&, struct CommandRegistry::ParseToken const&, bool, std::string&, std::vector<std::string>&);

};