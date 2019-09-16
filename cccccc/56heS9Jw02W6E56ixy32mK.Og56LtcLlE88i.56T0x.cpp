
        
        static float unitnorm(float x){
  if(x<0)return(-1.f);
  return(1.f);
}
    
    #define MULADDC_CORE                    \
        'ldq    $6,  0($1)      \n\t'   \
        'addq   $1,  8, $1      \n\t'   \
        'mulq   $6, $4, $7      \n\t'   \
        'umulh  $6, $4, $6      \n\t'   \
        'addq   $7, $3, $7      \n\t'   \
        'cmpult $7, $3, $3      \n\t'   \
        'ldq    $5,  0($2)      \n\t'   \
        'addq   $7, $5, $7      \n\t'   \
        'cmpult $7, $5, $5      \n\t'   \
        'stq    $7,  0($2)      \n\t'   \
        'addq   $2,  8, $2      \n\t'   \
        'addq   $6, $3, $3      \n\t'   \
        'addq   $5, $3, $3      \n\t'
    
    		char      *lPr = (char *)malloc(MAX_PATH);
		char      *pR = (char *)malloc(MAX_PATH);
		size_t i;
		wcstombs_s(&i, lPr, (size_t)MAX_PATH,
			legacyUserAliasesPath, (size_t)MAX_PATH);
		wcstombs_s(&i, pR, (size_t)MAX_PATH,
			userAliasesPath, (size_t)MAX_PATH);
		rename(lPr, pR);
	}
	
	/*
	Was /c [path] specified?
	*/
	if (wcscmp(userConfigDirPath, L'') == 0)
	{
		// No - It wasn't. 
		PathCombine(userConfigDirPath, exeDir, L'config');
	}
	else
	{
		// Yes - It was.
		PathCombine(userBinDirPath, userConfigDirPath, L'bin');
		SHCreateDirectoryEx(0, userBinDirPath, 0);