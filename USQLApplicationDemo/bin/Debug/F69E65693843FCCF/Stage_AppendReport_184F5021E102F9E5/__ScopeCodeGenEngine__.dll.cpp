#pragma warning( disable : 4100 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4355 )
#pragma warning( disable : 4503 )
#pragma warning( disable : 4512 )
#pragma warning( disable:  4651 )
#pragma warning( disable : 4691 )
#pragma warning( disable : 4723 )
#pragma warning( disable : 4702 )
#define SCOPE_NO_UDT
#if defined(COMPILE_NATIVE)
#include "ScopeCommonError.h"
#include "ScopeError.h"
#include "ScopeOperators.h"
#endif
#if defined(COMPILE_MANAGED)
#using <mscorlib.dll>
[assembly: System::Runtime::Versioning::TargetFrameworkAttribute(".NETFramework,Version=v4.5", FrameworkDisplayName = ".NET Framework, Version 4.5")];
#include "ScopeCommonError.h"
#include "SqlManaged.h"
#endif
#if defined(COMPILE_NATIVE)
#endif
using namespace ScopeEngine;
enum OperatorUID
{
UID_Extract_0 = 1,
UID_Extract_0_Data0 = 2,
UID_Process_1 = 3,
UID_Process_1_Data0 = 4,
UID_SV1_Extract_out0 = 5,
UID_ParallelUnionAll_Extract_0
};
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


//namespace ScopeGeneratedClasses
//{
    // IDs representing UDTs to be used in native code
    enum UserDefinedTypeId
    {
        
    };

