// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// GetLineLocations
std::vector<double> GetLineLocations(std::string& filename);
RcppExport SEXP _BinaryDosage_GetLineLocations(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(GetLineLocations(filename));
    return rcpp_result_gen;
END_RCPP
}
// ReadBinaryDosageBaseHeader
Rcpp::List ReadBinaryDosageBaseHeader(std::string& filename);
RcppExport SEXP _BinaryDosage_ReadBinaryDosageBaseHeader(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(ReadBinaryDosageBaseHeader(filename));
    return rcpp_result_gen;
END_RCPP
}
// ReadBinaryDosageHeader3A
Rcpp::List ReadBinaryDosageHeader3A(std::string& filename);
RcppExport SEXP _BinaryDosage_ReadBinaryDosageHeader3A(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(ReadBinaryDosageHeader3A(filename));
    return rcpp_result_gen;
END_RCPP
}
// ReadBinaryDosageHeader3B
Rcpp::List ReadBinaryDosageHeader3B(std::string& filename);
RcppExport SEXP _BinaryDosage_ReadBinaryDosageHeader3B(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(ReadBinaryDosageHeader3B(filename));
    return rcpp_result_gen;
END_RCPP
}
// ReadBinaryDosageHeader4A
Rcpp::List ReadBinaryDosageHeader4A(std::string& filename);
RcppExport SEXP _BinaryDosage_ReadBinaryDosageHeader4A(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(ReadBinaryDosageHeader4A(filename));
    return rcpp_result_gen;
END_RCPP
}
// ReadBinaryDosageHeader4B
Rcpp::List ReadBinaryDosageHeader4B(std::string& filename);
RcppExport SEXP _BinaryDosage_ReadBinaryDosageHeader4B(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(ReadBinaryDosageHeader4B(filename));
    return rcpp_result_gen;
END_RCPP
}
// ReadBDIndices3C
Rcpp::List ReadBDIndices3C(std::string filename, int numSNPs, int indexStart);
RcppExport SEXP _BinaryDosage_ReadBDIndices3C(SEXP filenameSEXP, SEXP numSNPsSEXP, SEXP indexStartSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type numSNPs(numSNPsSEXP);
    Rcpp::traits::input_parameter< int >::type indexStart(indexStartSEXP);
    rcpp_result_gen = Rcpp::wrap(ReadBDIndices3C(filename, numSNPs, indexStart));
    return rcpp_result_gen;
END_RCPP
}
// ReadBDIndices4C
Rcpp::List ReadBDIndices4C(std::string filename, int numSNPs, int headersize);
RcppExport SEXP _BinaryDosage_ReadBDIndices4C(SEXP filenameSEXP, SEXP numSNPsSEXP, SEXP headersizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type numSNPs(numSNPsSEXP);
    Rcpp::traits::input_parameter< int >::type headersize(headersizeSEXP);
    rcpp_result_gen = Rcpp::wrap(ReadBDIndices4C(filename, numSNPs, headersize));
    return rcpp_result_gen;
END_RCPP
}
// ReadBinaryDosageDataC
int ReadBinaryDosageDataC(std::string& filename, int headersize, int numsub, int snp, Rcpp::NumericVector& dosage, Rcpp::IntegerVector& us, int base);
RcppExport SEXP _BinaryDosage_ReadBinaryDosageDataC(SEXP filenameSEXP, SEXP headersizeSEXP, SEXP numsubSEXP, SEXP snpSEXP, SEXP dosageSEXP, SEXP usSEXP, SEXP baseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type headersize(headersizeSEXP);
    Rcpp::traits::input_parameter< int >::type numsub(numsubSEXP);
    Rcpp::traits::input_parameter< int >::type snp(snpSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type dosage(dosageSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type us(usSEXP);
    Rcpp::traits::input_parameter< int >::type base(baseSEXP);
    rcpp_result_gen = Rcpp::wrap(ReadBinaryDosageDataC(filename, headersize, numsub, snp, dosage, us, base));
    return rcpp_result_gen;
END_RCPP
}
// ReadBinaryDosageDataP1P2
int ReadBinaryDosageDataP1P2(std::string& filename, int headersize, int numsub, int snp, Rcpp::NumericVector& dosage, Rcpp::NumericVector& p0, Rcpp::NumericVector& p1, Rcpp::NumericVector& p2, Rcpp::IntegerVector& us, int base);
RcppExport SEXP _BinaryDosage_ReadBinaryDosageDataP1P2(SEXP filenameSEXP, SEXP headersizeSEXP, SEXP numsubSEXP, SEXP snpSEXP, SEXP dosageSEXP, SEXP p0SEXP, SEXP p1SEXP, SEXP p2SEXP, SEXP usSEXP, SEXP baseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type headersize(headersizeSEXP);
    Rcpp::traits::input_parameter< int >::type numsub(numsubSEXP);
    Rcpp::traits::input_parameter< int >::type snp(snpSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type dosage(dosageSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type p0(p0SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type p2(p2SEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type us(usSEXP);
    Rcpp::traits::input_parameter< int >::type base(baseSEXP);
    rcpp_result_gen = Rcpp::wrap(ReadBinaryDosageDataP1P2(filename, headersize, numsub, snp, dosage, p0, p1, p2, us, base));
    return rcpp_result_gen;
END_RCPP
}
// ReadBinaryDosageDataCompressed
int ReadBinaryDosageDataCompressed(std::string& filename, double index, double datasize, int numsub, Rcpp::NumericVector& dosage, Rcpp::NumericVector& p0, Rcpp::NumericVector& p1, Rcpp::NumericVector& p2, Rcpp::IntegerVector& us);
RcppExport SEXP _BinaryDosage_ReadBinaryDosageDataCompressed(SEXP filenameSEXP, SEXP indexSEXP, SEXP datasizeSEXP, SEXP numsubSEXP, SEXP dosageSEXP, SEXP p0SEXP, SEXP p1SEXP, SEXP p2SEXP, SEXP usSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< double >::type index(indexSEXP);
    Rcpp::traits::input_parameter< double >::type datasize(datasizeSEXP);
    Rcpp::traits::input_parameter< int >::type numsub(numsubSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type dosage(dosageSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type p0(p0SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type p2(p2SEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type us(usSEXP);
    rcpp_result_gen = Rcpp::wrap(ReadBinaryDosageDataCompressed(filename, index, datasize, numsub, dosage, p0, p1, p2, us));
    return rcpp_result_gen;
END_RCPP
}
// WriteBinaryDosageBaseHeader
int WriteBinaryDosageBaseHeader(std::string& filename, int format, int subformat);
RcppExport SEXP _BinaryDosage_WriteBinaryDosageBaseHeader(SEXP filenameSEXP, SEXP formatSEXP, SEXP subformatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type format(formatSEXP);
    Rcpp::traits::input_parameter< int >::type subformat(subformatSEXP);
    rcpp_result_gen = Rcpp::wrap(WriteBinaryDosageBaseHeader(filename, format, subformat));
    return rcpp_result_gen;
END_RCPP
}
// WriteBinaryDosageHeader3A
int WriteBinaryDosageHeader3A(std::string& filename, int numSubjects);
RcppExport SEXP _BinaryDosage_WriteBinaryDosageHeader3A(SEXP filenameSEXP, SEXP numSubjectsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type numSubjects(numSubjectsSEXP);
    rcpp_result_gen = Rcpp::wrap(WriteBinaryDosageHeader3A(filename, numSubjects));
    return rcpp_result_gen;
END_RCPP
}
// WriteBinaryDosageHeader3B
int WriteBinaryDosageHeader3B(std::string& filename, std::string& md5samples, std::string& md5SNPs, int numIndices);
RcppExport SEXP _BinaryDosage_WriteBinaryDosageHeader3B(SEXP filenameSEXP, SEXP md5samplesSEXP, SEXP md5SNPsSEXP, SEXP numIndicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< std::string& >::type md5samples(md5samplesSEXP);
    Rcpp::traits::input_parameter< std::string& >::type md5SNPs(md5SNPsSEXP);
    Rcpp::traits::input_parameter< int >::type numIndices(numIndicesSEXP);
    rcpp_result_gen = Rcpp::wrap(WriteBinaryDosageHeader3B(filename, md5samples, md5SNPs, numIndices));
    return rcpp_result_gen;
END_RCPP
}
// WriteBinaryDosageHeader4A
int WriteBinaryDosageHeader4A(std::string& filename, int headerEntries, int numSubjects, int numSNPs, Rcpp::IntegerVector& groups, std::string& sid, std::string& fid, std::string& snpid, std::string& chromosome, Rcpp::IntegerVector& location, std::string& reference, std::string& alternate, Rcpp::NumericVector& aaf, Rcpp::NumericVector& maf, Rcpp::NumericVector& avgCall, Rcpp::NumericVector& rsq, Rcpp::IntegerVector& offsets, int numIndices);
RcppExport SEXP _BinaryDosage_WriteBinaryDosageHeader4A(SEXP filenameSEXP, SEXP headerEntriesSEXP, SEXP numSubjectsSEXP, SEXP numSNPsSEXP, SEXP groupsSEXP, SEXP sidSEXP, SEXP fidSEXP, SEXP snpidSEXP, SEXP chromosomeSEXP, SEXP locationSEXP, SEXP referenceSEXP, SEXP alternateSEXP, SEXP aafSEXP, SEXP mafSEXP, SEXP avgCallSEXP, SEXP rsqSEXP, SEXP offsetsSEXP, SEXP numIndicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type headerEntries(headerEntriesSEXP);
    Rcpp::traits::input_parameter< int >::type numSubjects(numSubjectsSEXP);
    Rcpp::traits::input_parameter< int >::type numSNPs(numSNPsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< std::string& >::type sid(sidSEXP);
    Rcpp::traits::input_parameter< std::string& >::type fid(fidSEXP);
    Rcpp::traits::input_parameter< std::string& >::type snpid(snpidSEXP);
    Rcpp::traits::input_parameter< std::string& >::type chromosome(chromosomeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type location(locationSEXP);
    Rcpp::traits::input_parameter< std::string& >::type reference(referenceSEXP);
    Rcpp::traits::input_parameter< std::string& >::type alternate(alternateSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type aaf(aafSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type maf(mafSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type avgCall(avgCallSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type rsq(rsqSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type offsets(offsetsSEXP);
    Rcpp::traits::input_parameter< int >::type numIndices(numIndicesSEXP);
    rcpp_result_gen = Rcpp::wrap(WriteBinaryDosageHeader4A(filename, headerEntries, numSubjects, numSNPs, groups, sid, fid, snpid, chromosome, location, reference, alternate, aaf, maf, avgCall, rsq, offsets, numIndices));
    return rcpp_result_gen;
END_RCPP
}
// WriteBinaryDosageDataC
int WriteBinaryDosageDataC(std::string& filename, Rcpp::NumericVector& dosage, Rcpp::IntegerVector& us, int base);
RcppExport SEXP _BinaryDosage_WriteBinaryDosageDataC(SEXP filenameSEXP, SEXP dosageSEXP, SEXP usSEXP, SEXP baseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type dosage(dosageSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type us(usSEXP);
    Rcpp::traits::input_parameter< int >::type base(baseSEXP);
    rcpp_result_gen = Rcpp::wrap(WriteBinaryDosageDataC(filename, dosage, us, base));
    return rcpp_result_gen;
END_RCPP
}
// WriteBinaryP1P2Data
int WriteBinaryP1P2Data(std::string& filename, Rcpp::NumericVector& p1, Rcpp::NumericVector& p2, Rcpp::IntegerVector& us, int base);
RcppExport SEXP _BinaryDosage_WriteBinaryP1P2Data(SEXP filenameSEXP, SEXP p1SEXP, SEXP p2SEXP, SEXP usSEXP, SEXP baseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type p2(p2SEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type us(usSEXP);
    Rcpp::traits::input_parameter< int >::type base(baseSEXP);
    rcpp_result_gen = Rcpp::wrap(WriteBinaryP1P2Data(filename, p1, p2, us, base));
    return rcpp_result_gen;
END_RCPP
}
// WriteBinaryCompressed
int WriteBinaryCompressed(std::string& filename, Rcpp::NumericVector& dosage, Rcpp::NumericVector& p0, Rcpp::NumericVector& p1, Rcpp::NumericVector& p2, Rcpp::IntegerVector& snpnumber, Rcpp::IntegerVector& datasize, Rcpp::IntegerVector& us);
RcppExport SEXP _BinaryDosage_WriteBinaryCompressed(SEXP filenameSEXP, SEXP dosageSEXP, SEXP p0SEXP, SEXP p1SEXP, SEXP p2SEXP, SEXP snpnumberSEXP, SEXP datasizeSEXP, SEXP usSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type dosage(dosageSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type p0(p0SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type p1(p1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type p2(p2SEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type snpnumber(snpnumberSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type datasize(datasizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type us(usSEXP);
    rcpp_result_gen = Rcpp::wrap(WriteBinaryCompressed(filename, dosage, p0, p1, p2, snpnumber, datasize, us));
    return rcpp_result_gen;
END_RCPP
}
// WriteBinaryDosageIndicesC
int WriteBinaryDosageIndicesC(std::string& filename, int headersize, Rcpp::IntegerVector& datasize);
RcppExport SEXP _BinaryDosage_WriteBinaryDosageIndicesC(SEXP filenameSEXP, SEXP headersizeSEXP, SEXP datasizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type headersize(headersizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector& >::type datasize(datasizeSEXP);
    rcpp_result_gen = Rcpp::wrap(WriteBinaryDosageIndicesC(filename, headersize, datasize));
    return rcpp_result_gen;
END_RCPP
}
// updatesnpinfo
int updatesnpinfo(std::string& filename, int offset, Rcpp::NumericVector& value);
RcppExport SEXP _BinaryDosage_updatesnpinfo(SEXP filenameSEXP, SEXP offsetSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector& >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(updatesnpinfo(filename, offset, value));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BinaryDosage_GetLineLocations", (DL_FUNC) &_BinaryDosage_GetLineLocations, 1},
    {"_BinaryDosage_ReadBinaryDosageBaseHeader", (DL_FUNC) &_BinaryDosage_ReadBinaryDosageBaseHeader, 1},
    {"_BinaryDosage_ReadBinaryDosageHeader3A", (DL_FUNC) &_BinaryDosage_ReadBinaryDosageHeader3A, 1},
    {"_BinaryDosage_ReadBinaryDosageHeader3B", (DL_FUNC) &_BinaryDosage_ReadBinaryDosageHeader3B, 1},
    {"_BinaryDosage_ReadBinaryDosageHeader4A", (DL_FUNC) &_BinaryDosage_ReadBinaryDosageHeader4A, 1},
    {"_BinaryDosage_ReadBinaryDosageHeader4B", (DL_FUNC) &_BinaryDosage_ReadBinaryDosageHeader4B, 1},
    {"_BinaryDosage_ReadBDIndices3C", (DL_FUNC) &_BinaryDosage_ReadBDIndices3C, 3},
    {"_BinaryDosage_ReadBDIndices4C", (DL_FUNC) &_BinaryDosage_ReadBDIndices4C, 3},
    {"_BinaryDosage_ReadBinaryDosageDataC", (DL_FUNC) &_BinaryDosage_ReadBinaryDosageDataC, 7},
    {"_BinaryDosage_ReadBinaryDosageDataP1P2", (DL_FUNC) &_BinaryDosage_ReadBinaryDosageDataP1P2, 10},
    {"_BinaryDosage_ReadBinaryDosageDataCompressed", (DL_FUNC) &_BinaryDosage_ReadBinaryDosageDataCompressed, 9},
    {"_BinaryDosage_WriteBinaryDosageBaseHeader", (DL_FUNC) &_BinaryDosage_WriteBinaryDosageBaseHeader, 3},
    {"_BinaryDosage_WriteBinaryDosageHeader3A", (DL_FUNC) &_BinaryDosage_WriteBinaryDosageHeader3A, 2},
    {"_BinaryDosage_WriteBinaryDosageHeader3B", (DL_FUNC) &_BinaryDosage_WriteBinaryDosageHeader3B, 4},
    {"_BinaryDosage_WriteBinaryDosageHeader4A", (DL_FUNC) &_BinaryDosage_WriteBinaryDosageHeader4A, 18},
    {"_BinaryDosage_WriteBinaryDosageDataC", (DL_FUNC) &_BinaryDosage_WriteBinaryDosageDataC, 4},
    {"_BinaryDosage_WriteBinaryP1P2Data", (DL_FUNC) &_BinaryDosage_WriteBinaryP1P2Data, 5},
    {"_BinaryDosage_WriteBinaryCompressed", (DL_FUNC) &_BinaryDosage_WriteBinaryCompressed, 8},
    {"_BinaryDosage_WriteBinaryDosageIndicesC", (DL_FUNC) &_BinaryDosage_WriteBinaryDosageIndicesC, 3},
    {"_BinaryDosage_updatesnpinfo", (DL_FUNC) &_BinaryDosage_updatesnpinfo, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_BinaryDosage(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
