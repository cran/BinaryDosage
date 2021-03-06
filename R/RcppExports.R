# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

GetLineLocations <- function(filename) {
    .Call(`_BinaryDosage_GetLineLocations`, filename)
}

ReadBinaryDosageBaseHeader <- function(filename) {
    .Call(`_BinaryDosage_ReadBinaryDosageBaseHeader`, filename)
}

ReadBinaryDosageHeader3A <- function(filename) {
    .Call(`_BinaryDosage_ReadBinaryDosageHeader3A`, filename)
}

ReadBinaryDosageHeader3B <- function(filename) {
    .Call(`_BinaryDosage_ReadBinaryDosageHeader3B`, filename)
}

ReadBinaryDosageHeader4A <- function(filename) {
    .Call(`_BinaryDosage_ReadBinaryDosageHeader4A`, filename)
}

ReadBinaryDosageHeader4B <- function(filename) {
    .Call(`_BinaryDosage_ReadBinaryDosageHeader4B`, filename)
}

ReadBDIndices3C <- function(filename, numSNPs, indexStart) {
    .Call(`_BinaryDosage_ReadBDIndices3C`, filename, numSNPs, indexStart)
}

ReadBDIndices4C <- function(filename, numSNPs, headersize) {
    .Call(`_BinaryDosage_ReadBDIndices4C`, filename, numSNPs, headersize)
}

ReadBinaryDosageDataC <- function(filename, headersize, numsub, snp, dosage, us, base) {
    .Call(`_BinaryDosage_ReadBinaryDosageDataC`, filename, headersize, numsub, snp, dosage, us, base)
}

ReadBinaryDosageDataP1P2 <- function(filename, headersize, numsub, snp, dosage, p0, p1, p2, us, base) {
    .Call(`_BinaryDosage_ReadBinaryDosageDataP1P2`, filename, headersize, numsub, snp, dosage, p0, p1, p2, us, base)
}

ReadBinaryDosageDataCompressed <- function(filename, index, datasize, numsub, dosage, p0, p1, p2, us) {
    .Call(`_BinaryDosage_ReadBinaryDosageDataCompressed`, filename, index, datasize, numsub, dosage, p0, p1, p2, us)
}

WriteBinaryDosageBaseHeader <- function(filename, format, subformat) {
    .Call(`_BinaryDosage_WriteBinaryDosageBaseHeader`, filename, format, subformat)
}

WriteBinaryDosageHeader3A <- function(filename, numSubjects) {
    .Call(`_BinaryDosage_WriteBinaryDosageHeader3A`, filename, numSubjects)
}

WriteBinaryDosageHeader3B <- function(filename, md5samples, md5SNPs, numIndices) {
    .Call(`_BinaryDosage_WriteBinaryDosageHeader3B`, filename, md5samples, md5SNPs, numIndices)
}

WriteBinaryDosageHeader4A <- function(filename, headerEntries, numSubjects, numSNPs, groups, sid, fid, snpid, chromosome, location, reference, alternate, aaf, maf, avgCall, rsq, offsets, numIndices) {
    .Call(`_BinaryDosage_WriteBinaryDosageHeader4A`, filename, headerEntries, numSubjects, numSNPs, groups, sid, fid, snpid, chromosome, location, reference, alternate, aaf, maf, avgCall, rsq, offsets, numIndices)
}

WriteBinaryDosageDataC <- function(filename, dosage, us, base) {
    .Call(`_BinaryDosage_WriteBinaryDosageDataC`, filename, dosage, us, base)
}

WriteBinaryP1P2Data <- function(filename, p1, p2, us, base) {
    .Call(`_BinaryDosage_WriteBinaryP1P2Data`, filename, p1, p2, us, base)
}

WriteBinaryCompressed <- function(filename, dosage, p0, p1, p2, snpnumber, datasize, us) {
    .Call(`_BinaryDosage_WriteBinaryCompressed`, filename, dosage, p0, p1, p2, snpnumber, datasize, us)
}

WriteBinaryDosageIndicesC <- function(filename, headersize, datasize) {
    .Call(`_BinaryDosage_WriteBinaryDosageIndicesC`, filename, headersize, datasize)
}

updatesnpinfo <- function(filename, offset, value) {
    .Call(`_BinaryDosage_updatesnpinfo`, filename, offset, value)
}

