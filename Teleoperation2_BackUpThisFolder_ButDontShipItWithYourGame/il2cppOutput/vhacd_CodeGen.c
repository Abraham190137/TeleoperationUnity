#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void* MeshProcess.VHACD::CreateVHACD()
extern void VHACD_CreateVHACD_mBE4FDF2EA5879C9ED857717BC3F5DD5534043F95 (void);
// 0x00000002 System.Void MeshProcess.VHACD::DestroyVHACD(System.Void*)
extern void VHACD_DestroyVHACD_mB6D23D5F400D50366C8CFAD05B8E7D6705BA3611 (void);
// 0x00000003 System.Boolean MeshProcess.VHACD::ComputeFloat(System.Void*,System.Single*,System.UInt32,System.UInt32*,System.UInt32,MeshProcess.VHACD/Parameters*)
extern void VHACD_ComputeFloat_m0C2CF3D2D434553BB1AEBFF94241A0BDD5C2C314 (void);
// 0x00000004 System.Boolean MeshProcess.VHACD::ComputeDouble(System.Void*,System.Double*,System.UInt32,System.UInt32*,System.UInt32,MeshProcess.VHACD/Parameters*)
extern void VHACD_ComputeDouble_mE2478771E52BE0864A499AA021EC1D5897820F91 (void);
// 0x00000005 System.UInt32 MeshProcess.VHACD::GetNConvexHulls(System.Void*)
extern void VHACD_GetNConvexHulls_mD0FCF5E941E6276E7861675F592A7B70AC4AE58A (void);
// 0x00000006 System.Void MeshProcess.VHACD::GetConvexHull(System.Void*,System.UInt32,MeshProcess.VHACD/ConvexHull*)
extern void VHACD_GetConvexHull_m7D378499925791A41FFF64269175B4CFA0959F41 (void);
// 0x00000007 System.Void MeshProcess.VHACD::.ctor()
extern void VHACD__ctor_mC39934ABF244FA000365B3F0739CD8EB5B1EEFF9 (void);
// 0x00000008 System.Collections.Generic.List`1<UnityEngine.Mesh> MeshProcess.VHACD::GenerateConvexMeshes(UnityEngine.Mesh)
extern void VHACD_GenerateConvexMeshes_m547666265C65FC3B806574AE4F372F49E6DDDFD3 (void);
// 0x00000009 System.Void MeshProcess.VHACD/Parameters::Init()
extern void Parameters_Init_m3490F4FB505A14FE4732305AA18A7107B4ABFC21 (void);
static Il2CppMethodPointer s_methodPointers[9] = 
{
	VHACD_CreateVHACD_mBE4FDF2EA5879C9ED857717BC3F5DD5534043F95,
	VHACD_DestroyVHACD_mB6D23D5F400D50366C8CFAD05B8E7D6705BA3611,
	VHACD_ComputeFloat_m0C2CF3D2D434553BB1AEBFF94241A0BDD5C2C314,
	VHACD_ComputeDouble_mE2478771E52BE0864A499AA021EC1D5897820F91,
	VHACD_GetNConvexHulls_mD0FCF5E941E6276E7861675F592A7B70AC4AE58A,
	VHACD_GetConvexHull_m7D378499925791A41FFF64269175B4CFA0959F41,
	VHACD__ctor_mC39934ABF244FA000365B3F0739CD8EB5B1EEFF9,
	VHACD_GenerateConvexMeshes_m547666265C65FC3B806574AE4F372F49E6DDDFD3,
	Parameters_Init_m3490F4FB505A14FE4732305AA18A7107B4ABFC21,
};
extern void Parameters_Init_m3490F4FB505A14FE4732305AA18A7107B4ABFC21_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[1] = 
{
	{ 0x06000009, Parameters_Init_m3490F4FB505A14FE4732305AA18A7107B4ABFC21_AdjustorThunk },
};
static const int32_t s_InvokerIndices[9] = 
{
	8493,
	8395,
	6033,
	6033,
	8335,
	7198,
	5757,
	4221,
	5757,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_vhacd_CodeGenModule;
const Il2CppCodeGenModule g_vhacd_CodeGenModule = 
{
	"vhacd.dll",
	9,
	s_methodPointers,
	1,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
