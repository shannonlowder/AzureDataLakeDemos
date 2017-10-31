using Microsoft.Analytics.Interfaces;
using Microsoft.Analytics.Types.Sql;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Security.Cryptography;

namespace USQLApplicationDemo
{
    public class CleansingFunctions
    {
        public static byte[] GetSHA256Hash(string inputString)
        {
            HashAlgorithm algorithm = SHA256.Create();  
            return algorithm.ComputeHash(Encoding.UTF8.GetBytes(inputString));
        }
    }
}