#if defined(COMPILE_MANAGED)
// Explicit instantiations for templated functions that are defined in managed code
#endif // defined(COMPILE_MANAGED)


    class Extract_0_Data0
    {
    public:
        FString m_in_first_name;
        FString m_in_last_name;
        NativeNullable<int> m_in_seq;
        NativeNullable<int> m_in_subseq;
        FString m_Address1;
        FString m_Address2;
        FString m_City;
        FString m_State;
        NativeNullable<int> m_ZIP_Code;
        FString m_First_Name;
        FString m_Last_Name;
        FString m_in_cvtseq;
        FString m_in_zip_code;
        FString m___I120Combined20Adult20Age202D220bytes071854cba67d4217bf9334137fc6d0d0;
        FString m___Individual20Education928a75d11f7343449f83cef79bc9caa0;
        FString m___Marital20Status10f8bd19b1424551998b34a368fb6156;
        FString m___Mosaic20Householdb214151d9ad142ec970fffbfa36c5c46;
        FString m___ADULT20GENDER2FCOMBINED20AGEae062c4fb55e48f5a1cae557d0101320;
        NativeNullable<int> m___Year20Built2028Enhanced298663b77cff4545e2bf97f1f75ccb3b50;
        FString m___Political20Affiliation240a467595c34a1f95934d78cfd02ae6;
        FString m___Number20Of20Adults20In20Household2e8e822994b64c4a9aa41654ca4ce936;
        FString m___Number20Of20Children2028Maximum20Of20820Children20Per20Household29a5fba6397e794c0986b2c0d134aa7b65;
        FString m___Dwelling20Type3728e52bf2124220a87a30a31f3325cf;
        FString m___Length20Of20Residence0af43b1ead01491fad86e2ea8d43495c;
        FString m___Multi2DCompany20Direct20Mail20Responder202D20Living20Units20Levelb783e7770e714a019116f6a7aaba0bf7;
        FString m___Gender20Code33aa1c24dba6437597ea2405ad79c023;
        NativeNullable<int> m___Date20of20Birth2FCombined20Adult20Age2cafbca1afd144d7a02977d77b7cd137;
        NativeNullable<int> m___Estimated20Current20Home20Value70278aee7bde44e1ba4e0630869c1862;
        FString m___I120Combined20Agebc7cc6abc2b44384b28e308b863bc339;
        FString m___ChoiceScore20Bundle59a4c411a38647de8fa454a732aa8668;
        FString m___ChoiceScore20Prospect20Segment837560e9d4134883b225b80a7682c900;
        NativeNullable<int> m___ChoiceScore20Prospect20Model20Score54a21d6e3ec5456baa77c74522e2652e;
        FString m___ChoiceScore20Good20versus20Bad20Score836ed27361944215932f1630329fa397;
        FString m___Enhancement20Mandatory20Append1f30a345214d7499ea0bd64904c038b8b;
        FString m___Enhancement20Mandatory20Append27e09d62ca45a4621ae4a279594af0bb7;
        FString m___Enhancement20Mandatory20Append3175de735a22e4234a64afed6447d9c74;
        FString m___Combined20Homeownercc7b5fe5c49145779e065f1625dd13b4;
        FString m___Online20Overalld64e7d9fbf044c1a996391fd3c46acde;
        FString m___Retail20Overalld02604037dbe4a13b4de7f3636fad950;
        FString m___Estimated20Current20Home20Value2c110860f9c484c33bbe19530377870c5;
        FString m___Presence20of20Children2002D186f355167ef144598b4029f5f5aaa2197;
        FString m___ConsumerView20Profitability20Scoreed3857e520884373a5a8952a375b6f0b;
        FString m___Person2013A20Occupation20Group20V2e3ed3297860b444dabb4e6ce5402083f;
        FString m___Est20Household20Income20V58d5899d242f14ad79ab93fb1d16860ef;
        Extract_0_Data0();
        Extract_0_Data0(const Extract_0_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Extract_0_Data0(const Extract_0_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Extract_0_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Extract_0_Data0 & row)
    {
        os << "\tin_first_name:\t" << row.m_in_first_name << endl;
        os << "\tin_last_name:\t" << row.m_in_last_name << endl;
        os << "\tin_seq:\t" << row.m_in_seq << endl;
        os << "\tin_subseq:\t" << row.m_in_subseq << endl;
        os << "\tAddress1:\t" << row.m_Address1 << endl;
        os << "\tAddress2:\t" << row.m_Address2 << endl;
        os << "\tCity:\t" << row.m_City << endl;
        os << "\tState:\t" << row.m_State << endl;
        os << "\tZIP_Code:\t" << row.m_ZIP_Code << endl;
        os << "\tFirst_Name:\t" << row.m_First_Name << endl;
        os << "\tLast_Name:\t" << row.m_Last_Name << endl;
        os << "\tin_cvtseq:\t" << row.m_in_cvtseq << endl;
        os << "\tin_zip_code:\t" << row.m_in_zip_code << endl;
        os << "\tI1 Combined Adult Age -2 bytes:\t" << row.m___I120Combined20Adult20Age202D220bytes071854cba67d4217bf9334137fc6d0d0 << endl;
        os << "\tIndividual Education:\t" << row.m___Individual20Education928a75d11f7343449f83cef79bc9caa0 << endl;
        os << "\tMarital Status:\t" << row.m___Marital20Status10f8bd19b1424551998b34a368fb6156 << endl;
        os << "\tMosaic Household:\t" << row.m___Mosaic20Householdb214151d9ad142ec970fffbfa36c5c46 << endl;
        os << "\tADULT GENDER/COMBINED AGE:\t" << row.m___ADULT20GENDER2FCOMBINED20AGEae062c4fb55e48f5a1cae557d0101320 << endl;
        os << "\tYear Built (Enhanced):\t" << row.m___Year20Built2028Enhanced298663b77cff4545e2bf97f1f75ccb3b50 << endl;
        os << "\tPolitical Affiliation:\t" << row.m___Political20Affiliation240a467595c34a1f95934d78cfd02ae6 << endl;
        os << "\tNumber Of Adults In Household:\t" << row.m___Number20Of20Adults20In20Household2e8e822994b64c4a9aa41654ca4ce936 << endl;
        os << "\tNumber Of Children (Maximum Of 8 Children Per Household):\t" << row.m___Number20Of20Children2028Maximum20Of20820Children20Per20Household29a5fba6397e794c0986b2c0d134aa7b65 << endl;
        os << "\tDwelling Type:\t" << row.m___Dwelling20Type3728e52bf2124220a87a30a31f3325cf << endl;
        os << "\tLength Of Residence:\t" << row.m___Length20Of20Residence0af43b1ead01491fad86e2ea8d43495c << endl;
        os << "\tMulti-Company Direct Mail Responder - Living Units Level:\t" << row.m___Multi2DCompany20Direct20Mail20Responder202D20Living20Units20Levelb783e7770e714a019116f6a7aaba0bf7 << endl;
        os << "\tGender Code:\t" << row.m___Gender20Code33aa1c24dba6437597ea2405ad79c023 << endl;
        os << "\tDate of Birth/Combined Adult Age:\t" << row.m___Date20of20Birth2FCombined20Adult20Age2cafbca1afd144d7a02977d77b7cd137 << endl;
        os << "\tEstimated Current Home Value:\t" << row.m___Estimated20Current20Home20Value70278aee7bde44e1ba4e0630869c1862 << endl;
        os << "\tI1 Combined Age:\t" << row.m___I120Combined20Agebc7cc6abc2b44384b28e308b863bc339 << endl;
        os << "\tChoiceScore Bundle:\t" << row.m___ChoiceScore20Bundle59a4c411a38647de8fa454a732aa8668 << endl;
        os << "\tChoiceScore Prospect Segment:\t" << row.m___ChoiceScore20Prospect20Segment837560e9d4134883b225b80a7682c900 << endl;
        os << "\tChoiceScore Prospect Model Score:\t" << row.m___ChoiceScore20Prospect20Model20Score54a21d6e3ec5456baa77c74522e2652e << endl;
        os << "\tChoiceScore Good versus Bad Score:\t" << row.m___ChoiceScore20Good20versus20Bad20Score836ed27361944215932f1630329fa397 << endl;
        os << "\tEnhancement Mandatory Append1:\t" << row.m___Enhancement20Mandatory20Append1f30a345214d7499ea0bd64904c038b8b << endl;
        os << "\tEnhancement Mandatory Append2:\t" << row.m___Enhancement20Mandatory20Append27e09d62ca45a4621ae4a279594af0bb7 << endl;
        os << "\tEnhancement Mandatory Append3:\t" << row.m___Enhancement20Mandatory20Append3175de735a22e4234a64afed6447d9c74 << endl;
        os << "\tCombined Homeowner:\t" << row.m___Combined20Homeownercc7b5fe5c49145779e065f1625dd13b4 << endl;
        os << "\tOnline Overall:\t" << row.m___Online20Overalld64e7d9fbf044c1a996391fd3c46acde << endl;
        os << "\tRetail Overall:\t" << row.m___Retail20Overalld02604037dbe4a13b4de7f3636fad950 << endl;
        os << "\tEstimated Current Home Value2:\t" << row.m___Estimated20Current20Home20Value2c110860f9c484c33bbe19530377870c5 << endl;
        os << "\tPresence of Children 0-18:\t" << row.m___Presence20of20Children2002D186f355167ef144598b4029f5f5aaa2197 << endl;
        os << "\tConsumerView Profitability Score:\t" << row.m___ConsumerView20Profitability20Scoreed3857e520884373a5a8952a375b6f0b << endl;
        os << "\tPerson 1: Occupation Group V2:\t" << row.m___Person2013A20Occupation20Group20V2e3ed3297860b444dabb4e6ce5402083f << endl;
        os << "\tEst Household Income V5:\t" << row.m___Est20Household20Income20V58d5899d242f14ad79ab93fb1d16860ef << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_1_Data0
    {
    public:
        FBinary m_NameHash;
        NativeNullable<int> m_in_seq;
        NativeNullable<int> m_in_subseq;
        FString m_Address1;
        FString m_Address2;
        FString m_City;
        FString m_State;
        NativeNullable<int> m_ZIP_Code;
        FString m_First_Name;
        FString m_Last_Name;
        FString m_in_cvtseq;
        FString m_in_zip_code;
        FString m___I120Combined20Adult20Age202D220bytes071854cba67d4217bf9334137fc6d0d0;
        FString m___Individual20Education928a75d11f7343449f83cef79bc9caa0;
        FString m___Marital20Status10f8bd19b1424551998b34a368fb6156;
        FString m___Mosaic20Householdb214151d9ad142ec970fffbfa36c5c46;
        FString m___ADULT20GENDER2FCOMBINED20AGEae062c4fb55e48f5a1cae557d0101320;
        NativeNullable<int> m___Year20Built2028Enhanced298663b77cff4545e2bf97f1f75ccb3b50;
        FString m___Political20Affiliation240a467595c34a1f95934d78cfd02ae6;
        FString m___Number20Of20Adults20In20Household2e8e822994b64c4a9aa41654ca4ce936;
        FString m___Number20Of20Children2028Maximum20Of20820Children20Per20Household29a5fba6397e794c0986b2c0d134aa7b65;
        FString m___Dwelling20Type3728e52bf2124220a87a30a31f3325cf;
        FString m___Length20Of20Residence0af43b1ead01491fad86e2ea8d43495c;
        FString m___Multi2DCompany20Direct20Mail20Responder202D20Living20Units20Levelb783e7770e714a019116f6a7aaba0bf7;
        FString m___Gender20Code33aa1c24dba6437597ea2405ad79c023;
        NativeNullable<int> m___Date20of20Birth2FCombined20Adult20Age2cafbca1afd144d7a02977d77b7cd137;
        NativeNullable<int> m___Estimated20Current20Home20Value70278aee7bde44e1ba4e0630869c1862;
        FString m___I120Combined20Agebc7cc6abc2b44384b28e308b863bc339;
        FString m___ChoiceScore20Bundle59a4c411a38647de8fa454a732aa8668;
        FString m___ChoiceScore20Prospect20Segment837560e9d4134883b225b80a7682c900;
        NativeNullable<int> m___ChoiceScore20Prospect20Model20Score54a21d6e3ec5456baa77c74522e2652e;
        FString m___ChoiceScore20Good20versus20Bad20Score836ed27361944215932f1630329fa397;
        FString m___Enhancement20Mandatory20Append1f30a345214d7499ea0bd64904c038b8b;
        FString m___Enhancement20Mandatory20Append27e09d62ca45a4621ae4a279594af0bb7;
        FString m___Enhancement20Mandatory20Append3175de735a22e4234a64afed6447d9c74;
        FString m___Combined20Homeownercc7b5fe5c49145779e065f1625dd13b4;
        FString m___Online20Overalld64e7d9fbf044c1a996391fd3c46acde;
        FString m___Retail20Overalld02604037dbe4a13b4de7f3636fad950;
        FString m___Estimated20Current20Home20Value2c110860f9c484c33bbe19530377870c5;
        FString m___Presence20of20Children2002D186f355167ef144598b4029f5f5aaa2197;
        FString m___ConsumerView20Profitability20Scoreed3857e520884373a5a8952a375b6f0b;
        FString m___Person2013A20Occupation20Group20V2e3ed3297860b444dabb4e6ce5402083f;
        FString m___Est20Household20Income20V58d5899d242f14ad79ab93fb1d16860ef;
        Process_1_Data0();
        Process_1_Data0(const Process_1_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_1_Data0(const Process_1_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_1_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_1_Data0 & row)
    {
        os << "\tNameHash:\t" << row.m_NameHash << endl;
        os << "\tin_seq:\t" << row.m_in_seq << endl;
        os << "\tin_subseq:\t" << row.m_in_subseq << endl;
        os << "\tAddress1:\t" << row.m_Address1 << endl;
        os << "\tAddress2:\t" << row.m_Address2 << endl;
        os << "\tCity:\t" << row.m_City << endl;
        os << "\tState:\t" << row.m_State << endl;
        os << "\tZIP_Code:\t" << row.m_ZIP_Code << endl;
        os << "\tFirst_Name:\t" << row.m_First_Name << endl;
        os << "\tLast_Name:\t" << row.m_Last_Name << endl;
        os << "\tin_cvtseq:\t" << row.m_in_cvtseq << endl;
        os << "\tin_zip_code:\t" << row.m_in_zip_code << endl;
        os << "\tI1 Combined Adult Age -2 bytes:\t" << row.m___I120Combined20Adult20Age202D220bytes071854cba67d4217bf9334137fc6d0d0 << endl;
        os << "\tIndividual Education:\t" << row.m___Individual20Education928a75d11f7343449f83cef79bc9caa0 << endl;
        os << "\tMarital Status:\t" << row.m___Marital20Status10f8bd19b1424551998b34a368fb6156 << endl;
        os << "\tMosaic Household:\t" << row.m___Mosaic20Householdb214151d9ad142ec970fffbfa36c5c46 << endl;
        os << "\tADULT GENDER/COMBINED AGE:\t" << row.m___ADULT20GENDER2FCOMBINED20AGEae062c4fb55e48f5a1cae557d0101320 << endl;
        os << "\tYear Built (Enhanced):\t" << row.m___Year20Built2028Enhanced298663b77cff4545e2bf97f1f75ccb3b50 << endl;
        os << "\tPolitical Affiliation:\t" << row.m___Political20Affiliation240a467595c34a1f95934d78cfd02ae6 << endl;
        os << "\tNumber Of Adults In Household:\t" << row.m___Number20Of20Adults20In20Household2e8e822994b64c4a9aa41654ca4ce936 << endl;
        os << "\tNumber Of Children (Maximum Of 8 Children Per Household):\t" << row.m___Number20Of20Children2028Maximum20Of20820Children20Per20Household29a5fba6397e794c0986b2c0d134aa7b65 << endl;
        os << "\tDwelling Type:\t" << row.m___Dwelling20Type3728e52bf2124220a87a30a31f3325cf << endl;
        os << "\tLength Of Residence:\t" << row.m___Length20Of20Residence0af43b1ead01491fad86e2ea8d43495c << endl;
        os << "\tMulti-Company Direct Mail Responder - Living Units Level:\t" << row.m___Multi2DCompany20Direct20Mail20Responder202D20Living20Units20Levelb783e7770e714a019116f6a7aaba0bf7 << endl;
        os << "\tGender Code:\t" << row.m___Gender20Code33aa1c24dba6437597ea2405ad79c023 << endl;
        os << "\tDate of Birth/Combined Adult Age:\t" << row.m___Date20of20Birth2FCombined20Adult20Age2cafbca1afd144d7a02977d77b7cd137 << endl;
        os << "\tEstimated Current Home Value:\t" << row.m___Estimated20Current20Home20Value70278aee7bde44e1ba4e0630869c1862 << endl;
        os << "\tI1 Combined Age:\t" << row.m___I120Combined20Agebc7cc6abc2b44384b28e308b863bc339 << endl;
        os << "\tChoiceScore Bundle:\t" << row.m___ChoiceScore20Bundle59a4c411a38647de8fa454a732aa8668 << endl;
        os << "\tChoiceScore Prospect Segment:\t" << row.m___ChoiceScore20Prospect20Segment837560e9d4134883b225b80a7682c900 << endl;
        os << "\tChoiceScore Prospect Model Score:\t" << row.m___ChoiceScore20Prospect20Model20Score54a21d6e3ec5456baa77c74522e2652e << endl;
        os << "\tChoiceScore Good versus Bad Score:\t" << row.m___ChoiceScore20Good20versus20Bad20Score836ed27361944215932f1630329fa397 << endl;
        os << "\tEnhancement Mandatory Append1:\t" << row.m___Enhancement20Mandatory20Append1f30a345214d7499ea0bd64904c038b8b << endl;
        os << "\tEnhancement Mandatory Append2:\t" << row.m___Enhancement20Mandatory20Append27e09d62ca45a4621ae4a279594af0bb7 << endl;
        os << "\tEnhancement Mandatory Append3:\t" << row.m___Enhancement20Mandatory20Append3175de735a22e4234a64afed6447d9c74 << endl;
        os << "\tCombined Homeowner:\t" << row.m___Combined20Homeownercc7b5fe5c49145779e065f1625dd13b4 << endl;
        os << "\tOnline Overall:\t" << row.m___Online20Overalld64e7d9fbf044c1a996391fd3c46acde << endl;
        os << "\tRetail Overall:\t" << row.m___Retail20Overalld02604037dbe4a13b4de7f3636fad950 << endl;
        os << "\tEstimated Current Home Value2:\t" << row.m___Estimated20Current20Home20Value2c110860f9c484c33bbe19530377870c5 << endl;
        os << "\tPresence of Children 0-18:\t" << row.m___Presence20of20Children2002D186f355167ef144598b4029f5f5aaa2197 << endl;
        os << "\tConsumerView Profitability Score:\t" << row.m___ConsumerView20Profitability20Scoreed3857e520884373a5a8952a375b6f0b << endl;
        os << "\tPerson 1: Occupation Group V2:\t" << row.m___Person2013A20Occupation20Group20V2e3ed3297860b444dabb4e6ce5402083f << endl;
        os << "\tEst Household Income V5:\t" << row.m___Est20Household20Income20V58d5899d242f14ad79ab93fb1d16860ef << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedRow<Extract_0_Data0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(44);            
            offset[0] = ColumnOffsetId(offsetof(Extract_0_Data0, m_in_first_name), T_String);
            offset[1] = ColumnOffsetId(offsetof(Extract_0_Data0, m_in_last_name), T_String);
            offset[2] = ColumnOffsetId(offsetof(Extract_0_Data0, m_in_seq), T_IntegerQ);
            offset[3] = ColumnOffsetId(offsetof(Extract_0_Data0, m_in_subseq), T_IntegerQ);
            offset[4] = ColumnOffsetId(offsetof(Extract_0_Data0, m_Address1), T_String);
            offset[5] = ColumnOffsetId(offsetof(Extract_0_Data0, m_Address2), T_String);
            offset[6] = ColumnOffsetId(offsetof(Extract_0_Data0, m_City), T_String);
            offset[7] = ColumnOffsetId(offsetof(Extract_0_Data0, m_State), T_String);
            offset[8] = ColumnOffsetId(offsetof(Extract_0_Data0, m_ZIP_Code), T_IntegerQ);
            offset[9] = ColumnOffsetId(offsetof(Extract_0_Data0, m_First_Name), T_String);
            offset[10] = ColumnOffsetId(offsetof(Extract_0_Data0, m_Last_Name), T_String);
            offset[11] = ColumnOffsetId(offsetof(Extract_0_Data0, m_in_cvtseq), T_String);
            offset[12] = ColumnOffsetId(offsetof(Extract_0_Data0, m_in_zip_code), T_String);
            offset[13] = ColumnOffsetId(offsetof(Extract_0_Data0, m___I120Combined20Adult20Age202D220bytes071854cba67d4217bf9334137fc6d0d0), T_String);
            offset[14] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Individual20Education928a75d11f7343449f83cef79bc9caa0), T_String);
            offset[15] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Marital20Status10f8bd19b1424551998b34a368fb6156), T_String);
            offset[16] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Mosaic20Householdb214151d9ad142ec970fffbfa36c5c46), T_String);
            offset[17] = ColumnOffsetId(offsetof(Extract_0_Data0, m___ADULT20GENDER2FCOMBINED20AGEae062c4fb55e48f5a1cae557d0101320), T_String);
            offset[18] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Year20Built2028Enhanced298663b77cff4545e2bf97f1f75ccb3b50), T_IntegerQ);
            offset[19] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Political20Affiliation240a467595c34a1f95934d78cfd02ae6), T_String);
            offset[20] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Number20Of20Adults20In20Household2e8e822994b64c4a9aa41654ca4ce936), T_String);
            offset[21] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Number20Of20Children2028Maximum20Of20820Children20Per20Household29a5fba6397e794c0986b2c0d134aa7b65), T_String);
            offset[22] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Dwelling20Type3728e52bf2124220a87a30a31f3325cf), T_String);
            offset[23] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Length20Of20Residence0af43b1ead01491fad86e2ea8d43495c), T_String);
            offset[24] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Multi2DCompany20Direct20Mail20Responder202D20Living20Units20Levelb783e7770e714a019116f6a7aaba0bf7), T_String);
            offset[25] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Gender20Code33aa1c24dba6437597ea2405ad79c023), T_String);
            offset[26] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Date20of20Birth2FCombined20Adult20Age2cafbca1afd144d7a02977d77b7cd137), T_IntegerQ);
            offset[27] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Estimated20Current20Home20Value70278aee7bde44e1ba4e0630869c1862), T_IntegerQ);
            offset[28] = ColumnOffsetId(offsetof(Extract_0_Data0, m___I120Combined20Agebc7cc6abc2b44384b28e308b863bc339), T_String);
            offset[29] = ColumnOffsetId(offsetof(Extract_0_Data0, m___ChoiceScore20Bundle59a4c411a38647de8fa454a732aa8668), T_String);
            offset[30] = ColumnOffsetId(offsetof(Extract_0_Data0, m___ChoiceScore20Prospect20Segment837560e9d4134883b225b80a7682c900), T_String);
            offset[31] = ColumnOffsetId(offsetof(Extract_0_Data0, m___ChoiceScore20Prospect20Model20Score54a21d6e3ec5456baa77c74522e2652e), T_IntegerQ);
            offset[32] = ColumnOffsetId(offsetof(Extract_0_Data0, m___ChoiceScore20Good20versus20Bad20Score836ed27361944215932f1630329fa397), T_String);
            offset[33] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Enhancement20Mandatory20Append1f30a345214d7499ea0bd64904c038b8b), T_String);
            offset[34] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Enhancement20Mandatory20Append27e09d62ca45a4621ae4a279594af0bb7), T_String);
            offset[35] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Enhancement20Mandatory20Append3175de735a22e4234a64afed6447d9c74), T_String);
            offset[36] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Combined20Homeownercc7b5fe5c49145779e065f1625dd13b4), T_String);
            offset[37] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Online20Overalld64e7d9fbf044c1a996391fd3c46acde), T_String);
            offset[38] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Retail20Overalld02604037dbe4a13b4de7f3636fad950), T_String);
            offset[39] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Estimated20Current20Home20Value2c110860f9c484c33bbe19530377870c5), T_String);
            offset[40] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Presence20of20Children2002D186f355167ef144598b4029f5f5aaa2197), T_String);
            offset[41] = ColumnOffsetId(offsetof(Extract_0_Data0, m___ConsumerView20Profitability20Scoreed3857e520884373a5a8952a375b6f0b), T_String);
            offset[42] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Person2013A20Occupation20Group20V2e3ed3297860b444dabb4e6ce5402083f), T_String);
            offset[43] = ColumnOffsetId(offsetof(Extract_0_Data0, m___Est20Household20Income20V58d5899d242f14ad79ab93fb1d16860ef), T_String);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(44);
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn("in_first_name", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "in_first_name") >= 0, /*isSystem*/false);
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn("in_last_name", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "in_last_name") >= 0, /*isSystem*/false);
            c[2] = gcnew ScopeEngineManaged::SqlIpColumn("in_seq", System::Nullable<System::Int32>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "in_seq") >= 0, /*isSystem*/false);
            c[3] = gcnew ScopeEngineManaged::SqlIpColumn("in_subseq", System::Nullable<System::Int32>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "in_subseq") >= 0, /*isSystem*/false);
            c[4] = gcnew ScopeEngineManaged::SqlIpColumn("Address1", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Address1") >= 0, /*isSystem*/false);
            c[5] = gcnew ScopeEngineManaged::SqlIpColumn("Address2", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Address2") >= 0, /*isSystem*/false);
            c[6] = gcnew ScopeEngineManaged::SqlIpColumn("City", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "City") >= 0, /*isSystem*/false);
            c[7] = gcnew ScopeEngineManaged::SqlIpColumn("State", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "State") >= 0, /*isSystem*/false);
            c[8] = gcnew ScopeEngineManaged::SqlIpColumn("ZIP_Code", System::Nullable<System::Int32>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "ZIP_Code") >= 0, /*isSystem*/false);
            c[9] = gcnew ScopeEngineManaged::SqlIpColumn("First_Name", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "First_Name") >= 0, /*isSystem*/false);
            c[10] = gcnew ScopeEngineManaged::SqlIpColumn("Last_Name", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Last_Name") >= 0, /*isSystem*/false);
            c[11] = gcnew ScopeEngineManaged::SqlIpColumn("in_cvtseq", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "in_cvtseq") >= 0, /*isSystem*/false);
            c[12] = gcnew ScopeEngineManaged::SqlIpColumn("in_zip_code", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "in_zip_code") >= 0, /*isSystem*/false);
            c[13] = gcnew ScopeEngineManaged::SqlIpColumn("I1 Combined Adult Age -2 bytes", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "I1 Combined Adult Age -2 bytes") >= 0, /*isSystem*/false);
            c[14] = gcnew ScopeEngineManaged::SqlIpColumn("Individual Education", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Individual Education") >= 0, /*isSystem*/false);
            c[15] = gcnew ScopeEngineManaged::SqlIpColumn("Marital Status", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Marital Status") >= 0, /*isSystem*/false);
            c[16] = gcnew ScopeEngineManaged::SqlIpColumn("Mosaic Household", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Mosaic Household") >= 0, /*isSystem*/false);
            c[17] = gcnew ScopeEngineManaged::SqlIpColumn("ADULT GENDER/COMBINED AGE", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "ADULT GENDER/COMBINED AGE") >= 0, /*isSystem*/false);
            c[18] = gcnew ScopeEngineManaged::SqlIpColumn("Year Built (Enhanced)", System::Nullable<System::Int32>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Year Built (Enhanced)") >= 0, /*isSystem*/false);
            c[19] = gcnew ScopeEngineManaged::SqlIpColumn("Political Affiliation", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Political Affiliation") >= 0, /*isSystem*/false);
            c[20] = gcnew ScopeEngineManaged::SqlIpColumn("Number Of Adults In Household", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Number Of Adults In Household") >= 0, /*isSystem*/false);
            c[21] = gcnew ScopeEngineManaged::SqlIpColumn("Number Of Children (Maximum Of 8 Children Per Household)", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Number Of Children (Maximum Of 8 Children Per Household)") >= 0, /*isSystem*/false);
            c[22] = gcnew ScopeEngineManaged::SqlIpColumn("Dwelling Type", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Dwelling Type") >= 0, /*isSystem*/false);
            c[23] = gcnew ScopeEngineManaged::SqlIpColumn("Length Of Residence", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Length Of Residence") >= 0, /*isSystem*/false);
            c[24] = gcnew ScopeEngineManaged::SqlIpColumn("Multi-Company Direct Mail Responder - Living Units Level", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Multi-Company Direct Mail Responder - Living Units Level") >= 0, /*isSystem*/false);
            c[25] = gcnew ScopeEngineManaged::SqlIpColumn("Gender Code", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Gender Code") >= 0, /*isSystem*/false);
            c[26] = gcnew ScopeEngineManaged::SqlIpColumn("Date of Birth/Combined Adult Age", System::Nullable<System::Int32>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Date of Birth/Combined Adult Age") >= 0, /*isSystem*/false);
            c[27] = gcnew ScopeEngineManaged::SqlIpColumn("Estimated Current Home Value", System::Nullable<System::Int32>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Estimated Current Home Value") >= 0, /*isSystem*/false);
            c[28] = gcnew ScopeEngineManaged::SqlIpColumn("I1 Combined Age", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "I1 Combined Age") >= 0, /*isSystem*/false);
            c[29] = gcnew ScopeEngineManaged::SqlIpColumn("ChoiceScore Bundle", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "ChoiceScore Bundle") >= 0, /*isSystem*/false);
            c[30] = gcnew ScopeEngineManaged::SqlIpColumn("ChoiceScore Prospect Segment", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "ChoiceScore Prospect Segment") >= 0, /*isSystem*/false);
            c[31] = gcnew ScopeEngineManaged::SqlIpColumn("ChoiceScore Prospect Model Score", System::Nullable<System::Int32>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "ChoiceScore Prospect Model Score") >= 0, /*isSystem*/false);
            c[32] = gcnew ScopeEngineManaged::SqlIpColumn("ChoiceScore Good versus Bad Score", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "ChoiceScore Good versus Bad Score") >= 0, /*isSystem*/false);
            c[33] = gcnew ScopeEngineManaged::SqlIpColumn("Enhancement Mandatory Append1", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Enhancement Mandatory Append1") >= 0, /*isSystem*/false);
            c[34] = gcnew ScopeEngineManaged::SqlIpColumn("Enhancement Mandatory Append2", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Enhancement Mandatory Append2") >= 0, /*isSystem*/false);
            c[35] = gcnew ScopeEngineManaged::SqlIpColumn("Enhancement Mandatory Append3", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Enhancement Mandatory Append3") >= 0, /*isSystem*/false);
            c[36] = gcnew ScopeEngineManaged::SqlIpColumn("Combined Homeowner", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Combined Homeowner") >= 0, /*isSystem*/false);
            c[37] = gcnew ScopeEngineManaged::SqlIpColumn("Online Overall", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Online Overall") >= 0, /*isSystem*/false);
            c[38] = gcnew ScopeEngineManaged::SqlIpColumn("Retail Overall", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Retail Overall") >= 0, /*isSystem*/false);
            c[39] = gcnew ScopeEngineManaged::SqlIpColumn("Estimated Current Home Value2", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Estimated Current Home Value2") >= 0, /*isSystem*/false);
            c[40] = gcnew ScopeEngineManaged::SqlIpColumn("Presence of Children 0-18", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Presence of Children 0-18") >= 0, /*isSystem*/false);
            c[41] = gcnew ScopeEngineManaged::SqlIpColumn("ConsumerView Profitability Score", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "ConsumerView Profitability Score") >= 0, /*isSystem*/false);
            c[42] = gcnew ScopeEngineManaged::SqlIpColumn("Person 1: Occupation Group V2", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Person 1: Occupation Group V2") >= 0, /*isSystem*/false);
            c[43] = gcnew ScopeEngineManaged::SqlIpColumn("Est Household Income V5", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Est Household Income V5") >= 0, /*isSystem*/false);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            SqlIpSchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<Extract_0_Data0>::ComplexColumnGetter, &ManagedRow<Extract_0_Data0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        IRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<IRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<Extract_0_Data0>;    
    template<>
    struct ManagedRow<Process_1_Data0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(43);            
            offset[0] = ColumnOffsetId(offsetof(Process_1_Data0, m_NameHash), T_Binary);
            offset[1] = ColumnOffsetId(offsetof(Process_1_Data0, m_in_seq), T_IntegerQ);
            offset[2] = ColumnOffsetId(offsetof(Process_1_Data0, m_in_subseq), T_IntegerQ);
            offset[3] = ColumnOffsetId(offsetof(Process_1_Data0, m_Address1), T_String);
            offset[4] = ColumnOffsetId(offsetof(Process_1_Data0, m_Address2), T_String);
            offset[5] = ColumnOffsetId(offsetof(Process_1_Data0, m_City), T_String);
            offset[6] = ColumnOffsetId(offsetof(Process_1_Data0, m_State), T_String);
            offset[7] = ColumnOffsetId(offsetof(Process_1_Data0, m_ZIP_Code), T_IntegerQ);
            offset[8] = ColumnOffsetId(offsetof(Process_1_Data0, m_First_Name), T_String);
            offset[9] = ColumnOffsetId(offsetof(Process_1_Data0, m_Last_Name), T_String);
            offset[10] = ColumnOffsetId(offsetof(Process_1_Data0, m_in_cvtseq), T_String);
            offset[11] = ColumnOffsetId(offsetof(Process_1_Data0, m_in_zip_code), T_String);
            offset[12] = ColumnOffsetId(offsetof(Process_1_Data0, m___I120Combined20Adult20Age202D220bytes071854cba67d4217bf9334137fc6d0d0), T_String);
            offset[13] = ColumnOffsetId(offsetof(Process_1_Data0, m___Individual20Education928a75d11f7343449f83cef79bc9caa0), T_String);
            offset[14] = ColumnOffsetId(offsetof(Process_1_Data0, m___Marital20Status10f8bd19b1424551998b34a368fb6156), T_String);
            offset[15] = ColumnOffsetId(offsetof(Process_1_Data0, m___Mosaic20Householdb214151d9ad142ec970fffbfa36c5c46), T_String);
            offset[16] = ColumnOffsetId(offsetof(Process_1_Data0, m___ADULT20GENDER2FCOMBINED20AGEae062c4fb55e48f5a1cae557d0101320), T_String);
            offset[17] = ColumnOffsetId(offsetof(Process_1_Data0, m___Year20Built2028Enhanced298663b77cff4545e2bf97f1f75ccb3b50), T_IntegerQ);
            offset[18] = ColumnOffsetId(offsetof(Process_1_Data0, m___Political20Affiliation240a467595c34a1f95934d78cfd02ae6), T_String);
            offset[19] = ColumnOffsetId(offsetof(Process_1_Data0, m___Number20Of20Adults20In20Household2e8e822994b64c4a9aa41654ca4ce936), T_String);
            offset[20] = ColumnOffsetId(offsetof(Process_1_Data0, m___Number20Of20Children2028Maximum20Of20820Children20Per20Household29a5fba6397e794c0986b2c0d134aa7b65), T_String);
            offset[21] = ColumnOffsetId(offsetof(Process_1_Data0, m___Dwelling20Type3728e52bf2124220a87a30a31f3325cf), T_String);
            offset[22] = ColumnOffsetId(offsetof(Process_1_Data0, m___Length20Of20Residence0af43b1ead01491fad86e2ea8d43495c), T_String);
            offset[23] = ColumnOffsetId(offsetof(Process_1_Data0, m___Multi2DCompany20Direct20Mail20Responder202D20Living20Units20Levelb783e7770e714a019116f6a7aaba0bf7), T_String);
            offset[24] = ColumnOffsetId(offsetof(Process_1_Data0, m___Gender20Code33aa1c24dba6437597ea2405ad79c023), T_String);
            offset[25] = ColumnOffsetId(offsetof(Process_1_Data0, m___Date20of20Birth2FCombined20Adult20Age2cafbca1afd144d7a02977d77b7cd137), T_IntegerQ);
            offset[26] = ColumnOffsetId(offsetof(Process_1_Data0, m___Estimated20Current20Home20Value70278aee7bde44e1ba4e0630869c1862), T_IntegerQ);
            offset[27] = ColumnOffsetId(offsetof(Process_1_Data0, m___I120Combined20Agebc7cc6abc2b44384b28e308b863bc339), T_String);
            offset[28] = ColumnOffsetId(offsetof(Process_1_Data0, m___ChoiceScore20Bundle59a4c411a38647de8fa454a732aa8668), T_String);
            offset[29] = ColumnOffsetId(offsetof(Process_1_Data0, m___ChoiceScore20Prospect20Segment837560e9d4134883b225b80a7682c900), T_String);
            offset[30] = ColumnOffsetId(offsetof(Process_1_Data0, m___ChoiceScore20Prospect20Model20Score54a21d6e3ec5456baa77c74522e2652e), T_IntegerQ);
            offset[31] = ColumnOffsetId(offsetof(Process_1_Data0, m___ChoiceScore20Good20versus20Bad20Score836ed27361944215932f1630329fa397), T_String);
            offset[32] = ColumnOffsetId(offsetof(Process_1_Data0, m___Enhancement20Mandatory20Append1f30a345214d7499ea0bd64904c038b8b), T_String);
            offset[33] = ColumnOffsetId(offsetof(Process_1_Data0, m___Enhancement20Mandatory20Append27e09d62ca45a4621ae4a279594af0bb7), T_String);
            offset[34] = ColumnOffsetId(offsetof(Process_1_Data0, m___Enhancement20Mandatory20Append3175de735a22e4234a64afed6447d9c74), T_String);
            offset[35] = ColumnOffsetId(offsetof(Process_1_Data0, m___Combined20Homeownercc7b5fe5c49145779e065f1625dd13b4), T_String);
            offset[36] = ColumnOffsetId(offsetof(Process_1_Data0, m___Online20Overalld64e7d9fbf044c1a996391fd3c46acde), T_String);
            offset[37] = ColumnOffsetId(offsetof(Process_1_Data0, m___Retail20Overalld02604037dbe4a13b4de7f3636fad950), T_String);
            offset[38] = ColumnOffsetId(offsetof(Process_1_Data0, m___Estimated20Current20Home20Value2c110860f9c484c33bbe19530377870c5), T_String);
            offset[39] = ColumnOffsetId(offsetof(Process_1_Data0, m___Presence20of20Children2002D186f355167ef144598b4029f5f5aaa2197), T_String);
            offset[40] = ColumnOffsetId(offsetof(Process_1_Data0, m___ConsumerView20Profitability20Scoreed3857e520884373a5a8952a375b6f0b), T_String);
            offset[41] = ColumnOffsetId(offsetof(Process_1_Data0, m___Person2013A20Occupation20Group20V2e3ed3297860b444dabb4e6ce5402083f), T_String);
            offset[42] = ColumnOffsetId(offsetof(Process_1_Data0, m___Est20Household20Income20V58d5899d242f14ad79ab93fb1d16860ef), T_String);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(43);
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn("NameHash", cli::array<System::Byte>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "NameHash") >= 0, /*isSystem*/false);
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn("in_seq", System::Nullable<System::Int32>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "in_seq") >= 0, /*isSystem*/false);
            c[2] = gcnew ScopeEngineManaged::SqlIpColumn("in_subseq", System::Nullable<System::Int32>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "in_subseq") >= 0, /*isSystem*/false);
            c[3] = gcnew ScopeEngineManaged::SqlIpColumn("Address1", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Address1") >= 0, /*isSystem*/false);
            c[4] = gcnew ScopeEngineManaged::SqlIpColumn("Address2", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Address2") >= 0, /*isSystem*/false);
            c[5] = gcnew ScopeEngineManaged::SqlIpColumn("City", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "City") >= 0, /*isSystem*/false);
            c[6] = gcnew ScopeEngineManaged::SqlIpColumn("State", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "State") >= 0, /*isSystem*/false);
            c[7] = gcnew ScopeEngineManaged::SqlIpColumn("ZIP_Code", System::Nullable<System::Int32>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "ZIP_Code") >= 0, /*isSystem*/false);
            c[8] = gcnew ScopeEngineManaged::SqlIpColumn("First_Name", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "First_Name") >= 0, /*isSystem*/false);
            c[9] = gcnew ScopeEngineManaged::SqlIpColumn("Last_Name", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Last_Name") >= 0, /*isSystem*/false);
            c[10] = gcnew ScopeEngineManaged::SqlIpColumn("in_cvtseq", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "in_cvtseq") >= 0, /*isSystem*/false);
            c[11] = gcnew ScopeEngineManaged::SqlIpColumn("in_zip_code", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "in_zip_code") >= 0, /*isSystem*/false);
            c[12] = gcnew ScopeEngineManaged::SqlIpColumn("I1 Combined Adult Age -2 bytes", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "I1 Combined Adult Age -2 bytes") >= 0, /*isSystem*/false);
            c[13] = gcnew ScopeEngineManaged::SqlIpColumn("Individual Education", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Individual Education") >= 0, /*isSystem*/false);
            c[14] = gcnew ScopeEngineManaged::SqlIpColumn("Marital Status", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Marital Status") >= 0, /*isSystem*/false);
            c[15] = gcnew ScopeEngineManaged::SqlIpColumn("Mosaic Household", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Mosaic Household") >= 0, /*isSystem*/false);
            c[16] = gcnew ScopeEngineManaged::SqlIpColumn("ADULT GENDER/COMBINED AGE", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "ADULT GENDER/COMBINED AGE") >= 0, /*isSystem*/false);
            c[17] = gcnew ScopeEngineManaged::SqlIpColumn("Year Built (Enhanced)", System::Nullable<System::Int32>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Year Built (Enhanced)") >= 0, /*isSystem*/false);
            c[18] = gcnew ScopeEngineManaged::SqlIpColumn("Political Affiliation", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Political Affiliation") >= 0, /*isSystem*/false);
            c[19] = gcnew ScopeEngineManaged::SqlIpColumn("Number Of Adults In Household", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Number Of Adults In Household") >= 0, /*isSystem*/false);
            c[20] = gcnew ScopeEngineManaged::SqlIpColumn("Number Of Children (Maximum Of 8 Children Per Household)", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Number Of Children (Maximum Of 8 Children Per Household)") >= 0, /*isSystem*/false);
            c[21] = gcnew ScopeEngineManaged::SqlIpColumn("Dwelling Type", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Dwelling Type") >= 0, /*isSystem*/false);
            c[22] = gcnew ScopeEngineManaged::SqlIpColumn("Length Of Residence", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Length Of Residence") >= 0, /*isSystem*/false);
            c[23] = gcnew ScopeEngineManaged::SqlIpColumn("Multi-Company Direct Mail Responder - Living Units Level", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Multi-Company Direct Mail Responder - Living Units Level") >= 0, /*isSystem*/false);
            c[24] = gcnew ScopeEngineManaged::SqlIpColumn("Gender Code", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Gender Code") >= 0, /*isSystem*/false);
            c[25] = gcnew ScopeEngineManaged::SqlIpColumn("Date of Birth/Combined Adult Age", System::Nullable<System::Int32>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Date of Birth/Combined Adult Age") >= 0, /*isSystem*/false);
            c[26] = gcnew ScopeEngineManaged::SqlIpColumn("Estimated Current Home Value", System::Nullable<System::Int32>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Estimated Current Home Value") >= 0, /*isSystem*/false);
            c[27] = gcnew ScopeEngineManaged::SqlIpColumn("I1 Combined Age", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "I1 Combined Age") >= 0, /*isSystem*/false);
            c[28] = gcnew ScopeEngineManaged::SqlIpColumn("ChoiceScore Bundle", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "ChoiceScore Bundle") >= 0, /*isSystem*/false);
            c[29] = gcnew ScopeEngineManaged::SqlIpColumn("ChoiceScore Prospect Segment", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "ChoiceScore Prospect Segment") >= 0, /*isSystem*/false);
            c[30] = gcnew ScopeEngineManaged::SqlIpColumn("ChoiceScore Prospect Model Score", System::Nullable<System::Int32>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "ChoiceScore Prospect Model Score") >= 0, /*isSystem*/false);
            c[31] = gcnew ScopeEngineManaged::SqlIpColumn("ChoiceScore Good versus Bad Score", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "ChoiceScore Good versus Bad Score") >= 0, /*isSystem*/false);
            c[32] = gcnew ScopeEngineManaged::SqlIpColumn("Enhancement Mandatory Append1", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Enhancement Mandatory Append1") >= 0, /*isSystem*/false);
            c[33] = gcnew ScopeEngineManaged::SqlIpColumn("Enhancement Mandatory Append2", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Enhancement Mandatory Append2") >= 0, /*isSystem*/false);
            c[34] = gcnew ScopeEngineManaged::SqlIpColumn("Enhancement Mandatory Append3", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Enhancement Mandatory Append3") >= 0, /*isSystem*/false);
            c[35] = gcnew ScopeEngineManaged::SqlIpColumn("Combined Homeowner", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Combined Homeowner") >= 0, /*isSystem*/false);
            c[36] = gcnew ScopeEngineManaged::SqlIpColumn("Online Overall", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Online Overall") >= 0, /*isSystem*/false);
            c[37] = gcnew ScopeEngineManaged::SqlIpColumn("Retail Overall", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Retail Overall") >= 0, /*isSystem*/false);
            c[38] = gcnew ScopeEngineManaged::SqlIpColumn("Estimated Current Home Value2", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Estimated Current Home Value2") >= 0, /*isSystem*/false);
            c[39] = gcnew ScopeEngineManaged::SqlIpColumn("Presence of Children 0-18", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Presence of Children 0-18") >= 0, /*isSystem*/false);
            c[40] = gcnew ScopeEngineManaged::SqlIpColumn("ConsumerView Profitability Score", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "ConsumerView Profitability Score") >= 0, /*isSystem*/false);
            c[41] = gcnew ScopeEngineManaged::SqlIpColumn("Person 1: Occupation Group V2", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Person 1: Occupation Group V2") >= 0, /*isSystem*/false);
            c[42] = gcnew ScopeEngineManaged::SqlIpColumn("Est Household Income V5", System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, "Est Household Income V5") >= 0, /*isSystem*/false);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            SqlIpSchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<Process_1_Data0>::ComplexColumnGetter, &ManagedRow<Process_1_Data0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        IRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<IRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<Process_1_Data0>;    

#endif // defined(COMPILE_MANAGED)

//}

#pragma region Schema Constructors
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Extract_0_Data0::Extract_0_Data0()
    {
    }
    INLINE Extract_0_Data0::Extract_0_Data0(const Extract_0_Data0 & c, IncrementalAllocator * alloc) :
            m_in_first_name(c.m_in_first_name, alloc),
            m_in_last_name(c.m_in_last_name, alloc),
            m_in_seq(c.m_in_seq),
            m_in_subseq(c.m_in_subseq),
            m_Address1(c.m_Address1, alloc),
            m_Address2(c.m_Address2, alloc),
            m_City(c.m_City, alloc),
            m_State(c.m_State, alloc),
            m_ZIP_Code(c.m_ZIP_Code),
            m_First_Name(c.m_First_Name, alloc),
            m_Last_Name(c.m_Last_Name, alloc),
            m_in_cvtseq(c.m_in_cvtseq, alloc),
            m_in_zip_code(c.m_in_zip_code, alloc),
            m___I120Combined20Adult20Age202D220bytes071854cba67d4217bf9334137fc6d0d0(c.m___I120Combined20Adult20Age202D220bytes071854cba67d4217bf9334137fc6d0d0, alloc),
            m___Individual20Education928a75d11f7343449f83cef79bc9caa0(c.m___Individual20Education928a75d11f7343449f83cef79bc9caa0, alloc),
            m___Marital20Status10f8bd19b1424551998b34a368fb6156(c.m___Marital20Status10f8bd19b1424551998b34a368fb6156, alloc),
            m___Mosaic20Householdb214151d9ad142ec970fffbfa36c5c46(c.m___Mosaic20Householdb214151d9ad142ec970fffbfa36c5c46, alloc),
            m___ADULT20GENDER2FCOMBINED20AGEae062c4fb55e48f5a1cae557d0101320(c.m___ADULT20GENDER2FCOMBINED20AGEae062c4fb55e48f5a1cae557d0101320, alloc),
            m___Year20Built2028Enhanced298663b77cff4545e2bf97f1f75ccb3b50(c.m___Year20Built2028Enhanced298663b77cff4545e2bf97f1f75ccb3b50),
            m___Political20Affiliation240a467595c34a1f95934d78cfd02ae6(c.m___Political20Affiliation240a467595c34a1f95934d78cfd02ae6, alloc),
            m___Number20Of20Adults20In20Household2e8e822994b64c4a9aa41654ca4ce936(c.m___Number20Of20Adults20In20Household2e8e822994b64c4a9aa41654ca4ce936, alloc),
            m___Number20Of20Children2028Maximum20Of20820Children20Per20Household29a5fba6397e794c0986b2c0d134aa7b65(c.m___Number20Of20Children2028Maximum20Of20820Children20Per20Household29a5fba6397e794c0986b2c0d134aa7b65, alloc),
            m___Dwelling20Type3728e52bf2124220a87a30a31f3325cf(c.m___Dwelling20Type3728e52bf2124220a87a30a31f3325cf, alloc),
            m___Length20Of20Residence0af43b1ead01491fad86e2ea8d43495c(c.m___Length20Of20Residence0af43b1ead01491fad86e2ea8d43495c, alloc),
            m___Multi2DCompany20Direct20Mail20Responder202D20Living20Units20Levelb783e7770e714a019116f6a7aaba0bf7(c.m___Multi2DCompany20Direct20Mail20Responder202D20Living20Units20Levelb783e7770e714a019116f6a7aaba0bf7, alloc),
            m___Gender20Code33aa1c24dba6437597ea2405ad79c023(c.m___Gender20Code33aa1c24dba6437597ea2405ad79c023, alloc),
            m___Date20of20Birth2FCombined20Adult20Age2cafbca1afd144d7a02977d77b7cd137(c.m___Date20of20Birth2FCombined20Adult20Age2cafbca1afd144d7a02977d77b7cd137),
            m___Estimated20Current20Home20Value70278aee7bde44e1ba4e0630869c1862(c.m___Estimated20Current20Home20Value70278aee7bde44e1ba4e0630869c1862),
            m___I120Combined20Agebc7cc6abc2b44384b28e308b863bc339(c.m___I120Combined20Agebc7cc6abc2b44384b28e308b863bc339, alloc),
            m___ChoiceScore20Bundle59a4c411a38647de8fa454a732aa8668(c.m___ChoiceScore20Bundle59a4c411a38647de8fa454a732aa8668, alloc),
            m___ChoiceScore20Prospect20Segment837560e9d4134883b225b80a7682c900(c.m___ChoiceScore20Prospect20Segment837560e9d4134883b225b80a7682c900, alloc),
            m___ChoiceScore20Prospect20Model20Score54a21d6e3ec5456baa77c74522e2652e(c.m___ChoiceScore20Prospect20Model20Score54a21d6e3ec5456baa77c74522e2652e),
            m___ChoiceScore20Good20versus20Bad20Score836ed27361944215932f1630329fa397(c.m___ChoiceScore20Good20versus20Bad20Score836ed27361944215932f1630329fa397, alloc),
            m___Enhancement20Mandatory20Append1f30a345214d7499ea0bd64904c038b8b(c.m___Enhancement20Mandatory20Append1f30a345214d7499ea0bd64904c038b8b, alloc),
            m___Enhancement20Mandatory20Append27e09d62ca45a4621ae4a279594af0bb7(c.m___Enhancement20Mandatory20Append27e09d62ca45a4621ae4a279594af0bb7, alloc),
            m___Enhancement20Mandatory20Append3175de735a22e4234a64afed6447d9c74(c.m___Enhancement20Mandatory20Append3175de735a22e4234a64afed6447d9c74, alloc),
            m___Combined20Homeownercc7b5fe5c49145779e065f1625dd13b4(c.m___Combined20Homeownercc7b5fe5c49145779e065f1625dd13b4, alloc),
            m___Online20Overalld64e7d9fbf044c1a996391fd3c46acde(c.m___Online20Overalld64e7d9fbf044c1a996391fd3c46acde, alloc),
            m___Retail20Overalld02604037dbe4a13b4de7f3636fad950(c.m___Retail20Overalld02604037dbe4a13b4de7f3636fad950, alloc),
            m___Estimated20Current20Home20Value2c110860f9c484c33bbe19530377870c5(c.m___Estimated20Current20Home20Value2c110860f9c484c33bbe19530377870c5, alloc),
            m___Presence20of20Children2002D186f355167ef144598b4029f5f5aaa2197(c.m___Presence20of20Children2002D186f355167ef144598b4029f5f5aaa2197, alloc),
            m___ConsumerView20Profitability20Scoreed3857e520884373a5a8952a375b6f0b(c.m___ConsumerView20Profitability20Scoreed3857e520884373a5a8952a375b6f0b, alloc),
            m___Person2013A20Occupation20Group20V2e3ed3297860b444dabb4e6ce5402083f(c.m___Person2013A20Occupation20Group20V2e3ed3297860b444dabb4e6ce5402083f, alloc),
            m___Est20Household20Income20V58d5899d242f14ad79ab93fb1d16860ef(c.m___Est20Household20Income20V58d5899d242f14ad79ab93fb1d16860ef, alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_1_Data0::Process_1_Data0()
    {
    }

#pragma endregion Schema Constructors
#pragma hdrstop
#if defined(COMPILE_INIT_SHUTDOWN)
#if defined(COMPILE_MANAGED)
extern "C" __declspec(dllexport) void __stdcall InitVertexManaged(std::string * argv, int argc)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    cli::array<String^>^ arguments = ScopeEngineManaged::GroupArguments(argv, argc);
    ScopeEngineManaged::InitializeScopeEngineManaged(arguments);
}
extern "C" __declspec(dllexport) void __stdcall ShutdownVertexManaged(CLRMemoryStat& stat)
{
    ScopeEngineManaged::FinalizeScopeEngineManaged(stat);
}
#endif
#if defined(COMPILE_NATIVE)
ScopeEngine::ScopeCEPCheckpointManager* g_scopeCEPCheckpointManager = NULL;
extern "C" __declspec(dllexport) void __stdcall InitVertexNative(VertexExecutionInfo * vertexExecutionInfo)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    ErrorManager::GetGlobal()->EnableJSON();

}
extern "C" __declspec(dllexport) void __stdcall SV_CopyThrough_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
{
    SCOPE_ASSERT(inputCnt == 1 && outputCnt == 1);
    IOManager::CopyStream(IOManager::GetGlobal()->GetDevice(inputs[0].inputFileName), IOManager::GetGlobal()->GetDevice(outputs[0].outputFileName));
}
#endif
#endif
#pragma region SV1_Extract
#if defined(COMPILE_SV1_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class TextExtractPolicy<Extract_0_Data0, UID_Extract_0>
    {
    public:
        static const char* columnNames[44];
        static bool Deserialize(TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, true, false, 1, CharFormat_uint16>, CosmosInput> * input, Extract_0_Data0 & row)
        {
            for(;;)
            {
                int idx = 0;
                try
                {
                    // When we start a new row we always skip all empty lines first.
                    input->StartRow(44);
                    input->Read(row.m_in_first_name);
                    ++idx;
                    input->Read(row.m_in_last_name);
                    ++idx;
                    input->Read(row.m_in_seq);
                    ++idx;
                    input->Read(row.m_in_subseq);
                    ++idx;
                    input->Read(row.m_Address1);
                    ++idx;
                    input->Read(row.m_Address2);
                    ++idx;
                    input->Read(row.m_City);
                    ++idx;
                    input->Read(row.m_State);
                    ++idx;
                    input->Read(row.m_ZIP_Code);
                    ++idx;
                    input->Read(row.m_First_Name);
                    ++idx;
                    input->Read(row.m_Last_Name);
                    ++idx;
                    input->Read(row.m_in_cvtseq);
                    ++idx;
                    input->Read(row.m_in_zip_code);
                    ++idx;
                    input->Read(row.m___I120Combined20Adult20Age202D220bytes071854cba67d4217bf9334137fc6d0d0);
                    ++idx;
                    input->Read(row.m___Individual20Education928a75d11f7343449f83cef79bc9caa0);
                    ++idx;
                    input->Read(row.m___Marital20Status10f8bd19b1424551998b34a368fb6156);
                    ++idx;
                    input->Read(row.m___Mosaic20Householdb214151d9ad142ec970fffbfa36c5c46);
                    ++idx;
                    input->Read(row.m___ADULT20GENDER2FCOMBINED20AGEae062c4fb55e48f5a1cae557d0101320);
                    ++idx;
                    input->Read(row.m___Year20Built2028Enhanced298663b77cff4545e2bf97f1f75ccb3b50);
                    ++idx;
                    input->Read(row.m___Political20Affiliation240a467595c34a1f95934d78cfd02ae6);
                    ++idx;
                    input->Read(row.m___Number20Of20Adults20In20Household2e8e822994b64c4a9aa41654ca4ce936);
                    ++idx;
                    input->Read(row.m___Number20Of20Children2028Maximum20Of20820Children20Per20Household29a5fba6397e794c0986b2c0d134aa7b65);
                    ++idx;
                    input->Read(row.m___Dwelling20Type3728e52bf2124220a87a30a31f3325cf);
                    ++idx;
                    input->Read(row.m___Length20Of20Residence0af43b1ead01491fad86e2ea8d43495c);
                    ++idx;
                    input->Read(row.m___Multi2DCompany20Direct20Mail20Responder202D20Living20Units20Levelb783e7770e714a019116f6a7aaba0bf7);
                    ++idx;
                    input->Read(row.m___Gender20Code33aa1c24dba6437597ea2405ad79c023);
                    ++idx;
                    input->Read(row.m___Date20of20Birth2FCombined20Adult20Age2cafbca1afd144d7a02977d77b7cd137);
                    ++idx;
                    input->Read(row.m___Estimated20Current20Home20Value70278aee7bde44e1ba4e0630869c1862);
                    ++idx;
                    input->Read(row.m___I120Combined20Agebc7cc6abc2b44384b28e308b863bc339);
                    ++idx;
                    input->Read(row.m___ChoiceScore20Bundle59a4c411a38647de8fa454a732aa8668);
                    ++idx;
                    input->Read(row.m___ChoiceScore20Prospect20Segment837560e9d4134883b225b80a7682c900);
                    ++idx;
                    input->Read(row.m___ChoiceScore20Prospect20Model20Score54a21d6e3ec5456baa77c74522e2652e);
                    ++idx;
                    input->Read(row.m___ChoiceScore20Good20versus20Bad20Score836ed27361944215932f1630329fa397);
                    ++idx;
                    input->Read(row.m___Enhancement20Mandatory20Append1f30a345214d7499ea0bd64904c038b8b);
                    ++idx;
                    input->Read(row.m___Enhancement20Mandatory20Append27e09d62ca45a4621ae4a279594af0bb7);
                    ++idx;
                    input->Read(row.m___Enhancement20Mandatory20Append3175de735a22e4234a64afed6447d9c74);
                    ++idx;
                    input->Read(row.m___Combined20Homeownercc7b5fe5c49145779e065f1625dd13b4);
                    ++idx;
                    input->Read(row.m___Online20Overalld64e7d9fbf044c1a996391fd3c46acde);
                    ++idx;
                    input->Read(row.m___Retail20Overalld02604037dbe4a13b4de7f3636fad950);
                    ++idx;
                    input->Read(row.m___Estimated20Current20Home20Value2c110860f9c484c33bbe19530377870c5);
                    ++idx;
                    input->Read(row.m___Presence20of20Children2002D186f355167ef144598b4029f5f5aaa2197);
                    ++idx;
                    input->Read(row.m___ConsumerView20Profitability20Scoreed3857e520884373a5a8952a375b6f0b);
                    ++idx;
                    input->Read(row.m___Person2013A20Occupation20Group20V2e3ed3297860b444dabb4e6ce5402083f);
                    ++idx;
                    input->Read(row.m___Est20Household20Income20V58d5899d242f14ad79ab93fb1d16860ef);
                    ++idx;
                    return true;
                }
                catch(RuntimeMemoryException & e)
                {
                     throw ScopeStreamExceptionWithEvidence(E_EXTRACT_ROW_TOO_LONG,
                        { input->CurrentLineNumber() - 1, Configuration::GetGlobal().GetMaxOnDiskRowSize()},
                        [&input, &e] (stringstream &out) -> void
                     {
                         input->Dump(out);
                     });
                }
                catch (ScopeStreamException & e)
                {
                    stringstream txt;
                    
                    // Handle different error during reading
                    switch(e.Error())
                    {
                    // Following error will terminate read
                    case ScopeStreamException::EndOfFile:
                    case ScopeStreamException::BadDevice:
                    case ScopeStreamException::PassSplitEndPoint:
                        return false;

                    case ScopeStreamException::StreamSplitUnexpectedEOF:
                         throw ScopeStreamExceptionWithEvidence(E_STREAM_SPLIT_UNEXPECTED_EOF,
                             {input->cbConsumed(), input->CurrentLineNumber() - 1},
                             [&input] (stringstream &out) -> void
                         {
                             input->Dump(out);
                         });

                    case ScopeStreamException::InvalidCharacter:
                        // Invalid character in input stream (found during character conversion)
                        throw ScopeStreamExceptionWithEvidence(E_EXTRACT_INVALID_CHARACTER,
                            { "UTF8", input->CurrentLineNumber() - 1}, e);

                    case ScopeStreamException::InvalidCharacterAfterTextQualifier:
                        // Invalid character found after quoting mark
                        input->Dump(txt);
                        throw ScopeStreamExceptionWithEvidence(E_EXTRACT_INVALID_CHARACTER_AFTER_TEXTQUALIFIER,
                            { input->CurrentLineNumber(), idx, columnNames[idx], txt.str()}, txt.str());
                    // Bad rows are ignored
                    case ScopeStreamException::NewLine:
                        // Too few columns in row - skip it
                        break;
                    case ScopeStreamException::NewLineExpected:
                        // Too many columns in row - scan to the end of it and skip it
                        input->SkipLine();
                        break;

                    case ScopeStreamException::SkipFirstRowsUnexpectedEOF:
                        throw ScopeStreamExceptionWithEvidence(E_SKIP_FIRST_ROWS_UNEXPECTED_EOF,
                            { input->skipFirstRowsCount, input->NumFirstRowsSkipped() },
                            [&input] (stringstream &out) -> void
                         {
                             input->Dump(out);
                         });

                    default:
                        // for all other conversion error etc, we need to throw error
                        // IgnoreBadRows ignores rows with the wrong number of columns and converts conversion errors on nullable types to NULL
                        // The second of these is handled transparently in the TextInputStream
                        input->ThrowBadConvertException(columnNames, 44);
                    }
                }
            }
        }
    };

    const char* TextExtractPolicy<Extract_0_Data0, UID_Extract_0>::columnNames[44] = {
        "in_first_name",
        "in_last_name",
        "in_seq",
        "in_subseq",
        "Address1",
        "Address2",
        "City",
        "State",
        "ZIP_Code",
        "First_Name",
        "Last_Name",
        "in_cvtseq",
        "in_zip_code",
        "I1 Combined Adult Age -2 bytes",
        "Individual Education",
        "Marital Status",
        "Mosaic Household",
        "ADULT GENDER/COMBINED AGE",
        "Year Built (Enhanced)",
        "Political Affiliation",
        "Number Of Adults In Household",
        "Number Of Children (Maximum Of 8 Children Per Household)",
        "Dwelling Type",
        "Length Of Residence",
        "Multi-Company Direct Mail Responder - Living Units Level",
        "Gender Code",
        "Date of Birth/Combined Adult Age",
        "Estimated Current Home Value",
        "I1 Combined Age",
        "ChoiceScore Bundle",
        "ChoiceScore Prospect Segment",
        "ChoiceScore Prospect Model Score",
        "ChoiceScore Good versus Bad Score",
        "Enhancement Mandatory Append1",
        "Enhancement Mandatory Append2",
        "Enhancement Mandatory Append3",
        "Combined Homeowner",
        "Online Overall",
        "Retail Overall",
        "Estimated Current Home Value2",
        "Presence of Children 0-18",
        "ConsumerView Profitability Score",
        "Person 1: Occupation Group V2",
        "Est Household Income V5"
        };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename Extract_0_Data0, typename Process_1_Data0, UID_Process_1>
    {
    public:

        static bool FilterTransformRow(Extract_0_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {
           output.m_in_seq = input.m_in_seq;
           output.m_in_subseq = input.m_in_subseq;
           output.m_Address1 = input.m_Address1;
           output.m_Address2 = input.m_Address2;
           output.m_City = input.m_City;
           output.m_State = input.m_State;
           output.m_ZIP_Code = input.m_ZIP_Code;
           output.m_First_Name = input.m_First_Name;
           output.m_Last_Name = input.m_Last_Name;
           output.m_in_cvtseq = input.m_in_cvtseq;
           output.m_in_zip_code = input.m_in_zip_code;
           output.m___I120Combined20Adult20Age202D220bytes071854cba67d4217bf9334137fc6d0d0 = input.m___I120Combined20Adult20Age202D220bytes071854cba67d4217bf9334137fc6d0d0;
           output.m___Individual20Education928a75d11f7343449f83cef79bc9caa0 = input.m___Individual20Education928a75d11f7343449f83cef79bc9caa0;
           output.m___Marital20Status10f8bd19b1424551998b34a368fb6156 = input.m___Marital20Status10f8bd19b1424551998b34a368fb6156;
           output.m___Mosaic20Householdb214151d9ad142ec970fffbfa36c5c46 = input.m___Mosaic20Householdb214151d9ad142ec970fffbfa36c5c46;
           output.m___ADULT20GENDER2FCOMBINED20AGEae062c4fb55e48f5a1cae557d0101320 = input.m___ADULT20GENDER2FCOMBINED20AGEae062c4fb55e48f5a1cae557d0101320;
           output.m___Year20Built2028Enhanced298663b77cff4545e2bf97f1f75ccb3b50 = input.m___Year20Built2028Enhanced298663b77cff4545e2bf97f1f75ccb3b50;
           output.m___Political20Affiliation240a467595c34a1f95934d78cfd02ae6 = input.m___Political20Affiliation240a467595c34a1f95934d78cfd02ae6;
           output.m___Number20Of20Adults20In20Household2e8e822994b64c4a9aa41654ca4ce936 = input.m___Number20Of20Adults20In20Household2e8e822994b64c4a9aa41654ca4ce936;
           output.m___Number20Of20Children2028Maximum20Of20820Children20Per20Household29a5fba6397e794c0986b2c0d134aa7b65 = input.m___Number20Of20Children2028Maximum20Of20820Children20Per20Household29a5fba6397e794c0986b2c0d134aa7b65;
           output.m___Dwelling20Type3728e52bf2124220a87a30a31f3325cf = input.m___Dwelling20Type3728e52bf2124220a87a30a31f3325cf;
           output.m___Length20Of20Residence0af43b1ead01491fad86e2ea8d43495c = input.m___Length20Of20Residence0af43b1ead01491fad86e2ea8d43495c;
           output.m___Multi2DCompany20Direct20Mail20Responder202D20Living20Units20Levelb783e7770e714a019116f6a7aaba0bf7 = input.m___Multi2DCompany20Direct20Mail20Responder202D20Living20Units20Levelb783e7770e714a019116f6a7aaba0bf7;
           output.m___Gender20Code33aa1c24dba6437597ea2405ad79c023 = input.m___Gender20Code33aa1c24dba6437597ea2405ad79c023;
           output.m___Date20of20Birth2FCombined20Adult20Age2cafbca1afd144d7a02977d77b7cd137 = input.m___Date20of20Birth2FCombined20Adult20Age2cafbca1afd144d7a02977d77b7cd137;
           output.m___Estimated20Current20Home20Value70278aee7bde44e1ba4e0630869c1862 = input.m___Estimated20Current20Home20Value70278aee7bde44e1ba4e0630869c1862;
           output.m___I120Combined20Agebc7cc6abc2b44384b28e308b863bc339 = input.m___I120Combined20Agebc7cc6abc2b44384b28e308b863bc339;
           output.m___ChoiceScore20Bundle59a4c411a38647de8fa454a732aa8668 = input.m___ChoiceScore20Bundle59a4c411a38647de8fa454a732aa8668;
           output.m___ChoiceScore20Prospect20Segment837560e9d4134883b225b80a7682c900 = input.m___ChoiceScore20Prospect20Segment837560e9d4134883b225b80a7682c900;
           output.m___ChoiceScore20Prospect20Model20Score54a21d6e3ec5456baa77c74522e2652e = input.m___ChoiceScore20Prospect20Model20Score54a21d6e3ec5456baa77c74522e2652e;
           output.m___ChoiceScore20Good20versus20Bad20Score836ed27361944215932f1630329fa397 = input.m___ChoiceScore20Good20versus20Bad20Score836ed27361944215932f1630329fa397;
           output.m___Enhancement20Mandatory20Append1f30a345214d7499ea0bd64904c038b8b = input.m___Enhancement20Mandatory20Append1f30a345214d7499ea0bd64904c038b8b;
           output.m___Enhancement20Mandatory20Append27e09d62ca45a4621ae4a279594af0bb7 = input.m___Enhancement20Mandatory20Append27e09d62ca45a4621ae4a279594af0bb7;
           output.m___Enhancement20Mandatory20Append3175de735a22e4234a64afed6447d9c74 = input.m___Enhancement20Mandatory20Append3175de735a22e4234a64afed6447d9c74;
           output.m___Combined20Homeownercc7b5fe5c49145779e065f1625dd13b4 = input.m___Combined20Homeownercc7b5fe5c49145779e065f1625dd13b4;
           output.m___Online20Overalld64e7d9fbf044c1a996391fd3c46acde = input.m___Online20Overalld64e7d9fbf044c1a996391fd3c46acde;
           output.m___Retail20Overalld02604037dbe4a13b4de7f3636fad950 = input.m___Retail20Overalld02604037dbe4a13b4de7f3636fad950;
           output.m___Estimated20Current20Home20Value2c110860f9c484c33bbe19530377870c5 = input.m___Estimated20Current20Home20Value2c110860f9c484c33bbe19530377870c5;
           output.m___Presence20of20Children2002D186f355167ef144598b4029f5f5aaa2197 = input.m___Presence20of20Children2002D186f355167ef144598b4029f5f5aaa2197;
           output.m___ConsumerView20Profitability20Scoreed3857e520884373a5a8952a375b6f0b = input.m___ConsumerView20Profitability20Scoreed3857e520884373a5a8952a375b6f0b;
           output.m___Person2013A20Occupation20Group20V2e3ed3297860b444dabb4e6ce5402083f = input.m___Person2013A20Occupation20Group20V2e3ed3297860b444dabb4e6ce5402083f;
           output.m___Est20Household20Income20V58d5899d242f14ad79ab93fb1d16860ef = input.m___Est20Household20Income20V58d5899d242f14ad79ab93fb1d16860ef;
            return true;
        }


        static __declspec(noinline) void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_1>
    {
        typedef Microsoft::Analytics::Interfaces::IProcessor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_1());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(MakeBigString(L""))));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_1, "Constructor", ex);
                throw;
            }
        }


        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }
        cli::array<String^>^ ReadOnlyColumns_Output()
        {
            return nullptr;
        }
        
        cli::array<String^>^ ReadOnlyColumns_Input()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToNativeRowPolicy<Process_1_Data0, UID_Process_1>
    {
    public:
        static void Marshal(Microsoft::Analytics::Interfaces::IRow^ managedRow, Process_1_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_NameHash, ((SqlIpRow^)managedRow)->GetInternal<cli::array<System::Byte>^>(0), alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<Process_1_Data0, UID_SV1_Extract_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, false, false, true, UTF8, true, CharFormat_uint16>> * output, Process_1_Data0 & row)
        {
            if (!row.m_NameHash.IsNull())
            {
                output->Write<FBinary,false>(row.m_NameHash);
            }
            output->WriteDelimiter();
            if (!row.m_in_seq.IsNull())
            {
                output->Write<int,false>(row.m_in_seq);
            }
            output->WriteDelimiter();
            if (!row.m_in_subseq.IsNull())
            {
                output->Write<int,false>(row.m_in_subseq);
            }
            output->WriteDelimiter();
            if (!row.m_Address1.IsNull())
            {
                output->Write<FString,false>(row.m_Address1);
            }
            output->WriteDelimiter();
            if (!row.m_Address2.IsNull())
            {
                output->Write<FString,false>(row.m_Address2);
            }
            output->WriteDelimiter();
            if (!row.m_City.IsNull())
            {
                output->Write<FString,false>(row.m_City);
            }
            output->WriteDelimiter();
            if (!row.m_State.IsNull())
            {
                output->Write<FString,false>(row.m_State);
            }
            output->WriteDelimiter();
            if (!row.m_ZIP_Code.IsNull())
            {
                output->Write<int,false>(row.m_ZIP_Code);
            }
            output->WriteDelimiter();
            if (!row.m_First_Name.IsNull())
            {
                output->Write<FString,false>(row.m_First_Name);
            }
            output->WriteDelimiter();
            if (!row.m_Last_Name.IsNull())
            {
                output->Write<FString,false>(row.m_Last_Name);
            }
            output->WriteDelimiter();
            if (!row.m_in_cvtseq.IsNull())
            {
                output->Write<FString,false>(row.m_in_cvtseq);
            }
            output->WriteDelimiter();
            if (!row.m_in_zip_code.IsNull())
            {
                output->Write<FString,false>(row.m_in_zip_code);
            }
            output->WriteDelimiter();
            if (!row.m___I120Combined20Adult20Age202D220bytes071854cba67d4217bf9334137fc6d0d0.IsNull())
            {
                output->Write<FString,false>(row.m___I120Combined20Adult20Age202D220bytes071854cba67d4217bf9334137fc6d0d0);
            }
            output->WriteDelimiter();
            if (!row.m___Individual20Education928a75d11f7343449f83cef79bc9caa0.IsNull())
            {
                output->Write<FString,false>(row.m___Individual20Education928a75d11f7343449f83cef79bc9caa0);
            }
            output->WriteDelimiter();
            if (!row.m___Marital20Status10f8bd19b1424551998b34a368fb6156.IsNull())
            {
                output->Write<FString,false>(row.m___Marital20Status10f8bd19b1424551998b34a368fb6156);
            }
            output->WriteDelimiter();
            if (!row.m___Mosaic20Householdb214151d9ad142ec970fffbfa36c5c46.IsNull())
            {
                output->Write<FString,false>(row.m___Mosaic20Householdb214151d9ad142ec970fffbfa36c5c46);
            }
            output->WriteDelimiter();
            if (!row.m___ADULT20GENDER2FCOMBINED20AGEae062c4fb55e48f5a1cae557d0101320.IsNull())
            {
                output->Write<FString,false>(row.m___ADULT20GENDER2FCOMBINED20AGEae062c4fb55e48f5a1cae557d0101320);
            }
            output->WriteDelimiter();
            if (!row.m___Year20Built2028Enhanced298663b77cff4545e2bf97f1f75ccb3b50.IsNull())
            {
                output->Write<int,false>(row.m___Year20Built2028Enhanced298663b77cff4545e2bf97f1f75ccb3b50);
            }
            output->WriteDelimiter();
            if (!row.m___Political20Affiliation240a467595c34a1f95934d78cfd02ae6.IsNull())
            {
                output->Write<FString,false>(row.m___Political20Affiliation240a467595c34a1f95934d78cfd02ae6);
            }
            output->WriteDelimiter();
            if (!row.m___Number20Of20Adults20In20Household2e8e822994b64c4a9aa41654ca4ce936.IsNull())
            {
                output->Write<FString,false>(row.m___Number20Of20Adults20In20Household2e8e822994b64c4a9aa41654ca4ce936);
            }
            output->WriteDelimiter();
            if (!row.m___Number20Of20Children2028Maximum20Of20820Children20Per20Household29a5fba6397e794c0986b2c0d134aa7b65.IsNull())
            {
                output->Write<FString,false>(row.m___Number20Of20Children2028Maximum20Of20820Children20Per20Household29a5fba6397e794c0986b2c0d134aa7b65);
            }
            output->WriteDelimiter();
            if (!row.m___Dwelling20Type3728e52bf2124220a87a30a31f3325cf.IsNull())
            {
                output->Write<FString,false>(row.m___Dwelling20Type3728e52bf2124220a87a30a31f3325cf);
            }
            output->WriteDelimiter();
            if (!row.m___Length20Of20Residence0af43b1ead01491fad86e2ea8d43495c.IsNull())
            {
                output->Write<FString,false>(row.m___Length20Of20Residence0af43b1ead01491fad86e2ea8d43495c);
            }
            output->WriteDelimiter();
            if (!row.m___Multi2DCompany20Direct20Mail20Responder202D20Living20Units20Levelb783e7770e714a019116f6a7aaba0bf7.IsNull())
            {
                output->Write<FString,false>(row.m___Multi2DCompany20Direct20Mail20Responder202D20Living20Units20Levelb783e7770e714a019116f6a7aaba0bf7);
            }
            output->WriteDelimiter();
            if (!row.m___Gender20Code33aa1c24dba6437597ea2405ad79c023.IsNull())
            {
                output->Write<FString,false>(row.m___Gender20Code33aa1c24dba6437597ea2405ad79c023);
            }
            output->WriteDelimiter();
            if (!row.m___Date20of20Birth2FCombined20Adult20Age2cafbca1afd144d7a02977d77b7cd137.IsNull())
            {
                output->Write<int,false>(row.m___Date20of20Birth2FCombined20Adult20Age2cafbca1afd144d7a02977d77b7cd137);
            }
            output->WriteDelimiter();
            if (!row.m___Estimated20Current20Home20Value70278aee7bde44e1ba4e0630869c1862.IsNull())
            {
                output->Write<int,false>(row.m___Estimated20Current20Home20Value70278aee7bde44e1ba4e0630869c1862);
            }
            output->WriteDelimiter();
            if (!row.m___I120Combined20Agebc7cc6abc2b44384b28e308b863bc339.IsNull())
            {
                output->Write<FString,false>(row.m___I120Combined20Agebc7cc6abc2b44384b28e308b863bc339);
            }
            output->WriteDelimiter();
            if (!row.m___ChoiceScore20Bundle59a4c411a38647de8fa454a732aa8668.IsNull())
            {
                output->Write<FString,false>(row.m___ChoiceScore20Bundle59a4c411a38647de8fa454a732aa8668);
            }
            output->WriteDelimiter();
            if (!row.m___ChoiceScore20Prospect20Segment837560e9d4134883b225b80a7682c900.IsNull())
            {
                output->Write<FString,false>(row.m___ChoiceScore20Prospect20Segment837560e9d4134883b225b80a7682c900);
            }
            output->WriteDelimiter();
            if (!row.m___ChoiceScore20Prospect20Model20Score54a21d6e3ec5456baa77c74522e2652e.IsNull())
            {
                output->Write<int,false>(row.m___ChoiceScore20Prospect20Model20Score54a21d6e3ec5456baa77c74522e2652e);
            }
            output->WriteDelimiter();
            if (!row.m___ChoiceScore20Good20versus20Bad20Score836ed27361944215932f1630329fa397.IsNull())
            {
                output->Write<FString,false>(row.m___ChoiceScore20Good20versus20Bad20Score836ed27361944215932f1630329fa397);
            }
            output->WriteDelimiter();
            if (!row.m___Enhancement20Mandatory20Append1f30a345214d7499ea0bd64904c038b8b.IsNull())
            {
                output->Write<FString,false>(row.m___Enhancement20Mandatory20Append1f30a345214d7499ea0bd64904c038b8b);
            }
            output->WriteDelimiter();
            if (!row.m___Enhancement20Mandatory20Append27e09d62ca45a4621ae4a279594af0bb7.IsNull())
            {
                output->Write<FString,false>(row.m___Enhancement20Mandatory20Append27e09d62ca45a4621ae4a279594af0bb7);
            }
            output->WriteDelimiter();
            if (!row.m___Enhancement20Mandatory20Append3175de735a22e4234a64afed6447d9c74.IsNull())
            {
                output->Write<FString,false>(row.m___Enhancement20Mandatory20Append3175de735a22e4234a64afed6447d9c74);
            }
            output->WriteDelimiter();
            if (!row.m___Combined20Homeownercc7b5fe5c49145779e065f1625dd13b4.IsNull())
            {
                output->Write<FString,false>(row.m___Combined20Homeownercc7b5fe5c49145779e065f1625dd13b4);
            }
            output->WriteDelimiter();
            if (!row.m___Online20Overalld64e7d9fbf044c1a996391fd3c46acde.IsNull())
            {
                output->Write<FString,false>(row.m___Online20Overalld64e7d9fbf044c1a996391fd3c46acde);
            }
            output->WriteDelimiter();
            if (!row.m___Retail20Overalld02604037dbe4a13b4de7f3636fad950.IsNull())
            {
                output->Write<FString,false>(row.m___Retail20Overalld02604037dbe4a13b4de7f3636fad950);
            }
            output->WriteDelimiter();
            if (!row.m___Estimated20Current20Home20Value2c110860f9c484c33bbe19530377870c5.IsNull())
            {
                output->Write<FString,false>(row.m___Estimated20Current20Home20Value2c110860f9c484c33bbe19530377870c5);
            }
            output->WriteDelimiter();
            if (!row.m___Presence20of20Children2002D186f355167ef144598b4029f5f5aaa2197.IsNull())
            {
                output->Write<FString,false>(row.m___Presence20of20Children2002D186f355167ef144598b4029f5f5aaa2197);
            }
            output->WriteDelimiter();
            if (!row.m___ConsumerView20Profitability20Scoreed3857e520884373a5a8952a375b6f0b.IsNull())
            {
                output->Write<FString,false>(row.m___ConsumerView20Profitability20Scoreed3857e520884373a5a8952a375b6f0b);
            }
            output->WriteDelimiter();
            if (!row.m___Person2013A20Occupation20Group20V2e3ed3297860b444dabb4e6ce5402083f.IsNull())
            {
                output->Write<FString,false>(row.m___Person2013A20Occupation20Group20V2e3ed3297860b444dabb4e6ce5402083f);
            }
            output->WriteDelimiter();
            if (!row.m___Est20Household20Income20V58d5899d242f14ad79ab93fb1d16860ef.IsNull())
            {
                output->Write<FString,false>(row.m___Est20Household20Income20V58d5899d242f14ad79ab93fb1d16860ef);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, false, false, true, UTF8, true, CharFormat_uint16>> * output)
        {
            output->Write<string,false>(FString("NameHash", 8));
            output->WriteDelimiter();
            output->Write<string,false>(FString("in_seq", 6));
            output->WriteDelimiter();
            output->Write<string,false>(FString("in_subseq", 9));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Address1", 8));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Address2", 8));
            output->WriteDelimiter();
            output->Write<string,false>(FString("City", 4));
            output->WriteDelimiter();
            output->Write<string,false>(FString("State", 5));
            output->WriteDelimiter();
            output->Write<string,false>(FString("ZIP_Code", 8));
            output->WriteDelimiter();
            output->Write<string,false>(FString("First_Name", 10));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Last_Name", 9));
            output->WriteDelimiter();
            output->Write<string,false>(FString("in_cvtseq", 9));
            output->WriteDelimiter();
            output->Write<string,false>(FString("in_zip_code", 11));
            output->WriteDelimiter();
            output->Write<string,false>(FString("I1 Combined Adult Age -2 bytes", 30));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Individual Education", 20));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Marital Status", 14));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Mosaic Household", 16));
            output->WriteDelimiter();
            output->Write<string,false>(FString("ADULT GENDER/COMBINED AGE", 25));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Year Built (Enhanced)", 21));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Political Affiliation", 21));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Number Of Adults In Household", 29));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Number Of Children (Maximum Of 8 Children Per Household)", 56));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Dwelling Type", 13));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Length Of Residence", 19));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Multi-Company Direct Mail Responder - Living Units Level", 56));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Gender Code", 11));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Date of Birth/Combined Adult Age", 32));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Estimated Current Home Value", 28));
            output->WriteDelimiter();
            output->Write<string,false>(FString("I1 Combined Age", 15));
            output->WriteDelimiter();
            output->Write<string,false>(FString("ChoiceScore Bundle", 18));
            output->WriteDelimiter();
            output->Write<string,false>(FString("ChoiceScore Prospect Segment", 28));
            output->WriteDelimiter();
            output->Write<string,false>(FString("ChoiceScore Prospect Model Score", 32));
            output->WriteDelimiter();
            output->Write<string,false>(FString("ChoiceScore Good versus Bad Score", 33));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Enhancement Mandatory Append1", 29));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Enhancement Mandatory Append2", 29));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Enhancement Mandatory Append3", 29));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Combined Homeowner", 18));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Online Overall", 14));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Retail Overall", 14));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Estimated Current Home Value2", 29));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Presence of Children 0-18", 25));
            output->WriteDelimiter();
            output->Write<string,false>(FString("ConsumerView Profitability Score", 32));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Person 1: Occupation Group V2", 29));
            output->WriteDelimiter();
            output->Write<string,false>(FString("Est Household Income V5", 23));
            output->WriteNewLine();
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV1_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = false;
        // If we have more than one input, we will random shuffle it
        if (inputCnt > 1)
        {
            ScopeRandom scopeRandom((int)vertexExecutionInfo->m_vertexId);
            auto lambda = [&scopeRandom](int max)->int { return (scopeRandom.Next() % max + max) % max;}; // scopeRandom.Next() % max could be negative value
            random_shuffle(&inputs[0], inputs + inputCnt - 0, lambda ); 
        }
        // Define extractor type and construct objects
        // 
        typedef Extractor<Extract_0_Data0, TextExtractPolicy<Extract_0_Data0, UID_Extract_0>, TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, true, false, 1, CharFormat_uint16>, CosmosInput>> ExtractorType1_SV1_Extract;
        unique_ptr<unique_ptr<ExtractorType1_SV1_Extract>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV1_Extract>[inputCnt - 0]);
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV1_Extract(inputs[i], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, InputStreamParameters(',', '\0', '\0', nullptr, false, true, UTF8, true, true, 1, CharFormat_uint16), UID_Extract_0));
        }
        ExtractorType1_SV1_Extract ** extractor_0 = (ExtractorType1_SV1_Extract **)extractor_0_array.get();
        ULONG extractor_0_count = (ULONG)inputCnt - 0;
        // Merge streams N->1
        typedef ParallelUnionAll<ExtractorType1_SV1_Extract, Extract_0_Data0, IsNativeOnlyVertex> UnionAllType_Extract_0_Process_1_connector;
        unique_ptr<UnionAllType_Extract_0_Process_1_connector> unionall_Extract_0_Process_1_connector_ptr(new UnionAllType_Extract_0_Process_1_connector(extractor_0,extractor_0_count,false,UID_ParallelUnionAll_Extract_0));
        UnionAllType_Extract_0_Process_1_connector * unionall_Extract_0_Process_1_connector = unionall_Extract_0_Process_1_connector_ptr.get();
        ULONG unionall_Extract_0_Process_1_connector_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Extract_0_Data0>> delegate_unionall_Extract_0_Process_1_connector_ptr (new OperatorDelegate<Extract_0_Data0>(OperatorDelegate<Extract_0_Data0>::FromOperator(unionall_Extract_0_Process_1_connector)));
        OperatorDelegate<Extract_0_Data0> * delegate_unionall_Extract_0_Process_1_connector = delegate_unionall_Extract_0_Process_1_connector_ptr.get();
        ULONG delegate_unionall_Extract_0_Process_1_connector_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Extract_0_Data0, Process_1_Data0> ProcessorType_Process_1;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_1> processor_Process_1_ptr (new ProcessorType_Process_1(ScopeProcessorManagedFactory::MakeSqlIp<Extract_0_Data0,Process_1_Data0,UID_Process_1>(delegate_unionall_Extract_0_Process_1_connector), delegate_unionall_Extract_0_Process_1_connector, UID_Process_1));
        ProcessorType_Process_1 * processor_Process_1 = processor_Process_1_ptr.get();
        ULONG processor_Process_1_count = 1;
        // Define outputer type
        typedef Outputer<ProcessorType_Process_1, Process_1_Data0, TextOutputPolicy<Process_1_Data0, UID_SV1_Extract_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, false, false, true, UTF8, true, CharFormat_uint16>>, false> OutputerType2_SV1_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV1_Extract> outputer_SV1_Extract_out0_ptr(new OutputerType2_SV1_Extract(processor_Process_1, outputs[0].outputFileName, outputs[0].isFirstOutputPiece, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', nullptr, false, false, false, false, "O", UTF8, true, CharFormat_uint16), UID_SV1_Extract_out0));
        OutputerType2_SV1_Extract * outputer_SV1_Extract_out0 = outputer_SV1_Extract_out0_ptr.get();

        try
        {
            // Init operator chain
            outputer_SV1_Extract_out0->Init();
    
            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_1_Data0 row;
            outputer_SV1_Extract_out0->GetNextRow(row);
    
            // Close operator chain
            outputer_SV1_Extract_out0->Close();
        }
        catch(ExceptionWithStack & ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {                
                ErrorManager::GetGlobal()->SetError(ex.GetErrorDetails());
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception in spool " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV1_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeProcessorManaged<Extract_0_Data0, Process_1_Data0> * ScopeEngine::ScopeProcessorManagedFactory::MakeSqlIp<Extract_0_Data0, Process_1_Data0, UID_Process_1>(OperatorDelegate<Extract_0_Data0>*);
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV1_Extract
// Empty footer
