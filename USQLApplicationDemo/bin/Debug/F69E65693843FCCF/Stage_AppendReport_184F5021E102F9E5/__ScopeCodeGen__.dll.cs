using Microsoft.Analytics.Interfaces;
using System;
using System.Collections.Generic;
using System.Text;
using System.Reflection;
using System.IO;
using System.Text.RegularExpressions;
using System.Threading;
using System.Runtime.Serialization;
using System.Linq;
using System.Globalization;
using Microsoft.Analytics.Types.Sql;
using System.Runtime.Versioning;
[assembly:TargetFramework(".NETFramework,Version=v4.5", FrameworkDisplayName = ".NET Framework, Version 4.5")]

public class ___Scope_Generated_Classes___
{

	public class SqlTransformer_0 : IProcessor
	{
		public override IRow Process(IRow row, IUpdatableRow output)
		{
			int exceptionIndex = 0;
			try
			{
				var sqlIpRow = (ScopeEngineManaged.SqlIpRow)row;
				System.String col_in_first_name = sqlIpRow.GetInternal<System.String>(0);
				System.String col_in_last_name = sqlIpRow.GetInternal<System.String>(1);
				System.Int32? col_in_seq = sqlIpRow.GetInternal<System.Int32?>(2);
				System.Int32? col_in_subseq = sqlIpRow.GetInternal<System.Int32?>(3);
				System.String col_Address1 = sqlIpRow.GetInternal<System.String>(4);
				System.String col_Address2 = sqlIpRow.GetInternal<System.String>(5);
				System.String col_City = sqlIpRow.GetInternal<System.String>(6);
				System.String col_State = sqlIpRow.GetInternal<System.String>(7);
				System.Int32? col_ZIP_Code = sqlIpRow.GetInternal<System.Int32?>(8);
				System.String col_First_Name = sqlIpRow.GetInternal<System.String>(9);
				System.String col_Last_Name = sqlIpRow.GetInternal<System.String>(10);
				System.String col_in_cvtseq = sqlIpRow.GetInternal<System.String>(11);
				System.String col_in_zip_code = sqlIpRow.GetInternal<System.String>(12);
				System.String col___I120Combined20Adult20Age202D220bytes071854cba67d4217bf9334137fc6d0d0 = sqlIpRow.GetInternal<System.String>(13);
				System.String col___Individual20Education928a75d11f7343449f83cef79bc9caa0 = sqlIpRow.GetInternal<System.String>(14);
				System.String col___Marital20Status10f8bd19b1424551998b34a368fb6156 = sqlIpRow.GetInternal<System.String>(15);
				System.String col___Mosaic20Householdb214151d9ad142ec970fffbfa36c5c46 = sqlIpRow.GetInternal<System.String>(16);
				System.String col___ADULT20GENDER2FCOMBINED20AGEae062c4fb55e48f5a1cae557d0101320 = sqlIpRow.GetInternal<System.String>(17);
				System.Int32? col___Year20Built2028Enhanced298663b77cff4545e2bf97f1f75ccb3b50 = sqlIpRow.GetInternal<System.Int32?>(18);
				System.String col___Political20Affiliation240a467595c34a1f95934d78cfd02ae6 = sqlIpRow.GetInternal<System.String>(19);
				System.String col___Number20Of20Adults20In20Household2e8e822994b64c4a9aa41654ca4ce936 = sqlIpRow.GetInternal<System.String>(20);
				System.String col___Number20Of20Children2028Maximum20Of20820Children20Per20Household29a5fba6397e794c0986b2c0d134aa7b65 = sqlIpRow.GetInternal<System.String>(21);
				System.String col___Dwelling20Type3728e52bf2124220a87a30a31f3325cf = sqlIpRow.GetInternal<System.String>(22);
				System.String col___Length20Of20Residence0af43b1ead01491fad86e2ea8d43495c = sqlIpRow.GetInternal<System.String>(23);
				System.String col___Multi2DCompany20Direct20Mail20Responder202D20Living20Units20Levelb783e7770e714a019116f6a7aaba0bf7 = sqlIpRow.GetInternal<System.String>(24);
				System.String col___Gender20Code33aa1c24dba6437597ea2405ad79c023 = sqlIpRow.GetInternal<System.String>(25);
				System.Int32? col___Date20of20Birth2FCombined20Adult20Age2cafbca1afd144d7a02977d77b7cd137 = sqlIpRow.GetInternal<System.Int32?>(26);
				System.Int32? col___Estimated20Current20Home20Value70278aee7bde44e1ba4e0630869c1862 = sqlIpRow.GetInternal<System.Int32?>(27);
				System.String col___I120Combined20Agebc7cc6abc2b44384b28e308b863bc339 = sqlIpRow.GetInternal<System.String>(28);
				System.String col___ChoiceScore20Bundle59a4c411a38647de8fa454a732aa8668 = sqlIpRow.GetInternal<System.String>(29);
				System.String col___ChoiceScore20Prospect20Segment837560e9d4134883b225b80a7682c900 = sqlIpRow.GetInternal<System.String>(30);
				System.Int32? col___ChoiceScore20Prospect20Model20Score54a21d6e3ec5456baa77c74522e2652e = sqlIpRow.GetInternal<System.Int32?>(31);
				System.String col___ChoiceScore20Good20versus20Bad20Score836ed27361944215932f1630329fa397 = sqlIpRow.GetInternal<System.String>(32);
				System.String col___Enhancement20Mandatory20Append1f30a345214d7499ea0bd64904c038b8b = sqlIpRow.GetInternal<System.String>(33);
				System.String col___Enhancement20Mandatory20Append27e09d62ca45a4621ae4a279594af0bb7 = sqlIpRow.GetInternal<System.String>(34);
				System.String col___Enhancement20Mandatory20Append3175de735a22e4234a64afed6447d9c74 = sqlIpRow.GetInternal<System.String>(35);
				System.String col___Combined20Homeownercc7b5fe5c49145779e065f1625dd13b4 = sqlIpRow.GetInternal<System.String>(36);
				System.String col___Online20Overalld64e7d9fbf044c1a996391fd3c46acde = sqlIpRow.GetInternal<System.String>(37);
				System.String col___Retail20Overalld02604037dbe4a13b4de7f3636fad950 = sqlIpRow.GetInternal<System.String>(38);
				System.String col___Estimated20Current20Home20Value2c110860f9c484c33bbe19530377870c5 = sqlIpRow.GetInternal<System.String>(39);
				System.String col___Presence20of20Children2002D186f355167ef144598b4029f5f5aaa2197 = sqlIpRow.GetInternal<System.String>(40);
				System.String col___ConsumerView20Profitability20Scoreed3857e520884373a5a8952a375b6f0b = sqlIpRow.GetInternal<System.String>(41);
				System.String col___Person2013A20Occupation20Group20V2e3ed3297860b444dabb4e6ce5402083f = sqlIpRow.GetInternal<System.String>(42);
				System.String col___Est20Household20Income20V58d5899d242f14ad79ab93fb1d16860ef = sqlIpRow.GetInternal<System.String>(43);
				output.Set(0, USQLApplicationDemo.CleansingFunctions.GetSHA256Hash(col_in_first_name + col_in_last_name));
				exceptionIndex++;
				output.Set(1, col_in_seq);
				exceptionIndex++;
				output.Set(2, col_in_subseq);
				exceptionIndex++;
				output.Set(3, col_Address1);
				exceptionIndex++;
				output.Set(4, col_Address2);
				exceptionIndex++;
				output.Set(5, col_City);
				exceptionIndex++;
				output.Set(6, col_State);
				exceptionIndex++;
				output.Set(7, col_ZIP_Code);
				exceptionIndex++;
				output.Set(8, col_First_Name);
				exceptionIndex++;
				output.Set(9, col_Last_Name);
				exceptionIndex++;
				output.Set(10, col_in_cvtseq);
				exceptionIndex++;
				output.Set(11, col_in_zip_code);
				exceptionIndex++;
				output.Set(12, col___I120Combined20Adult20Age202D220bytes071854cba67d4217bf9334137fc6d0d0);
				exceptionIndex++;
				output.Set(13, col___Individual20Education928a75d11f7343449f83cef79bc9caa0);
				exceptionIndex++;
				output.Set(14, col___Marital20Status10f8bd19b1424551998b34a368fb6156);
				exceptionIndex++;
				output.Set(15, col___Mosaic20Householdb214151d9ad142ec970fffbfa36c5c46);
				exceptionIndex++;
				output.Set(16, col___ADULT20GENDER2FCOMBINED20AGEae062c4fb55e48f5a1cae557d0101320);
				exceptionIndex++;
				output.Set(17, col___Year20Built2028Enhanced298663b77cff4545e2bf97f1f75ccb3b50);
				exceptionIndex++;
				output.Set(18, col___Political20Affiliation240a467595c34a1f95934d78cfd02ae6);
				exceptionIndex++;
				output.Set(19, col___Number20Of20Adults20In20Household2e8e822994b64c4a9aa41654ca4ce936);
				exceptionIndex++;
				output.Set(20, col___Number20Of20Children2028Maximum20Of20820Children20Per20Household29a5fba6397e794c0986b2c0d134aa7b65);
				exceptionIndex++;
				output.Set(21, col___Dwelling20Type3728e52bf2124220a87a30a31f3325cf);
				exceptionIndex++;
				output.Set(22, col___Length20Of20Residence0af43b1ead01491fad86e2ea8d43495c);
				exceptionIndex++;
				output.Set(23, col___Multi2DCompany20Direct20Mail20Responder202D20Living20Units20Levelb783e7770e714a019116f6a7aaba0bf7);
				exceptionIndex++;
				output.Set(24, col___Gender20Code33aa1c24dba6437597ea2405ad79c023);
				exceptionIndex++;
				output.Set(25, col___Date20of20Birth2FCombined20Adult20Age2cafbca1afd144d7a02977d77b7cd137);
				exceptionIndex++;
				output.Set(26, col___Estimated20Current20Home20Value70278aee7bde44e1ba4e0630869c1862);
				exceptionIndex++;
				output.Set(27, col___I120Combined20Agebc7cc6abc2b44384b28e308b863bc339);
				exceptionIndex++;
				output.Set(28, col___ChoiceScore20Bundle59a4c411a38647de8fa454a732aa8668);
				exceptionIndex++;
				output.Set(29, col___ChoiceScore20Prospect20Segment837560e9d4134883b225b80a7682c900);
				exceptionIndex++;
				output.Set(30, col___ChoiceScore20Prospect20Model20Score54a21d6e3ec5456baa77c74522e2652e);
				exceptionIndex++;
				output.Set(31, col___ChoiceScore20Good20versus20Bad20Score836ed27361944215932f1630329fa397);
				exceptionIndex++;
				output.Set(32, col___Enhancement20Mandatory20Append1f30a345214d7499ea0bd64904c038b8b);
				exceptionIndex++;
				output.Set(33, col___Enhancement20Mandatory20Append27e09d62ca45a4621ae4a279594af0bb7);
				exceptionIndex++;
				output.Set(34, col___Enhancement20Mandatory20Append3175de735a22e4234a64afed6447d9c74);
				exceptionIndex++;
				output.Set(35, col___Combined20Homeownercc7b5fe5c49145779e065f1625dd13b4);
				exceptionIndex++;
				output.Set(36, col___Online20Overalld64e7d9fbf044c1a996391fd3c46acde);
				exceptionIndex++;
				output.Set(37, col___Retail20Overalld02604037dbe4a13b4de7f3636fad950);
				exceptionIndex++;
				output.Set(38, col___Estimated20Current20Home20Value2c110860f9c484c33bbe19530377870c5);
				exceptionIndex++;
				output.Set(39, col___Presence20of20Children2002D186f355167ef144598b4029f5f5aaa2197);
				exceptionIndex++;
				output.Set(40, col___ConsumerView20Profitability20Scoreed3857e520884373a5a8952a375b6f0b);
				exceptionIndex++;
				output.Set(41, col___Person2013A20Occupation20Group20V2e3ed3297860b444dabb4e6ce5402083f);
				exceptionIndex++;
				output.Set(42, col___Est20Household20Income20V58d5899d242f14ad79ab93fb1d16860ef);
				exceptionIndex++;
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			return output.AsReadOnly();
		}
		public static string[] exceptionsInfo = 
		{
			@"USQLApplicationDemo.CleansingFunctions.GetSHA256Hash(in_first_name + in_last_name)",
			@"in_seq",
			@"in_subseq",
			@"Address1",
			@"Address2",
			@"City",
			@"State",
			@"ZIP_Code",
			@"First_Name",
			@"Last_Name",
			@"in_cvtseq",
			@"in_zip_code",
			@"I1 Combined Adult Age -2 bytes",
			@"Individual Education",
			@"Marital Status",
			@"Mosaic Household",
			@"ADULT GENDER/COMBINED AGE",
			@"Year Built (Enhanced)",
			@"Political Affiliation",
			@"Number Of Adults In Household",
			@"Number Of Children (Maximum Of 8 Children Per Household)",
			@"Dwelling Type",
			@"Length Of Residence",
			@"Multi-Company Direct Mail Responder - Living Units Level",
			@"Gender Code",
			@"Date of Birth/Combined Adult Age",
			@"Estimated Current Home Value",
			@"I1 Combined Age",
			@"ChoiceScore Bundle",
			@"ChoiceScore Prospect Segment",
			@"ChoiceScore Prospect Model Score",
			@"ChoiceScore Good versus Bad Score",
			@"Enhancement Mandatory Append1",
			@"Enhancement Mandatory Append2",
			@"Enhancement Mandatory Append3",
			@"Combined Homeowner",
			@"Online Overall",
			@"Retail Overall",
			@"Estimated Current Home Value2",
			@"Presence of Children 0-18",
			@"ConsumerView Profitability Score",
			@"Person 1: Occupation Group V2",
			@"Est Household Income V5",
		};
	}


	public class SqlFilterTransformer_2 : IProcessor
	{
		public override IRow Process(IRow row, IUpdatableRow output)
		{
			var sqlIpRow = (ScopeEngineManaged.SqlIpRow)row;
			System.String col_in_first_name = sqlIpRow.GetInternal<System.String>(0);
			System.String col_in_last_name = sqlIpRow.GetInternal<System.String>(1);
			System.Int32? col_in_seq = sqlIpRow.GetInternal<System.Int32?>(2);
			System.Int32? col_in_subseq = sqlIpRow.GetInternal<System.Int32?>(3);
			System.String col_Address1 = sqlIpRow.GetInternal<System.String>(4);
			System.String col_Address2 = sqlIpRow.GetInternal<System.String>(5);
			System.String col_City = sqlIpRow.GetInternal<System.String>(6);
			System.String col_State = sqlIpRow.GetInternal<System.String>(7);
			System.Int32? col_ZIP_Code = sqlIpRow.GetInternal<System.Int32?>(8);
			System.String col_First_Name = sqlIpRow.GetInternal<System.String>(9);
			System.String col_Last_Name = sqlIpRow.GetInternal<System.String>(10);
			System.String col_in_cvtseq = sqlIpRow.GetInternal<System.String>(11);
			System.String col_in_zip_code = sqlIpRow.GetInternal<System.String>(12);
			System.String col___I120Combined20Adult20Age202D220bytes071854cba67d4217bf9334137fc6d0d0 = sqlIpRow.GetInternal<System.String>(13);
			System.String col___Individual20Education928a75d11f7343449f83cef79bc9caa0 = sqlIpRow.GetInternal<System.String>(14);
			System.String col___Marital20Status10f8bd19b1424551998b34a368fb6156 = sqlIpRow.GetInternal<System.String>(15);
			System.String col___Mosaic20Householdb214151d9ad142ec970fffbfa36c5c46 = sqlIpRow.GetInternal<System.String>(16);
			System.String col___ADULT20GENDER2FCOMBINED20AGEae062c4fb55e48f5a1cae557d0101320 = sqlIpRow.GetInternal<System.String>(17);
			System.Int32? col___Year20Built2028Enhanced298663b77cff4545e2bf97f1f75ccb3b50 = sqlIpRow.GetInternal<System.Int32?>(18);
			System.String col___Political20Affiliation240a467595c34a1f95934d78cfd02ae6 = sqlIpRow.GetInternal<System.String>(19);
			System.String col___Number20Of20Adults20In20Household2e8e822994b64c4a9aa41654ca4ce936 = sqlIpRow.GetInternal<System.String>(20);
			System.String col___Number20Of20Children2028Maximum20Of20820Children20Per20Household29a5fba6397e794c0986b2c0d134aa7b65 = sqlIpRow.GetInternal<System.String>(21);
			System.String col___Dwelling20Type3728e52bf2124220a87a30a31f3325cf = sqlIpRow.GetInternal<System.String>(22);
			System.String col___Length20Of20Residence0af43b1ead01491fad86e2ea8d43495c = sqlIpRow.GetInternal<System.String>(23);
			System.String col___Multi2DCompany20Direct20Mail20Responder202D20Living20Units20Levelb783e7770e714a019116f6a7aaba0bf7 = sqlIpRow.GetInternal<System.String>(24);
			System.String col___Gender20Code33aa1c24dba6437597ea2405ad79c023 = sqlIpRow.GetInternal<System.String>(25);
			System.Int32? col___Date20of20Birth2FCombined20Adult20Age2cafbca1afd144d7a02977d77b7cd137 = sqlIpRow.GetInternal<System.Int32?>(26);
			System.Int32? col___Estimated20Current20Home20Value70278aee7bde44e1ba4e0630869c1862 = sqlIpRow.GetInternal<System.Int32?>(27);
			System.String col___I120Combined20Agebc7cc6abc2b44384b28e308b863bc339 = sqlIpRow.GetInternal<System.String>(28);
			System.String col___ChoiceScore20Bundle59a4c411a38647de8fa454a732aa8668 = sqlIpRow.GetInternal<System.String>(29);
			System.String col___ChoiceScore20Prospect20Segment837560e9d4134883b225b80a7682c900 = sqlIpRow.GetInternal<System.String>(30);
			System.Int32? col___ChoiceScore20Prospect20Model20Score54a21d6e3ec5456baa77c74522e2652e = sqlIpRow.GetInternal<System.Int32?>(31);
			System.String col___ChoiceScore20Good20versus20Bad20Score836ed27361944215932f1630329fa397 = sqlIpRow.GetInternal<System.String>(32);
			System.String col___Enhancement20Mandatory20Append1f30a345214d7499ea0bd64904c038b8b = sqlIpRow.GetInternal<System.String>(33);
			System.String col___Enhancement20Mandatory20Append27e09d62ca45a4621ae4a279594af0bb7 = sqlIpRow.GetInternal<System.String>(34);
			System.String col___Enhancement20Mandatory20Append3175de735a22e4234a64afed6447d9c74 = sqlIpRow.GetInternal<System.String>(35);
			System.String col___Combined20Homeownercc7b5fe5c49145779e065f1625dd13b4 = sqlIpRow.GetInternal<System.String>(36);
			System.String col___Online20Overalld64e7d9fbf044c1a996391fd3c46acde = sqlIpRow.GetInternal<System.String>(37);
			System.String col___Retail20Overalld02604037dbe4a13b4de7f3636fad950 = sqlIpRow.GetInternal<System.String>(38);
			System.String col___Estimated20Current20Home20Value2c110860f9c484c33bbe19530377870c5 = sqlIpRow.GetInternal<System.String>(39);
			System.String col___Presence20of20Children2002D186f355167ef144598b4029f5f5aaa2197 = sqlIpRow.GetInternal<System.String>(40);
			System.String col___ConsumerView20Profitability20Scoreed3857e520884373a5a8952a375b6f0b = sqlIpRow.GetInternal<System.String>(41);
			System.String col___Person2013A20Occupation20Group20V2e3ed3297860b444dabb4e6ce5402083f = sqlIpRow.GetInternal<System.String>(42);
			System.String col___Est20Household20Income20V58d5899d242f14ad79ab93fb1d16860ef = sqlIpRow.GetInternal<System.String>(43);
			bool bPicked = false;
			int exceptionIndex = 0;
			try
			{
				{
					bPicked = true;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.Byte[]>(0, (USQLApplicationDemo.CleansingFunctions.GetSHA256Hash(col_in_first_name + col_in_last_name)));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.Int32?>(1, (col_in_seq));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.Int32?>(2, (col_in_subseq));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(3, (col_Address1));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(4, (col_Address2));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(5, (col_City));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(6, (col_State));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.Int32?>(7, (col_ZIP_Code));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(8, (col_First_Name));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(9, (col_Last_Name));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(10, (col_in_cvtseq));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(11, (col_in_zip_code));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(12, (col___I120Combined20Adult20Age202D220bytes071854cba67d4217bf9334137fc6d0d0));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(13, (col___Individual20Education928a75d11f7343449f83cef79bc9caa0));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(14, (col___Marital20Status10f8bd19b1424551998b34a368fb6156));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(15, (col___Mosaic20Householdb214151d9ad142ec970fffbfa36c5c46));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(16, (col___ADULT20GENDER2FCOMBINED20AGEae062c4fb55e48f5a1cae557d0101320));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.Int32?>(17, (col___Year20Built2028Enhanced298663b77cff4545e2bf97f1f75ccb3b50));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(18, (col___Political20Affiliation240a467595c34a1f95934d78cfd02ae6));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(19, (col___Number20Of20Adults20In20Household2e8e822994b64c4a9aa41654ca4ce936));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(20, (col___Number20Of20Children2028Maximum20Of20820Children20Per20Household29a5fba6397e794c0986b2c0d134aa7b65));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(21, (col___Dwelling20Type3728e52bf2124220a87a30a31f3325cf));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(22, (col___Length20Of20Residence0af43b1ead01491fad86e2ea8d43495c));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(23, (col___Multi2DCompany20Direct20Mail20Responder202D20Living20Units20Levelb783e7770e714a019116f6a7aaba0bf7));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(24, (col___Gender20Code33aa1c24dba6437597ea2405ad79c023));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.Int32?>(25, (col___Date20of20Birth2FCombined20Adult20Age2cafbca1afd144d7a02977d77b7cd137));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.Int32?>(26, (col___Estimated20Current20Home20Value70278aee7bde44e1ba4e0630869c1862));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(27, (col___I120Combined20Agebc7cc6abc2b44384b28e308b863bc339));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(28, (col___ChoiceScore20Bundle59a4c411a38647de8fa454a732aa8668));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(29, (col___ChoiceScore20Prospect20Segment837560e9d4134883b225b80a7682c900));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.Int32?>(30, (col___ChoiceScore20Prospect20Model20Score54a21d6e3ec5456baa77c74522e2652e));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(31, (col___ChoiceScore20Good20versus20Bad20Score836ed27361944215932f1630329fa397));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(32, (col___Enhancement20Mandatory20Append1f30a345214d7499ea0bd64904c038b8b));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(33, (col___Enhancement20Mandatory20Append27e09d62ca45a4621ae4a279594af0bb7));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(34, (col___Enhancement20Mandatory20Append3175de735a22e4234a64afed6447d9c74));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(35, (col___Combined20Homeownercc7b5fe5c49145779e065f1625dd13b4));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(36, (col___Online20Overalld64e7d9fbf044c1a996391fd3c46acde));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(37, (col___Retail20Overalld02604037dbe4a13b4de7f3636fad950));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(38, (col___Estimated20Current20Home20Value2c110860f9c484c33bbe19530377870c5));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(39, (col___Presence20of20Children2002D186f355167ef144598b4029f5f5aaa2197));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(40, (col___ConsumerView20Profitability20Scoreed3857e520884373a5a8952a375b6f0b));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(41, (col___Person2013A20Occupation20Group20V2e3ed3297860b444dabb4e6ce5402083f));
					exceptionIndex++;
					((ScopeEngineManaged.SqlIpUpdatableRow)output).SetInternal<System.String>(42, (col___Est20Household20Income20V58d5899d242f14ad79ab93fb1d16860ef));
					exceptionIndex++;
				}
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			if(bPicked)
			{
			    return output.AsReadOnly();
			}
			else
			{
			    return null;
			}
		}
		public static string[] exceptionsInfo = 
		{
			@"USQLApplicationDemo.CleansingFunctions.GetSHA256Hash(in_first_name + in_last_name)",
			@"in_seq",
			@"in_subseq",
			@"Address1",
			@"Address2",
			@"City",
			@"State",
			@"ZIP_Code",
			@"First_Name",
			@"Last_Name",
			@"in_cvtseq",
			@"in_zip_code",
			@"I1 Combined Adult Age -2 bytes",
			@"Individual Education",
			@"Marital Status",
			@"Mosaic Household",
			@"ADULT GENDER/COMBINED AGE",
			@"Year Built (Enhanced)",
			@"Political Affiliation",
			@"Number Of Adults In Household",
			@"Number Of Children (Maximum Of 8 Children Per Household)",
			@"Dwelling Type",
			@"Length Of Residence",
			@"Multi-Company Direct Mail Responder - Living Units Level",
			@"Gender Code",
			@"Date of Birth/Combined Adult Age",
			@"Estimated Current Home Value",
			@"I1 Combined Age",
			@"ChoiceScore Bundle",
			@"ChoiceScore Prospect Segment",
			@"ChoiceScore Prospect Model Score",
			@"ChoiceScore Good versus Bad Score",
			@"Enhancement Mandatory Append1",
			@"Enhancement Mandatory Append2",
			@"Enhancement Mandatory Append3",
			@"Combined Homeowner",
			@"Online Overall",
			@"Retail Overall",
			@"Estimated Current Home Value2",
			@"Presence of Children 0-18",
			@"ConsumerView Profitability Score",
			@"Person 1: Occupation Group V2",
			@"Est Household Income V5",
		};
	}

































	public static class __OperatorFactory__
	{
		public static Microsoft.Analytics.Interfaces.IProcessor Create_Process_1()
		{
			return new ___Scope_Generated_Classes___.SqlFilterTransformer_2();
		}
		public static string Name_Process_1 = "___Scope_Generated_Classes___.SqlFilterTransformer_2";
	}
}
