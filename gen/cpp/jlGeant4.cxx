#include <type_traits>
#include "jlcxx/jlcxx.hpp"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

#include "cpp/jlGeant4.h"

#ifdef VERBOSE_IMPORT
#  define DEBUG_MSG(a) std::cerr << a << "\n"
#else
#  define DEBUG_MSG(a)
#endif
#define __HERE__  __FILE__ ":" QUOTE2(__LINE__)
#define QUOTE(arg) #arg
#define QUOTE2(arg) QUOTE(arg)

namespace jlcxx {
  template<> struct IsMirroredType<CLHEP::Hep3Vector> : std::false_type { };
  template<> struct DefaultConstructible<CLHEP::Hep3Vector> : std::false_type { };
  template<> struct IsMirroredType<CLHEP::HepRotation> : std::false_type { };
  template<> struct DefaultConstructible<CLHEP::HepRotation> : std::false_type { };
  template<> struct IsMirroredType<CLHEP::HepAxisAngle> : std::false_type { };
  template<> struct DefaultConstructible<CLHEP::HepAxisAngle> : std::false_type { };
  template<> struct IsMirroredType<CLHEP::HepEulerAngles> : std::false_type { };
  template<> struct DefaultConstructible<CLHEP::HepEulerAngles> : std::false_type { };
  template<> struct IsMirroredType<CLHEP::HepRotationX> : std::false_type { };
  template<> struct DefaultConstructible<CLHEP::HepRotationX> : std::false_type { };
  template<> struct IsMirroredType<CLHEP::HepRotationY> : std::false_type { };
  template<> struct DefaultConstructible<CLHEP::HepRotationY> : std::false_type { };
  template<> struct IsMirroredType<CLHEP::HepRotationZ> : std::false_type { };
  template<> struct DefaultConstructible<CLHEP::HepRotationZ> : std::false_type { };
  template<> struct IsMirroredType<CLHEP::HepRep3x3> : std::false_type { };
  template<> struct DefaultConstructible<CLHEP::HepRep3x3> : std::false_type { };
  template<> struct IsMirroredType<CLHEP::HepRotation::HepRotation_row> : std::false_type { };
  template<> struct DefaultConstructible<CLHEP::HepRotation::HepRotation_row> : std::false_type { };
  template<> struct IsMirroredType<CLHEP::HepLorentzVector> : std::false_type { };
  template<> struct DefaultConstructible<CLHEP::HepLorentzVector> : std::false_type { };
  template<> struct IsMirroredType<CLHEP::HepRep4x4> : std::false_type { };
  template<> struct DefaultConstructible<CLHEP::HepRep4x4> : std::false_type { };
  template<> struct IsMirroredType<CLHEP::HepBoost> : std::false_type { };
  template<> struct DefaultConstructible<CLHEP::HepBoost> : std::false_type { };
  template<> struct IsMirroredType<CLHEP::HepLorentzRotation> : std::false_type { };
  template<> struct DefaultConstructible<CLHEP::HepLorentzRotation> : std::false_type { };
  template<> struct IsMirroredType<G4PVData> : std::false_type { };
  template<> struct DefaultConstructible<G4PVData> : std::false_type { };
  template<> struct IsMirroredType<G4VPhysicalVolume> : std::false_type { };
  template<> struct DefaultConstructible<G4VPhysicalVolume> : std::false_type { };
  template<> struct IsMirroredType<G4String> : std::false_type { };
  template<> struct DefaultConstructible<G4String> : std::false_type { };
  template<> struct IsMirroredType<G4LogicalVolume> : std::false_type { };
  template<> struct DefaultConstructible<G4LogicalVolume> : std::false_type { };
  template<> struct IsMirroredType<G4VPVParameterisation> : std::false_type { };
  template<> struct DefaultConstructible<G4VPVParameterisation> : std::false_type { };
  template<> struct IsMirroredType<G4LVData> : std::false_type { };
  template<> struct DefaultConstructible<G4LVData> : std::false_type { };
  template<> struct IsMirroredType<G4VSolid> : std::false_type { };
  template<> struct DefaultConstructible<G4VSolid> : std::false_type { };
  template<> struct IsMirroredType<G4VSensitiveDetector> : std::false_type { };
  template<> struct DefaultConstructible<G4VSensitiveDetector> : std::false_type { };
  template<> struct IsMirroredType<G4FieldManager> : std::false_type { };
  template<> struct DefaultConstructible<G4FieldManager> : std::false_type { };
  template<> struct IsMirroredType<G4Material> : std::false_type { };
  template<> struct DefaultConstructible<G4Material> : std::false_type { };
  template<> struct IsMirroredType<G4MaterialCutsCouple> : std::false_type { };
  template<> struct DefaultConstructible<G4MaterialCutsCouple> : std::false_type { };
  template<> struct IsMirroredType<G4UserLimits> : std::false_type { };
  template<> struct DefaultConstructible<G4UserLimits> : std::false_type { };
  template<> struct IsMirroredType<G4SmartVoxelHeader> : std::false_type { };
  template<> struct DefaultConstructible<G4SmartVoxelHeader> : std::false_type { };
  template<> struct IsMirroredType<G4Region> : std::false_type { };
  template<> struct DefaultConstructible<G4Region> : std::false_type { };
  template<> struct IsMirroredType<G4VisAttributes> : std::false_type { };
  template<> struct DefaultConstructible<G4VisAttributes> : std::false_type { };
  template<> struct IsMirroredType<G4FastSimulationManager> : std::false_type { };
  template<> struct DefaultConstructible<G4FastSimulationManager> : std::false_type { };
  template<> struct IsMirroredType<HepGeom::Transform3D> : std::false_type { };
  template<> struct DefaultConstructible<HepGeom::Transform3D> : std::false_type { };
  template<> struct IsMirroredType<HepGeom::Transform3D::Transform3D_row> : std::false_type { };
  template<> struct DefaultConstructible<HepGeom::Transform3D::Transform3D_row> : std::false_type { };
  template<> struct IsMirroredType<HepGeom::Scale3D> : std::false_type { };
  template<> struct DefaultConstructible<HepGeom::Scale3D> : std::false_type { };
  template<> struct IsMirroredType<HepGeom::Rotate3D> : std::false_type { };
  template<> struct DefaultConstructible<HepGeom::Rotate3D> : std::false_type { };
  template<> struct IsMirroredType<HepGeom::Translate3D> : std::false_type { };
  template<> struct DefaultConstructible<HepGeom::Translate3D> : std::false_type { };
  template<> struct IsMirroredType<HepGeom::RotateX3D> : std::false_type { };
  template<> struct DefaultConstructible<HepGeom::RotateX3D> : std::false_type { };
  template<> struct IsMirroredType<HepGeom::RotateY3D> : std::false_type { };
  template<> struct DefaultConstructible<HepGeom::RotateY3D> : std::false_type { };
  template<> struct IsMirroredType<HepGeom::RotateZ3D> : std::false_type { };
  template<> struct DefaultConstructible<HepGeom::RotateZ3D> : std::false_type { };
  template<> struct IsMirroredType<HepGeom::TranslateX3D> : std::false_type { };
  template<> struct DefaultConstructible<HepGeom::TranslateX3D> : std::false_type { };
  template<> struct IsMirroredType<HepGeom::TranslateY3D> : std::false_type { };
  template<> struct DefaultConstructible<HepGeom::TranslateY3D> : std::false_type { };
  template<> struct IsMirroredType<HepGeom::TranslateZ3D> : std::false_type { };
  template<> struct DefaultConstructible<HepGeom::TranslateZ3D> : std::false_type { };
  template<> struct IsMirroredType<HepGeom::Reflect3D> : std::false_type { };
  template<> struct DefaultConstructible<HepGeom::Reflect3D> : std::false_type { };
  template<> struct IsMirroredType<HepGeom::ReflectX3D> : std::false_type { };
  template<> struct DefaultConstructible<HepGeom::ReflectX3D> : std::false_type { };
  template<> struct IsMirroredType<HepGeom::ReflectY3D> : std::false_type { };
  template<> struct DefaultConstructible<HepGeom::ReflectY3D> : std::false_type { };
  template<> struct IsMirroredType<HepGeom::ReflectZ3D> : std::false_type { };
  template<> struct DefaultConstructible<HepGeom::ReflectZ3D> : std::false_type { };
  template<> struct IsMirroredType<HepGeom::ScaleX3D> : std::false_type { };
  template<> struct DefaultConstructible<HepGeom::ScaleX3D> : std::false_type { };
  template<> struct IsMirroredType<HepGeom::ScaleY3D> : std::false_type { };
  template<> struct DefaultConstructible<HepGeom::ScaleY3D> : std::false_type { };
  template<> struct IsMirroredType<HepGeom::ScaleZ3D> : std::false_type { };
  template<> struct DefaultConstructible<HepGeom::ScaleZ3D> : std::false_type { };
  template<> struct IsMirroredType<G4VUserDetectorConstruction> : std::false_type { };
  template<> struct DefaultConstructible<G4VUserDetectorConstruction> : std::false_type { };
  template<> struct IsMirroredType<G4VUserActionInitialization> : std::false_type { };
  template<> struct DefaultConstructible<G4VUserActionInitialization> : std::false_type { };
  template<> struct IsMirroredType<G4VSteppingVerbose> : std::false_type { };
  template<> struct DefaultConstructible<G4VSteppingVerbose> : std::false_type { };
  template<> struct IsMirroredType<G4VUserPrimaryGeneratorAction> : std::false_type { };
  template<> struct DefaultConstructible<G4VUserPrimaryGeneratorAction> : std::false_type { };
  template<> struct IsMirroredType<G4Event> : std::false_type { };
  template<> struct DefaultConstructible<G4Event> : std::false_type { };
  template<> struct IsMirroredType<G4VPrimaryGenerator> : std::false_type { };
  template<> struct DefaultConstructible<G4VPrimaryGenerator> : std::false_type { };
  template<> struct IsMirroredType<G4ParticleGun> : std::false_type { };
  template<> struct DefaultConstructible<G4ParticleGun> : std::false_type { };
  template<> struct IsMirroredType<G4ParticleDefinition> : std::false_type { };
  template<> struct DefaultConstructible<G4ParticleDefinition> : std::false_type { };
  template<> struct IsMirroredType<G4JLExceptionHandler> : std::false_type { };
  template<> struct DefaultConstructible<G4JLExceptionHandler> : std::false_type { };
  template<> struct IsMirroredType<G4JLDetectorConstruction> : std::false_type { };
  template<> struct DefaultConstructible<G4JLDetectorConstruction> : std::false_type { };
  template<> struct IsMirroredType<G4JLActionInitialization> : std::false_type { };
  template<> struct DefaultConstructible<G4JLActionInitialization> : std::false_type { };
  template<> struct IsMirroredType<G4UserStackingAction> : std::false_type { };
  template<> struct DefaultConstructible<G4UserStackingAction> : std::false_type { };
  template<> struct IsMirroredType<G4UserTrackingAction> : std::false_type { };
  template<> struct DefaultConstructible<G4UserTrackingAction> : std::false_type { };
  template<> struct IsMirroredType<G4UserSteppingAction> : std::false_type { };
  template<> struct DefaultConstructible<G4UserSteppingAction> : std::false_type { };
  template<> struct IsMirroredType<G4JLParticleGun> : std::false_type { };
  template<> struct DefaultConstructible<G4JLParticleGun> : std::false_type { };
  template<> struct IsMirroredType<G4AffineTransform> : std::false_type { };
  template<> struct DefaultConstructible<G4AffineTransform> : std::false_type { };
  template<> struct IsMirroredType<G4Polyhedron> : std::false_type { };
  template<> struct DefaultConstructible<G4Polyhedron> : std::false_type { };
  template<> struct IsMirroredType<G4RunManager> : std::false_type { };
  template<> struct DefaultConstructible<G4RunManager> : std::false_type { };
  template<> struct IsMirroredType<G4VUserPhysicsList> : std::false_type { };
  template<> struct DefaultConstructible<G4VUserPhysicsList> : std::false_type { };
  template<> struct IsMirroredType<G4PrimaryTransformer> : std::false_type { };
  template<> struct DefaultConstructible<G4PrimaryTransformer> : std::false_type { };
  template<> struct IsMirroredType<G4UImanager> : std::false_type { };
  template<> struct DefaultConstructible<G4UImanager> : std::false_type { };
  template<> struct IsMirroredType<G4UIcommand> : std::false_type { };
  template<> struct DefaultConstructible<G4UIcommand> : std::false_type { };
  template<> struct IsMirroredType<G4VFastSimulationModel> : std::false_type { };
  template<> struct DefaultConstructible<G4VFastSimulationModel> : std::false_type { };
  template<> struct IsMirroredType<G4Track> : std::false_type { };
  template<> struct DefaultConstructible<G4Track> : std::false_type { };
  template<> struct IsMirroredType<G4Navigator> : std::false_type { };
  template<> struct DefaultConstructible<G4Navigator> : std::false_type { };
  template<> struct IsMirroredType<G4VParticleChange> : std::false_type { };
  template<> struct DefaultConstructible<G4VParticleChange> : std::false_type { };
  template<> struct IsMirroredType<G4NistManager> : std::false_type { };
  template<> struct DefaultConstructible<G4NistManager> : std::false_type { };
  template<> struct IsMirroredType<G4Element> : std::false_type { };
  template<> struct DefaultConstructible<G4Element> : std::false_type { };
  template<> struct IsMirroredType<G4ICRU90StoppingData> : std::false_type { };
  template<> struct DefaultConstructible<G4ICRU90StoppingData> : std::false_type { };
  template<> struct IsMirroredType<G4CSGSolid> : std::false_type { };
  template<> struct DefaultConstructible<G4CSGSolid> : std::false_type { };
  template<> struct IsMirroredType<G4SteppingVerbose> : std::false_type { };
  template<> struct DefaultConstructible<G4SteppingVerbose> : std::false_type { };
  template<> struct IsMirroredType<G4PVPlacement> : std::false_type { };
  template<> struct DefaultConstructible<G4PVPlacement> : std::false_type { };
  template<> struct IsMirroredType<G4VUPLData> : std::false_type { };
  template<> struct DefaultConstructible<G4VUPLData> : std::false_type { };
  template<> struct IsMirroredType<G4UserPhysicsListMessenger> : std::false_type { };
  template<> struct DefaultConstructible<G4UserPhysicsListMessenger> : std::false_type { };
  template<> struct IsMirroredType<G4PhysicsListHelper> : std::false_type { };
  template<> struct DefaultConstructible<G4PhysicsListHelper> : std::false_type { };
  template<> struct IsMirroredType<G4ProcessManager> : std::false_type { };
  template<> struct DefaultConstructible<G4ProcessManager> : std::false_type { };
  template<> struct IsMirroredType<G4VMPLData> : std::false_type { };
  template<> struct DefaultConstructible<G4VMPLData> : std::false_type { };
  template<> struct IsMirroredType<G4VModularPhysicsList> : std::false_type { };
  template<> struct DefaultConstructible<G4VModularPhysicsList> : std::false_type { };
  template<> struct IsMirroredType<G4VPhysicsConstructor> : std::false_type { };
  template<> struct DefaultConstructible<G4VPhysicsConstructor> : std::false_type { };
  template<> struct IsMirroredType<QGS_BIC> : std::false_type { };
  template<> struct DefaultConstructible<QGS_BIC> : std::false_type { };
  template<> struct IsMirroredType<QBBC> : std::false_type { };
  template<> struct DefaultConstructible<QBBC> : std::false_type { };
  template<> struct IsMirroredType<FTFP_BERT> : std::false_type { };
  template<> struct DefaultConstructible<FTFP_BERT> : std::false_type { };
  template<> struct IsMirroredType<G4Box> : std::false_type { };
  template<> struct DefaultConstructible<G4Box> : std::false_type { };
  template<> struct IsMirroredType<G4Cons> : std::false_type { };
  template<> struct DefaultConstructible<G4Cons> : std::false_type { };
  template<> struct IsMirroredType<G4Tubs> : std::false_type { };
  template<> struct DefaultConstructible<G4Tubs> : std::false_type { };
  template<> struct IsMirroredType<G4Orb> : std::false_type { };
  template<> struct DefaultConstructible<G4Orb> : std::false_type { };
  template<> struct IsMirroredType<G4Sphere> : std::false_type { };
  template<> struct DefaultConstructible<G4Sphere> : std::false_type { };
  template<> struct IsMirroredType<G4Trd> : std::false_type { };
  template<> struct DefaultConstructible<G4Trd> : std::false_type { };
  template<> struct IsMirroredType<CLHEP::HepRep4x4Symmetric> : std::false_type { };
  template<> struct DefaultConstructible<CLHEP::HepRep4x4Symmetric> : std::false_type { };
  template<> struct IsMirroredType<CLHEP::HepBoostX> : std::false_type { };
  template<> struct DefaultConstructible<CLHEP::HepBoostX> : std::false_type { };
  template<> struct IsMirroredType<CLHEP::HepBoostY> : std::false_type { };
  template<> struct DefaultConstructible<CLHEP::HepBoostY> : std::false_type { };
  template<> struct IsMirroredType<CLHEP::HepBoostZ> : std::false_type { };
  template<> struct DefaultConstructible<CLHEP::HepBoostZ> : std::false_type { };
  template<> struct IsMirroredType<CLHEP::HepLorentzRotation::HepLorentzRotation_row> : std::false_type { };
  template<> struct DefaultConstructible<CLHEP::HepLorentzRotation::HepLorentzRotation_row> : std::false_type { };
  template<> struct IsMirroredType<G4Colour> : std::false_type { };
  template<> struct DefaultConstructible<G4Colour> : std::false_type { };
  template<> struct SuperType<G4String> { typedef std::string type; };
  template<> struct SuperType<HepGeom::Scale3D> { typedef HepGeom::Transform3D type; };
  template<> struct SuperType<HepGeom::Rotate3D> { typedef HepGeom::Transform3D type; };
  template<> struct SuperType<HepGeom::Translate3D> { typedef HepGeom::Transform3D type; };
  template<> struct SuperType<HepGeom::RotateX3D> { typedef HepGeom::Rotate3D type; };
  template<> struct SuperType<HepGeom::RotateY3D> { typedef HepGeom::Rotate3D type; };
  template<> struct SuperType<HepGeom::RotateZ3D> { typedef HepGeom::Rotate3D type; };
  template<> struct SuperType<HepGeom::TranslateX3D> { typedef HepGeom::Translate3D type; };
  template<> struct SuperType<HepGeom::TranslateY3D> { typedef HepGeom::Translate3D type; };
  template<> struct SuperType<HepGeom::TranslateZ3D> { typedef HepGeom::Translate3D type; };
  template<> struct SuperType<HepGeom::Reflect3D> { typedef HepGeom::Transform3D type; };
  template<> struct SuperType<HepGeom::ReflectX3D> { typedef HepGeom::Reflect3D type; };
  template<> struct SuperType<HepGeom::ReflectY3D> { typedef HepGeom::Reflect3D type; };
  template<> struct SuperType<HepGeom::ReflectZ3D> { typedef HepGeom::Reflect3D type; };
  template<> struct SuperType<HepGeom::ScaleX3D> { typedef HepGeom::Scale3D type; };
  template<> struct SuperType<HepGeom::ScaleY3D> { typedef HepGeom::Scale3D type; };
  template<> struct SuperType<HepGeom::ScaleZ3D> { typedef HepGeom::Scale3D type; };
  template<> struct SuperType<G4ParticleGun> { typedef G4VPrimaryGenerator type; };
  template<> struct SuperType<G4JLDetectorConstruction> { typedef G4VUserDetectorConstruction type; };
  template<> struct SuperType<G4JLActionInitialization> { typedef G4VUserActionInitialization type; };
  template<> struct SuperType<G4JLParticleGun> { typedef G4VUserPrimaryGeneratorAction type; };
  template<> struct SuperType<G4CSGSolid> { typedef G4VSolid type; };
  template<> struct SuperType<G4SteppingVerbose> { typedef G4VSteppingVerbose type; };
  template<> struct SuperType<G4PVPlacement> { typedef G4VPhysicalVolume type; };
  template<> struct SuperType<G4VModularPhysicsList> { typedef G4VUserPhysicsList type; };
  template<> struct SuperType<QGS_BIC> { typedef G4VModularPhysicsList type; };
  template<> struct SuperType<QBBC> { typedef G4VModularPhysicsList type; };
  template<> struct SuperType<FTFP_BERT> { typedef G4VModularPhysicsList type; };
  template<> struct SuperType<G4Box> { typedef G4CSGSolid type; };
  template<> struct SuperType<G4Cons> { typedef G4CSGSolid type; };
  template<> struct SuperType<G4Tubs> { typedef G4CSGSolid type; };
  template<> struct SuperType<G4Orb> { typedef G4CSGSolid type; };
  template<> struct SuperType<G4Sphere> { typedef G4CSGSolid type; };
  template<> struct SuperType<G4Trd> { typedef G4CSGSolid type; };
}

JLCXX_MODULE define_julia_module(jlcxx::Module& types){

  DEBUG_MSG("Adding anonymous enum defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:42:3 (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:42:3
  types.set_const("CLHEP!Hep3Vector!X", static_cast<int>(CLHEP::Hep3Vector::X));
  types.set_const("CLHEP!Hep3Vector!Y", static_cast<int>(CLHEP::Hep3Vector::Y));
  types.set_const("CLHEP!Hep3Vector!Z", static_cast<int>(CLHEP::Hep3Vector::Z));
  types.set_const("CLHEP!Hep3Vector!NUM_COORDINATES", static_cast<int>(CLHEP::Hep3Vector::NUM_COORDINATES));
  types.set_const("CLHEP!Hep3Vector!SIZE", static_cast<int>(CLHEP::Hep3Vector::SIZE));

  DEBUG_MSG("Adding anonymous enum defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:295:3 (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:295:3
  types.set_const("CLHEP!Hep3Vector!ToleranceTicks", static_cast<int>(CLHEP::Hep3Vector::ToleranceTicks));

  DEBUG_MSG("Adding wrapper for enum EVolume (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/geomdefs.hh:82:6
  types.add_bits<EVolume>("EVolume", jlcxx::julia_type("CppEnum"));
  types.set_const("kNormal", kNormal);
  types.set_const("kReplica", kReplica);
  types.set_const("kParameterised", kParameterised);
  types.set_const("kExternal", kExternal);

  DEBUG_MSG("Adding wrapper for enum EAxis (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/geomdefs.hh:53:6
  types.add_bits<EAxis>("EAxis", jlcxx::julia_type("CppEnum"));
  types.set_const("kXAxis", kXAxis);
  types.set_const("kYAxis", kYAxis);
  types.set_const("kZAxis", kZAxis);
  types.set_const("kRho", kRho);
  types.set_const("kRadial3D", kRadial3D);
  types.set_const("kPhi", kPhi);
  types.set_const("kUndefined", kUndefined);

  DEBUG_MSG("Adding wrapper for enum G4ExceptionSeverity (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ExceptionSeverity.hh:59:6
  types.add_bits<G4ExceptionSeverity>("G4ExceptionSeverity", jlcxx::julia_type("CppEnum"));
  types.set_const("FatalException", FatalException);
  types.set_const("FatalErrorInArgument", FatalErrorInArgument);
  types.set_const("RunMustBeAborted", RunMustBeAborted);
  types.set_const("EventMustBeAborted", EventMustBeAborted);
  types.set_const("JustWarning", JustWarning);

  DEBUG_MSG("Adding wrapper for enum EInside (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/geomdefs.hh:66:6
  types.add_bits<EInside>("EInside", jlcxx::julia_type("CppEnum"));
  types.set_const("kOutside", kOutside);
  types.set_const("kSurface", kSurface);
  types.set_const("kInside", kInside);

  DEBUG_MSG("Adding wrapper for enum G4RunManager::RMType (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:575:10
  types.add_bits<G4RunManager::RMType>("G4RunManager!RMType", jlcxx::julia_type("CppEnum"));
  types.set_const("G4RunManager!sequentialRM", G4RunManager::sequentialRM);
  types.set_const("G4RunManager!masterRM", G4RunManager::masterRM);
  types.set_const("G4RunManager!workerRM", G4RunManager::workerRM);

  DEBUG_MSG("Adding wrapper for enum G4ApplicationState (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ApplicationState.hh:82:6
  types.add_bits<G4ApplicationState>("G4ApplicationState", jlcxx::julia_type("CppEnum"));
  types.set_const("G4State_PreInit", G4State_PreInit);
  types.set_const("G4State_Init", G4State_Init);
  types.set_const("G4State_Idle", G4State_Idle);
  types.set_const("G4State_GeomClosed", G4State_GeomClosed);
  types.set_const("G4State_EventProc", G4State_EventProc);
  types.set_const("G4State_Quit", G4State_Quit);
  types.set_const("G4State_Abort", G4State_Abort);

  DEBUG_MSG("Adding wrapper for enum G4State (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Material.hh:110:6
  types.add_bits<G4State>("G4State", jlcxx::julia_type("CppEnum"));
  types.set_const("kStateUndefined", kStateUndefined);
  types.set_const("kStateSolid", kStateSolid);
  types.set_const("kStateLiquid", kStateLiquid);
  types.set_const("kStateGas", kStateGas);

  DEBUG_MSG("Adding wrapper for enum G4VisAttributes::LineStyle (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:75:8
  types.add_bits<G4VisAttributes::LineStyle>("G4VisAttributes!LineStyle", jlcxx::julia_type("CppEnum"));
  types.set_const("G4VisAttributes!unbroken", G4VisAttributes::unbroken);
  types.set_const("G4VisAttributes!dashed", G4VisAttributes::dashed);
  types.set_const("G4VisAttributes!dotted", G4VisAttributes::dotted);

  DEBUG_MSG("Adding wrapper for enum G4VisAttributes::ForcedDrawingStyle (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:76:8
  types.add_bits<G4VisAttributes::ForcedDrawingStyle>("G4VisAttributes!ForcedDrawingStyle", jlcxx::julia_type("CppEnum"));
  types.set_const("G4VisAttributes!wireframe", G4VisAttributes::wireframe);
  types.set_const("G4VisAttributes!solid", G4VisAttributes::solid);
  types.set_const("G4VisAttributes!cloud", G4VisAttributes::cloud);

  DEBUG_MSG("Adding wrapper for type CLHEP::Hep3Vector (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:36:7
  auto t0 = types.add_type<CLHEP::Hep3Vector>("CLHEP!Hep3Vector");
  t0.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type CLHEP::HepRotation (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:42:7
  auto t2 = types.add_type<CLHEP::HepRotation>("CLHEP!HepRotation");
  t2.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type CLHEP::HepAxisAngle (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/AxisAngle.h:36:7
  auto t4 = types.add_type<CLHEP::HepAxisAngle>("CLHEP!HepAxisAngle");
  t4.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type CLHEP::HepEulerAngles (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/EulerAngles.h:38:7
  auto t5 = types.add_type<CLHEP::HepEulerAngles>("CLHEP!HepEulerAngles");
  t5.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type CLHEP::HepRotationX (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/RotationX.h:39:7
  auto t6 = types.add_type<CLHEP::HepRotationX>("CLHEP!HepRotationX");
  t6.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type CLHEP::HepRotationY (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/RotationY.h:38:7
  auto t7 = types.add_type<CLHEP::HepRotationY>("CLHEP!HepRotationY");
  t7.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type CLHEP::HepRotationZ (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/RotationZ.h:38:7
  auto t8 = types.add_type<CLHEP::HepRotationZ>("CLHEP!HepRotationZ");
  t8.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type CLHEP::HepRep3x3 (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/RotationInterfaces.h:305:8
  auto t9 = types.add_type<CLHEP::HepRep3x3>("CLHEP!HepRep3x3");
  t9.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type CLHEP::HepRotation::HepRotation_row (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:147:9
  auto t10 = types.add_type<CLHEP::HepRotation::HepRotation_row>("CLHEP!HepRotation!HepRotation_row");

  DEBUG_MSG("Adding wrapper for type CLHEP::HepLorentzVector (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzVector.h:67:7
  auto t11 = types.add_type<CLHEP::HepLorentzVector>("CLHEP!HepLorentzVector");
  t11.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type CLHEP::HepRep4x4 (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/RotationInterfaces.h:332:8
  auto t12 = types.add_type<CLHEP::HepRep4x4>("CLHEP!HepRep4x4");
  t12.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type CLHEP::HepBoost (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:38:7
  auto t13 = types.add_type<CLHEP::HepBoost>("CLHEP!HepBoost");
  t13.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type CLHEP::HepLorentzRotation (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:48:7
  auto t14 = types.add_type<CLHEP::HepLorentzRotation>("CLHEP!HepLorentzRotation");
  t14.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4PVData (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:55:7
  auto t15 = types.add_type<G4PVData>("G4PVData");
  t15.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4VPhysicalVolume (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:78:7
  auto t16 = types.add_type<G4VPhysicalVolume>("G4VPhysicalVolume");

  DEBUG_MSG("Adding wrapper for type G4String (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4String.hh:61:7
  auto t17 = types.add_type<G4String>("G4String", jlcxx::julia_base_type<std::string>());
  t17.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4LogicalVolume (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:182:7
  auto t18 = types.add_type<G4LogicalVolume>("G4LogicalVolume");

  DEBUG_MSG("Adding wrapper for type G4VPVParameterisation (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPVParameterisation.hh:68:7
  types.add_type<G4VPVParameterisation>("G4VPVParameterisation");

  DEBUG_MSG("Adding wrapper for type G4LVData (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:128:7
  auto t22 = types.add_type<G4LVData>("G4LVData");
  t22.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4VSolid (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:82:7
  auto t23 = types.add_type<G4VSolid>("G4VSolid");

  DEBUG_MSG("Adding wrapper for type G4VSensitiveDetector (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSensitiveDetector.hh:49:7
  types.add_type<G4VSensitiveDetector>("G4VSensitiveDetector");

  DEBUG_MSG("Adding wrapper for type G4FieldManager (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FieldManager.hh:84:7
  auto t25 = types.add_type<G4FieldManager>("G4FieldManager");
  t25.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4Material (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Material.hh:116:7
  types.add_type<G4Material>("G4Material");

  DEBUG_MSG("Adding wrapper for type G4MaterialCutsCouple (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4MaterialCutsCouple.hh:52:7
  auto t27 = types.add_type<G4MaterialCutsCouple>("G4MaterialCutsCouple");
  t27.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4UserLimits (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserLimits.hh:52:7
  auto t28 = types.add_type<G4UserLimits>("G4UserLimits");
  t28.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4SmartVoxelHeader (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SmartVoxelHeader.hh:74:7
  types.add_type<G4SmartVoxelHeader>("G4SmartVoxelHeader");

  DEBUG_MSG("Adding wrapper for type G4Region (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Region.hh:95:7
  types.add_type<G4Region>("G4Region");

  DEBUG_MSG("Adding wrapper for type G4VisAttributes (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:69:7
  auto t31 = types.add_type<G4VisAttributes>("G4VisAttributes");
  t31.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4FastSimulationManager (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:77:7
  auto t32 = types.add_type<G4FastSimulationManager>("G4FastSimulationManager");

  DEBUG_MSG("Adding wrapper for type HepGeom::Transform3D (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:170:9
  auto t36 = types.add_type<HepGeom::Transform3D>("HepGeom!Transform3D");
  t36.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type HepGeom::Transform3D::Transform3D_row (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:199:11
  auto t37 = types.add_type<HepGeom::Transform3D::Transform3D_row>("HepGeom!Transform3D!Transform3D_row");

  DEBUG_MSG("Adding wrapper for type HepGeom::Scale3D (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:721:9
  auto t38 = types.add_type<HepGeom::Scale3D>("HepGeom!Scale3D", jlcxx::julia_base_type<HepGeom::Transform3D>());
  t38.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type HepGeom::Rotate3D (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:370:9
  auto t39 = types.add_type<HepGeom::Rotate3D>("HepGeom!Rotate3D", jlcxx::julia_base_type<HepGeom::Transform3D>());
  t39.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type HepGeom::Translate3D (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:511:9
  auto t40 = types.add_type<HepGeom::Translate3D>("HepGeom!Translate3D", jlcxx::julia_base_type<HepGeom::Transform3D>());
  t40.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type HepGeom::RotateX3D (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:425:9
  auto t41 = types.add_type<HepGeom::RotateX3D>("HepGeom!RotateX3D", jlcxx::julia_base_type<HepGeom::Rotate3D>());
  t41.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type HepGeom::RotateY3D (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:453:9
  auto t42 = types.add_type<HepGeom::RotateY3D>("HepGeom!RotateY3D", jlcxx::julia_base_type<HepGeom::Rotate3D>());
  t42.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type HepGeom::RotateZ3D (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:481:9
  auto t43 = types.add_type<HepGeom::RotateZ3D>("HepGeom!RotateZ3D", jlcxx::julia_base_type<HepGeom::Rotate3D>());
  t43.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type HepGeom::TranslateX3D (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:541:9
  auto t44 = types.add_type<HepGeom::TranslateX3D>("HepGeom!TranslateX3D", jlcxx::julia_base_type<HepGeom::Translate3D>());
  t44.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type HepGeom::TranslateY3D (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:566:9
  auto t45 = types.add_type<HepGeom::TranslateY3D>("HepGeom!TranslateY3D", jlcxx::julia_base_type<HepGeom::Translate3D>());
  t45.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type HepGeom::TranslateZ3D (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:591:9
  auto t46 = types.add_type<HepGeom::TranslateZ3D>("HepGeom!TranslateZ3D", jlcxx::julia_base_type<HepGeom::Translate3D>());
  t46.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type HepGeom::Reflect3D (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:618:9
  auto t47 = types.add_type<HepGeom::Reflect3D>("HepGeom!Reflect3D", jlcxx::julia_base_type<HepGeom::Transform3D>());
  t47.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type HepGeom::ReflectX3D (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:656:9
  auto t48 = types.add_type<HepGeom::ReflectX3D>("HepGeom!ReflectX3D", jlcxx::julia_base_type<HepGeom::Reflect3D>());
  t48.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type HepGeom::ReflectY3D (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:677:9
  auto t49 = types.add_type<HepGeom::ReflectY3D>("HepGeom!ReflectY3D", jlcxx::julia_base_type<HepGeom::Reflect3D>());
  t49.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type HepGeom::ReflectZ3D (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:698:9
  auto t50 = types.add_type<HepGeom::ReflectZ3D>("HepGeom!ReflectZ3D", jlcxx::julia_base_type<HepGeom::Reflect3D>());
  t50.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type HepGeom::ScaleX3D (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:753:9
  auto t51 = types.add_type<HepGeom::ScaleX3D>("HepGeom!ScaleX3D", jlcxx::julia_base_type<HepGeom::Scale3D>());
  t51.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type HepGeom::ScaleY3D (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:778:9
  auto t52 = types.add_type<HepGeom::ScaleY3D>("HepGeom!ScaleY3D", jlcxx::julia_base_type<HepGeom::Scale3D>());
  t52.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type HepGeom::ScaleZ3D (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:803:9
  auto t53 = types.add_type<HepGeom::ScaleZ3D>("HepGeom!ScaleZ3D", jlcxx::julia_base_type<HepGeom::Scale3D>());
  t53.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4VUserDetectorConstruction (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserDetectorConstruction.hh:50:7
  auto t54 = types.add_type<G4VUserDetectorConstruction>("G4VUserDetectorConstruction");

  DEBUG_MSG("Adding wrapper for type G4VUserActionInitialization (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserActionInitialization.hh:58:7
  auto t55 = types.add_type<G4VUserActionInitialization>("G4VUserActionInitialization");

  DEBUG_MSG("Adding wrapper for type G4VSteppingVerbose (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSteppingVerbose.hh:64:7
  types.add_type<G4VSteppingVerbose>("G4VSteppingVerbose");

  DEBUG_MSG("Adding wrapper for type G4VUserPrimaryGeneratorAction (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPrimaryGeneratorAction.hh:47:7
  auto t57 = types.add_type<G4VUserPrimaryGeneratorAction>("G4VUserPrimaryGeneratorAction");

  DEBUG_MSG("Adding wrapper for type G4Event (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Event.hh:54:7
  auto t58 = types.add_type<G4Event>("G4Event");
  t58.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4VPrimaryGenerator (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPrimaryGenerator.hh:44:7
  auto t59 = types.add_type<G4VPrimaryGenerator>("G4VPrimaryGenerator");

  DEBUG_MSG("Adding wrapper for type G4ParticleGun (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:64:7
  auto t60 = types.add_type<G4ParticleGun>("G4ParticleGun", jlcxx::julia_base_type<G4VPrimaryGenerator>());
  t60.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4ParticleDefinition (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleDefinition.hh:60:7
  types.add_type<G4ParticleDefinition>("G4ParticleDefinition");

  DEBUG_MSG("Adding wrapper for type G4JLExceptionHandler (" __HERE__ ")");
  // defined in ./cpp/Geant4Wrap.h:19:7
  auto t62 = types.add_type<G4JLExceptionHandler>("G4JLExceptionHandler");
  t62.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4JLDetectorConstruction (" __HERE__ ")");
  // defined in ./cpp/Geant4Wrap.h:31:7
  auto t64 = types.add_type<G4JLDetectorConstruction>("G4JLDetectorConstruction", jlcxx::julia_base_type<G4VUserDetectorConstruction>());

  DEBUG_MSG("Adding wrapper for type G4JLActionInitialization (" __HERE__ ")");
  // defined in ./cpp/Geant4Wrap.h:43:7
  auto t65 = types.add_type<G4JLActionInitialization>("G4JLActionInitialization", jlcxx::julia_base_type<G4VUserActionInitialization>());

  DEBUG_MSG("Adding wrapper for type G4UserStackingAction (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserStackingAction.hh:44:7
  auto t66 = types.add_type<G4UserStackingAction>("G4UserStackingAction");
  t66.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4UserTrackingAction (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserTrackingAction.hh:44:7
  auto t67 = types.add_type<G4UserTrackingAction>("G4UserTrackingAction");
  t67.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4UserSteppingAction (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserSteppingAction.hh:44:7
  auto t68 = types.add_type<G4UserSteppingAction>("G4UserSteppingAction");
  t68.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4JLParticleGun (" __HERE__ ")");
  // defined in ./cpp/Geant4Wrap.h:63:7
  auto t69 = types.add_type<G4JLParticleGun>("G4JLParticleGun", jlcxx::julia_base_type<G4VUserPrimaryGeneratorAction>());
  t69.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4AffineTransform (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4AffineTransform.hh:69:7
  auto t70 = types.add_type<G4AffineTransform>("G4AffineTransform");
  t70.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4Polyhedron (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Polyhedron.hh:132:7
  auto t72 = types.add_type<G4Polyhedron>("G4Polyhedron");
  t72.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4RunManager (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:137:7
  auto t73 = types.add_type<G4RunManager>("G4RunManager");
  t73.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4VUserPhysicsList (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:106:7
  auto t76 = types.add_type<G4VUserPhysicsList>("G4VUserPhysicsList");

  DEBUG_MSG("Adding wrapper for type G4PrimaryTransformer (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4PrimaryTransformer.hh:47:7
  auto t77 = types.add_type<G4PrimaryTransformer>("G4PrimaryTransformer");
  t77.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4UImanager (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:57:7
  auto t79 = types.add_type<G4UImanager>("G4UImanager");

  DEBUG_MSG("Adding wrapper for type G4UIcommand (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UIcommand.hh:51:7
  auto t80 = types.add_type<G4UIcommand>("G4UIcommand");
  t80.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4VFastSimulationModel (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VFastSimulationModel.hh:60:8
  types.add_type<G4VFastSimulationModel>("G4VFastSimulationModel");

  DEBUG_MSG("Adding wrapper for type G4Track (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Track.hh:66:7
  auto t84 = types.add_type<G4Track>("G4Track");
  t84.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4Navigator (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Navigator.hh:71:7
  auto t85 = types.add_type<G4Navigator>("G4Navigator");
  t85.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4VParticleChange (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VParticleChange.hh:68:7
  auto t86 = types.add_type<G4VParticleChange>("G4VParticleChange");
  t86.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4NistManager (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:82:7
  auto t87 = types.add_type<G4NistManager>("G4NistManager");

  DEBUG_MSG("Adding wrapper for type G4Element (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Element.hh:97:7
  types.add_type<G4Element>("G4Element");

  DEBUG_MSG("Adding wrapper for type G4ICRU90StoppingData (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ICRU90StoppingData.hh:56:7
  auto t90 = types.add_type<G4ICRU90StoppingData>("G4ICRU90StoppingData");
  t90.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4CSGSolid (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4CSGSolid.hh:41:7
  auto t91 = types.add_type<G4CSGSolid>("G4CSGSolid", jlcxx::julia_base_type<G4VSolid>());

  DEBUG_MSG("Adding wrapper for type G4SteppingVerbose (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:42:7
  auto t92 = types.add_type<G4SteppingVerbose>("G4SteppingVerbose", jlcxx::julia_base_type<G4VSteppingVerbose>());
  t92.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4PVPlacement (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4PVPlacement.hh:43:7
  auto t93 = types.add_type<G4PVPlacement>("G4PVPlacement", jlcxx::julia_base_type<G4VPhysicalVolume>());

  DEBUG_MSG("Adding wrapper for type G4VUPLData (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:60:7
  auto t94 = types.add_type<G4VUPLData>("G4VUPLData");
  t94.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4UserPhysicsListMessenger (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserPhysicsListMessenger.hh:63:7
  auto t95 = types.add_type<G4UserPhysicsListMessenger>("G4UserPhysicsListMessenger");

  DEBUG_MSG("Adding wrapper for type G4PhysicsListHelper (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4PhysicsListHelper.hh:50:7
  types.add_type<G4PhysicsListHelper>("G4PhysicsListHelper");

  DEBUG_MSG("Adding wrapper for type G4ProcessManager (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ProcessManager.hh:94:7
  types.add_type<G4ProcessManager>("G4ProcessManager");

  DEBUG_MSG("Adding wrapper for type G4VMPLData (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:54:7
  auto t98 = types.add_type<G4VMPLData>("G4VMPLData");
  t98.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4VModularPhysicsList (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:86:7
  auto t99 = types.add_type<G4VModularPhysicsList>("G4VModularPhysicsList", jlcxx::julia_base_type<G4VUserPhysicsList>());
  t99.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4VPhysicsConstructor (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicsConstructor.hh:108:7
  types.add_type<G4VPhysicsConstructor>("G4VPhysicsConstructor");

  DEBUG_MSG("Adding wrapper for type QGS_BIC (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/QGS_BIC.hh:45:7
  auto t101 = types.add_type<QGS_BIC>("QGS_BIC", jlcxx::julia_base_type<G4VModularPhysicsList>());
  t101.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type QBBC (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/QBBC.hh:43:7
  auto t102 = types.add_type<QBBC>("QBBC", jlcxx::julia_base_type<G4VModularPhysicsList>());
  t102.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type FTFP_BERT (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/FTFP_BERT.hh:46:7
  auto t103 = types.add_type<FTFP_BERT>("FTFP_BERT", jlcxx::julia_base_type<G4VModularPhysicsList>());
  t103.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type G4Box (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:55:7
  auto t104 = types.add_type<G4Box>("G4Box", jlcxx::julia_base_type<G4CSGSolid>());

  DEBUG_MSG("Adding wrapper for type G4Cons (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:77:7
  auto t105 = types.add_type<G4Cons>("G4Cons", jlcxx::julia_base_type<G4CSGSolid>());

  DEBUG_MSG("Adding wrapper for type G4Tubs (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:74:7
  auto t106 = types.add_type<G4Tubs>("G4Tubs", jlcxx::julia_base_type<G4CSGSolid>());

  DEBUG_MSG("Adding wrapper for type G4Orb (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:55:7
  auto t107 = types.add_type<G4Orb>("G4Orb", jlcxx::julia_base_type<G4CSGSolid>());

  DEBUG_MSG("Adding wrapper for type G4Sphere (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:80:7
  auto t108 = types.add_type<G4Sphere>("G4Sphere", jlcxx::julia_base_type<G4CSGSolid>());

  DEBUG_MSG("Adding wrapper for type G4Trd (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:62:7
  auto t109 = types.add_type<G4Trd>("G4Trd", jlcxx::julia_base_type<G4CSGSolid>());

  DEBUG_MSG("Adding wrapper for type CLHEP::HepRep4x4Symmetric (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/RotationInterfaces.h:366:8
  auto t110 = types.add_type<CLHEP::HepRep4x4Symmetric>("CLHEP!HepRep4x4Symmetric");
  t110.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type CLHEP::HepBoostX (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/BoostX.h:37:7
  auto t111 = types.add_type<CLHEP::HepBoostX>("CLHEP!HepBoostX");
  t111.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type CLHEP::HepBoostY (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/BoostY.h:37:7
  auto t112 = types.add_type<CLHEP::HepBoostY>("CLHEP!HepBoostY");
  t112.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type CLHEP::HepBoostZ (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/BoostZ.h:37:7
  auto t113 = types.add_type<CLHEP::HepBoostZ>("CLHEP!HepBoostZ");
  t113.template constructor<>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for type CLHEP::HepLorentzRotation::HepLorentzRotation_row (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:176:9
  auto t114 = types.add_type<CLHEP::HepLorentzRotation::HepLorentzRotation_row>("CLHEP!HepLorentzRotation!HepLorentzRotation_row");

  DEBUG_MSG("Adding wrapper for type G4Colour (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:82:7
  auto t115 = types.add_type<G4Colour>("G4Colour");
  t115.template constructor<>(/*finalize=*/true);

  /**********************************************************************/
  /* Wrappers for the methods of class CLHEP::Hep3Vector
   */


  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::Hep3Vector(double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:47:12
  t0.constructor<double>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::Hep3Vector(double, double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:48:3
  t0.constructor<double, double>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::Hep3Vector(double, double, double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:49:3
  t0.constructor<double, double, double>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::Hep3Vector(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:52:10
  t0.constructor<const CLHEP::Hep3Vector &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::operator()(int) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::operator()(int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:59:17
  t0.method("paren", static_cast<double (CLHEP::Hep3Vector::*)(int)  const>(&CLHEP::Hep3Vector::operator()));
  types.set_override_module(jl_base_module);


  DEBUG_MSG("Adding getindex method to wrap double CLHEP::Hep3Vector::operator[](int) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:62:17
  t0.method("getindex",
    [](CLHEP::Hep3Vector& a, int i){
    return a[i];
  });

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for double & CLHEP::Hep3Vector::operator()(int) (" __HERE__ ")");
  // signature to use in the veto list: double & CLHEP::Hep3Vector::operator()(int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:65:19
  t0.method("paren", static_cast<double & (CLHEP::Hep3Vector::*)(int) >(&CLHEP::Hep3Vector::operator()));
  types.set_override_module(jl_base_module);


  DEBUG_MSG("Adding setindex! method  to wrap double & CLHEP::Hep3Vector::operator[](int) (" __HERE__ ")");
// defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:68:19
  t0.method("setindex!",
    [](CLHEP::Hep3Vector& a, int i, double const & val){
    return a[i] = val;
  });

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::x() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::x()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:71:17
  t0.method("x", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::x));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::y() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::y()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:72:17
  t0.method("y", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::y));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::z() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::z()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:73:17
  t0.method("z", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::z));

  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::setX(double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::Hep3Vector::setX(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:76:15
  t0.method("setX", static_cast<void (CLHEP::Hep3Vector::*)(double) >(&CLHEP::Hep3Vector::setX));

  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::setY(double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::Hep3Vector::setY(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:77:15
  t0.method("setY", static_cast<void (CLHEP::Hep3Vector::*)(double) >(&CLHEP::Hep3Vector::setY));

  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::setZ(double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::Hep3Vector::setZ(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:78:15
  t0.method("setZ", static_cast<void (CLHEP::Hep3Vector::*)(double) >(&CLHEP::Hep3Vector::setZ));

  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::set(double, double, double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::Hep3Vector::set(double, double, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:81:15
  t0.method("set", static_cast<void (CLHEP::Hep3Vector::*)(double, double, double) >(&CLHEP::Hep3Vector::set));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::phi() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::phi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:84:17
  t0.method("phi", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::phi));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::theta() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::theta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:87:17
  t0.method("theta", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::theta));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::cosTheta() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::cosTheta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:90:17
  t0.method("cosTheta", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::cosTheta));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::cos2Theta() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::cos2Theta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:93:17
  t0.method("cos2Theta", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::cos2Theta));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::mag2() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::mag2()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:96:17
  t0.method("mag2", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::mag2));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::mag() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::mag()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:99:17
  t0.method("mag", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::mag));

  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::setPhi(double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::Hep3Vector::setPhi(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:102:15
  t0.method("setPhi", static_cast<void (CLHEP::Hep3Vector::*)(double) >(&CLHEP::Hep3Vector::setPhi));

  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::setTheta(double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::Hep3Vector::setTheta(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:105:15
  t0.method("setTheta", static_cast<void (CLHEP::Hep3Vector::*)(double) >(&CLHEP::Hep3Vector::setTheta));

  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::setMag(double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::Hep3Vector::setMag(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:108:15
  t0.method("setMag", static_cast<void (CLHEP::Hep3Vector::*)(double) >(&CLHEP::Hep3Vector::setMag));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::perp2() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::perp2()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:111:17
  t0.method("perp2", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::perp2));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::perp() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::perp()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:114:17
  t0.method("perp", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::perp));

  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::setPerp(double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::Hep3Vector::setPerp(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:117:15
  t0.method("setPerp", static_cast<void (CLHEP::Hep3Vector::*)(double) >(&CLHEP::Hep3Vector::setPerp));

  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::setCylTheta(double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::Hep3Vector::setCylTheta(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:120:8
  t0.method("setCylTheta", static_cast<void (CLHEP::Hep3Vector::*)(double) >(&CLHEP::Hep3Vector::setCylTheta));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::perp2(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::perp2(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:123:17
  t0.method("perp2", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::perp2));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::perp(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::perp(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:126:17
  t0.method("perp", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::perp));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector & CLHEP::Hep3Vector::operator=(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector & CLHEP::Hep3Vector::operator=(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:129:23
  t0.method("assign", static_cast<CLHEP::Hep3Vector & (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &) >(&CLHEP::Hep3Vector::operator=));

  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for bool CLHEP::Hep3Vector::operator==(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::Hep3Vector::operator==(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:133:15
  t0.method("==", static_cast<bool (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::operator==));

  DEBUG_MSG("Adding wrapper for bool CLHEP::Hep3Vector::operator!=(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::Hep3Vector::operator!=(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:134:15
  t0.method("!=", static_cast<bool (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::operator!=));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for bool CLHEP::Hep3Vector::isNear(const CLHEP::Hep3Vector &, double) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::Hep3Vector::isNear(const CLHEP::Hep3Vector &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:137:8
  t0.method("isNear", static_cast<bool (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &, double)  const>(&CLHEP::Hep3Vector::isNear));
  t0.method("isNear", [](CLHEP::Hep3Vector const& a, const CLHEP::Hep3Vector & arg0)->bool{ return a.isNear(arg0); });
  t0.method("isNear", [](CLHEP::Hep3Vector const* a, const CLHEP::Hep3Vector & arg0)->bool{ return a->isNear(arg0); });

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::howNear(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::howNear(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:141:10
  t0.method("howNear", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::howNear));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::deltaR(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::deltaR(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:145:10
  t0.method("deltaR", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::deltaR));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector & CLHEP::Hep3Vector::operator+=(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector & CLHEP::Hep3Vector::operator+=(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:148:23
  t0.method("add!", static_cast<CLHEP::Hep3Vector & (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &) >(&CLHEP::Hep3Vector::operator+=));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector & CLHEP::Hep3Vector::operator-=(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector & CLHEP::Hep3Vector::operator-=(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:151:23
  t0.method("sub!", static_cast<CLHEP::Hep3Vector & (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &) >(&CLHEP::Hep3Vector::operator-=));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::Hep3Vector::operator-() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::Hep3Vector::operator-()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:154:21
  t0.method("-", static_cast<CLHEP::Hep3Vector (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::operator-));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector & CLHEP::Hep3Vector::operator*=(double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector & CLHEP::Hep3Vector::operator*=(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:157:23
  t0.method("mult!", static_cast<CLHEP::Hep3Vector & (CLHEP::Hep3Vector::*)(double) >(&CLHEP::Hep3Vector::operator*=));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector & CLHEP::Hep3Vector::operator/=(double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector & CLHEP::Hep3Vector::operator/=(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:160:23
  t0.method("fdiv!", static_cast<CLHEP::Hep3Vector & (CLHEP::Hep3Vector::*)(double) >(&CLHEP::Hep3Vector::operator/=));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::Hep3Vector::unit() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::Hep3Vector::unit()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:163:21
  t0.method("unit", static_cast<CLHEP::Hep3Vector (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::unit));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::Hep3Vector::orthogonal() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::Hep3Vector::orthogonal()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:166:21
  t0.method("orthogonal", static_cast<CLHEP::Hep3Vector (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::orthogonal));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::dot(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::dot(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:169:17
  t0.method("dot", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::dot));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::Hep3Vector::cross(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::Hep3Vector::cross(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:172:21
  t0.method("cross", static_cast<CLHEP::Hep3Vector (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::cross));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::angle(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::angle(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:175:10
  t0.method("angle", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::angle));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::pseudoRapidity() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::pseudoRapidity()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:178:10
  t0.method("pseudoRapidity", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::pseudoRapidity));

  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::setEta(double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::Hep3Vector::setEta(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:181:8
  t0.method("setEta", static_cast<void (CLHEP::Hep3Vector::*)(double) >(&CLHEP::Hep3Vector::setEta));

  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::setCylEta(double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::Hep3Vector::setCylEta(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:184:8
  t0.method("setCylEta", static_cast<void (CLHEP::Hep3Vector::*)(double) >(&CLHEP::Hep3Vector::setCylEta));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector & CLHEP::Hep3Vector::rotateX(double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector & CLHEP::Hep3Vector::rotateX(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:187:16
  t0.method("rotateX", static_cast<CLHEP::Hep3Vector & (CLHEP::Hep3Vector::*)(double) >(&CLHEP::Hep3Vector::rotateX));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector & CLHEP::Hep3Vector::rotateY(double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector & CLHEP::Hep3Vector::rotateY(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:190:16
  t0.method("rotateY", static_cast<CLHEP::Hep3Vector & (CLHEP::Hep3Vector::*)(double) >(&CLHEP::Hep3Vector::rotateY));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector & CLHEP::Hep3Vector::rotateZ(double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector & CLHEP::Hep3Vector::rotateZ(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:193:16
  t0.method("rotateZ", static_cast<CLHEP::Hep3Vector & (CLHEP::Hep3Vector::*)(double) >(&CLHEP::Hep3Vector::rotateZ));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector & CLHEP::Hep3Vector::rotateUz(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector & CLHEP::Hep3Vector::rotateUz(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:196:16
  t0.method("rotateUz", static_cast<CLHEP::Hep3Vector & (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &) >(&CLHEP::Hep3Vector::rotateUz));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector & CLHEP::Hep3Vector::rotate(double, const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector & CLHEP::Hep3Vector::rotate(double, const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:199:18
  t0.method("rotate", static_cast<CLHEP::Hep3Vector & (CLHEP::Hep3Vector::*)(double, const CLHEP::Hep3Vector &) >(&CLHEP::Hep3Vector::rotate));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector & CLHEP::Hep3Vector::operator*=(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector & CLHEP::Hep3Vector::operator*=(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:203:16
  t0.method("mult!", static_cast<CLHEP::Hep3Vector & (CLHEP::Hep3Vector::*)(const CLHEP::HepRotation &) >(&CLHEP::Hep3Vector::operator*=));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector & CLHEP::Hep3Vector::transform(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector & CLHEP::Hep3Vector::transform(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:204:16
  t0.method("transform", static_cast<CLHEP::Hep3Vector & (CLHEP::Hep3Vector::*)(const CLHEP::HepRotation &) >(&CLHEP::Hep3Vector::transform));

  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::setRThetaPhi(double, double, double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::Hep3Vector::setRThetaPhi(double, double, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:223:15
  t0.method("setRThetaPhi", static_cast<void (CLHEP::Hep3Vector::*)(double, double, double) >(&CLHEP::Hep3Vector::setRThetaPhi));

  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::setREtaPhi(double, double, double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::Hep3Vector::setREtaPhi(double, double, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:226:15
  t0.method("setREtaPhi", static_cast<void (CLHEP::Hep3Vector::*)(double, double, double) >(&CLHEP::Hep3Vector::setREtaPhi));

  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::setRhoPhiZ(double, double, double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::Hep3Vector::setRhoPhiZ(double, double, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:229:15
  t0.method("setRhoPhiZ", static_cast<void (CLHEP::Hep3Vector::*)(double, double, double) >(&CLHEP::Hep3Vector::setRhoPhiZ));

  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::setRhoPhiTheta(double, double, double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::Hep3Vector::setRhoPhiTheta(double, double, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:232:8
  t0.method("setRhoPhiTheta", static_cast<void (CLHEP::Hep3Vector::*)(double, double, double) >(&CLHEP::Hep3Vector::setRhoPhiTheta));

  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::setRhoPhiEta(double, double, double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::Hep3Vector::setRhoPhiEta(double, double, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:235:8
  t0.method("setRhoPhiEta", static_cast<void (CLHEP::Hep3Vector::*)(double, double, double) >(&CLHEP::Hep3Vector::setRhoPhiEta));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::getX() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::getX()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:240:17
  t0.method("getX", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::getX));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::getY() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::getY()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:241:17
  t0.method("getY", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::getY));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::getZ() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::getZ()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:242:17
  t0.method("getZ", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::getZ));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::getR() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::getR()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:245:17
  t0.method("getR", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::getR));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::getTheta() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::getTheta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:246:17
  t0.method("getTheta", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::getTheta));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::getPhi() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::getPhi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:247:17
  t0.method("getPhi", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::getPhi));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::r() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::r()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:250:17
  t0.method("r", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::r));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::rho() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::rho()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:253:17
  t0.method("rho", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::rho));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::getRho() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::getRho()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:254:17
  t0.method("getRho", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::getRho));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::eta() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::eta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:257:10
  t0.method("eta", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::eta));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::getEta() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::getEta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:258:10
  t0.method("getEta", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::getEta));

  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::setR(double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::Hep3Vector::setR(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:261:15
  t0.method("setR", static_cast<void (CLHEP::Hep3Vector::*)(double) >(&CLHEP::Hep3Vector::setR));

  DEBUG_MSG("Adding wrapper for void CLHEP::Hep3Vector::setRho(double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::Hep3Vector::setRho(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:264:15
  t0.method("setRho", static_cast<void (CLHEP::Hep3Vector::*)(double) >(&CLHEP::Hep3Vector::setRho));

  DEBUG_MSG("Adding wrapper for int CLHEP::Hep3Vector::compare(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: int CLHEP::Hep3Vector::compare(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:269:7
  t0.method("compare", static_cast<int (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::compare));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for bool CLHEP::Hep3Vector::operator>(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::Hep3Vector::operator>(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:270:8
  t0.method(">", static_cast<bool (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::operator>));

  DEBUG_MSG("Adding wrapper for bool CLHEP::Hep3Vector::operator<(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::Hep3Vector::operator<(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:271:8
  t0.method("<", static_cast<bool (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::operator<));

  DEBUG_MSG("Adding wrapper for bool CLHEP::Hep3Vector::operator>=(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::Hep3Vector::operator>=(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:272:8
  t0.method(">=", static_cast<bool (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::operator>=));

  DEBUG_MSG("Adding wrapper for bool CLHEP::Hep3Vector::operator<=(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::Hep3Vector::operator<=(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:273:8
  t0.method("<=", static_cast<bool (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::operator<=));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::diff2(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::diff2(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:276:17
  t0.method("diff2", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::diff2));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::setTolerance(double) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::setTolerance(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:279:17
  t0.method("CLHEP!Hep3Vector!setTolerance", static_cast<double (*)(double) >(&CLHEP::Hep3Vector::setTolerance));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::getTolerance() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::getTolerance()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:280:24
  t0.method("CLHEP!Hep3Vector!getTolerance", static_cast<double (*)() >(&CLHEP::Hep3Vector::getTolerance));

  DEBUG_MSG("Adding wrapper for bool CLHEP::Hep3Vector::isParallel(const CLHEP::Hep3Vector &, double) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::Hep3Vector::isParallel(const CLHEP::Hep3Vector &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:283:8
  t0.method("isParallel", static_cast<bool (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &, double)  const>(&CLHEP::Hep3Vector::isParallel));
  t0.method("isParallel", [](CLHEP::Hep3Vector const& a, const CLHEP::Hep3Vector & arg0)->bool{ return a.isParallel(arg0); });
  t0.method("isParallel", [](CLHEP::Hep3Vector const* a, const CLHEP::Hep3Vector & arg0)->bool{ return a->isParallel(arg0); });

  DEBUG_MSG("Adding wrapper for bool CLHEP::Hep3Vector::isOrthogonal(const CLHEP::Hep3Vector &, double) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::Hep3Vector::isOrthogonal(const CLHEP::Hep3Vector &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:286:8
  t0.method("isOrthogonal", static_cast<bool (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &, double)  const>(&CLHEP::Hep3Vector::isOrthogonal));
  t0.method("isOrthogonal", [](CLHEP::Hep3Vector const& a, const CLHEP::Hep3Vector & arg0)->bool{ return a.isOrthogonal(arg0); });
  t0.method("isOrthogonal", [](CLHEP::Hep3Vector const* a, const CLHEP::Hep3Vector & arg0)->bool{ return a->isOrthogonal(arg0); });

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::howParallel(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::howParallel(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:289:10
  t0.method("howParallel", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::howParallel));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::howOrthogonal(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::howOrthogonal(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:292:10
  t0.method("howOrthogonal", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::howOrthogonal));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::beta() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::beta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:299:10
  t0.method("beta", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::beta));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::gamma() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::gamma()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:303:10
  t0.method("gamma", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::gamma));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::coLinearRapidity() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::coLinearRapidity()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:306:10
  t0.method("coLinearRapidity", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::coLinearRapidity));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::angle() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::angle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:314:17
  t0.method("angle", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::angle));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::theta(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::theta(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:317:17
  t0.method("theta", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::theta));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::cosTheta(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::cosTheta(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:320:10
  t0.method("cosTheta", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::cosTheta));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::cos2Theta(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::cos2Theta(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:321:10
  t0.method("cos2Theta", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::cos2Theta));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::Hep3Vector::project() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::Hep3Vector::project()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:324:21
  t0.method("project", static_cast<CLHEP::Hep3Vector (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::project));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::Hep3Vector::project(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::Hep3Vector::project(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:325:21
  t0.method("project", static_cast<CLHEP::Hep3Vector (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::project));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::Hep3Vector::perpPart() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::Hep3Vector::perpPart()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:328:21
  t0.method("perpPart", static_cast<CLHEP::Hep3Vector (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::perpPart));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::Hep3Vector::perpPart(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::Hep3Vector::perpPart(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:329:21
  t0.method("perpPart", static_cast<CLHEP::Hep3Vector (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::perpPart));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::rapidity() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::rapidity()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:332:10
  t0.method("rapidity", static_cast<double (CLHEP::Hep3Vector::*)()  const>(&CLHEP::Hep3Vector::rapidity));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::rapidity(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::rapidity(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:335:10
  t0.method("rapidity", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::rapidity));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::eta(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::eta(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:339:10
  t0.method("eta", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::eta));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::polarAngle(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::polarAngle(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:346:10
  t0.method("polarAngle", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::polarAngle));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::deltaPhi(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::deltaPhi(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:349:10
  t0.method("deltaPhi", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::deltaPhi));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::azimAngle(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::azimAngle(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:352:10
  t0.method("azimAngle", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::azimAngle));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::polarAngle(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::polarAngle(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:355:10
  t0.method("polarAngle", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::polarAngle));

  DEBUG_MSG("Adding wrapper for double CLHEP::Hep3Vector::azimAngle(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::Hep3Vector::azimAngle(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:360:10
  t0.method("azimAngle", static_cast<double (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &)  const>(&CLHEP::Hep3Vector::azimAngle));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector & CLHEP::Hep3Vector::rotate(const CLHEP::Hep3Vector &, double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector & CLHEP::Hep3Vector::rotate(const CLHEP::Hep3Vector &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:371:16
  t0.method("rotate", static_cast<CLHEP::Hep3Vector & (CLHEP::Hep3Vector::*)(const CLHEP::Hep3Vector &, double) >(&CLHEP::Hep3Vector::rotate));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector & CLHEP::Hep3Vector::rotate(const CLHEP::HepAxisAngle &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector & CLHEP::Hep3Vector::rotate(const CLHEP::HepAxisAngle &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:374:16
  t0.method("rotate", static_cast<CLHEP::Hep3Vector & (CLHEP::Hep3Vector::*)(const CLHEP::HepAxisAngle &) >(&CLHEP::Hep3Vector::rotate));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector & CLHEP::Hep3Vector::rotate(const CLHEP::HepEulerAngles &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector & CLHEP::Hep3Vector::rotate(const CLHEP::HepEulerAngles &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:377:16
  t0.method("rotate", static_cast<CLHEP::Hep3Vector & (CLHEP::Hep3Vector::*)(const CLHEP::HepEulerAngles &) >(&CLHEP::Hep3Vector::rotate));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector & CLHEP::Hep3Vector::rotate(double, double, double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector & CLHEP::Hep3Vector::rotate(double, double, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:378:16
  t0.method("rotate", static_cast<CLHEP::Hep3Vector & (CLHEP::Hep3Vector::*)(double, double, double) >(&CLHEP::Hep3Vector::rotate));

  /* End of CLHEP::Hep3Vector class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class CLHEP::HepRotation
   */


  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::HepRotation(const CLHEP::HepRotation &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:51:10
  t2.constructor<const CLHEP::HepRotation &>(/*finalize=*/true);



  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::HepRotation(const CLHEP::HepRotationX &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:55:10
  t2.constructor<const CLHEP::HepRotationX &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::HepRotation(const CLHEP::HepRotationY &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:56:10
  t2.constructor<const CLHEP::HepRotationY &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::HepRotation(const CLHEP::HepRotationZ &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:57:10
  t2.constructor<const CLHEP::HepRotationZ &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::set(const CLHEP::Hep3Vector &, double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::set(const CLHEP::Hep3Vector &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:60:17
  t2.method("set", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::Hep3Vector &, double) >(&CLHEP::HepRotation::set));


  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::HepRotation(const CLHEP::Hep3Vector &, double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:61:3
  t2.constructor<const CLHEP::Hep3Vector &, double>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::set(const CLHEP::HepAxisAngle &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::set(const CLHEP::HepAxisAngle &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:64:17
  t2.method("set", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::HepAxisAngle &) >(&CLHEP::HepRotation::set));


  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::HepRotation(const CLHEP::HepAxisAngle &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:65:3
  t2.constructor<const CLHEP::HepAxisAngle &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::set(double, double, double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::set(double, double, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:68:17
  t2.method("set", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(double, double, double) >(&CLHEP::HepRotation::set));


  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::HepRotation(double, double, double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:69:3
  t2.constructor<double, double, double>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::set(const CLHEP::HepEulerAngles &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::set(const CLHEP::HepEulerAngles &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:72:17
  t2.method("set", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::HepEulerAngles &) >(&CLHEP::HepRotation::set));


  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::HepRotation(const CLHEP::HepEulerAngles &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:73:3
  t2.constructor<const CLHEP::HepEulerAngles &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::HepRotation(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:76:3
  t2.constructor<const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::set(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::set(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:86:17
  t2.method("set", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &) >(&CLHEP::HepRotation::set));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::setRows(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::setRows(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:91:17
  t2.method("setRows", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &) >(&CLHEP::HepRotation::setRows));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::set(const CLHEP::HepRotationX &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::set(const CLHEP::HepRotationX &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:96:24
  t2.method("set", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::HepRotationX &) >(&CLHEP::HepRotation::set));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::set(const CLHEP::HepRotationY &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::set(const CLHEP::HepRotationY &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:97:24
  t2.method("set", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::HepRotationY &) >(&CLHEP::HepRotation::set));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::set(const CLHEP::HepRotationZ &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::set(const CLHEP::HepRotationZ &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:98:24
  t2.method("set", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::HepRotationZ &) >(&CLHEP::HepRotation::set));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::operator=(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::operator=(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:101:25
  t2.method("assign", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::HepRotation &) >(&CLHEP::HepRotation::operator=));


  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::operator=(const CLHEP::HepRotationX &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::operator=(const CLHEP::HepRotationX &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:105:25
  t2.method("assign", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::HepRotationX &) >(&CLHEP::HepRotation::operator=));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::operator=(const CLHEP::HepRotationY &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::operator=(const CLHEP::HepRotationY &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:106:25
  t2.method("assign", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::HepRotationY &) >(&CLHEP::HepRotation::operator=));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::operator=(const CLHEP::HepRotationZ &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::operator=(const CLHEP::HepRotationZ &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:107:25
  t2.method("assign", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::HepRotationZ &) >(&CLHEP::HepRotation::operator=));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::set(const CLHEP::HepRep3x3 &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::set(const CLHEP::HepRep3x3 &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:110:23
  t2.method("set", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::HepRep3x3 &) >(&CLHEP::HepRotation::set));


  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::HepRotation(const CLHEP::HepRep3x3 &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:111:10
  t2.constructor<const CLHEP::HepRep3x3 &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::HepRotation::colX() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::HepRotation::colX()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:121:21
  t2.method("colX", static_cast<CLHEP::Hep3Vector (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::colX));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::HepRotation::colY() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::HepRotation::colY()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:122:21
  t2.method("colY", static_cast<CLHEP::Hep3Vector (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::colY));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::HepRotation::colZ() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::HepRotation::colZ()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:123:21
  t2.method("colZ", static_cast<CLHEP::Hep3Vector (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::colZ));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::HepRotation::rowX() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::HepRotation::rowX()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:126:21
  t2.method("rowX", static_cast<CLHEP::Hep3Vector (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::rowX));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::HepRotation::rowY() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::HepRotation::rowY()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:127:21
  t2.method("rowY", static_cast<CLHEP::Hep3Vector (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::rowY));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::HepRotation::rowZ() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::HepRotation::rowZ()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:128:21
  t2.method("rowZ", static_cast<CLHEP::Hep3Vector (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::rowZ));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::xx() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::xx()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:131:17
  t2.method("xx", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::xx));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::xy() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::xy()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:132:17
  t2.method("xy", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::xy));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::xz() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::xz()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:133:17
  t2.method("xz", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::xz));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::yx() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::yx()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:134:17
  t2.method("yx", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::yx));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::yy() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::yy()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:135:17
  t2.method("yy", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::yy));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::yz() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::yz()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:136:17
  t2.method("yz", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::yz));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::zx() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::zx()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:137:17
  t2.method("zx", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::zx));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::zy() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::zy()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:138:17
  t2.method("zy", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::zy));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::zz() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::zz()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:139:17
  t2.method("zz", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::zz));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRep3x3 CLHEP::HepRotation::rep3x3() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRep3x3 CLHEP::HepRotation::rep3x3()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:142:20
  t2.method("rep3x3", static_cast<CLHEP::HepRep3x3 (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::rep3x3));
  types.set_override_module(jl_base_module);


  DEBUG_MSG("Adding getindex method to wrap const CLHEP::HepRotation::HepRotation_row CLHEP::HepRotation::operator[](int) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:157:32
  t2.method("getindex",
    [](CLHEP::HepRotation& a, int i){
    return a[i];
  });

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::operator()(int, int) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::operator()(int, int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:161:10
  t2.method("paren", static_cast<double (CLHEP::HepRotation::*)(int, int)  const>(&CLHEP::HepRotation::operator()));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::getPhi() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::getPhi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:166:18
  t2.method("getPhi", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::getPhi));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::getTheta() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::getTheta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:167:18
  t2.method("getTheta", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::getTheta));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::getPsi() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::getPsi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:168:18
  t2.method("getPsi", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::getPsi));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::phi() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::phi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:169:13
  t2.method("phi", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::phi));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::theta() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::theta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:170:13
  t2.method("theta", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::theta));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::psi() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::psi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:171:13
  t2.method("psi", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::psi));

  DEBUG_MSG("Adding wrapper for CLHEP::HepEulerAngles CLHEP::HepRotation::eulerAngles() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepEulerAngles CLHEP::HepRotation::eulerAngles()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:172:18
  t2.method("eulerAngles", static_cast<CLHEP::HepEulerAngles (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::eulerAngles));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::getDelta() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::getDelta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:175:19
  t2.method("getDelta", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::getDelta));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::HepRotation::getAxis() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::HepRotation::getAxis()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:176:22
  t2.method("getAxis", static_cast<CLHEP::Hep3Vector (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::getAxis));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::delta() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::delta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:177:14
  t2.method("delta", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::delta));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::HepRotation::axis() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::HepRotation::axis()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:178:17
  t2.method("axis", static_cast<CLHEP::Hep3Vector (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::axis));

  DEBUG_MSG("Adding wrapper for CLHEP::HepAxisAngle CLHEP::HepRotation::axisAngle() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepAxisAngle CLHEP::HepRotation::axisAngle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:179:17
  t2.method("axisAngle", static_cast<CLHEP::HepAxisAngle (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::axisAngle));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::getAngleAxis(double &, CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepRotation::getAngleAxis(double &, CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:180:8
  t2.method("getAngleAxis", static_cast<void (CLHEP::HepRotation::*)(double &, CLHEP::Hep3Vector &)  const>(&CLHEP::HepRotation::getAngleAxis));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::phiX() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::phiX()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:184:10
  t2.method("phiX", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::phiX));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::phiY() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::phiY()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:185:10
  t2.method("phiY", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::phiY));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::phiZ() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::phiZ()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:186:10
  t2.method("phiZ", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::phiZ));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::thetaX() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::thetaX()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:187:10
  t2.method("thetaX", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::thetaX));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::thetaY() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::thetaY()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:188:10
  t2.method("thetaY", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::thetaY));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::thetaZ() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::thetaZ()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:189:10
  t2.method("thetaZ", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::thetaZ));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepRotation::col1() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepRotation::col1()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:195:27
  t2.method("col1", static_cast<CLHEP::HepLorentzVector (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::col1));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepRotation::col2() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepRotation::col2()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:196:27
  t2.method("col2", static_cast<CLHEP::HepLorentzVector (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::col2));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepRotation::col3() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepRotation::col3()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:197:27
  t2.method("col3", static_cast<CLHEP::HepLorentzVector (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::col3));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepRotation::col4() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepRotation::col4()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:200:27
  t2.method("col4", static_cast<CLHEP::HepLorentzVector (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::col4));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepRotation::row1() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepRotation::row1()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:203:27
  t2.method("row1", static_cast<CLHEP::HepLorentzVector (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::row1));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepRotation::row2() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepRotation::row2()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:204:27
  t2.method("row2", static_cast<CLHEP::HepLorentzVector (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::row2));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepRotation::row3() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepRotation::row3()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:205:27
  t2.method("row3", static_cast<CLHEP::HepLorentzVector (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::row3));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepRotation::row4() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepRotation::row4()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:208:27
  t2.method("row4", static_cast<CLHEP::HepLorentzVector (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::row4));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::xt() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::xt()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:211:17
  t2.method("xt", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::xt));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::yt() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::yt()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:212:17
  t2.method("yt", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::yt));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::zt() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::zt()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:213:17
  t2.method("zt", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::zt));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::tx() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::tx()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:214:17
  t2.method("tx", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::tx));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::ty() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::ty()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:215:17
  t2.method("ty", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::ty));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::tz() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::tz()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:216:17
  t2.method("tz", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::tz));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::tt() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::tt()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:219:17
  t2.method("tt", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::tt));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRep4x4 CLHEP::HepRotation::rep4x4() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRep4x4 CLHEP::HepRotation::rep4x4()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:222:20
  t2.method("rep4x4", static_cast<CLHEP::HepRep4x4 (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::rep4x4));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::setPhi(double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepRotation::setPhi(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:227:8
  t2.method("setPhi", static_cast<void (CLHEP::HepRotation::*)(double) >(&CLHEP::HepRotation::setPhi));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::setTheta(double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepRotation::setTheta(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:230:8
  t2.method("setTheta", static_cast<void (CLHEP::HepRotation::*)(double) >(&CLHEP::HepRotation::setTheta));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::setPsi(double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepRotation::setPsi(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:233:8
  t2.method("setPsi", static_cast<void (CLHEP::HepRotation::*)(double) >(&CLHEP::HepRotation::setPsi));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::setAxis(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepRotation::setAxis(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:236:8
  t2.method("setAxis", static_cast<void (CLHEP::HepRotation::*)(const CLHEP::Hep3Vector &) >(&CLHEP::HepRotation::setAxis));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::setDelta(double) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepRotation::setDelta(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:239:8
  t2.method("setDelta", static_cast<void (CLHEP::HepRotation::*)(double) >(&CLHEP::HepRotation::setDelta));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::decompose(CLHEP::HepAxisAngle &, CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepRotation::decompose(CLHEP::HepAxisAngle &, CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:244:8
  t2.method("decompose", static_cast<void (CLHEP::HepRotation::*)(CLHEP::HepAxisAngle &, CLHEP::Hep3Vector &)  const>(&CLHEP::HepRotation::decompose));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::decompose(CLHEP::Hep3Vector &, CLHEP::HepAxisAngle &) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepRotation::decompose(CLHEP::Hep3Vector &, CLHEP::HepAxisAngle &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:245:8
  t2.method("decompose", static_cast<void (CLHEP::HepRotation::*)(CLHEP::Hep3Vector &, CLHEP::HepAxisAngle &)  const>(&CLHEP::HepRotation::decompose));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepRotation::isIdentity() (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepRotation::isIdentity()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:250:8
  t2.method("isIdentity", static_cast<bool (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::isIdentity));

  DEBUG_MSG("Adding wrapper for int CLHEP::HepRotation::compare(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: int CLHEP::HepRotation::compare(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:253:7
  t2.method("compare", static_cast<int (CLHEP::HepRotation::*)(const CLHEP::HepRotation &)  const>(&CLHEP::HepRotation::compare));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepRotation::operator==(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepRotation::operator==(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:257:15
  t2.method("==", static_cast<bool (CLHEP::HepRotation::*)(const CLHEP::HepRotation &)  const>(&CLHEP::HepRotation::operator==));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepRotation::operator!=(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepRotation::operator!=(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:258:15
  t2.method("!=", static_cast<bool (CLHEP::HepRotation::*)(const CLHEP::HepRotation &)  const>(&CLHEP::HepRotation::operator!=));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepRotation::operator<(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepRotation::operator<(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:259:15
  t2.method("<", static_cast<bool (CLHEP::HepRotation::*)(const CLHEP::HepRotation &)  const>(&CLHEP::HepRotation::operator<));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepRotation::operator>(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepRotation::operator>(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:260:15
  t2.method(">", static_cast<bool (CLHEP::HepRotation::*)(const CLHEP::HepRotation &)  const>(&CLHEP::HepRotation::operator>));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepRotation::operator<=(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepRotation::operator<=(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:261:15
  t2.method("<=", static_cast<bool (CLHEP::HepRotation::*)(const CLHEP::HepRotation &)  const>(&CLHEP::HepRotation::operator<=));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepRotation::operator>=(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepRotation::operator>=(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:262:15
  t2.method(">=", static_cast<bool (CLHEP::HepRotation::*)(const CLHEP::HepRotation &)  const>(&CLHEP::HepRotation::operator>=));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::distance2(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::distance2(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:264:10
  t2.method("distance2", static_cast<double (CLHEP::HepRotation::*)(const CLHEP::HepRotation &)  const>(&CLHEP::HepRotation::distance2));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::howNear(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::howNear(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:267:10
  t2.method("howNear", static_cast<double (CLHEP::HepRotation::*)(const CLHEP::HepRotation &)  const>(&CLHEP::HepRotation::howNear));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepRotation::isNear(const CLHEP::HepRotation &, double) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepRotation::isNear(const CLHEP::HepRotation &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:268:8
  t2.method("isNear", static_cast<bool (CLHEP::HepRotation::*)(const CLHEP::HepRotation &, double)  const>(&CLHEP::HepRotation::isNear));
  t2.method("isNear", [](CLHEP::HepRotation const& a, const CLHEP::HepRotation & arg0)->bool{ return a.isNear(arg0); });
  t2.method("isNear", [](CLHEP::HepRotation const* a, const CLHEP::HepRotation & arg0)->bool{ return a->isNear(arg0); });

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::distance2(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::distance2(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:271:10
  t2.method("distance2", static_cast<double (CLHEP::HepRotation::*)(const CLHEP::HepBoost &)  const>(&CLHEP::HepRotation::distance2));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::distance2(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::distance2(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:273:10
  t2.method("distance2", static_cast<double (CLHEP::HepRotation::*)(const CLHEP::HepLorentzRotation &)  const>(&CLHEP::HepRotation::distance2));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::howNear(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::howNear(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:276:10
  t2.method("howNear", static_cast<double (CLHEP::HepRotation::*)(const CLHEP::HepBoost &)  const>(&CLHEP::HepRotation::howNear));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::howNear(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::howNear(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:277:10
  t2.method("howNear", static_cast<double (CLHEP::HepRotation::*)(const CLHEP::HepLorentzRotation &)  const>(&CLHEP::HepRotation::howNear));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepRotation::isNear(const CLHEP::HepBoost &, double) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepRotation::isNear(const CLHEP::HepBoost &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:278:8
  t2.method("isNear", static_cast<bool (CLHEP::HepRotation::*)(const CLHEP::HepBoost &, double)  const>(&CLHEP::HepRotation::isNear));
  t2.method("isNear", [](CLHEP::HepRotation const& a, const CLHEP::HepBoost & arg0)->bool{ return a.isNear(arg0); });
  t2.method("isNear", [](CLHEP::HepRotation const* a, const CLHEP::HepBoost & arg0)->bool{ return a->isNear(arg0); });

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepRotation::isNear(const CLHEP::HepLorentzRotation &, double) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepRotation::isNear(const CLHEP::HepLorentzRotation &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:280:8
  t2.method("isNear", static_cast<bool (CLHEP::HepRotation::*)(const CLHEP::HepLorentzRotation &, double)  const>(&CLHEP::HepRotation::isNear));
  t2.method("isNear", [](CLHEP::HepRotation const& a, const CLHEP::HepLorentzRotation & arg0)->bool{ return a.isNear(arg0); });
  t2.method("isNear", [](CLHEP::HepRotation const* a, const CLHEP::HepLorentzRotation & arg0)->bool{ return a->isNear(arg0); });

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::norm2() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::norm2()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:285:10
  t2.method("norm2", static_cast<double (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::norm2));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::rectify() (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepRotation::rectify()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:288:8
  t2.method("rectify", static_cast<void (CLHEP::HepRotation::*)() >(&CLHEP::HepRotation::rectify));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::HepRotation::operator()(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::HepRotation::operator()(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:298:21
  t2.method("paren", static_cast<CLHEP::Hep3Vector (CLHEP::HepRotation::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::HepRotation::operator()));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::HepRotation::operator*(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::HepRotation::operator*(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:301:22
  t2.method("*", static_cast<CLHEP::Hep3Vector (CLHEP::HepRotation::*)(const CLHEP::Hep3Vector &)  const>(&CLHEP::HepRotation::operator*));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepRotation::operator()(const CLHEP::HepLorentzVector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepRotation::operator()(const CLHEP::HepLorentzVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:304:27
  t2.method("paren", static_cast<CLHEP::HepLorentzVector (CLHEP::HepRotation::*)(const CLHEP::HepLorentzVector &)  const>(&CLHEP::HepRotation::operator()));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepRotation::operator*(const CLHEP::HepLorentzVector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepRotation::operator*(const CLHEP::HepLorentzVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:307:28
  t2.method("*", static_cast<CLHEP::HepLorentzVector (CLHEP::HepRotation::*)(const CLHEP::HepLorentzVector &)  const>(&CLHEP::HepRotation::operator*));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation CLHEP::HepRotation::operator*(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation CLHEP::HepRotation::operator*(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:312:22
  t2.method("*", static_cast<CLHEP::HepRotation (CLHEP::HepRotation::*)(const CLHEP::HepRotation &)  const>(&CLHEP::HepRotation::operator*));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation CLHEP::HepRotation::operator*(const CLHEP::HepRotationX &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation CLHEP::HepRotation::operator*(const CLHEP::HepRotationX &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:315:22
  t2.method("*", static_cast<CLHEP::HepRotation (CLHEP::HepRotation::*)(const CLHEP::HepRotationX &)  const>(&CLHEP::HepRotation::operator*));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation CLHEP::HepRotation::operator*(const CLHEP::HepRotationY &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation CLHEP::HepRotation::operator*(const CLHEP::HepRotationY &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:316:22
  t2.method("*", static_cast<CLHEP::HepRotation (CLHEP::HepRotation::*)(const CLHEP::HepRotationY &)  const>(&CLHEP::HepRotation::operator*));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation CLHEP::HepRotation::operator*(const CLHEP::HepRotationZ &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation CLHEP::HepRotation::operator*(const CLHEP::HepRotationZ &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:317:22
  t2.method("*", static_cast<CLHEP::HepRotation (CLHEP::HepRotation::*)(const CLHEP::HepRotationZ &)  const>(&CLHEP::HepRotation::operator*));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::operator*=(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::operator*=(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:320:25
  t2.method("mult!", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::HepRotation &) >(&CLHEP::HepRotation::operator*=));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::transform(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::transform(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:321:25
  t2.method("transform", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::HepRotation &) >(&CLHEP::HepRotation::transform));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::operator*=(const CLHEP::HepRotationX &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::operator*=(const CLHEP::HepRotationX &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:325:25
  t2.method("mult!", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::HepRotationX &) >(&CLHEP::HepRotation::operator*=));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::operator*=(const CLHEP::HepRotationY &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::operator*=(const CLHEP::HepRotationY &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:326:25
  t2.method("mult!", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::HepRotationY &) >(&CLHEP::HepRotation::operator*=));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::operator*=(const CLHEP::HepRotationZ &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::operator*=(const CLHEP::HepRotationZ &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:327:25
  t2.method("mult!", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::HepRotationZ &) >(&CLHEP::HepRotation::operator*=));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::transform(const CLHEP::HepRotationX &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::transform(const CLHEP::HepRotationX &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:328:25
  t2.method("transform", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::HepRotationX &) >(&CLHEP::HepRotation::transform));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::transform(const CLHEP::HepRotationY &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::transform(const CLHEP::HepRotationY &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:329:25
  t2.method("transform", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::HepRotationY &) >(&CLHEP::HepRotation::transform));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::transform(const CLHEP::HepRotationZ &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::transform(const CLHEP::HepRotationZ &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:330:25
  t2.method("transform", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::HepRotationZ &) >(&CLHEP::HepRotation::transform));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::rotateX(double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::rotateX(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:333:17
  t2.method("rotateX", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(double) >(&CLHEP::HepRotation::rotateX));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::rotateY(double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::rotateY(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:336:17
  t2.method("rotateY", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(double) >(&CLHEP::HepRotation::rotateY));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::rotateZ(double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::rotateZ(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:339:17
  t2.method("rotateZ", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(double) >(&CLHEP::HepRotation::rotateZ));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::rotate(double, const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::rotate(double, const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:342:24
  t2.method("rotate", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(double, const CLHEP::Hep3Vector &) >(&CLHEP::HepRotation::rotate));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::rotate(double, const CLHEP::Hep3Vector *) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::rotate(double, const CLHEP::Hep3Vector *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:343:24
  t2.method("rotate", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(double, const CLHEP::Hep3Vector *) >(&CLHEP::HepRotation::rotate));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::rotateAxes(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::rotateAxes(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:347:17
  t2.method("rotateAxes", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &) >(&CLHEP::HepRotation::rotateAxes));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation CLHEP::HepRotation::inverse() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation CLHEP::HepRotation::inverse()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:353:22
  t2.method("inverse", static_cast<CLHEP::HepRotation (CLHEP::HepRotation::*)()  const>(&CLHEP::HepRotation::inverse));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation & CLHEP::HepRotation::invert() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation & CLHEP::HepRotation::invert()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:356:24
  t2.method("invert", static_cast<CLHEP::HepRotation & (CLHEP::HepRotation::*)() >(&CLHEP::HepRotation::invert));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::getTolerance() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::getTolerance()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:370:24
  t2.method("CLHEP!HepRotation!getTolerance", static_cast<double (*)() >(&CLHEP::HepRotation::getTolerance));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepRotation::setTolerance(double) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepRotation::setTolerance(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:371:24
  t2.method("CLHEP!HepRotation!setTolerance", static_cast<double (*)(double) >(&CLHEP::HepRotation::setTolerance));

  /* End of CLHEP::HepRotation class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class CLHEP::HepEulerAngles
   */


  DEBUG_MSG("Adding wrapper for void CLHEP::HepEulerAngles::HepEulerAngles(double, double, double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/EulerAngles.h:48:10
  t5.constructor<double, double, double>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for double CLHEP::HepEulerAngles::getPhi() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepEulerAngles::getPhi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/EulerAngles.h:56:19
  t5.method("getPhi", static_cast<double (CLHEP::HepEulerAngles::*)()  const>(&CLHEP::HepEulerAngles::getPhi));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepEulerAngles::phi() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepEulerAngles::phi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/EulerAngles.h:57:19
  t5.method("phi", static_cast<double (CLHEP::HepEulerAngles::*)()  const>(&CLHEP::HepEulerAngles::phi));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepEulerAngles::getTheta() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepEulerAngles::getTheta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/EulerAngles.h:60:19
  t5.method("getTheta", static_cast<double (CLHEP::HepEulerAngles::*)()  const>(&CLHEP::HepEulerAngles::getTheta));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepEulerAngles::theta() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepEulerAngles::theta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/EulerAngles.h:61:19
  t5.method("theta", static_cast<double (CLHEP::HepEulerAngles::*)()  const>(&CLHEP::HepEulerAngles::theta));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepEulerAngles::getPsi() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepEulerAngles::getPsi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/EulerAngles.h:64:19
  t5.method("getPsi", static_cast<double (CLHEP::HepEulerAngles::*)()  const>(&CLHEP::HepEulerAngles::getPsi));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepEulerAngles::psi() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepEulerAngles::psi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/EulerAngles.h:65:19
  t5.method("psi", static_cast<double (CLHEP::HepEulerAngles::*)()  const>(&CLHEP::HepEulerAngles::psi));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepEulerAngles::getTolerance() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepEulerAngles::getTolerance()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/EulerAngles.h:83:24
  t5.method("CLHEP!HepEulerAngles!getTolerance", static_cast<double (*)() >(&CLHEP::HepEulerAngles::getTolerance));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepEulerAngles::setTolerance(double) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepEulerAngles::setTolerance(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/EulerAngles.h:84:24
  t5.method("CLHEP!HepEulerAngles!setTolerance", static_cast<double (*)(double) >(&CLHEP::HepEulerAngles::setTolerance));

  /* End of CLHEP::HepEulerAngles class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class CLHEP::HepRotation::HepRotation_row
   */


  DEBUG_MSG("Adding wrapper for void CLHEP::HepRotation::HepRotation_row::HepRotation_row(const CLHEP::HepRotation &, int) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:149:12
  t10.constructor<const CLHEP::HepRotation &, int>(/*finalize=*/true);
  types.set_override_module(jl_base_module);


  DEBUG_MSG("Adding getindex method to wrap double CLHEP::HepRotation::HepRotation_row::operator[](int) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:150:19
  t10.method("getindex",
    [](CLHEP::HepRotation::HepRotation_row& a, int i){
    return a[i];
  });

  /* End of CLHEP::HepRotation::HepRotation_row class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class CLHEP::HepBoost
   */

  types.unset_override_module();


  DEBUG_MSG("Adding wrapper for void CLHEP::HepBoost::HepBoost(const CLHEP::HepBoost &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:47:10
  t13.constructor<const CLHEP::HepBoost &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for CLHEP::HepBoost & CLHEP::HepBoost::operator=(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepBoost & CLHEP::HepBoost::operator=(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:51:21
  t13.method("assign", static_cast<CLHEP::HepBoost & (CLHEP::HepBoost::*)(const CLHEP::HepBoost &) >(&CLHEP::HepBoost::operator=));


  DEBUG_MSG("Adding wrapper for CLHEP::HepBoost & CLHEP::HepBoost::set(double, double, double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepBoost & CLHEP::HepBoost::set(double, double, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:55:21
  t13.method("set", static_cast<CLHEP::HepBoost & (CLHEP::HepBoost::*)(double, double, double) >(&CLHEP::HepBoost::set));


  DEBUG_MSG("Adding wrapper for void CLHEP::HepBoost::HepBoost(double, double, double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:56:10
  t13.constructor<double, double, double>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for CLHEP::HepBoost & CLHEP::HepBoost::set(const CLHEP::HepRep4x4Symmetric &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepBoost & CLHEP::HepBoost::set(const CLHEP::HepRep4x4Symmetric &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:59:21
  t13.method("set", static_cast<CLHEP::HepBoost & (CLHEP::HepBoost::*)(const CLHEP::HepRep4x4Symmetric &) >(&CLHEP::HepBoost::set));


  DEBUG_MSG("Adding wrapper for void CLHEP::HepBoost::HepBoost(const CLHEP::HepRep4x4Symmetric &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:60:10
  t13.constructor<const CLHEP::HepRep4x4Symmetric &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for CLHEP::HepBoost & CLHEP::HepBoost::set(CLHEP::Hep3Vector, double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepBoost & CLHEP::HepBoost::set(CLHEP::Hep3Vector, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:63:21
  t13.method("set", static_cast<CLHEP::HepBoost & (CLHEP::HepBoost::*)(CLHEP::Hep3Vector, double) >(&CLHEP::HepBoost::set));


  DEBUG_MSG("Adding wrapper for void CLHEP::HepBoost::HepBoost(CLHEP::Hep3Vector, double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:64:10
  t13.constructor<CLHEP::Hep3Vector, double>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for CLHEP::HepBoost & CLHEP::HepBoost::set(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepBoost & CLHEP::HepBoost::set(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:67:21
  t13.method("set", static_cast<CLHEP::HepBoost & (CLHEP::HepBoost::*)(const CLHEP::Hep3Vector &) >(&CLHEP::HepBoost::set));


  DEBUG_MSG("Adding wrapper for void CLHEP::HepBoost::HepBoost(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:68:10
  t13.constructor<const CLHEP::Hep3Vector &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for CLHEP::HepBoost & CLHEP::HepBoost::set(const CLHEP::HepBoostX &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepBoost & CLHEP::HepBoost::set(const CLHEP::HepBoostX &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:71:21
  t13.method("set", static_cast<CLHEP::HepBoost & (CLHEP::HepBoost::*)(const CLHEP::HepBoostX &) >(&CLHEP::HepBoost::set));

  DEBUG_MSG("Adding wrapper for CLHEP::HepBoost & CLHEP::HepBoost::set(const CLHEP::HepBoostY &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepBoost & CLHEP::HepBoost::set(const CLHEP::HepBoostY &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:72:21
  t13.method("set", static_cast<CLHEP::HepBoost & (CLHEP::HepBoost::*)(const CLHEP::HepBoostY &) >(&CLHEP::HepBoost::set));

  DEBUG_MSG("Adding wrapper for CLHEP::HepBoost & CLHEP::HepBoost::set(const CLHEP::HepBoostZ &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepBoost & CLHEP::HepBoost::set(const CLHEP::HepBoostZ &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:73:21
  t13.method("set", static_cast<CLHEP::HepBoost & (CLHEP::HepBoost::*)(const CLHEP::HepBoostZ &) >(&CLHEP::HepBoost::set));


  DEBUG_MSG("Adding wrapper for void CLHEP::HepBoost::HepBoost(const CLHEP::HepBoostX &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:74:10
  t13.constructor<const CLHEP::HepBoostX &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void CLHEP::HepBoost::HepBoost(const CLHEP::HepBoostY &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:75:10
  t13.constructor<const CLHEP::HepBoostY &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void CLHEP::HepBoost::HepBoost(const CLHEP::HepBoostZ &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:76:10
  t13.constructor<const CLHEP::HepBoostZ &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::beta() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::beta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:80:18
  t13.method("beta", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::beta));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::gamma() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::gamma()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:81:18
  t13.method("gamma", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::gamma));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::HepBoost::boostVector() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::HepBoost::boostVector()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:82:21
  t13.method("boostVector", static_cast<CLHEP::Hep3Vector (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::boostVector));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::HepBoost::getDirection() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::HepBoost::getDirection()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:83:21
  t13.method("getDirection", static_cast<CLHEP::Hep3Vector (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::getDirection));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::HepBoost::direction() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::HepBoost::direction()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:84:21
  t13.method("direction", static_cast<CLHEP::Hep3Vector (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::direction));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::xx() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::xx()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:86:17
  t13.method("xx", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::xx));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::xy() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::xy()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:87:17
  t13.method("xy", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::xy));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::xz() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::xz()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:88:17
  t13.method("xz", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::xz));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::xt() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::xt()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:89:17
  t13.method("xt", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::xt));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::yx() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::yx()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:90:17
  t13.method("yx", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::yx));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::yy() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::yy()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:91:17
  t13.method("yy", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::yy));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::yz() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::yz()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:92:17
  t13.method("yz", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::yz));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::yt() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::yt()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:93:17
  t13.method("yt", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::yt));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::zx() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::zx()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:94:17
  t13.method("zx", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::zx));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::zy() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::zy()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:95:17
  t13.method("zy", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::zy));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::zz() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::zz()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:96:17
  t13.method("zz", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::zz));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::zt() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::zt()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:97:17
  t13.method("zt", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::zt));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::tx() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::tx()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:98:17
  t13.method("tx", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::tx));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::ty() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::ty()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:99:17
  t13.method("ty", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::ty));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::tz() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::tz()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:100:17
  t13.method("tz", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::tz));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::tt() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::tt()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:101:17
  t13.method("tt", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::tt));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepBoost::col1() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepBoost::col1()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:104:27
  t13.method("col1", static_cast<CLHEP::HepLorentzVector (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::col1));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepBoost::col2() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepBoost::col2()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:105:27
  t13.method("col2", static_cast<CLHEP::HepLorentzVector (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::col2));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepBoost::col3() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepBoost::col3()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:106:27
  t13.method("col3", static_cast<CLHEP::HepLorentzVector (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::col3));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepBoost::col4() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepBoost::col4()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:107:27
  t13.method("col4", static_cast<CLHEP::HepLorentzVector (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::col4));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepBoost::row1() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepBoost::row1()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:110:27
  t13.method("row1", static_cast<CLHEP::HepLorentzVector (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::row1));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepBoost::row2() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepBoost::row2()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:111:27
  t13.method("row2", static_cast<CLHEP::HepLorentzVector (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::row2));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepBoost::row3() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepBoost::row3()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:112:27
  t13.method("row3", static_cast<CLHEP::HepLorentzVector (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::row3));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepBoost::row4() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepBoost::row4()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:113:27
  t13.method("row4", static_cast<CLHEP::HepLorentzVector (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::row4));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRep4x4 CLHEP::HepBoost::rep4x4() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRep4x4 CLHEP::HepBoost::rep4x4()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:116:20
  t13.method("rep4x4", static_cast<CLHEP::HepRep4x4 (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::rep4x4));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRep4x4Symmetric CLHEP::HepBoost::rep4x4Symmetric() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRep4x4Symmetric CLHEP::HepBoost::rep4x4Symmetric()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:119:29
  t13.method("rep4x4Symmetric", static_cast<CLHEP::HepRep4x4Symmetric (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::rep4x4Symmetric));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepBoost::decompose(CLHEP::HepRotation &, CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepBoost::decompose(CLHEP::HepRotation &, CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:124:8
  t13.method("decompose", static_cast<void (CLHEP::HepBoost::*)(CLHEP::HepRotation &, CLHEP::HepBoost &)  const>(&CLHEP::HepBoost::decompose));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepBoost::decompose(CLHEP::HepAxisAngle &, CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepBoost::decompose(CLHEP::HepAxisAngle &, CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:125:8
  t13.method("decompose", static_cast<void (CLHEP::HepBoost::*)(CLHEP::HepAxisAngle &, CLHEP::Hep3Vector &)  const>(&CLHEP::HepBoost::decompose));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepBoost::decompose(CLHEP::HepBoost &, CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepBoost::decompose(CLHEP::HepBoost &, CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:128:8
  t13.method("decompose", static_cast<void (CLHEP::HepBoost::*)(CLHEP::HepBoost &, CLHEP::HepRotation &)  const>(&CLHEP::HepBoost::decompose));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepBoost::decompose(CLHEP::Hep3Vector &, CLHEP::HepAxisAngle &) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepBoost::decompose(CLHEP::Hep3Vector &, CLHEP::HepAxisAngle &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:129:8
  t13.method("decompose", static_cast<void (CLHEP::HepBoost::*)(CLHEP::Hep3Vector &, CLHEP::HepAxisAngle &)  const>(&CLHEP::HepBoost::decompose));

  DEBUG_MSG("Adding wrapper for int CLHEP::HepBoost::compare(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: int CLHEP::HepBoost::compare(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:134:14
  t13.method("compare", static_cast<int (CLHEP::HepBoost::*)(const CLHEP::HepBoost &)  const>(&CLHEP::HepBoost::compare));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepBoost::operator==(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepBoost::operator==(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:138:15
  t13.method("==", static_cast<bool (CLHEP::HepBoost::*)(const CLHEP::HepBoost &)  const>(&CLHEP::HepBoost::operator==));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepBoost::operator!=(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepBoost::operator!=(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:139:15
  t13.method("!=", static_cast<bool (CLHEP::HepBoost::*)(const CLHEP::HepBoost &)  const>(&CLHEP::HepBoost::operator!=));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepBoost::operator<=(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepBoost::operator<=(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:140:15
  t13.method("<=", static_cast<bool (CLHEP::HepBoost::*)(const CLHEP::HepBoost &)  const>(&CLHEP::HepBoost::operator<=));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepBoost::operator>=(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepBoost::operator>=(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:141:15
  t13.method(">=", static_cast<bool (CLHEP::HepBoost::*)(const CLHEP::HepBoost &)  const>(&CLHEP::HepBoost::operator>=));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepBoost::operator<(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepBoost::operator<(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:142:15
  t13.method("<", static_cast<bool (CLHEP::HepBoost::*)(const CLHEP::HepBoost &)  const>(&CLHEP::HepBoost::operator<));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepBoost::operator>(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepBoost::operator>(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:143:15
  t13.method(">", static_cast<bool (CLHEP::HepBoost::*)(const CLHEP::HepBoost &)  const>(&CLHEP::HepBoost::operator>));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepBoost::isIdentity() (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepBoost::isIdentity()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:146:15
  t13.method("isIdentity", static_cast<bool (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::isIdentity));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::distance2(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::distance2(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:149:18
  t13.method("distance2", static_cast<double (CLHEP::HepBoost::*)(const CLHEP::HepBoost &)  const>(&CLHEP::HepBoost::distance2));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::distance2(const CLHEP::HepBoostX &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::distance2(const CLHEP::HepBoostX &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:150:18
  t13.method("distance2", static_cast<double (CLHEP::HepBoost::*)(const CLHEP::HepBoostX &)  const>(&CLHEP::HepBoost::distance2));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::distance2(const CLHEP::HepBoostY &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::distance2(const CLHEP::HepBoostY &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:151:18
  t13.method("distance2", static_cast<double (CLHEP::HepBoost::*)(const CLHEP::HepBoostY &)  const>(&CLHEP::HepBoost::distance2));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::distance2(const CLHEP::HepBoostZ &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::distance2(const CLHEP::HepBoostZ &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:152:18
  t13.method("distance2", static_cast<double (CLHEP::HepBoost::*)(const CLHEP::HepBoostZ &)  const>(&CLHEP::HepBoost::distance2));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::distance2(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::distance2(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:155:10
  t13.method("distance2", static_cast<double (CLHEP::HepBoost::*)(const CLHEP::HepRotation &)  const>(&CLHEP::HepBoost::distance2));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::distance2(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::distance2(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:156:10
  t13.method("distance2", static_cast<double (CLHEP::HepBoost::*)(const CLHEP::HepLorentzRotation &)  const>(&CLHEP::HepBoost::distance2));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::howNear(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::howNear(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:159:17
  t13.method("howNear", static_cast<double (CLHEP::HepBoost::*)(const CLHEP::HepBoost &)  const>(&CLHEP::HepBoost::howNear));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepBoost::isNear(const CLHEP::HepBoost &, double) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepBoost::isNear(const CLHEP::HepBoost &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:160:15
  t13.method("isNear", static_cast<bool (CLHEP::HepBoost::*)(const CLHEP::HepBoost &, double)  const>(&CLHEP::HepBoost::isNear));
  t13.method("isNear", [](CLHEP::HepBoost const& a, const CLHEP::HepBoost & arg0)->bool{ return a.isNear(arg0); });
  t13.method("isNear", [](CLHEP::HepBoost const* a, const CLHEP::HepBoost & arg0)->bool{ return a->isNear(arg0); });

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::howNear(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::howNear(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:163:10
  t13.method("howNear", static_cast<double (CLHEP::HepBoost::*)(const CLHEP::HepRotation &)  const>(&CLHEP::HepBoost::howNear));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::howNear(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::howNear(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:164:10
  t13.method("howNear", static_cast<double (CLHEP::HepBoost::*)(const CLHEP::HepLorentzRotation &)  const>(&CLHEP::HepBoost::howNear));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepBoost::isNear(const CLHEP::HepRotation &, double) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepBoost::isNear(const CLHEP::HepRotation &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:166:8
  t13.method("isNear", static_cast<bool (CLHEP::HepBoost::*)(const CLHEP::HepRotation &, double)  const>(&CLHEP::HepBoost::isNear));
  t13.method("isNear", [](CLHEP::HepBoost const& a, const CLHEP::HepRotation & arg0)->bool{ return a.isNear(arg0); });
  t13.method("isNear", [](CLHEP::HepBoost const* a, const CLHEP::HepRotation & arg0)->bool{ return a->isNear(arg0); });

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepBoost::isNear(const CLHEP::HepLorentzRotation &, double) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepBoost::isNear(const CLHEP::HepLorentzRotation &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:168:8
  t13.method("isNear", static_cast<bool (CLHEP::HepBoost::*)(const CLHEP::HepLorentzRotation &, double)  const>(&CLHEP::HepBoost::isNear));
  t13.method("isNear", [](CLHEP::HepBoost const& a, const CLHEP::HepLorentzRotation & arg0)->bool{ return a.isNear(arg0); });
  t13.method("isNear", [](CLHEP::HepBoost const* a, const CLHEP::HepLorentzRotation & arg0)->bool{ return a->isNear(arg0); });

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::norm2() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::norm2()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:173:10
  t13.method("norm2", static_cast<double (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::norm2));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepBoost::rectify() (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepBoost::rectify()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:176:8
  t13.method("rectify", static_cast<void (CLHEP::HepBoost::*)() >(&CLHEP::HepBoost::rectify));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepBoost::operator()(const CLHEP::HepLorentzVector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepBoost::operator()(const CLHEP::HepLorentzVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:181:27
  t13.method("paren", static_cast<CLHEP::HepLorentzVector (CLHEP::HepBoost::*)(const CLHEP::HepLorentzVector &)  const>(&CLHEP::HepBoost::operator()));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepBoost::operator*(const CLHEP::HepLorentzVector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepBoost::operator*(const CLHEP::HepLorentzVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:184:27
  t13.method("*", static_cast<CLHEP::HepLorentzVector (CLHEP::HepBoost::*)(const CLHEP::HepLorentzVector &)  const>(&CLHEP::HepBoost::operator*));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation CLHEP::HepBoost::operator*(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation CLHEP::HepBoost::operator*(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:189:22
  t13.method("*", static_cast<CLHEP::HepLorentzRotation (CLHEP::HepBoost::*)(const CLHEP::HepBoost &)  const>(&CLHEP::HepBoost::operator*));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation CLHEP::HepBoost::operator*(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation CLHEP::HepBoost::operator*(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:190:22
  t13.method("*", static_cast<CLHEP::HepLorentzRotation (CLHEP::HepBoost::*)(const CLHEP::HepRotation &)  const>(&CLHEP::HepBoost::operator*));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation CLHEP::HepBoost::operator*(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation CLHEP::HepBoost::operator*(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:191:22
  t13.method("*", static_cast<CLHEP::HepLorentzRotation (CLHEP::HepBoost::*)(const CLHEP::HepLorentzRotation &)  const>(&CLHEP::HepBoost::operator*));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for CLHEP::HepBoost CLHEP::HepBoost::inverse() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepBoost CLHEP::HepBoost::inverse()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:195:19
  t13.method("inverse", static_cast<CLHEP::HepBoost (CLHEP::HepBoost::*)()  const>(&CLHEP::HepBoost::inverse));

  DEBUG_MSG("Adding wrapper for CLHEP::HepBoost & CLHEP::HepBoost::invert() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepBoost & CLHEP::HepBoost::invert()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:201:21
  t13.method("invert", static_cast<CLHEP::HepBoost & (CLHEP::HepBoost::*)() >(&CLHEP::HepBoost::invert));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::getTolerance() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::getTolerance()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:211:24
  t13.method("CLHEP!HepBoost!getTolerance", static_cast<double (*)() >(&CLHEP::HepBoost::getTolerance));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepBoost::setTolerance(double) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepBoost::setTolerance(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:212:24
  t13.method("CLHEP!HepBoost!setTolerance", static_cast<double (*)(double) >(&CLHEP::HepBoost::setTolerance));

  /* End of CLHEP::HepBoost class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class CLHEP::HepLorentzRotation
   */


  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::HepLorentzRotation(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:60:11
  t14.constructor<const CLHEP::HepLorentzRotation &>(/*finalize=*/true);



  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::HepLorentzRotation(const CLHEP::HepRotation &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:64:20
  t14.constructor<const CLHEP::HepRotation &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::HepLorentzRotation(const CLHEP::HepRotationX &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:65:20
  t14.constructor<const CLHEP::HepRotationX &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::HepLorentzRotation(const CLHEP::HepRotationY &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:66:20
  t14.constructor<const CLHEP::HepRotationY &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::HepLorentzRotation(const CLHEP::HepRotationZ &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:67:20
  t14.constructor<const CLHEP::HepRotationZ &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::HepLorentzRotation(const CLHEP::HepBoost &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:68:20
  t14.constructor<const CLHEP::HepBoost &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::HepLorentzRotation(const CLHEP::HepBoostX &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:69:20
  t14.constructor<const CLHEP::HepBoostX &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::HepLorentzRotation(const CLHEP::HepBoostY &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:70:20
  t14.constructor<const CLHEP::HepBoostY &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::HepLorentzRotation(const CLHEP::HepBoostZ &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:71:20
  t14.constructor<const CLHEP::HepBoostZ &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::operator=(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::operator=(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:75:31
  t14.method("assign", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzRotation &) >(&CLHEP::HepLorentzRotation::operator=));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::operator=(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::operator=(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:76:31
  t14.method("assign", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepRotation &) >(&CLHEP::HepLorentzRotation::operator=));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::operator=(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::operator=(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:77:31
  t14.method("assign", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepBoost &) >(&CLHEP::HepLorentzRotation::operator=));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(double, double, double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(double, double, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:80:31
  t14.method("set", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(double, double, double) >(&CLHEP::HepLorentzRotation::set));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:81:31
  t14.method("set", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::Hep3Vector &) >(&CLHEP::HepLorentzRotation::set));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:82:31
  t14.method("set", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepRotation &) >(&CLHEP::HepLorentzRotation::set));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepRotationX &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepRotationX &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:83:31
  t14.method("set", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepRotationX &) >(&CLHEP::HepLorentzRotation::set));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepRotationY &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepRotationY &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:84:31
  t14.method("set", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepRotationY &) >(&CLHEP::HepLorentzRotation::set));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepRotationZ &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepRotationZ &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:85:31
  t14.method("set", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepRotationZ &) >(&CLHEP::HepLorentzRotation::set));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:86:31
  t14.method("set", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepBoost &) >(&CLHEP::HepLorentzRotation::set));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepBoostX &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepBoostX &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:87:31
  t14.method("set", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepBoostX &) >(&CLHEP::HepLorentzRotation::set));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepBoostY &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepBoostY &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:88:31
  t14.method("set", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepBoostY &) >(&CLHEP::HepLorentzRotation::set));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepBoostZ &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepBoostZ &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:89:31
  t14.method("set", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepBoostZ &) >(&CLHEP::HepLorentzRotation::set));


  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::HepLorentzRotation(double, double, double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:90:10
  t14.constructor<double, double, double>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::HepLorentzRotation(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:91:10
  t14.constructor<const CLHEP::Hep3Vector &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepBoost &, const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepBoost &, const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:94:31
  t14.method("set", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepBoost &, const CLHEP::HepRotation &) >(&CLHEP::HepLorentzRotation::set));


  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::HepLorentzRotation(const CLHEP::HepBoost &, const CLHEP::HepRotation &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:95:10
  t14.constructor<const CLHEP::HepBoost &, const CLHEP::HepRotation &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepRotation &, const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepRotation &, const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:98:31
  t14.method("set", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepRotation &, const CLHEP::HepBoost &) >(&CLHEP::HepLorentzRotation::set));


  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::HepLorentzRotation(const CLHEP::HepRotation &, const CLHEP::HepBoost &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:99:10
  t14.constructor<const CLHEP::HepRotation &, const CLHEP::HepBoost &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::HepLorentzRotation(const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:102:3
  t14.constructor<const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:116:24
  t14.method("set", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &) >(&CLHEP::HepLorentzRotation::set));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::setRows(const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::setRows(const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:122:24
  t14.method("setRows", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &, const CLHEP::HepLorentzVector &) >(&CLHEP::HepLorentzRotation::setRows));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepRep4x4 &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::set(const CLHEP::HepRep4x4 &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:128:31
  t14.method("set", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepRep4x4 &) >(&CLHEP::HepLorentzRotation::set));


  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::HepLorentzRotation(const CLHEP::HepRep4x4 &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:129:10
  t14.constructor<const CLHEP::HepRep4x4 &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::xx() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::xx()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:141:17
  t14.method("xx", static_cast<double (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::xx));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::xy() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::xy()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:142:17
  t14.method("xy", static_cast<double (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::xy));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::xz() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::xz()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:143:17
  t14.method("xz", static_cast<double (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::xz));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::xt() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::xt()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:144:17
  t14.method("xt", static_cast<double (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::xt));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::yx() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::yx()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:145:17
  t14.method("yx", static_cast<double (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::yx));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::yy() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::yy()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:146:17
  t14.method("yy", static_cast<double (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::yy));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::yz() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::yz()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:147:17
  t14.method("yz", static_cast<double (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::yz));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::yt() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::yt()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:148:17
  t14.method("yt", static_cast<double (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::yt));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::zx() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::zx()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:149:17
  t14.method("zx", static_cast<double (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::zx));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::zy() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::zy()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:150:17
  t14.method("zy", static_cast<double (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::zy));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::zz() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::zz()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:151:17
  t14.method("zz", static_cast<double (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::zz));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::zt() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::zt()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:152:17
  t14.method("zt", static_cast<double (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::zt));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::tx() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::tx()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:153:17
  t14.method("tx", static_cast<double (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::tx));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::ty() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::ty()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:154:17
  t14.method("ty", static_cast<double (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::ty));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::tz() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::tz()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:155:17
  t14.method("tz", static_cast<double (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::tz));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::tt() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::tt()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:156:17
  t14.method("tt", static_cast<double (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::tt));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::col1() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::col1()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:159:27
  t14.method("col1", static_cast<CLHEP::HepLorentzVector (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::col1));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::col2() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::col2()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:160:27
  t14.method("col2", static_cast<CLHEP::HepLorentzVector (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::col2));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::col3() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::col3()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:161:27
  t14.method("col3", static_cast<CLHEP::HepLorentzVector (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::col3));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::col4() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::col4()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:162:27
  t14.method("col4", static_cast<CLHEP::HepLorentzVector (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::col4));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::row1() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::row1()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:165:27
  t14.method("row1", static_cast<CLHEP::HepLorentzVector (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::row1));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::row2() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::row2()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:166:27
  t14.method("row2", static_cast<CLHEP::HepLorentzVector (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::row2));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::row3() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::row3()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:167:27
  t14.method("row3", static_cast<CLHEP::HepLorentzVector (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::row3));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::row4() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::row4()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:168:27
  t14.method("row4", static_cast<CLHEP::HepLorentzVector (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::row4));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRep4x4 CLHEP::HepLorentzRotation::rep4x4() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRep4x4 CLHEP::HepLorentzRotation::rep4x4()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:171:20
  t14.method("rep4x4", static_cast<CLHEP::HepRep4x4 (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::rep4x4));
  types.set_override_module(jl_base_module);


  DEBUG_MSG("Adding getindex method to wrap const CLHEP::HepLorentzRotation::HepLorentzRotation_row CLHEP::HepLorentzRotation::operator[](int) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:186:39
  t14.method("getindex",
    [](CLHEP::HepLorentzRotation& a, int i){
    return a[i];
  });

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::operator()(int, int) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::operator()(int, int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:189:10
  t14.method("paren", static_cast<double (CLHEP::HepLorentzRotation::*)(int, int)  const>(&CLHEP::HepLorentzRotation::operator()));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::decompose(CLHEP::Hep3Vector &, CLHEP::HepAxisAngle &) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepLorentzRotation::decompose(CLHEP::Hep3Vector &, CLHEP::HepAxisAngle &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:194:8
  t14.method("decompose", static_cast<void (CLHEP::HepLorentzRotation::*)(CLHEP::Hep3Vector &, CLHEP::HepAxisAngle &)  const>(&CLHEP::HepLorentzRotation::decompose));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::decompose(CLHEP::HepBoost &, CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepLorentzRotation::decompose(CLHEP::HepBoost &, CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:195:8
  t14.method("decompose", static_cast<void (CLHEP::HepLorentzRotation::*)(CLHEP::HepBoost &, CLHEP::HepRotation &)  const>(&CLHEP::HepLorentzRotation::decompose));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::decompose(CLHEP::HepAxisAngle &, CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepLorentzRotation::decompose(CLHEP::HepAxisAngle &, CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:198:8
  t14.method("decompose", static_cast<void (CLHEP::HepLorentzRotation::*)(CLHEP::HepAxisAngle &, CLHEP::Hep3Vector &)  const>(&CLHEP::HepLorentzRotation::decompose));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::decompose(CLHEP::HepRotation &, CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepLorentzRotation::decompose(CLHEP::HepRotation &, CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:199:8
  t14.method("decompose", static_cast<void (CLHEP::HepLorentzRotation::*)(CLHEP::HepRotation &, CLHEP::HepBoost &)  const>(&CLHEP::HepLorentzRotation::decompose));

  DEBUG_MSG("Adding wrapper for int CLHEP::HepLorentzRotation::compare(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: int CLHEP::HepLorentzRotation::compare(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:204:7
  t14.method("compare", static_cast<int (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzRotation &)  const>(&CLHEP::HepLorentzRotation::compare));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepLorentzRotation::operator==(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepLorentzRotation::operator==(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:208:15
  t14.method("==", static_cast<bool (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzRotation &)  const>(&CLHEP::HepLorentzRotation::operator==));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepLorentzRotation::operator!=(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepLorentzRotation::operator!=(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:209:15
  t14.method("!=", static_cast<bool (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzRotation &)  const>(&CLHEP::HepLorentzRotation::operator!=));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepLorentzRotation::operator<=(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepLorentzRotation::operator<=(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:210:15
  t14.method("<=", static_cast<bool (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzRotation &)  const>(&CLHEP::HepLorentzRotation::operator<=));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepLorentzRotation::operator>=(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepLorentzRotation::operator>=(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:211:15
  t14.method(">=", static_cast<bool (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzRotation &)  const>(&CLHEP::HepLorentzRotation::operator>=));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepLorentzRotation::operator<(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepLorentzRotation::operator<(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:212:15
  t14.method("<", static_cast<bool (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzRotation &)  const>(&CLHEP::HepLorentzRotation::operator<));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepLorentzRotation::operator>(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepLorentzRotation::operator>(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:213:15
  t14.method(">", static_cast<bool (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzRotation &)  const>(&CLHEP::HepLorentzRotation::operator>));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepLorentzRotation::isIdentity() (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepLorentzRotation::isIdentity()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:215:15
  t14.method("isIdentity", static_cast<bool (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::isIdentity));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::distance2(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::distance2(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:218:10
  t14.method("distance2", static_cast<double (CLHEP::HepLorentzRotation::*)(const CLHEP::HepBoost &)  const>(&CLHEP::HepLorentzRotation::distance2));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::distance2(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::distance2(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:219:10
  t14.method("distance2", static_cast<double (CLHEP::HepLorentzRotation::*)(const CLHEP::HepRotation &)  const>(&CLHEP::HepLorentzRotation::distance2));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::distance2(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::distance2(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:220:10
  t14.method("distance2", static_cast<double (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzRotation &)  const>(&CLHEP::HepLorentzRotation::distance2));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::howNear(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::howNear(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:223:10
  t14.method("howNear", static_cast<double (CLHEP::HepLorentzRotation::*)(const CLHEP::HepBoost &)  const>(&CLHEP::HepLorentzRotation::howNear));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::howNear(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::howNear(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:224:10
  t14.method("howNear", static_cast<double (CLHEP::HepLorentzRotation::*)(const CLHEP::HepRotation &)  const>(&CLHEP::HepLorentzRotation::howNear));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::howNear(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::howNear(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:225:10
  t14.method("howNear", static_cast<double (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzRotation &)  const>(&CLHEP::HepLorentzRotation::howNear));

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepLorentzRotation::isNear(const CLHEP::HepBoost &, double) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepLorentzRotation::isNear(const CLHEP::HepBoost &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:227:8
  t14.method("isNear", static_cast<bool (CLHEP::HepLorentzRotation::*)(const CLHEP::HepBoost &, double)  const>(&CLHEP::HepLorentzRotation::isNear));
  t14.method("isNear", [](CLHEP::HepLorentzRotation const& a, const CLHEP::HepBoost & arg0)->bool{ return a.isNear(arg0); });
  t14.method("isNear", [](CLHEP::HepLorentzRotation const* a, const CLHEP::HepBoost & arg0)->bool{ return a->isNear(arg0); });

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepLorentzRotation::isNear(const CLHEP::HepRotation &, double) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepLorentzRotation::isNear(const CLHEP::HepRotation &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:229:8
  t14.method("isNear", static_cast<bool (CLHEP::HepLorentzRotation::*)(const CLHEP::HepRotation &, double)  const>(&CLHEP::HepLorentzRotation::isNear));
  t14.method("isNear", [](CLHEP::HepLorentzRotation const& a, const CLHEP::HepRotation & arg0)->bool{ return a.isNear(arg0); });
  t14.method("isNear", [](CLHEP::HepLorentzRotation const* a, const CLHEP::HepRotation & arg0)->bool{ return a->isNear(arg0); });

  DEBUG_MSG("Adding wrapper for bool CLHEP::HepLorentzRotation::isNear(const CLHEP::HepLorentzRotation &, double) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::HepLorentzRotation::isNear(const CLHEP::HepLorentzRotation &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:231:8
  t14.method("isNear", static_cast<bool (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzRotation &, double)  const>(&CLHEP::HepLorentzRotation::isNear));
  t14.method("isNear", [](CLHEP::HepLorentzRotation const& a, const CLHEP::HepLorentzRotation & arg0)->bool{ return a.isNear(arg0); });
  t14.method("isNear", [](CLHEP::HepLorentzRotation const* a, const CLHEP::HepLorentzRotation & arg0)->bool{ return a->isNear(arg0); });

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::norm2() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::norm2()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:236:10
  t14.method("norm2", static_cast<double (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::norm2));

  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::rectify() (" __HERE__ ")");
  // signature to use in the veto list: void CLHEP::HepLorentzRotation::rectify()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:240:8
  t14.method("rectify", static_cast<void (CLHEP::HepLorentzRotation::*)() >(&CLHEP::HepLorentzRotation::rectify));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::vectorMultiplication(const CLHEP::HepLorentzVector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::vectorMultiplication(const CLHEP::HepLorentzVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:252:27
  t14.method("vectorMultiplication", static_cast<CLHEP::HepLorentzVector (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzVector &)  const>(&CLHEP::HepLorentzRotation::vectorMultiplication));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::operator()(const CLHEP::HepLorentzVector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::operator()(const CLHEP::HepLorentzVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:253:27
  t14.method("paren", static_cast<CLHEP::HepLorentzVector (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzVector &)  const>(&CLHEP::HepLorentzRotation::operator()));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::operator*(const CLHEP::HepLorentzVector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzVector CLHEP::HepLorentzRotation::operator*(const CLHEP::HepLorentzVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:254:27
  t14.method("*", static_cast<CLHEP::HepLorentzVector (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzVector &)  const>(&CLHEP::HepLorentzRotation::operator*));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation CLHEP::HepLorentzRotation::matrixMultiplication(const CLHEP::HepRep4x4 &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation CLHEP::HepLorentzRotation::matrixMultiplication(const CLHEP::HepRep4x4 &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:259:22
  t14.method("matrixMultiplication", static_cast<CLHEP::HepLorentzRotation (CLHEP::HepLorentzRotation::*)(const CLHEP::HepRep4x4 &)  const>(&CLHEP::HepLorentzRotation::matrixMultiplication));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation CLHEP::HepLorentzRotation::operator*(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation CLHEP::HepLorentzRotation::operator*(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:261:29
  t14.method("*", static_cast<CLHEP::HepLorentzRotation (CLHEP::HepLorentzRotation::*)(const CLHEP::HepBoost &)  const>(&CLHEP::HepLorentzRotation::operator*));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation CLHEP::HepLorentzRotation::operator*(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation CLHEP::HepLorentzRotation::operator*(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:262:29
  t14.method("*", static_cast<CLHEP::HepLorentzRotation (CLHEP::HepLorentzRotation::*)(const CLHEP::HepRotation &)  const>(&CLHEP::HepLorentzRotation::operator*));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation CLHEP::HepLorentzRotation::operator*(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation CLHEP::HepLorentzRotation::operator*(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:263:29
  t14.method("*", static_cast<CLHEP::HepLorentzRotation (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzRotation &)  const>(&CLHEP::HepLorentzRotation::operator*));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::operator*=(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::operator*=(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:266:32
  t14.method("mult!", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepBoost &) >(&CLHEP::HepLorentzRotation::operator*=));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::operator*=(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::operator*=(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:267:32
  t14.method("mult!", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepRotation &) >(&CLHEP::HepLorentzRotation::operator*=));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::operator*=(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::operator*=(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:268:32
  t14.method("mult!", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzRotation &) >(&CLHEP::HepLorentzRotation::operator*=));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::transform(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::transform(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:269:32
  t14.method("transform", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepBoost &) >(&CLHEP::HepLorentzRotation::transform));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::transform(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::transform(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:270:32
  t14.method("transform", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepRotation &) >(&CLHEP::HepLorentzRotation::transform));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::transform(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::transform(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:271:32
  t14.method("transform", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::HepLorentzRotation &) >(&CLHEP::HepLorentzRotation::transform));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::rotateX(double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::rotateX(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:279:24
  t14.method("rotateX", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(double) >(&CLHEP::HepLorentzRotation::rotateX));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::rotateY(double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::rotateY(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:282:24
  t14.method("rotateY", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(double) >(&CLHEP::HepLorentzRotation::rotateY));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::rotateZ(double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::rotateZ(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:285:24
  t14.method("rotateZ", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(double) >(&CLHEP::HepLorentzRotation::rotateZ));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::rotate(double, const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::rotate(double, const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:288:31
  t14.method("rotate", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(double, const CLHEP::Hep3Vector &) >(&CLHEP::HepLorentzRotation::rotate));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::rotate(double, const CLHEP::Hep3Vector *) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::rotate(double, const CLHEP::Hep3Vector *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:289:31
  t14.method("rotate", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(double, const CLHEP::Hep3Vector *) >(&CLHEP::HepLorentzRotation::rotate));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::boostX(double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::boostX(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:292:24
  t14.method("boostX", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(double) >(&CLHEP::HepLorentzRotation::boostX));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::boostY(double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::boostY(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:295:24
  t14.method("boostY", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(double) >(&CLHEP::HepLorentzRotation::boostY));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::boostZ(double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::boostZ(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:298:24
  t14.method("boostZ", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(double) >(&CLHEP::HepLorentzRotation::boostZ));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::boost(double, double, double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::boost(double, double, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:301:31
  t14.method("boost", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(double, double, double) >(&CLHEP::HepLorentzRotation::boost));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::boost(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::boost(const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:302:31
  t14.method("boost", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)(const CLHEP::Hep3Vector &) >(&CLHEP::HepLorentzRotation::boost));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation CLHEP::HepLorentzRotation::inverse() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation CLHEP::HepLorentzRotation::inverse()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:305:29
  t14.method("inverse", static_cast<CLHEP::HepLorentzRotation (CLHEP::HepLorentzRotation::*)()  const>(&CLHEP::HepLorentzRotation::inverse));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::invert() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation & CLHEP::HepLorentzRotation::invert()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:308:31
  t14.method("invert", static_cast<CLHEP::HepLorentzRotation & (CLHEP::HepLorentzRotation::*)() >(&CLHEP::HepLorentzRotation::invert));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::getTolerance() (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::getTolerance()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:318:24
  t14.method("CLHEP!HepLorentzRotation!getTolerance", static_cast<double (*)() >(&CLHEP::HepLorentzRotation::getTolerance));

  DEBUG_MSG("Adding wrapper for double CLHEP::HepLorentzRotation::setTolerance(double) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::HepLorentzRotation::setTolerance(double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:319:24
  t14.method("CLHEP!HepLorentzRotation!setTolerance", static_cast<double (*)(double) >(&CLHEP::HepLorentzRotation::setTolerance));

  /* End of CLHEP::HepLorentzRotation class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4PVData
   */

  DEBUG_MSG("Adding wrapper for void G4PVData::initialize() (" __HERE__ ")");
  // signature to use in the veto list: void G4PVData::initialize()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:65:10
  t15.method("initialize", static_cast<void (G4PVData::*)() >(&G4PVData::initialize));

  DEBUG_MSG("Adding frot methods  to provide read access to the field frot (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:71:23
  // signature to use in the veto list: G4PVData::frot
  t15.method("frot", [](const G4PVData& a) -> G4RotationMatrix * { return a.frot; });
  t15.method("frot", [](G4PVData& a) -> G4RotationMatrix * { return a.frot; });
  t15.method("frot", [](const G4PVData* a) -> G4RotationMatrix * { return a->frot; });
  t15.method("frot", [](G4PVData* a) -> G4RotationMatrix * { return a->frot; });
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:71:23
  // signature to use in the veto list: G4PVData::frot
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding frot! methods to provide write access to the field frot (" __HERE__ ")");
  t15.method("frot!", [](G4PVData& a, G4RotationMatrix * val) -> G4RotationMatrix * { return a.frot = val; });

  DEBUG_MSG("Adding frot! methods to provide write access to the field frot (" __HERE__ ")");
  t15.method("frot!", [](G4PVData* a, G4RotationMatrix * val) -> G4RotationMatrix * { return a->frot = val; });

  DEBUG_MSG("Adding tx methods  to provide read access to the field tx (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:72:14
  // signature to use in the veto list: G4PVData::tx
  t15.method("tx", [](const G4PVData& a) -> G4double { return a.tx; });
  t15.method("tx", [](G4PVData& a) -> G4double { return a.tx; });
  t15.method("tx", [](const G4PVData* a) -> G4double { return a->tx; });
  t15.method("tx", [](G4PVData* a) -> G4double { return a->tx; });
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:72:14
  // signature to use in the veto list: G4PVData::tx
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding tx! methods to provide write access to the field tx (" __HERE__ ")");
  t15.method("tx!", [](G4PVData& a, G4double val) -> G4double { return a.tx = val; });

  DEBUG_MSG("Adding tx! methods to provide write access to the field tx (" __HERE__ ")");
  t15.method("tx!", [](G4PVData* a, G4double val) -> G4double { return a->tx = val; });

  DEBUG_MSG("Adding ty methods  to provide read access to the field ty (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:72:23
  // signature to use in the veto list: G4PVData::ty
  t15.method("ty", [](const G4PVData& a) -> G4double { return a.ty; });
  t15.method("ty", [](G4PVData& a) -> G4double { return a.ty; });
  t15.method("ty", [](const G4PVData* a) -> G4double { return a->ty; });
  t15.method("ty", [](G4PVData* a) -> G4double { return a->ty; });
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:72:23
  // signature to use in the veto list: G4PVData::ty
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding ty! methods to provide write access to the field ty (" __HERE__ ")");
  t15.method("ty!", [](G4PVData& a, G4double val) -> G4double { return a.ty = val; });

  DEBUG_MSG("Adding ty! methods to provide write access to the field ty (" __HERE__ ")");
  t15.method("ty!", [](G4PVData* a, G4double val) -> G4double { return a->ty = val; });

  DEBUG_MSG("Adding tz methods  to provide read access to the field tz (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:72:32
  // signature to use in the veto list: G4PVData::tz
  t15.method("tz", [](const G4PVData& a) -> G4double { return a.tz; });
  t15.method("tz", [](G4PVData& a) -> G4double { return a.tz; });
  t15.method("tz", [](const G4PVData* a) -> G4double { return a->tz; });
  t15.method("tz", [](G4PVData* a) -> G4double { return a->tz; });
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:72:32
  // signature to use in the veto list: G4PVData::tz
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding tz! methods to provide write access to the field tz (" __HERE__ ")");
  t15.method("tz!", [](G4PVData& a, G4double val) -> G4double { return a.tz = val; });

  DEBUG_MSG("Adding tz! methods to provide write access to the field tz (" __HERE__ ")");
  t15.method("tz!", [](G4PVData* a, G4double val) -> G4double { return a->tz = val; });

  /* End of G4PVData class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4VPhysicalVolume
   */

  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for G4bool G4VPhysicalVolume::operator==(const G4VPhysicalVolume &) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VPhysicalVolume::operator==(const G4VPhysicalVolume &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:107:19
  t16.method("==", static_cast<G4bool (G4VPhysicalVolume::*)(const G4VPhysicalVolume &)  const>(&G4VPhysicalVolume::operator==));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for G4RotationMatrix * G4VPhysicalVolume::GetObjectRotation() (" __HERE__ ")");
  // signature to use in the veto list: G4RotationMatrix * G4VPhysicalVolume::GetObjectRotation()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:117:23
  t16.method("GetObjectRotation", static_cast<G4RotationMatrix * (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::GetObjectRotation));

  DEBUG_MSG("Adding wrapper for G4RotationMatrix G4VPhysicalVolume::GetObjectRotationValue() (" __HERE__ ")");
  // signature to use in the veto list: G4RotationMatrix G4VPhysicalVolume::GetObjectRotationValue()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:118:23
  t16.method("GetObjectRotationValue", static_cast<G4RotationMatrix (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::GetObjectRotationValue));

  DEBUG_MSG("Adding wrapper for G4ThreeVector G4VPhysicalVolume::GetObjectTranslation() (" __HERE__ ")");
  // signature to use in the veto list: G4ThreeVector G4VPhysicalVolume::GetObjectTranslation()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:119:20
  t16.method("GetObjectTranslation", static_cast<G4ThreeVector (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::GetObjectTranslation));

  DEBUG_MSG("Adding wrapper for const G4RotationMatrix * G4VPhysicalVolume::GetFrameRotation() (" __HERE__ ")");
  // signature to use in the veto list: const G4RotationMatrix * G4VPhysicalVolume::GetFrameRotation()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:121:29
  t16.method("GetFrameRotation", static_cast<const G4RotationMatrix * (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::GetFrameRotation));

  DEBUG_MSG("Adding wrapper for G4ThreeVector G4VPhysicalVolume::GetFrameTranslation() (" __HERE__ ")");
  // signature to use in the veto list: G4ThreeVector G4VPhysicalVolume::GetFrameTranslation()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:122:19
  t16.method("GetFrameTranslation", static_cast<G4ThreeVector (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::GetFrameTranslation));

  DEBUG_MSG("Adding wrapper for const G4ThreeVector G4VPhysicalVolume::GetTranslation() (" __HERE__ ")");
  // signature to use in the veto list: const G4ThreeVector G4VPhysicalVolume::GetTranslation()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:128:25
  t16.method("GetTranslation", static_cast<const G4ThreeVector (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::GetTranslation));

  DEBUG_MSG("Adding wrapper for const G4RotationMatrix * G4VPhysicalVolume::GetRotation() (" __HERE__ ")");
  // signature to use in the veto list: const G4RotationMatrix * G4VPhysicalVolume::GetRotation()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:129:29
  t16.method("GetRotation", static_cast<const G4RotationMatrix * (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::GetRotation));

  DEBUG_MSG("Adding wrapper for void G4VPhysicalVolume::SetTranslation(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: void G4VPhysicalVolume::SetTranslation(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:135:10
  t16.method("SetTranslation", static_cast<void (G4VPhysicalVolume::*)(const G4ThreeVector &) >(&G4VPhysicalVolume::SetTranslation));

  DEBUG_MSG("Adding wrapper for G4RotationMatrix * G4VPhysicalVolume::GetRotation() (" __HERE__ ")");
  // signature to use in the veto list: G4RotationMatrix * G4VPhysicalVolume::GetRotation()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:136:23
  t16.method("GetRotation", static_cast<G4RotationMatrix * (G4VPhysicalVolume::*)() >(&G4VPhysicalVolume::GetRotation));

  DEBUG_MSG("Adding wrapper for void G4VPhysicalVolume::SetRotation(G4RotationMatrix *) (" __HERE__ ")");
  // signature to use in the veto list: void G4VPhysicalVolume::SetRotation(G4RotationMatrix *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:137:10
  t16.method("SetRotation", static_cast<void (G4VPhysicalVolume::*)(G4RotationMatrix *) >(&G4VPhysicalVolume::SetRotation));

  DEBUG_MSG("Adding wrapper for G4LogicalVolume * G4VPhysicalVolume::GetLogicalVolume() (" __HERE__ ")");
  // signature to use in the veto list: G4LogicalVolume * G4VPhysicalVolume::GetLogicalVolume()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:142:29
  t16.method("GetLogicalVolume", static_cast<G4LogicalVolume * (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::GetLogicalVolume));

  DEBUG_MSG("Adding wrapper for void G4VPhysicalVolume::SetLogicalVolume(G4LogicalVolume *) (" __HERE__ ")");
  // signature to use in the veto list: void G4VPhysicalVolume::SetLogicalVolume(G4LogicalVolume *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:144:17
  t16.method("SetLogicalVolume", static_cast<void (G4VPhysicalVolume::*)(G4LogicalVolume *) >(&G4VPhysicalVolume::SetLogicalVolume));

  DEBUG_MSG("Adding wrapper for G4LogicalVolume * G4VPhysicalVolume::GetMotherLogical() (" __HERE__ ")");
  // signature to use in the veto list: G4LogicalVolume * G4VPhysicalVolume::GetMotherLogical()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:147:29
  t16.method("GetMotherLogical", static_cast<G4LogicalVolume * (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::GetMotherLogical));

  DEBUG_MSG("Adding wrapper for void G4VPhysicalVolume::SetMotherLogical(G4LogicalVolume *) (" __HERE__ ")");
  // signature to use in the veto list: void G4VPhysicalVolume::SetMotherLogical(G4LogicalVolume *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:149:17
  t16.method("SetMotherLogical", static_cast<void (G4VPhysicalVolume::*)(G4LogicalVolume *) >(&G4VPhysicalVolume::SetMotherLogical));

  DEBUG_MSG("Adding wrapper for const G4String & G4VPhysicalVolume::GetName() (" __HERE__ ")");
  // signature to use in the veto list: const G4String & G4VPhysicalVolume::GetName()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:152:28
  t16.method("GetName", static_cast<const G4String & (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::GetName));

  DEBUG_MSG("Adding wrapper for void G4VPhysicalVolume::SetName(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4VPhysicalVolume::SetName(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:154:10
  t16.method("SetName", static_cast<void (G4VPhysicalVolume::*)(const G4String &) >(&G4VPhysicalVolume::SetName));

  DEBUG_MSG("Adding wrapper for G4int G4VPhysicalVolume::GetMultiplicity() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4VPhysicalVolume::GetMultiplicity()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:157:19
  t16.method("GetMultiplicity", static_cast<G4int (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::GetMultiplicity));

  DEBUG_MSG("Adding wrapper for EVolume G4VPhysicalVolume::VolumeType() (" __HERE__ ")");
  // signature to use in the veto list: EVolume G4VPhysicalVolume::VolumeType()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:163:21
  t16.method("VolumeType", static_cast<EVolume (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::VolumeType));

  DEBUG_MSG("Adding wrapper for G4bool G4VPhysicalVolume::IsMany() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VPhysicalVolume::IsMany()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:165:20
  t16.method("IsMany", static_cast<G4bool (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::IsMany));

  DEBUG_MSG("Adding wrapper for G4int G4VPhysicalVolume::GetCopyNo() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4VPhysicalVolume::GetCopyNo()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:167:19
  t16.method("GetCopyNo", static_cast<G4int (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::GetCopyNo));

  DEBUG_MSG("Adding wrapper for void G4VPhysicalVolume::SetCopyNo(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4VPhysicalVolume::SetCopyNo(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:169:19
  t16.method("SetCopyNo", static_cast<void (G4VPhysicalVolume::*)(G4int) >(&G4VPhysicalVolume::SetCopyNo));

  DEBUG_MSG("Adding wrapper for G4bool G4VPhysicalVolume::IsReplicated() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VPhysicalVolume::IsReplicated()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:171:20
  t16.method("IsReplicated", static_cast<G4bool (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::IsReplicated));

  DEBUG_MSG("Adding wrapper for G4bool G4VPhysicalVolume::IsParameterised() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VPhysicalVolume::IsParameterised()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:174:20
  t16.method("IsParameterised", static_cast<G4bool (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::IsParameterised));

  DEBUG_MSG("Adding wrapper for G4VPVParameterisation * G4VPhysicalVolume::GetParameterisation() (" __HERE__ ")");
  // signature to use in the veto list: G4VPVParameterisation * G4VPhysicalVolume::GetParameterisation()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:177:36
  t16.method("GetParameterisation", static_cast<G4VPVParameterisation * (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::GetParameterisation));

  DEBUG_MSG("Adding wrapper for void G4VPhysicalVolume::GetReplicationData(EAxis &, G4int &, G4double &, G4double &, G4bool &) (" __HERE__ ")");
  // signature to use in the veto list: void G4VPhysicalVolume::GetReplicationData(EAxis &, G4int &, G4double &, G4double &, G4bool &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:180:18
  t16.method("GetReplicationData", static_cast<void (G4VPhysicalVolume::*)(EAxis &, G4int &, G4double &, G4double &, G4bool &)  const>(&G4VPhysicalVolume::GetReplicationData));

  DEBUG_MSG("Adding wrapper for G4bool G4VPhysicalVolume::IsRegularStructure() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VPhysicalVolume::IsRegularStructure()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:186:20
  t16.method("IsRegularStructure", static_cast<G4bool (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::IsRegularStructure));

  DEBUG_MSG("Adding wrapper for G4int G4VPhysicalVolume::GetRegularStructureId() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4VPhysicalVolume::GetRegularStructureId()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:188:19
  t16.method("GetRegularStructureId", static_cast<G4int (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::GetRegularStructureId));

  DEBUG_MSG("Adding wrapper for G4bool G4VPhysicalVolume::CheckOverlaps(G4int, G4double, G4bool, G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VPhysicalVolume::CheckOverlaps(G4int, G4double, G4bool, G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:193:20
  t16.method("CheckOverlaps", static_cast<G4bool (G4VPhysicalVolume::*)(G4int, G4double, G4bool, G4int) >(&G4VPhysicalVolume::CheckOverlaps));
  t16.method("CheckOverlaps", [](G4VPhysicalVolume& a)->G4bool{ return a.CheckOverlaps(); });
  t16.method("CheckOverlaps", [](G4VPhysicalVolume& a, G4int arg0)->G4bool{ return a.CheckOverlaps(arg0); });
  t16.method("CheckOverlaps", [](G4VPhysicalVolume& a, G4int arg0, G4double arg1)->G4bool{ return a.CheckOverlaps(arg0, arg1); });
  t16.method("CheckOverlaps", [](G4VPhysicalVolume& a, G4int arg0, G4double arg1, G4bool arg2)->G4bool{ return a.CheckOverlaps(arg0, arg1, arg2); });
  t16.method("CheckOverlaps", [](G4VPhysicalVolume* a)->G4bool{ return a->CheckOverlaps(); });
  t16.method("CheckOverlaps", [](G4VPhysicalVolume* a, G4int arg0)->G4bool{ return a->CheckOverlaps(arg0); });
  t16.method("CheckOverlaps", [](G4VPhysicalVolume* a, G4int arg0, G4double arg1)->G4bool{ return a->CheckOverlaps(arg0, arg1); });
  t16.method("CheckOverlaps", [](G4VPhysicalVolume* a, G4int arg0, G4double arg1, G4bool arg2)->G4bool{ return a->CheckOverlaps(arg0, arg1, arg2); });

  DEBUG_MSG("Adding wrapper for G4int G4VPhysicalVolume::GetInstanceID() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4VPhysicalVolume::GetInstanceID()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:208:18
  t16.method("GetInstanceID", static_cast<G4int (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::GetInstanceID));

  DEBUG_MSG("Adding wrapper for void G4VPhysicalVolume::Clean() (" __HERE__ ")");
  // signature to use in the veto list: void G4VPhysicalVolume::Clean()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:214:17
  t16.method("G4VPhysicalVolume!Clean", static_cast<void (*)() >(&G4VPhysicalVolume::Clean));

  DEBUG_MSG("Adding wrapper for EVolume G4VPhysicalVolume::DeduceVolumeType() (" __HERE__ ")");
  // signature to use in the veto list: EVolume G4VPhysicalVolume::DeduceVolumeType()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPhysicalVolume.hh:217:20
  t16.method("DeduceVolumeType", static_cast<EVolume (G4VPhysicalVolume::*)()  const>(&G4VPhysicalVolume::DeduceVolumeType));

  /* End of G4VPhysicalVolume class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4LogicalVolume
   */


  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::G4LogicalVolume(G4VSolid *, G4Material *, const G4String &, G4FieldManager *, G4VSensitiveDetector *, G4UserLimits *, G4bool) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:186:5
  t18.constructor<G4VSolid *, G4Material *, const G4String &>(/*finalize=*/false);
  t18.constructor<G4VSolid *, G4Material *, const G4String &, G4FieldManager *>(/*finalize=*/false);
  t18.constructor<G4VSolid *, G4Material *, const G4String &, G4FieldManager *, G4VSensitiveDetector *>(/*finalize=*/false);
  t18.constructor<G4VSolid *, G4Material *, const G4String &, G4FieldManager *, G4VSensitiveDetector *, G4UserLimits *>(/*finalize=*/false);
  t18.constructor<G4VSolid *, G4Material *, const G4String &, G4FieldManager *, G4VSensitiveDetector *, G4UserLimits *, G4bool>(/*finalize=*/false);

  DEBUG_MSG("Adding wrapper for const G4String & G4LogicalVolume::GetName() (" __HERE__ ")");
  // signature to use in the veto list: const G4String & G4LogicalVolume::GetName()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:209:28
  t18.method("GetName", static_cast<const G4String & (G4LogicalVolume::*)()  const>(&G4LogicalVolume::GetName));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::SetName(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::SetName(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:210:10
  t18.method("SetName", static_cast<void (G4LogicalVolume::*)(const G4String &) >(&G4LogicalVolume::SetName));

  DEBUG_MSG("Adding wrapper for size_t G4LogicalVolume::GetNoDaughters() (" __HERE__ ")");
  // signature to use in the veto list: size_t G4LogicalVolume::GetNoDaughters()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:213:24
  t18.method("GetNoDaughters", static_cast<size_t (G4LogicalVolume::*)()  const>(&G4LogicalVolume::GetNoDaughters));

  DEBUG_MSG("Adding wrapper for G4VPhysicalVolume * G4LogicalVolume::GetDaughter(const size_t) (" __HERE__ ")");
  // signature to use in the veto list: G4VPhysicalVolume * G4LogicalVolume::GetDaughter(const size_t)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:215:31
  t18.method("GetDaughter", static_cast<G4VPhysicalVolume * (G4LogicalVolume::*)(const size_t)  const>(&G4LogicalVolume::GetDaughter));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::AddDaughter(G4VPhysicalVolume *) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::AddDaughter(G4VPhysicalVolume *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:218:10
  t18.method("AddDaughter", static_cast<void (G4LogicalVolume::*)(G4VPhysicalVolume *) >(&G4LogicalVolume::AddDaughter));

  DEBUG_MSG("Adding wrapper for G4bool G4LogicalVolume::IsDaughter(const G4VPhysicalVolume *) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4LogicalVolume::IsDaughter(const G4VPhysicalVolume *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:220:19
  t18.method("IsDaughter", static_cast<G4bool (G4LogicalVolume::*)(const G4VPhysicalVolume *)  const>(&G4LogicalVolume::IsDaughter));

  DEBUG_MSG("Adding wrapper for G4bool G4LogicalVolume::IsAncestor(const G4VPhysicalVolume *) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4LogicalVolume::IsAncestor(const G4VPhysicalVolume *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:223:12
  t18.method("IsAncestor", static_cast<G4bool (G4LogicalVolume::*)(const G4VPhysicalVolume *)  const>(&G4LogicalVolume::IsAncestor));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::RemoveDaughter(const G4VPhysicalVolume *) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::RemoveDaughter(const G4VPhysicalVolume *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:227:10
  t18.method("RemoveDaughter", static_cast<void (G4LogicalVolume::*)(const G4VPhysicalVolume *) >(&G4LogicalVolume::RemoveDaughter));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::ClearDaughters() (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::ClearDaughters()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:230:10
  t18.method("ClearDaughters", static_cast<void (G4LogicalVolume::*)() >(&G4LogicalVolume::ClearDaughters));

  DEBUG_MSG("Adding wrapper for G4int G4LogicalVolume::TotalVolumeEntities() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4LogicalVolume::TotalVolumeEntities()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:233:11
  t18.method("TotalVolumeEntities", static_cast<G4int (G4LogicalVolume::*)()  const>(&G4LogicalVolume::TotalVolumeEntities));

  DEBUG_MSG("Adding wrapper for EVolume G4LogicalVolume::CharacteriseDaughters() (" __HERE__ ")");
  // signature to use in the veto list: EVolume G4LogicalVolume::CharacteriseDaughters()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:236:20
  t18.method("CharacteriseDaughters", static_cast<EVolume (G4LogicalVolume::*)()  const>(&G4LogicalVolume::CharacteriseDaughters));

  DEBUG_MSG("Adding wrapper for EVolume G4LogicalVolume::DeduceDaughtersType() (" __HERE__ ")");
  // signature to use in the veto list: EVolume G4LogicalVolume::DeduceDaughtersType()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:238:20
  t18.method("DeduceDaughtersType", static_cast<EVolume (G4LogicalVolume::*)()  const>(&G4LogicalVolume::DeduceDaughtersType));

  DEBUG_MSG("Adding wrapper for G4VSolid * G4LogicalVolume::GetSolid() (" __HERE__ ")");
  // signature to use in the veto list: G4VSolid * G4LogicalVolume::GetSolid()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:241:15
  t18.method("GetSolid", static_cast<G4VSolid * (G4LogicalVolume::*)()  const>(&G4LogicalVolume::GetSolid));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::SetSolid(G4VSolid *) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::SetSolid(G4VSolid *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:242:10
  t18.method("SetSolid", static_cast<void (G4LogicalVolume::*)(G4VSolid *) >(&G4LogicalVolume::SetSolid));

  DEBUG_MSG("Adding wrapper for G4Material * G4LogicalVolume::GetMaterial() (" __HERE__ ")");
  // signature to use in the veto list: G4Material * G4LogicalVolume::GetMaterial()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:245:17
  t18.method("GetMaterial", static_cast<G4Material * (G4LogicalVolume::*)()  const>(&G4LogicalVolume::GetMaterial));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::SetMaterial(G4Material *) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::SetMaterial(G4Material *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:246:10
  t18.method("SetMaterial", static_cast<void (G4LogicalVolume::*)(G4Material *) >(&G4LogicalVolume::SetMaterial));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::UpdateMaterial(G4Material *) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::UpdateMaterial(G4Material *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:248:10
  t18.method("UpdateMaterial", static_cast<void (G4LogicalVolume::*)(G4Material *) >(&G4LogicalVolume::UpdateMaterial));

  DEBUG_MSG("Adding wrapper for G4double G4LogicalVolume::GetMass(G4bool, G4bool, G4Material *) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4LogicalVolume::GetMass(G4bool, G4bool, G4Material *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:252:14
  t18.method("GetMass", static_cast<G4double (G4LogicalVolume::*)(G4bool, G4bool, G4Material *) >(&G4LogicalVolume::GetMass));
  t18.method("GetMass", [](G4LogicalVolume& a)->G4double{ return a.GetMass(); });
  t18.method("GetMass", [](G4LogicalVolume& a, G4bool arg0)->G4double{ return a.GetMass(arg0); });
  t18.method("GetMass", [](G4LogicalVolume& a, G4bool arg0, G4bool arg1)->G4double{ return a.GetMass(arg0, arg1); });
  t18.method("GetMass", [](G4LogicalVolume* a)->G4double{ return a->GetMass(); });
  t18.method("GetMass", [](G4LogicalVolume* a, G4bool arg0)->G4double{ return a->GetMass(arg0); });
  t18.method("GetMass", [](G4LogicalVolume* a, G4bool arg0, G4bool arg1)->G4double{ return a->GetMass(arg0, arg1); });

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::ResetMass() (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::ResetMass()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:267:10
  t18.method("ResetMass", static_cast<void (G4LogicalVolume::*)() >(&G4LogicalVolume::ResetMass));

  DEBUG_MSG("Adding wrapper for G4FieldManager * G4LogicalVolume::GetFieldManager() (" __HERE__ ")");
  // signature to use in the veto list: G4FieldManager * G4LogicalVolume::GetFieldManager()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:272:21
  t18.method("GetFieldManager", static_cast<G4FieldManager * (G4LogicalVolume::*)()  const>(&G4LogicalVolume::GetFieldManager));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::SetFieldManager(G4FieldManager *, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::SetFieldManager(G4FieldManager *, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:274:10
  t18.method("SetFieldManager", static_cast<void (G4LogicalVolume::*)(G4FieldManager *, G4bool) >(&G4LogicalVolume::SetFieldManager));

  DEBUG_MSG("Adding wrapper for G4VSensitiveDetector * G4LogicalVolume::GetSensitiveDetector() (" __HERE__ ")");
  // signature to use in the veto list: G4VSensitiveDetector * G4LogicalVolume::GetSensitiveDetector()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:281:27
  t18.method("GetSensitiveDetector", static_cast<G4VSensitiveDetector * (G4LogicalVolume::*)()  const>(&G4LogicalVolume::GetSensitiveDetector));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::SetSensitiveDetector(G4VSensitiveDetector *) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::SetSensitiveDetector(G4VSensitiveDetector *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:283:10
  t18.method("SetSensitiveDetector", static_cast<void (G4LogicalVolume::*)(G4VSensitiveDetector *) >(&G4LogicalVolume::SetSensitiveDetector));

  DEBUG_MSG("Adding wrapper for G4UserLimits * G4LogicalVolume::GetUserLimits() (" __HERE__ ")");
  // signature to use in the veto list: G4UserLimits * G4LogicalVolume::GetUserLimits()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:286:26
  t18.method("GetUserLimits", static_cast<G4UserLimits * (G4LogicalVolume::*)()  const>(&G4LogicalVolume::GetUserLimits));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::SetUserLimits(G4UserLimits *) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::SetUserLimits(G4UserLimits *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:287:17
  t18.method("SetUserLimits", static_cast<void (G4LogicalVolume::*)(G4UserLimits *) >(&G4LogicalVolume::SetUserLimits));

  DEBUG_MSG("Adding wrapper for G4SmartVoxelHeader * G4LogicalVolume::GetVoxelHeader() (" __HERE__ ")");
  // signature to use in the veto list: G4SmartVoxelHeader * G4LogicalVolume::GetVoxelHeader()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:290:32
  t18.method("GetVoxelHeader", static_cast<G4SmartVoxelHeader * (G4LogicalVolume::*)()  const>(&G4LogicalVolume::GetVoxelHeader));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::SetVoxelHeader(G4SmartVoxelHeader *) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::SetVoxelHeader(G4SmartVoxelHeader *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:291:17
  t18.method("SetVoxelHeader", static_cast<void (G4LogicalVolume::*)(G4SmartVoxelHeader *) >(&G4LogicalVolume::SetVoxelHeader));

  DEBUG_MSG("Adding wrapper for G4double G4LogicalVolume::GetSmartless() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4LogicalVolume::GetSmartless()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:294:21
  t18.method("GetSmartless", static_cast<G4double (G4LogicalVolume::*)()  const>(&G4LogicalVolume::GetSmartless));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::SetSmartless(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::SetSmartless(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:295:17
  t18.method("SetSmartless", static_cast<void (G4LogicalVolume::*)(G4double) >(&G4LogicalVolume::SetSmartless));

  DEBUG_MSG("Adding wrapper for G4bool G4LogicalVolume::IsToOptimise() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4LogicalVolume::IsToOptimise()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:298:19
  t18.method("IsToOptimise", static_cast<G4bool (G4LogicalVolume::*)()  const>(&G4LogicalVolume::IsToOptimise));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::SetOptimisation(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::SetOptimisation(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:301:17
  t18.method("SetOptimisation", static_cast<void (G4LogicalVolume::*)(G4bool) >(&G4LogicalVolume::SetOptimisation));

  DEBUG_MSG("Adding wrapper for G4bool G4LogicalVolume::IsRootRegion() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4LogicalVolume::IsRootRegion()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:306:19
  t18.method("IsRootRegion", static_cast<G4bool (G4LogicalVolume::*)()  const>(&G4LogicalVolume::IsRootRegion));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::SetRegionRootFlag(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::SetRegionRootFlag(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:308:17
  t18.method("SetRegionRootFlag", static_cast<void (G4LogicalVolume::*)(G4bool) >(&G4LogicalVolume::SetRegionRootFlag));

  DEBUG_MSG("Adding wrapper for G4bool G4LogicalVolume::IsRegion() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4LogicalVolume::IsRegion()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:310:19
  t18.method("IsRegion", static_cast<G4bool (G4LogicalVolume::*)()  const>(&G4LogicalVolume::IsRegion));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::SetRegion(G4Region *) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::SetRegion(G4Region *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:312:17
  t18.method("SetRegion", static_cast<void (G4LogicalVolume::*)(G4Region *) >(&G4LogicalVolume::SetRegion));

  DEBUG_MSG("Adding wrapper for G4Region * G4LogicalVolume::GetRegion() (" __HERE__ ")");
  // signature to use in the veto list: G4Region * G4LogicalVolume::GetRegion()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:314:22
  t18.method("GetRegion", static_cast<G4Region * (G4LogicalVolume::*)()  const>(&G4LogicalVolume::GetRegion));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::PropagateRegion() (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::PropagateRegion()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:316:17
  t18.method("PropagateRegion", static_cast<void (G4LogicalVolume::*)() >(&G4LogicalVolume::PropagateRegion));

  DEBUG_MSG("Adding wrapper for const G4MaterialCutsCouple * G4LogicalVolume::GetMaterialCutsCouple() (" __HERE__ ")");
  // signature to use in the veto list: const G4MaterialCutsCouple * G4LogicalVolume::GetMaterialCutsCouple()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:319:33
  t18.method("GetMaterialCutsCouple", static_cast<const G4MaterialCutsCouple * (G4LogicalVolume::*)()  const>(&G4LogicalVolume::GetMaterialCutsCouple));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::SetMaterialCutsCouple(G4MaterialCutsCouple *) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::SetMaterialCutsCouple(G4MaterialCutsCouple *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:320:10
  t18.method("SetMaterialCutsCouple", static_cast<void (G4LogicalVolume::*)(G4MaterialCutsCouple *) >(&G4LogicalVolume::SetMaterialCutsCouple));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for G4bool G4LogicalVolume::operator==(const G4LogicalVolume &) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4LogicalVolume::operator==(const G4LogicalVolume &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:323:12
  t18.method("==", static_cast<G4bool (G4LogicalVolume::*)(const G4LogicalVolume &)  const>(&G4LogicalVolume::operator==));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for const G4VisAttributes * G4LogicalVolume::GetVisAttributes() (" __HERE__ ")");
  // signature to use in the veto list: const G4VisAttributes * G4LogicalVolume::GetVisAttributes()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:327:28
  t18.method("GetVisAttributes", static_cast<const G4VisAttributes * (G4LogicalVolume::*)()  const>(&G4LogicalVolume::GetVisAttributes));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::SetVisAttributes(const G4VisAttributes *) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::SetVisAttributes(const G4VisAttributes *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:328:10
  t18.method("SetVisAttributes", static_cast<void (G4LogicalVolume::*)(const G4VisAttributes *) >(&G4LogicalVolume::SetVisAttributes));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::SetVisAttributes(const G4VisAttributes &) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::SetVisAttributes(const G4VisAttributes &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:329:10
  t18.method("SetVisAttributes", static_cast<void (G4LogicalVolume::*)(const G4VisAttributes &) >(&G4LogicalVolume::SetVisAttributes));

  DEBUG_MSG("Adding wrapper for G4FastSimulationManager * G4LogicalVolume::GetFastSimulationManager() (" __HERE__ ")");
  // signature to use in the veto list: G4FastSimulationManager * G4LogicalVolume::GetFastSimulationManager()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:333:37
  t18.method("GetFastSimulationManager", static_cast<G4FastSimulationManager * (G4LogicalVolume::*)()  const>(&G4LogicalVolume::GetFastSimulationManager));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::SetBiasWeight(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::SetBiasWeight(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:336:17
  t18.method("SetBiasWeight", static_cast<void (G4LogicalVolume::*)(G4double) >(&G4LogicalVolume::SetBiasWeight));

  DEBUG_MSG("Adding wrapper for G4double G4LogicalVolume::GetBiasWeight() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4LogicalVolume::GetBiasWeight()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:337:21
  t18.method("GetBiasWeight", static_cast<G4double (G4LogicalVolume::*)()  const>(&G4LogicalVolume::GetBiasWeight));

  DEBUG_MSG("Adding wrapper for G4bool G4LogicalVolume::IsExtended() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4LogicalVolume::IsExtended()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:347:20
  t18.method("IsExtended", static_cast<G4bool (G4LogicalVolume::*)()  const>(&G4LogicalVolume::IsExtended));

  DEBUG_MSG("Adding wrapper for G4FieldManager * G4LogicalVolume::GetMasterFieldManager() (" __HERE__ ")");
  // signature to use in the veto list: G4FieldManager * G4LogicalVolume::GetMasterFieldManager()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:350:28
  t18.method("GetMasterFieldManager", static_cast<G4FieldManager * (G4LogicalVolume::*)()  const>(&G4LogicalVolume::GetMasterFieldManager));

  DEBUG_MSG("Adding wrapper for G4VSensitiveDetector * G4LogicalVolume::GetMasterSensitiveDetector() (" __HERE__ ")");
  // signature to use in the veto list: G4VSensitiveDetector * G4LogicalVolume::GetMasterSensitiveDetector()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:352:34
  t18.method("GetMasterSensitiveDetector", static_cast<G4VSensitiveDetector * (G4LogicalVolume::*)()  const>(&G4LogicalVolume::GetMasterSensitiveDetector));

  DEBUG_MSG("Adding wrapper for G4VSolid * G4LogicalVolume::GetMasterSolid() (" __HERE__ ")");
  // signature to use in the veto list: G4VSolid * G4LogicalVolume::GetMasterSolid()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:354:22
  t18.method("GetMasterSolid", static_cast<G4VSolid * (G4LogicalVolume::*)()  const>(&G4LogicalVolume::GetMasterSolid));

  DEBUG_MSG("Adding wrapper for G4int G4LogicalVolume::GetInstanceID() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4LogicalVolume::GetInstanceID()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:357:18
  t18.method("GetInstanceID", static_cast<G4int (G4LogicalVolume::*)()  const>(&G4LogicalVolume::GetInstanceID));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::Clean() (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::Clean()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:363:17
  t18.method("G4LogicalVolume!Clean", static_cast<void (*)() >(&G4LogicalVolume::Clean));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::Lock() (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::Lock()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:366:17
  t18.method("Lock", static_cast<void (G4LogicalVolume::*)() >(&G4LogicalVolume::Lock));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::InitialiseWorker(G4LogicalVolume *, G4VSolid *, G4VSensitiveDetector *) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::InitialiseWorker(G4LogicalVolume *, G4VSolid *, G4VSensitiveDetector *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:369:10
  t18.method("InitialiseWorker", static_cast<void (G4LogicalVolume::*)(G4LogicalVolume *, G4VSolid *, G4VSensitiveDetector *) >(&G4LogicalVolume::InitialiseWorker));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::TerminateWorker(G4LogicalVolume *) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::TerminateWorker(G4LogicalVolume *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:374:10
  t18.method("TerminateWorker", static_cast<void (G4LogicalVolume::*)(G4LogicalVolume *) >(&G4LogicalVolume::TerminateWorker));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::AssignFieldManager(G4FieldManager *) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::AssignFieldManager(G4FieldManager *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:378:10
  t18.method("AssignFieldManager", static_cast<void (G4LogicalVolume::*)(G4FieldManager *) >(&G4LogicalVolume::AssignFieldManager));

  DEBUG_MSG("Adding wrapper for G4VSolid * G4LogicalVolume::GetSolid(G4LVData &) (" __HERE__ ")");
  // signature to use in the veto list: G4VSolid * G4LogicalVolume::GetSolid(G4LVData &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:381:22
  t18.method("G4LogicalVolume!GetSolid", static_cast<G4VSolid * (*)(G4LVData &) >(&G4LogicalVolume::GetSolid));

  DEBUG_MSG("Adding wrapper for void G4LogicalVolume::SetSolid(G4LVData &, G4VSolid *) (" __HERE__ ")");
  // signature to use in the veto list: void G4LogicalVolume::SetSolid(G4LVData &, G4VSolid *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:382:17
  t18.method("G4LogicalVolume!SetSolid", static_cast<void (*)(G4LVData &, G4VSolid *) >(&G4LogicalVolume::SetSolid));

  DEBUG_MSG("Adding wrapper for G4bool G4LogicalVolume::ChangeDaughtersType(EVolume) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4LogicalVolume::ChangeDaughtersType(EVolume)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:385:12
  t18.method("ChangeDaughtersType", static_cast<G4bool (G4LogicalVolume::*)(EVolume) >(&G4LogicalVolume::ChangeDaughtersType));

  /* End of G4LogicalVolume class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4LVData
   */

  DEBUG_MSG("Adding wrapper for void G4LVData::initialize() (" __HERE__ ")");
  // signature to use in the veto list: void G4LVData::initialize()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:136:10
  t22.method("initialize", static_cast<void (G4LVData::*)() >(&G4LVData::initialize));

  DEBUG_MSG("Adding fSolid methods  to provide read access to the field fSolid (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:148:15
  // signature to use in the veto list: G4LVData::fSolid
  t22.method("fSolid", [](const G4LVData& a) -> G4VSolid * { return a.fSolid; });
  t22.method("fSolid", [](G4LVData& a) -> G4VSolid * { return a.fSolid; });
  t22.method("fSolid", [](const G4LVData* a) -> G4VSolid * { return a->fSolid; });
  t22.method("fSolid", [](G4LVData* a) -> G4VSolid * { return a->fSolid; });
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:148:15
  // signature to use in the veto list: G4LVData::fSolid
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding fSolid! methods to provide write access to the field fSolid (" __HERE__ ")");
  t22.method("fSolid!", [](G4LVData& a, G4VSolid * val) -> G4VSolid * { return a.fSolid = val; });

  DEBUG_MSG("Adding fSolid! methods to provide write access to the field fSolid (" __HERE__ ")");
  t22.method("fSolid!", [](G4LVData* a, G4VSolid * val) -> G4VSolid * { return a->fSolid = val; });

  DEBUG_MSG("Adding fSensitiveDetector methods  to provide read access to the field fSensitiveDetector (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:150:27
  // signature to use in the veto list: G4LVData::fSensitiveDetector
  t22.method("fSensitiveDetector", [](const G4LVData& a) -> G4VSensitiveDetector * { return a.fSensitiveDetector; });
  t22.method("fSensitiveDetector", [](G4LVData& a) -> G4VSensitiveDetector * { return a.fSensitiveDetector; });
  t22.method("fSensitiveDetector", [](const G4LVData* a) -> G4VSensitiveDetector * { return a->fSensitiveDetector; });
  t22.method("fSensitiveDetector", [](G4LVData* a) -> G4VSensitiveDetector * { return a->fSensitiveDetector; });
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:150:27
  // signature to use in the veto list: G4LVData::fSensitiveDetector
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding fSensitiveDetector! methods to provide write access to the field fSensitiveDetector (" __HERE__ ")");
  t22.method("fSensitiveDetector!", [](G4LVData& a, G4VSensitiveDetector * val) -> G4VSensitiveDetector * { return a.fSensitiveDetector = val; });

  DEBUG_MSG("Adding fSensitiveDetector! methods to provide write access to the field fSensitiveDetector (" __HERE__ ")");
  t22.method("fSensitiveDetector!", [](G4LVData* a, G4VSensitiveDetector * val) -> G4VSensitiveDetector * { return a->fSensitiveDetector = val; });

  DEBUG_MSG("Adding fFieldManager methods  to provide read access to the field fFieldManager (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:152:21
  // signature to use in the veto list: G4LVData::fFieldManager
  t22.method("fFieldManager", [](const G4LVData& a) -> G4FieldManager * { return a.fFieldManager; });
  t22.method("fFieldManager", [](G4LVData& a) -> G4FieldManager * { return a.fFieldManager; });
  t22.method("fFieldManager", [](const G4LVData* a) -> G4FieldManager * { return a->fFieldManager; });
  t22.method("fFieldManager", [](G4LVData* a) -> G4FieldManager * { return a->fFieldManager; });
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:152:21
  // signature to use in the veto list: G4LVData::fFieldManager
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding fFieldManager! methods to provide write access to the field fFieldManager (" __HERE__ ")");
  t22.method("fFieldManager!", [](G4LVData& a, G4FieldManager * val) -> G4FieldManager * { return a.fFieldManager = val; });

  DEBUG_MSG("Adding fFieldManager! methods to provide write access to the field fFieldManager (" __HERE__ ")");
  t22.method("fFieldManager!", [](G4LVData* a, G4FieldManager * val) -> G4FieldManager * { return a->fFieldManager = val; });

  DEBUG_MSG("Adding fMaterial methods  to provide read access to the field fMaterial (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:154:17
  // signature to use in the veto list: G4LVData::fMaterial
  t22.method("fMaterial", [](const G4LVData& a) -> G4Material * { return a.fMaterial; });
  t22.method("fMaterial", [](G4LVData& a) -> G4Material * { return a.fMaterial; });
  t22.method("fMaterial", [](const G4LVData* a) -> G4Material * { return a->fMaterial; });
  t22.method("fMaterial", [](G4LVData* a) -> G4Material * { return a->fMaterial; });
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:154:17
  // signature to use in the veto list: G4LVData::fMaterial
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding fMaterial! methods to provide write access to the field fMaterial (" __HERE__ ")");
  t22.method("fMaterial!", [](G4LVData& a, G4Material * val) -> G4Material * { return a.fMaterial = val; });

  DEBUG_MSG("Adding fMaterial! methods to provide write access to the field fMaterial (" __HERE__ ")");
  t22.method("fMaterial!", [](G4LVData* a, G4Material * val) -> G4Material * { return a->fMaterial = val; });

  DEBUG_MSG("Adding fMass methods  to provide read access to the field fMass (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:156:14
  // signature to use in the veto list: G4LVData::fMass
  t22.method("fMass", [](const G4LVData& a) -> G4double { return a.fMass; });
  t22.method("fMass", [](G4LVData& a) -> G4double { return a.fMass; });
  t22.method("fMass", [](const G4LVData* a) -> G4double { return a->fMass; });
  t22.method("fMass", [](G4LVData* a) -> G4double { return a->fMass; });
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:156:14
  // signature to use in the veto list: G4LVData::fMass
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding fMass! methods to provide write access to the field fMass (" __HERE__ ")");
  t22.method("fMass!", [](G4LVData& a, G4double val) -> G4double { return a.fMass = val; });

  DEBUG_MSG("Adding fMass! methods to provide write access to the field fMass (" __HERE__ ")");
  t22.method("fMass!", [](G4LVData* a, G4double val) -> G4double { return a->fMass = val; });

  DEBUG_MSG("Adding fCutsCouple methods  to provide read access to the field fCutsCouple (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:158:27
  // signature to use in the veto list: G4LVData::fCutsCouple
  t22.method("fCutsCouple", [](const G4LVData& a) -> G4MaterialCutsCouple * { return a.fCutsCouple; });
  t22.method("fCutsCouple", [](G4LVData& a) -> G4MaterialCutsCouple * { return a.fCutsCouple; });
  t22.method("fCutsCouple", [](const G4LVData* a) -> G4MaterialCutsCouple * { return a->fCutsCouple; });
  t22.method("fCutsCouple", [](G4LVData* a) -> G4MaterialCutsCouple * { return a->fCutsCouple; });
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4LogicalVolume.hh:158:27
  // signature to use in the veto list: G4LVData::fCutsCouple
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding fCutsCouple! methods to provide write access to the field fCutsCouple (" __HERE__ ")");
  t22.method("fCutsCouple!", [](G4LVData& a, G4MaterialCutsCouple * val) -> G4MaterialCutsCouple * { return a.fCutsCouple = val; });

  DEBUG_MSG("Adding fCutsCouple! methods to provide write access to the field fCutsCouple (" __HERE__ ")");
  t22.method("fCutsCouple!", [](G4LVData* a, G4MaterialCutsCouple * val) -> G4MaterialCutsCouple * { return a->fCutsCouple = val; });

  /* End of G4LVData class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4VSolid
   */

  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for G4bool G4VSolid::operator==(const G4VSolid &) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VSolid::operator==(const G4VSolid &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:92:19
  t23.method("==", static_cast<G4bool (G4VSolid::*)(const G4VSolid &)  const>(&G4VSolid::operator==));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for G4String G4VSolid::GetName() (" __HERE__ ")");
  // signature to use in the veto list: G4String G4VSolid::GetName()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:95:21
  t23.method("GetName", static_cast<G4String (G4VSolid::*)()  const>(&G4VSolid::GetName));

  DEBUG_MSG("Adding wrapper for void G4VSolid::SetName(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4VSolid::SetName(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:97:10
  t23.method("SetName", static_cast<void (G4VSolid::*)(const G4String &) >(&G4VSolid::SetName));

  DEBUG_MSG("Adding wrapper for G4double G4VSolid::GetTolerance() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4VSolid::GetTolerance()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:100:21
  t23.method("GetTolerance", static_cast<G4double (G4VSolid::*)()  const>(&G4VSolid::GetTolerance));

  DEBUG_MSG("Adding wrapper for void G4VSolid::BoundingLimits(G4ThreeVector &, G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: void G4VSolid::BoundingLimits(G4ThreeVector &, G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:103:18
  t23.method("BoundingLimits", static_cast<void (G4VSolid::*)(G4ThreeVector &, G4ThreeVector &)  const>(&G4VSolid::BoundingLimits));

  DEBUG_MSG("Adding wrapper for EInside G4VSolid::Inside(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: EInside G4VSolid::Inside(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:114:21
  t23.method("Inside", static_cast<EInside (G4VSolid::*)(const G4ThreeVector &)  const>(&G4VSolid::Inside));

  DEBUG_MSG("Adding wrapper for G4ThreeVector G4VSolid::SurfaceNormal(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4ThreeVector G4VSolid::SurfaceNormal(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:119:27
  t23.method("SurfaceNormal", static_cast<G4ThreeVector (G4VSolid::*)(const G4ThreeVector &)  const>(&G4VSolid::SurfaceNormal));

  DEBUG_MSG("Adding wrapper for G4double G4VSolid::DistanceToIn(const G4ThreeVector &, const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4VSolid::DistanceToIn(const G4ThreeVector &, const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:123:22
  t23.method("DistanceToIn", static_cast<G4double (G4VSolid::*)(const G4ThreeVector &, const G4ThreeVector &)  const>(&G4VSolid::DistanceToIn));

  DEBUG_MSG("Adding wrapper for G4double G4VSolid::DistanceToIn(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4VSolid::DistanceToIn(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:131:22
  t23.method("DistanceToIn", static_cast<G4double (G4VSolid::*)(const G4ThreeVector &)  const>(&G4VSolid::DistanceToIn));

  DEBUG_MSG("Adding wrapper for G4double G4VSolid::DistanceToOut(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4VSolid::DistanceToOut(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:135:22
  t23.method("DistanceToOut", static_cast<G4double (G4VSolid::*)(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *)  const>(&G4VSolid::DistanceToOut));
  t23.method("DistanceToOut", [](G4VSolid const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1)->G4double{ return a.DistanceToOut(arg0, arg1); });
  t23.method("DistanceToOut", [](G4VSolid const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2)->G4double{ return a.DistanceToOut(arg0, arg1, arg2); });
  t23.method("DistanceToOut", [](G4VSolid const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2, G4bool * arg3)->G4double{ return a.DistanceToOut(arg0, arg1, arg2, arg3); });
  t23.method("DistanceToOut", [](G4VSolid const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1)->G4double{ return a->DistanceToOut(arg0, arg1); });
  t23.method("DistanceToOut", [](G4VSolid const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2)->G4double{ return a->DistanceToOut(arg0, arg1, arg2); });
  t23.method("DistanceToOut", [](G4VSolid const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2, G4bool * arg3)->G4double{ return a->DistanceToOut(arg0, arg1, arg2, arg3); });

  DEBUG_MSG("Adding wrapper for G4double G4VSolid::DistanceToOut(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4VSolid::DistanceToOut(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:156:22
  t23.method("DistanceToOut", static_cast<G4double (G4VSolid::*)(const G4ThreeVector &)  const>(&G4VSolid::DistanceToOut));

  DEBUG_MSG("Adding wrapper for void G4VSolid::ComputeDimensions(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *) (" __HERE__ ")");
  // signature to use in the veto list: void G4VSolid::ComputeDimensions(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:161:18
  t23.method("ComputeDimensions", static_cast<void (G4VSolid::*)(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *) >(&G4VSolid::ComputeDimensions));

  DEBUG_MSG("Adding wrapper for G4double G4VSolid::GetCubicVolume() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4VSolid::GetCubicVolume()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:167:22
  t23.method("GetCubicVolume", static_cast<G4double (G4VSolid::*)() >(&G4VSolid::GetCubicVolume));

  DEBUG_MSG("Adding wrapper for G4double G4VSolid::GetSurfaceArea() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4VSolid::GetSurfaceArea()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:174:22
  t23.method("GetSurfaceArea", static_cast<G4double (G4VSolid::*)() >(&G4VSolid::GetSurfaceArea));

  DEBUG_MSG("Adding wrapper for G4GeometryType G4VSolid::GetEntityType() (" __HERE__ ")");
  // signature to use in the veto list: G4GeometryType G4VSolid::GetEntityType()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:181:29
  t23.method("GetEntityType", static_cast<G4GeometryType (G4VSolid::*)()  const>(&G4VSolid::GetEntityType));

  DEBUG_MSG("Adding wrapper for G4ThreeVector G4VSolid::GetPointOnSurface() (" __HERE__ ")");
  // signature to use in the veto list: G4ThreeVector G4VSolid::GetPointOnSurface()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:185:27
  t23.method("GetPointOnSurface", static_cast<G4ThreeVector (G4VSolid::*)()  const>(&G4VSolid::GetPointOnSurface));

  DEBUG_MSG("Adding wrapper for G4VSolid * G4VSolid::Clone() (" __HERE__ ")");
  // signature to use in the veto list: G4VSolid * G4VSolid::Clone()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:189:23
  t23.method("Clone", static_cast<G4VSolid * (G4VSolid::*)()  const>(&G4VSolid::Clone));

  DEBUG_MSG("Adding wrapper for void G4VSolid::DumpInfo() (" __HERE__ ")");
  // signature to use in the veto list: void G4VSolid::DumpInfo()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:196:17
  t23.method("DumpInfo", static_cast<void (G4VSolid::*)()  const>(&G4VSolid::DumpInfo));

  DEBUG_MSG("Adding wrapper for G4Polyhedron * G4VSolid::CreatePolyhedron() (" __HERE__ ")");
  // signature to use in the veto list: G4Polyhedron * G4VSolid::CreatePolyhedron()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:206:27
  t23.method("CreatePolyhedron", static_cast<G4Polyhedron * (G4VSolid::*)()  const>(&G4VSolid::CreatePolyhedron));

  DEBUG_MSG("Adding wrapper for G4Polyhedron * G4VSolid::GetPolyhedron() (" __HERE__ ")");
  // signature to use in the veto list: G4Polyhedron * G4VSolid::GetPolyhedron()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:209:27
  t23.method("GetPolyhedron", static_cast<G4Polyhedron * (G4VSolid::*)()  const>(&G4VSolid::GetPolyhedron));

  DEBUG_MSG("Adding wrapper for const G4VSolid * G4VSolid::GetConstituentSolid(G4int) (" __HERE__ ")");
  // signature to use in the veto list: const G4VSolid * G4VSolid::GetConstituentSolid(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:213:29
  t23.method("GetConstituentSolid", static_cast<const G4VSolid * (G4VSolid::*)(G4int)  const>(&G4VSolid::GetConstituentSolid));

  DEBUG_MSG("Adding wrapper for G4VSolid * G4VSolid::GetConstituentSolid(G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4VSolid * G4VSolid::GetConstituentSolid(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:214:29
  t23.method("GetConstituentSolid", static_cast<G4VSolid * (G4VSolid::*)(G4int) >(&G4VSolid::GetConstituentSolid));


  DEBUG_MSG("Adding wrapper for G4VSolid & G4VSolid::operator=(const G4VSolid &) (" __HERE__ ")");
  // signature to use in the veto list: G4VSolid & G4VSolid::operator=(const G4VSolid &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:231:15
  t23.method("assign", static_cast<G4VSolid & (G4VSolid::*)(const G4VSolid &) >(&G4VSolid::operator=));

  DEBUG_MSG("Adding wrapper for G4double G4VSolid::EstimateCubicVolume(G4int, G4double) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4VSolid::EstimateCubicVolume(G4int, G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:234:14
  t23.method("EstimateCubicVolume", static_cast<G4double (G4VSolid::*)(G4int, G4double)  const>(&G4VSolid::EstimateCubicVolume));

  DEBUG_MSG("Adding wrapper for G4double G4VSolid::EstimateSurfaceArea(G4int, G4double) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4VSolid::EstimateSurfaceArea(G4int, G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VSolid.hh:239:14
  t23.method("EstimateSurfaceArea", static_cast<G4double (G4VSolid::*)(G4int, G4double)  const>(&G4VSolid::EstimateSurfaceArea));

  /* End of G4VSolid class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4UserLimits
   */


  DEBUG_MSG("Adding wrapper for void G4UserLimits::G4UserLimits(G4double, G4double, G4double, G4double, G4double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserLimits.hh:55:3
  t28.constructor<G4double>(/*finalize=*/true);
  t28.constructor<G4double, G4double>(/*finalize=*/true);
  t28.constructor<G4double, G4double, G4double>(/*finalize=*/true);
  t28.constructor<G4double, G4double, G4double, G4double>(/*finalize=*/true);
  t28.constructor<G4double, G4double, G4double, G4double, G4double>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void G4UserLimits::G4UserLimits(const G4String &, G4double, G4double, G4double, G4double, G4double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserLimits.hh:58:3
  t28.constructor<const G4String &>(/*finalize=*/true);
  t28.constructor<const G4String &, G4double>(/*finalize=*/true);
  t28.constructor<const G4String &, G4double, G4double>(/*finalize=*/true);
  t28.constructor<const G4String &, G4double, G4double, G4double>(/*finalize=*/true);
  t28.constructor<const G4String &, G4double, G4double, G4double, G4double>(/*finalize=*/true);
  t28.constructor<const G4String &, G4double, G4double, G4double, G4double, G4double>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for G4double G4UserLimits::GetMaxAllowedStep(const G4Track &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4UserLimits::GetMaxAllowedStep(const G4Track &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserLimits.hh:63:20
  t28.method("GetMaxAllowedStep", static_cast<G4double (G4UserLimits::*)(const G4Track &) >(&G4UserLimits::GetMaxAllowedStep));

  DEBUG_MSG("Adding wrapper for G4double G4UserLimits::GetUserMaxTrackLength(const G4Track &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4UserLimits::GetUserMaxTrackLength(const G4Track &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserLimits.hh:67:20
  t28.method("GetUserMaxTrackLength", static_cast<G4double (G4UserLimits::*)(const G4Track &) >(&G4UserLimits::GetUserMaxTrackLength));

  DEBUG_MSG("Adding wrapper for G4double G4UserLimits::GetUserMaxTime(const G4Track &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4UserLimits::GetUserMaxTime(const G4Track &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserLimits.hh:68:20
  t28.method("GetUserMaxTime", static_cast<G4double (G4UserLimits::*)(const G4Track &) >(&G4UserLimits::GetUserMaxTime));

  DEBUG_MSG("Adding wrapper for G4double G4UserLimits::GetUserMinEkine(const G4Track &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4UserLimits::GetUserMinEkine(const G4Track &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserLimits.hh:69:20
  t28.method("GetUserMinEkine", static_cast<G4double (G4UserLimits::*)(const G4Track &) >(&G4UserLimits::GetUserMinEkine));

  DEBUG_MSG("Adding wrapper for G4double G4UserLimits::GetUserMinRange(const G4Track &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4UserLimits::GetUserMinRange(const G4Track &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserLimits.hh:70:20
  t28.method("GetUserMinRange", static_cast<G4double (G4UserLimits::*)(const G4Track &) >(&G4UserLimits::GetUserMinRange));

  DEBUG_MSG("Adding wrapper for void G4UserLimits::SetMaxAllowedStep(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4UserLimits::SetMaxAllowedStep(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserLimits.hh:72:16
  t28.method("SetMaxAllowedStep", static_cast<void (G4UserLimits::*)(G4double) >(&G4UserLimits::SetMaxAllowedStep));

  DEBUG_MSG("Adding wrapper for void G4UserLimits::SetUserMaxTrackLength(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4UserLimits::SetUserMaxTrackLength(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserLimits.hh:73:16
  t28.method("SetUserMaxTrackLength", static_cast<void (G4UserLimits::*)(G4double) >(&G4UserLimits::SetUserMaxTrackLength));

  DEBUG_MSG("Adding wrapper for void G4UserLimits::SetUserMaxTime(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4UserLimits::SetUserMaxTime(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserLimits.hh:74:16
  t28.method("SetUserMaxTime", static_cast<void (G4UserLimits::*)(G4double) >(&G4UserLimits::SetUserMaxTime));

  DEBUG_MSG("Adding wrapper for void G4UserLimits::SetUserMinEkine(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4UserLimits::SetUserMinEkine(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserLimits.hh:75:16
  t28.method("SetUserMinEkine", static_cast<void (G4UserLimits::*)(G4double) >(&G4UserLimits::SetUserMinEkine));

  DEBUG_MSG("Adding wrapper for void G4UserLimits::SetUserMinRange(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4UserLimits::SetUserMinRange(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserLimits.hh:76:16
  t28.method("SetUserMinRange", static_cast<void (G4UserLimits::*)(G4double) >(&G4UserLimits::SetUserMinRange));

  DEBUG_MSG("Adding wrapper for const G4String & G4UserLimits::GetType() (" __HERE__ ")");
  // signature to use in the veto list: const G4String & G4UserLimits::GetType()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserLimits.hh:78:19
  t28.method("GetType", static_cast<const G4String & (G4UserLimits::*)()  const>(&G4UserLimits::GetType));

  DEBUG_MSG("Adding wrapper for void G4UserLimits::SetType(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4UserLimits::SetType(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserLimits.hh:79:8
  t28.method("SetType", static_cast<void (G4UserLimits::*)(const G4String &) >(&G4UserLimits::SetType));

  /* End of G4UserLimits class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4VisAttributes
   */


  DEBUG_MSG("Adding wrapper for void G4VisAttributes::G4VisAttributes(G4bool) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:79:3
  t31.constructor<G4bool>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void G4VisAttributes::G4VisAttributes(const G4Colour &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:80:3
  t31.constructor<const G4Colour &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void G4VisAttributes::G4VisAttributes(G4bool, const G4Colour &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:81:3
  t31.constructor<G4bool, const G4Colour &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void G4VisAttributes::G4VisAttributes(const G4VisAttributes &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:82:3
  t31.constructor<const G4VisAttributes &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for G4VisAttributes & G4VisAttributes::operator=(const G4VisAttributes &) (" __HERE__ ")");
  // signature to use in the veto list: G4VisAttributes & G4VisAttributes::operator=(const G4VisAttributes &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:84:20
  t31.method("assign", static_cast<G4VisAttributes & (G4VisAttributes::*)(const G4VisAttributes &) >(&G4VisAttributes::operator=));

  DEBUG_MSG("Adding wrapper for const G4VisAttributes & G4VisAttributes::GetInvisible() (" __HERE__ ")");
  // signature to use in the veto list: const G4VisAttributes & G4VisAttributes::GetInvisible()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:86:33
  t31.method("G4VisAttributes!GetInvisible", static_cast<const G4VisAttributes & (*)() >(&G4VisAttributes::GetInvisible));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for G4bool G4VisAttributes::operator!=(const G4VisAttributes &) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VisAttributes::operator!=(const G4VisAttributes &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:88:10
  t31.method("!=", static_cast<G4bool (G4VisAttributes::*)(const G4VisAttributes &)  const>(&G4VisAttributes::operator!=));

  DEBUG_MSG("Adding wrapper for G4bool G4VisAttributes::operator==(const G4VisAttributes &) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VisAttributes::operator==(const G4VisAttributes &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:89:10
  t31.method("==", static_cast<G4bool (G4VisAttributes::*)(const G4VisAttributes &)  const>(&G4VisAttributes::operator==));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for void G4VisAttributes::SetVisibility(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4VisAttributes::SetVisibility(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:91:8
  t31.method("SetVisibility", static_cast<void (G4VisAttributes::*)(G4bool) >(&G4VisAttributes::SetVisibility));
  t31.method("SetVisibility", [](G4VisAttributes& a)->void{ a.SetVisibility(); });
  t31.method("SetVisibility", [](G4VisAttributes* a)->void{ a->SetVisibility(); });

  DEBUG_MSG("Adding wrapper for void G4VisAttributes::SetDaughtersInvisible(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4VisAttributes::SetDaughtersInvisible(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:92:8
  t31.method("SetDaughtersInvisible", static_cast<void (G4VisAttributes::*)(G4bool) >(&G4VisAttributes::SetDaughtersInvisible));
  t31.method("SetDaughtersInvisible", [](G4VisAttributes& a)->void{ a.SetDaughtersInvisible(); });
  t31.method("SetDaughtersInvisible", [](G4VisAttributes* a)->void{ a->SetDaughtersInvisible(); });

  DEBUG_MSG("Adding wrapper for void G4VisAttributes::SetColour(const G4Colour &) (" __HERE__ ")");
  // signature to use in the veto list: void G4VisAttributes::SetColour(const G4Colour &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:93:8
  t31.method("SetColour", static_cast<void (G4VisAttributes::*)(const G4Colour &) >(&G4VisAttributes::SetColour));

  DEBUG_MSG("Adding wrapper for void G4VisAttributes::SetColor(const G4Color &) (" __HERE__ ")");
  // signature to use in the veto list: void G4VisAttributes::SetColor(const G4Color &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:94:8
  t31.method("SetColor", static_cast<void (G4VisAttributes::*)(const G4Color &) >(&G4VisAttributes::SetColor));

  DEBUG_MSG("Adding wrapper for void G4VisAttributes::SetColour(G4double, G4double, G4double, G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4VisAttributes::SetColour(G4double, G4double, G4double, G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:95:8
  t31.method("SetColour", static_cast<void (G4VisAttributes::*)(G4double, G4double, G4double, G4double) >(&G4VisAttributes::SetColour));
  t31.method("SetColour", [](G4VisAttributes& a, G4double arg0, G4double arg1, G4double arg2)->void{ a.SetColour(arg0, arg1, arg2); });
  t31.method("SetColour", [](G4VisAttributes* a, G4double arg0, G4double arg1, G4double arg2)->void{ a->SetColour(arg0, arg1, arg2); });

  DEBUG_MSG("Adding wrapper for void G4VisAttributes::SetColor(G4double, G4double, G4double, G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4VisAttributes::SetColor(G4double, G4double, G4double, G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:97:8
  t31.method("SetColor", static_cast<void (G4VisAttributes::*)(G4double, G4double, G4double, G4double) >(&G4VisAttributes::SetColor));
  t31.method("SetColor", [](G4VisAttributes& a, G4double arg0, G4double arg1, G4double arg2)->void{ a.SetColor(arg0, arg1, arg2); });
  t31.method("SetColor", [](G4VisAttributes* a, G4double arg0, G4double arg1, G4double arg2)->void{ a->SetColor(arg0, arg1, arg2); });

  DEBUG_MSG("Adding wrapper for void G4VisAttributes::SetLineStyle(G4VisAttributes::LineStyle) (" __HERE__ ")");
  // signature to use in the veto list: void G4VisAttributes::SetLineStyle(G4VisAttributes::LineStyle)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:99:8
  t31.method("SetLineStyle", static_cast<void (G4VisAttributes::*)(G4VisAttributes::LineStyle) >(&G4VisAttributes::SetLineStyle));

  DEBUG_MSG("Adding wrapper for void G4VisAttributes::SetLineWidth(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4VisAttributes::SetLineWidth(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:100:8
  t31.method("SetLineWidth", static_cast<void (G4VisAttributes::*)(G4double) >(&G4VisAttributes::SetLineWidth));

  DEBUG_MSG("Adding wrapper for void G4VisAttributes::SetForceWireframe(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4VisAttributes::SetForceWireframe(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:101:8
  t31.method("SetForceWireframe", static_cast<void (G4VisAttributes::*)(G4bool) >(&G4VisAttributes::SetForceWireframe));
  t31.method("SetForceWireframe", [](G4VisAttributes& a)->void{ a.SetForceWireframe(); });
  t31.method("SetForceWireframe", [](G4VisAttributes* a)->void{ a->SetForceWireframe(); });

  DEBUG_MSG("Adding wrapper for void G4VisAttributes::SetForceSolid(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4VisAttributes::SetForceSolid(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:102:8
  t31.method("SetForceSolid", static_cast<void (G4VisAttributes::*)(G4bool) >(&G4VisAttributes::SetForceSolid));
  t31.method("SetForceSolid", [](G4VisAttributes& a)->void{ a.SetForceSolid(); });
  t31.method("SetForceSolid", [](G4VisAttributes* a)->void{ a->SetForceSolid(); });

  DEBUG_MSG("Adding wrapper for void G4VisAttributes::SetForceCloud(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4VisAttributes::SetForceCloud(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:103:8
  t31.method("SetForceCloud", static_cast<void (G4VisAttributes::*)(G4bool) >(&G4VisAttributes::SetForceCloud));
  t31.method("SetForceCloud", [](G4VisAttributes& a)->void{ a.SetForceCloud(); });
  t31.method("SetForceCloud", [](G4VisAttributes* a)->void{ a->SetForceCloud(); });

  DEBUG_MSG("Adding wrapper for void G4VisAttributes::SetForceNumberOfCloudPoints(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4VisAttributes::SetForceNumberOfCloudPoints(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:104:8
  t31.method("SetForceNumberOfCloudPoints", static_cast<void (G4VisAttributes::*)(G4int) >(&G4VisAttributes::SetForceNumberOfCloudPoints));

  DEBUG_MSG("Adding wrapper for void G4VisAttributes::SetForceAuxEdgeVisible(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4VisAttributes::SetForceAuxEdgeVisible(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:106:8
  t31.method("SetForceAuxEdgeVisible", static_cast<void (G4VisAttributes::*)(G4bool) >(&G4VisAttributes::SetForceAuxEdgeVisible));
  t31.method("SetForceAuxEdgeVisible", [](G4VisAttributes& a)->void{ a.SetForceAuxEdgeVisible(); });
  t31.method("SetForceAuxEdgeVisible", [](G4VisAttributes* a)->void{ a->SetForceAuxEdgeVisible(); });

  DEBUG_MSG("Adding wrapper for void G4VisAttributes::SetForceLineSegmentsPerCircle(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4VisAttributes::SetForceLineSegmentsPerCircle(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:107:8
  t31.method("SetForceLineSegmentsPerCircle", static_cast<void (G4VisAttributes::*)(G4int) >(&G4VisAttributes::SetForceLineSegmentsPerCircle));

  DEBUG_MSG("Adding wrapper for void G4VisAttributes::SetStartTime(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4VisAttributes::SetStartTime(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:112:8
  t31.method("SetStartTime", static_cast<void (G4VisAttributes::*)(G4double) >(&G4VisAttributes::SetStartTime));

  DEBUG_MSG("Adding wrapper for void G4VisAttributes::SetEndTime(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4VisAttributes::SetEndTime(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:113:8
  t31.method("SetEndTime", static_cast<void (G4VisAttributes::*)(G4double) >(&G4VisAttributes::SetEndTime));

  DEBUG_MSG("Adding wrapper for G4bool G4VisAttributes::IsVisible() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VisAttributes::IsVisible()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:117:19
  t31.method("IsVisible", static_cast<G4bool (G4VisAttributes::*)()  const>(&G4VisAttributes::IsVisible));

  DEBUG_MSG("Adding wrapper for G4bool G4VisAttributes::IsDaughtersInvisible() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VisAttributes::IsDaughtersInvisible()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:118:19
  t31.method("IsDaughtersInvisible", static_cast<G4bool (G4VisAttributes::*)()  const>(&G4VisAttributes::IsDaughtersInvisible));

  DEBUG_MSG("Adding wrapper for const G4Colour & G4VisAttributes::GetColour() (" __HERE__ ")");
  // signature to use in the veto list: const G4Colour & G4VisAttributes::GetColour()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:119:19
  t31.method("GetColour", static_cast<const G4Colour & (G4VisAttributes::*)()  const>(&G4VisAttributes::GetColour));

  DEBUG_MSG("Adding wrapper for const G4Color & G4VisAttributes::GetColor() (" __HERE__ ")");
  // signature to use in the veto list: const G4Color & G4VisAttributes::GetColor()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:120:19
  t31.method("GetColor", static_cast<const G4Color & (G4VisAttributes::*)()  const>(&G4VisAttributes::GetColor));

  DEBUG_MSG("Adding wrapper for G4VisAttributes::LineStyle G4VisAttributes::GetLineStyle() (" __HERE__ ")");
  // signature to use in the veto list: G4VisAttributes::LineStyle G4VisAttributes::GetLineStyle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:121:19
  t31.method("GetLineStyle", static_cast<G4VisAttributes::LineStyle (G4VisAttributes::*)()  const>(&G4VisAttributes::GetLineStyle));

  DEBUG_MSG("Adding wrapper for G4double G4VisAttributes::GetLineWidth() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4VisAttributes::GetLineWidth()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:122:19
  t31.method("GetLineWidth", static_cast<G4double (G4VisAttributes::*)()  const>(&G4VisAttributes::GetLineWidth));

  DEBUG_MSG("Adding wrapper for G4bool G4VisAttributes::IsForceDrawingStyle() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VisAttributes::IsForceDrawingStyle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:123:19
  t31.method("IsForceDrawingStyle", static_cast<G4bool (G4VisAttributes::*)()  const>(&G4VisAttributes::IsForceDrawingStyle));

  DEBUG_MSG("Adding wrapper for G4VisAttributes::ForcedDrawingStyle G4VisAttributes::GetForcedDrawingStyle() (" __HERE__ ")");
  // signature to use in the veto list: G4VisAttributes::ForcedDrawingStyle G4VisAttributes::GetForcedDrawingStyle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:124:22
  t31.method("GetForcedDrawingStyle", static_cast<G4VisAttributes::ForcedDrawingStyle (G4VisAttributes::*)()  const>(&G4VisAttributes::GetForcedDrawingStyle));

  DEBUG_MSG("Adding wrapper for G4int G4VisAttributes::GetForcedNumberOfCloudPoints() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4VisAttributes::GetForcedNumberOfCloudPoints()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:125:19
  t31.method("GetForcedNumberOfCloudPoints", static_cast<G4int (G4VisAttributes::*)()  const>(&G4VisAttributes::GetForcedNumberOfCloudPoints));

  DEBUG_MSG("Adding wrapper for G4bool G4VisAttributes::IsForceAuxEdgeVisible() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VisAttributes::IsForceAuxEdgeVisible()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:126:19
  t31.method("IsForceAuxEdgeVisible", static_cast<G4bool (G4VisAttributes::*)()  const>(&G4VisAttributes::IsForceAuxEdgeVisible));

  DEBUG_MSG("Adding wrapper for G4bool G4VisAttributes::IsForcedAuxEdgeVisible() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VisAttributes::IsForcedAuxEdgeVisible()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:127:19
  t31.method("IsForcedAuxEdgeVisible", static_cast<G4bool (G4VisAttributes::*)()  const>(&G4VisAttributes::IsForcedAuxEdgeVisible));

  DEBUG_MSG("Adding wrapper for G4bool G4VisAttributes::IsForceLineSegmentsPerCircle() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VisAttributes::IsForceLineSegmentsPerCircle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:128:19
  t31.method("IsForceLineSegmentsPerCircle", static_cast<G4bool (G4VisAttributes::*)()  const>(&G4VisAttributes::IsForceLineSegmentsPerCircle));

  DEBUG_MSG("Adding wrapper for G4int G4VisAttributes::GetForcedLineSegmentsPerCircle() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4VisAttributes::GetForcedLineSegmentsPerCircle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:129:19
  t31.method("GetForcedLineSegmentsPerCircle", static_cast<G4int (G4VisAttributes::*)()  const>(&G4VisAttributes::GetForcedLineSegmentsPerCircle));

  DEBUG_MSG("Adding wrapper for G4double G4VisAttributes::GetStartTime() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4VisAttributes::GetStartTime()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:130:19
  t31.method("GetStartTime", static_cast<G4double (G4VisAttributes::*)()  const>(&G4VisAttributes::GetStartTime));

  DEBUG_MSG("Adding wrapper for G4double G4VisAttributes::GetEndTime() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4VisAttributes::GetEndTime()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:131:19
  t31.method("GetEndTime", static_cast<G4double (G4VisAttributes::*)()  const>(&G4VisAttributes::GetEndTime));

  DEBUG_MSG("Adding wrapper for G4int G4VisAttributes::GetMinLineSegmentsPerCircle() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4VisAttributes::GetMinLineSegmentsPerCircle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:132:19
  t31.method("G4VisAttributes!GetMinLineSegmentsPerCircle", static_cast<G4int (*)() >(&G4VisAttributes::GetMinLineSegmentsPerCircle));

  /* End of G4VisAttributes class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4FastSimulationManager
   */


  DEBUG_MSG("Adding wrapper for void G4FastSimulationManager::G4FastSimulationManager(G4Envelope *, G4bool) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:90:3
  t32.constructor<G4Envelope *>(/*finalize=*/true);
  t32.constructor<G4Envelope *, G4bool>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for void G4FastSimulationManager::AddFastSimulationModel(G4VFastSimulationModel *) (" __HERE__ ")");
  // signature to use in the veto list: void G4FastSimulationManager::AddFastSimulationModel(G4VFastSimulationModel *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:113:8
  t32.method("AddFastSimulationModel", static_cast<void (G4FastSimulationManager::*)(G4VFastSimulationModel *) >(&G4FastSimulationManager::AddFastSimulationModel));

  DEBUG_MSG("Adding wrapper for void G4FastSimulationManager::RemoveFastSimulationModel(G4VFastSimulationModel *) (" __HERE__ ")");
  // signature to use in the veto list: void G4FastSimulationManager::RemoveFastSimulationModel(G4VFastSimulationModel *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:116:8
  t32.method("RemoveFastSimulationModel", static_cast<void (G4FastSimulationManager::*)(G4VFastSimulationModel *) >(&G4FastSimulationManager::RemoveFastSimulationModel));

  DEBUG_MSG("Adding wrapper for G4bool G4FastSimulationManager::ActivateFastSimulationModel(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4FastSimulationManager::ActivateFastSimulationModel(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:122:10
  t32.method("ActivateFastSimulationModel", static_cast<G4bool (G4FastSimulationManager::*)(const G4String &) >(&G4FastSimulationManager::ActivateFastSimulationModel));

  DEBUG_MSG("Adding wrapper for G4bool G4FastSimulationManager::InActivateFastSimulationModel(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4FastSimulationManager::InActivateFastSimulationModel(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:125:10
  t32.method("InActivateFastSimulationModel", static_cast<G4bool (G4FastSimulationManager::*)(const G4String &) >(&G4FastSimulationManager::InActivateFastSimulationModel));

  DEBUG_MSG("Adding wrapper for void G4FastSimulationManager::ListTitle() (" __HERE__ ")");
  // signature to use in the veto list: void G4FastSimulationManager::ListTitle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:130:8
  t32.method("ListTitle", static_cast<void (G4FastSimulationManager::*)()  const>(&G4FastSimulationManager::ListTitle));

  DEBUG_MSG("Adding wrapper for void G4FastSimulationManager::ListModels() (" __HERE__ ")");
  // signature to use in the veto list: void G4FastSimulationManager::ListModels()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:131:8
  t32.method("ListModels", static_cast<void (G4FastSimulationManager::*)()  const>(&G4FastSimulationManager::ListModels));

  DEBUG_MSG("Adding wrapper for void G4FastSimulationManager::ListModels(const G4ParticleDefinition *) (" __HERE__ ")");
  // signature to use in the veto list: void G4FastSimulationManager::ListModels(const G4ParticleDefinition *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:132:8
  t32.method("ListModels", static_cast<void (G4FastSimulationManager::*)(const G4ParticleDefinition *)  const>(&G4FastSimulationManager::ListModels));

  DEBUG_MSG("Adding wrapper for void G4FastSimulationManager::ListModels(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4FastSimulationManager::ListModels(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:133:8
  t32.method("ListModels", static_cast<void (G4FastSimulationManager::*)(const G4String &)  const>(&G4FastSimulationManager::ListModels));

  DEBUG_MSG("Adding wrapper for const G4Envelope * G4FastSimulationManager::GetEnvelope() (" __HERE__ ")");
  // signature to use in the veto list: const G4Envelope * G4FastSimulationManager::GetEnvelope()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:134:21
  t32.method("GetEnvelope", static_cast<const G4Envelope * (G4FastSimulationManager::*)()  const>(&G4FastSimulationManager::GetEnvelope));

  DEBUG_MSG("Adding wrapper for G4VFastSimulationModel * G4FastSimulationManager::GetFastSimulationModel(const G4String &, const G4VFastSimulationModel *, bool &) (" __HERE__ ")");
  // signature to use in the veto list: G4VFastSimulationModel * G4FastSimulationManager::GetFastSimulationModel(const G4String &, const G4VFastSimulationModel *, bool &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:136:27
  t32.method("GetFastSimulationModel", static_cast<G4VFastSimulationModel * (G4FastSimulationManager::*)(const G4String &, const G4VFastSimulationModel *, bool &)  const>(&G4FastSimulationManager::GetFastSimulationModel));

  DEBUG_MSG("Adding wrapper for const std::vector<G4VFastSimulationModel *> & G4FastSimulationManager::GetFastSimulationModelList() (" __HERE__ ")");
  // signature to use in the veto list: const std::vector<G4VFastSimulationModel *> & G4FastSimulationManager::GetFastSimulationModelList()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:140:47
  t32.method("GetFastSimulationModelList", static_cast<const std::vector<G4VFastSimulationModel *> & (G4FastSimulationManager::*)()  const>(&G4FastSimulationManager::GetFastSimulationModelList));

  DEBUG_MSG("Adding wrapper for void G4FastSimulationManager::FlushModels() (" __HERE__ ")");
  // signature to use in the veto list: void G4FastSimulationManager::FlushModels()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:143:8
  t32.method("FlushModels", static_cast<void (G4FastSimulationManager::*)() >(&G4FastSimulationManager::FlushModels));

  DEBUG_MSG("Adding wrapper for G4bool G4FastSimulationManager::PostStepGetFastSimulationManagerTrigger(const G4Track &, const G4Navigator *) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4FastSimulationManager::PostStepGetFastSimulationManagerTrigger(const G4Track &, const G4Navigator *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:150:10
  t32.method("PostStepGetFastSimulationManagerTrigger", static_cast<G4bool (G4FastSimulationManager::*)(const G4Track &, const G4Navigator *) >(&G4FastSimulationManager::PostStepGetFastSimulationManagerTrigger));
  t32.method("PostStepGetFastSimulationManagerTrigger", [](G4FastSimulationManager& a, const G4Track & arg0)->G4bool{ return a.PostStepGetFastSimulationManagerTrigger(arg0); });
  t32.method("PostStepGetFastSimulationManagerTrigger", [](G4FastSimulationManager* a, const G4Track & arg0)->G4bool{ return a->PostStepGetFastSimulationManagerTrigger(arg0); });

  DEBUG_MSG("Adding wrapper for G4VParticleChange * G4FastSimulationManager::InvokePostStepDoIt() (" __HERE__ ")");
  // signature to use in the veto list: G4VParticleChange * G4FastSimulationManager::InvokePostStepDoIt()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:153:22
  t32.method("InvokePostStepDoIt", static_cast<G4VParticleChange * (G4FastSimulationManager::*)() >(&G4FastSimulationManager::InvokePostStepDoIt));

  DEBUG_MSG("Adding wrapper for G4bool G4FastSimulationManager::AtRestGetFastSimulationManagerTrigger(const G4Track &, const G4Navigator *) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4FastSimulationManager::AtRestGetFastSimulationManagerTrigger(const G4Track &, const G4Navigator *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:156:10
  t32.method("AtRestGetFastSimulationManagerTrigger", static_cast<G4bool (G4FastSimulationManager::*)(const G4Track &, const G4Navigator *) >(&G4FastSimulationManager::AtRestGetFastSimulationManagerTrigger));
  t32.method("AtRestGetFastSimulationManagerTrigger", [](G4FastSimulationManager& a, const G4Track & arg0)->G4bool{ return a.AtRestGetFastSimulationManagerTrigger(arg0); });
  t32.method("AtRestGetFastSimulationManagerTrigger", [](G4FastSimulationManager* a, const G4Track & arg0)->G4bool{ return a->AtRestGetFastSimulationManagerTrigger(arg0); });

  DEBUG_MSG("Adding wrapper for G4VParticleChange * G4FastSimulationManager::InvokeAtRestDoIt() (" __HERE__ ")");
  // signature to use in the veto list: G4VParticleChange * G4FastSimulationManager::InvokeAtRestDoIt()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:158:23
  t32.method("InvokeAtRestDoIt", static_cast<G4VParticleChange * (G4FastSimulationManager::*)() >(&G4FastSimulationManager::InvokeAtRestDoIt));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for G4bool G4FastSimulationManager::operator==(const G4FastSimulationManager &) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4FastSimulationManager::operator==(const G4FastSimulationManager &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4FastSimulationManager.hh:161:10
  t32.method("==", static_cast<G4bool (G4FastSimulationManager::*)(const G4FastSimulationManager &)  const>(&G4FastSimulationManager::operator==));

  /* End of G4FastSimulationManager class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class HepGeom::Transform3D
   */

  types.unset_override_module();


  DEBUG_MSG("Adding wrapper for void HepGeom::Transform3D::Transform3D(const CLHEP::HepRotation &, const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:217:12
  t36.constructor<const CLHEP::HepRotation &, const CLHEP::Hep3Vector &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void HepGeom::Transform3D::Transform3D(const HepGeom::Transform3D &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:230:5
  t36.constructor<const HepGeom::Transform3D &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for HepGeom::Transform3D & HepGeom::Transform3D::operator=(const HepGeom::Transform3D &) (" __HERE__ ")");
  // signature to use in the veto list: HepGeom::Transform3D & HepGeom::Transform3D::operator=(const HepGeom::Transform3D &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:242:19
  t36.method("assign", static_cast<HepGeom::Transform3D & (HepGeom::Transform3D::*)(const HepGeom::Transform3D &) >(&HepGeom::Transform3D::operator=));

  types.set_override_module(jl_base_module);


  DEBUG_MSG("Adding getindex method to wrap const HepGeom::Transform3D::Transform3D_row HepGeom::Transform3D::operator[](int) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:250:34
  t36.method("getindex",
    [](HepGeom::Transform3D& a, int i){
    return a[i];
  });

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for double HepGeom::Transform3D::operator()(int, int) (" __HERE__ ")");
  // signature to use in the veto list: double HepGeom::Transform3D::operator()(int, int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:253:12
  t36.method("paren", static_cast<double (HepGeom::Transform3D::*)(int, int)  const>(&HepGeom::Transform3D::operator()));

  DEBUG_MSG("Adding wrapper for double HepGeom::Transform3D::xx() (" __HERE__ ")");
  // signature to use in the veto list: double HepGeom::Transform3D::xx()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:257:12
  t36.method("xx", static_cast<double (HepGeom::Transform3D::*)()  const>(&HepGeom::Transform3D::xx));

  DEBUG_MSG("Adding wrapper for double HepGeom::Transform3D::xy() (" __HERE__ ")");
  // signature to use in the veto list: double HepGeom::Transform3D::xy()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:260:12
  t36.method("xy", static_cast<double (HepGeom::Transform3D::*)()  const>(&HepGeom::Transform3D::xy));

  DEBUG_MSG("Adding wrapper for double HepGeom::Transform3D::xz() (" __HERE__ ")");
  // signature to use in the veto list: double HepGeom::Transform3D::xz()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:263:12
  t36.method("xz", static_cast<double (HepGeom::Transform3D::*)()  const>(&HepGeom::Transform3D::xz));

  DEBUG_MSG("Adding wrapper for double HepGeom::Transform3D::yx() (" __HERE__ ")");
  // signature to use in the veto list: double HepGeom::Transform3D::yx()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:266:12
  t36.method("yx", static_cast<double (HepGeom::Transform3D::*)()  const>(&HepGeom::Transform3D::yx));

  DEBUG_MSG("Adding wrapper for double HepGeom::Transform3D::yy() (" __HERE__ ")");
  // signature to use in the veto list: double HepGeom::Transform3D::yy()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:269:12
  t36.method("yy", static_cast<double (HepGeom::Transform3D::*)()  const>(&HepGeom::Transform3D::yy));

  DEBUG_MSG("Adding wrapper for double HepGeom::Transform3D::yz() (" __HERE__ ")");
  // signature to use in the veto list: double HepGeom::Transform3D::yz()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:272:12
  t36.method("yz", static_cast<double (HepGeom::Transform3D::*)()  const>(&HepGeom::Transform3D::yz));

  DEBUG_MSG("Adding wrapper for double HepGeom::Transform3D::zx() (" __HERE__ ")");
  // signature to use in the veto list: double HepGeom::Transform3D::zx()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:275:12
  t36.method("zx", static_cast<double (HepGeom::Transform3D::*)()  const>(&HepGeom::Transform3D::zx));

  DEBUG_MSG("Adding wrapper for double HepGeom::Transform3D::zy() (" __HERE__ ")");
  // signature to use in the veto list: double HepGeom::Transform3D::zy()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:278:12
  t36.method("zy", static_cast<double (HepGeom::Transform3D::*)()  const>(&HepGeom::Transform3D::zy));

  DEBUG_MSG("Adding wrapper for double HepGeom::Transform3D::zz() (" __HERE__ ")");
  // signature to use in the veto list: double HepGeom::Transform3D::zz()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:281:12
  t36.method("zz", static_cast<double (HepGeom::Transform3D::*)()  const>(&HepGeom::Transform3D::zz));

  DEBUG_MSG("Adding wrapper for double HepGeom::Transform3D::dx() (" __HERE__ ")");
  // signature to use in the veto list: double HepGeom::Transform3D::dx()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:284:12
  t36.method("dx", static_cast<double (HepGeom::Transform3D::*)()  const>(&HepGeom::Transform3D::dx));

  DEBUG_MSG("Adding wrapper for double HepGeom::Transform3D::dy() (" __HERE__ ")");
  // signature to use in the veto list: double HepGeom::Transform3D::dy()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:287:12
  t36.method("dy", static_cast<double (HepGeom::Transform3D::*)()  const>(&HepGeom::Transform3D::dy));

  DEBUG_MSG("Adding wrapper for double HepGeom::Transform3D::dz() (" __HERE__ ")");
  // signature to use in the veto list: double HepGeom::Transform3D::dz()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:290:12
  t36.method("dz", static_cast<double (HepGeom::Transform3D::*)()  const>(&HepGeom::Transform3D::dz));

  DEBUG_MSG("Adding wrapper for void HepGeom::Transform3D::setIdentity() (" __HERE__ ")");
  // signature to use in the veto list: void HepGeom::Transform3D::setIdentity()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:294:10
  t36.method("setIdentity", static_cast<void (HepGeom::Transform3D::*)() >(&HepGeom::Transform3D::setIdentity));

  DEBUG_MSG("Adding wrapper for HepGeom::Transform3D HepGeom::Transform3D::inverse() (" __HERE__ ")");
  // signature to use in the veto list: HepGeom::Transform3D HepGeom::Transform3D::inverse()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:300:17
  t36.method("inverse", static_cast<HepGeom::Transform3D (HepGeom::Transform3D::*)()  const>(&HepGeom::Transform3D::inverse));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for HepGeom::Transform3D HepGeom::Transform3D::operator*(const HepGeom::Transform3D &) (" __HERE__ ")");
  // signature to use in the veto list: HepGeom::Transform3D HepGeom::Transform3D::operator*(const HepGeom::Transform3D &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:304:17
  t36.method("*", static_cast<HepGeom::Transform3D (HepGeom::Transform3D::*)(const HepGeom::Transform3D &)  const>(&HepGeom::Transform3D::operator*));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for void HepGeom::Transform3D::getDecomposition(HepGeom::Scale3D &, HepGeom::Rotate3D &, HepGeom::Translate3D &) (" __HERE__ ")");
  // signature to use in the veto list: void HepGeom::Transform3D::getDecomposition(HepGeom::Scale3D &, HepGeom::Rotate3D &, HepGeom::Translate3D &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:321:10
  t36.method("getDecomposition", static_cast<void (HepGeom::Transform3D::*)(HepGeom::Scale3D &, HepGeom::Rotate3D &, HepGeom::Translate3D &)  const>(&HepGeom::Transform3D::getDecomposition));

  DEBUG_MSG("Adding wrapper for bool HepGeom::Transform3D::isNear(const HepGeom::Transform3D &, double) (" __HERE__ ")");
  // signature to use in the veto list: bool HepGeom::Transform3D::isNear(const HepGeom::Transform3D &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:329:10
  t36.method("isNear", static_cast<bool (HepGeom::Transform3D::*)(const HepGeom::Transform3D &, double)  const>(&HepGeom::Transform3D::isNear));
  t36.method("isNear", [](HepGeom::Transform3D const& a, const HepGeom::Transform3D & arg0)->bool{ return a.isNear(arg0); });
  t36.method("isNear", [](HepGeom::Transform3D const* a, const HepGeom::Transform3D & arg0)->bool{ return a->isNear(arg0); });

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation HepGeom::Transform3D::getRotation() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation HepGeom::Transform3D::getRotation()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:335:31
  t36.method("getRotation", static_cast<CLHEP::HepRotation (HepGeom::Transform3D::*)()  const>(&HepGeom::Transform3D::getRotation));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector HepGeom::Transform3D::getTranslation() (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector HepGeom::Transform3D::getTranslation()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:341:30
  t36.method("getTranslation", static_cast<CLHEP::Hep3Vector (HepGeom::Transform3D::*)()  const>(&HepGeom::Transform3D::getTranslation));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for bool HepGeom::Transform3D::operator==(const HepGeom::Transform3D &) (" __HERE__ ")");
  // signature to use in the veto list: bool HepGeom::Transform3D::operator==(const HepGeom::Transform3D &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:345:10
  t36.method("==", static_cast<bool (HepGeom::Transform3D::*)(const HepGeom::Transform3D &)  const>(&HepGeom::Transform3D::operator==));

  DEBUG_MSG("Adding wrapper for bool HepGeom::Transform3D::operator!=(const HepGeom::Transform3D &) (" __HERE__ ")");
  // signature to use in the veto list: bool HepGeom::Transform3D::operator!=(const HepGeom::Transform3D &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:349:10
  t36.method("!=", static_cast<bool (HepGeom::Transform3D::*)(const HepGeom::Transform3D &)  const>(&HepGeom::Transform3D::operator!=));

  /* End of HepGeom::Transform3D class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class HepGeom::Transform3D::Transform3D_row
   */

  types.unset_override_module();


  DEBUG_MSG("Adding wrapper for void HepGeom::Transform3D::Transform3D_row::Transform3D_row(const HepGeom::Transform3D &, int) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:201:14
  t37.constructor<const HepGeom::Transform3D &, int>(/*finalize=*/true);
  types.set_override_module(jl_base_module);


  DEBUG_MSG("Adding getindex method to wrap double HepGeom::Transform3D::Transform3D_row::operator[](int) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:202:21
  t37.method("getindex",
    [](HepGeom::Transform3D::Transform3D_row& a, int i){
    return a[i];
  });

  /* End of HepGeom::Transform3D::Transform3D_row class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class HepGeom::Scale3D
   */

  types.unset_override_module();


  DEBUG_MSG("Adding wrapper for void HepGeom::Scale3D::Scale3D(double, double, double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:730:5
  t38.constructor<double, double, double>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void HepGeom::Scale3D::Scale3D(double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:735:5
  t38.constructor<double>(/*finalize=*/true);

  /* End of HepGeom::Scale3D class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class HepGeom::Rotate3D
   */


  DEBUG_MSG("Adding wrapper for void HepGeom::Rotate3D::Rotate3D(const CLHEP::HepRotation &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:378:12
  t39.constructor<const CLHEP::HepRotation &>(/*finalize=*/true);

  /* End of HepGeom::Rotate3D class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class HepGeom::Translate3D
   */


  DEBUG_MSG("Adding wrapper for void HepGeom::Translate3D::Translate3D(const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:519:12
  t40.constructor<const CLHEP::Hep3Vector &>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void HepGeom::Translate3D::Translate3D(double, double, double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:523:5
  t40.constructor<double, double, double>(/*finalize=*/true);

  /* End of HepGeom::Translate3D class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class HepGeom::RotateX3D
   */


  DEBUG_MSG("Adding wrapper for void HepGeom::RotateX3D::RotateX3D(double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:433:5
  t41.constructor<double>(/*finalize=*/true);

  /* End of HepGeom::RotateX3D class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class HepGeom::RotateY3D
   */


  DEBUG_MSG("Adding wrapper for void HepGeom::RotateY3D::RotateY3D(double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:461:5
  t42.constructor<double>(/*finalize=*/true);

  /* End of HepGeom::RotateY3D class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class HepGeom::RotateZ3D
   */


  DEBUG_MSG("Adding wrapper for void HepGeom::RotateZ3D::RotateZ3D(double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:489:5
  t43.constructor<double>(/*finalize=*/true);

  /* End of HepGeom::RotateZ3D class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class HepGeom::TranslateX3D
   */


  DEBUG_MSG("Adding wrapper for void HepGeom::TranslateX3D::TranslateX3D(double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:549:5
  t44.constructor<double>(/*finalize=*/true);

  /* End of HepGeom::TranslateX3D class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class HepGeom::TranslateY3D
   */


  DEBUG_MSG("Adding wrapper for void HepGeom::TranslateY3D::TranslateY3D(double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:574:5
  t45.constructor<double>(/*finalize=*/true);

  /* End of HepGeom::TranslateY3D class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class HepGeom::TranslateZ3D
   */


  DEBUG_MSG("Adding wrapper for void HepGeom::TranslateZ3D::TranslateZ3D(double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:599:5
  t46.constructor<double>(/*finalize=*/true);

  /* End of HepGeom::TranslateZ3D class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class HepGeom::Reflect3D
   */


  DEBUG_MSG("Adding wrapper for void HepGeom::Reflect3D::Reflect3D(double, double, double, double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:634:5
  t47.constructor<double, double, double, double>(/*finalize=*/true);

  /* End of HepGeom::Reflect3D class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class HepGeom::ReflectX3D
   */


  DEBUG_MSG("Adding wrapper for void HepGeom::ReflectX3D::ReflectX3D(double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:660:5
  t48.constructor<double>(/*finalize=*/true);

  /* End of HepGeom::ReflectX3D class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class HepGeom::ReflectY3D
   */


  DEBUG_MSG("Adding wrapper for void HepGeom::ReflectY3D::ReflectY3D(double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:681:5
  t49.constructor<double>(/*finalize=*/true);

  /* End of HepGeom::ReflectY3D class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class HepGeom::ReflectZ3D
   */


  DEBUG_MSG("Adding wrapper for void HepGeom::ReflectZ3D::ReflectZ3D(double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:702:5
  t50.constructor<double>(/*finalize=*/true);

  /* End of HepGeom::ReflectZ3D class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class HepGeom::ScaleX3D
   */


  DEBUG_MSG("Adding wrapper for void HepGeom::ScaleX3D::ScaleX3D(double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:761:5
  t51.constructor<double>(/*finalize=*/true);

  /* End of HepGeom::ScaleX3D class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class HepGeom::ScaleY3D
   */


  DEBUG_MSG("Adding wrapper for void HepGeom::ScaleY3D::ScaleY3D(double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:786:5
  t52.constructor<double>(/*finalize=*/true);

  /* End of HepGeom::ScaleY3D class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class HepGeom::ScaleZ3D
   */


  DEBUG_MSG("Adding wrapper for void HepGeom::ScaleZ3D::ScaleZ3D(double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:810:5
  t53.constructor<double>(/*finalize=*/true);

  /* End of HepGeom::ScaleZ3D class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4VUserDetectorConstruction
   */

  DEBUG_MSG("Adding wrapper for G4VPhysicalVolume * G4VUserDetectorConstruction::Construct() (" __HERE__ ")");
  // signature to use in the veto list: G4VPhysicalVolume * G4VUserDetectorConstruction::Construct()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserDetectorConstruction.hh:57:32
  t54.method("Construct", static_cast<G4VPhysicalVolume * (G4VUserDetectorConstruction::*)() >(&G4VUserDetectorConstruction::Construct));

  DEBUG_MSG("Adding wrapper for void G4VUserDetectorConstruction::ConstructSDandField() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserDetectorConstruction::ConstructSDandField()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserDetectorConstruction.hh:59:18
  t54.method("ConstructSDandField", static_cast<void (G4VUserDetectorConstruction::*)() >(&G4VUserDetectorConstruction::ConstructSDandField));

  DEBUG_MSG("Adding wrapper for void G4VUserDetectorConstruction::CloneSD() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserDetectorConstruction::CloneSD()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserDetectorConstruction.hh:63:18
  t54.method("CloneSD", static_cast<void (G4VUserDetectorConstruction::*)() >(&G4VUserDetectorConstruction::CloneSD));

  DEBUG_MSG("Adding wrapper for void G4VUserDetectorConstruction::CloneF() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserDetectorConstruction::CloneF()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserDetectorConstruction.hh:64:18
  t54.method("CloneF", static_cast<void (G4VUserDetectorConstruction::*)() >(&G4VUserDetectorConstruction::CloneF));

  DEBUG_MSG("Adding wrapper for G4int G4VUserDetectorConstruction::ConstructParallelGeometries() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4VUserDetectorConstruction::ConstructParallelGeometries()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserDetectorConstruction.hh:68:11
  t54.method("ConstructParallelGeometries", static_cast<G4int (G4VUserDetectorConstruction::*)() >(&G4VUserDetectorConstruction::ConstructParallelGeometries));

  DEBUG_MSG("Adding wrapper for void G4VUserDetectorConstruction::ConstructParallelSD() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserDetectorConstruction::ConstructParallelSD()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserDetectorConstruction.hh:69:10
  t54.method("ConstructParallelSD", static_cast<void (G4VUserDetectorConstruction::*)() >(&G4VUserDetectorConstruction::ConstructParallelSD));

  DEBUG_MSG("Adding wrapper for G4int G4VUserDetectorConstruction::GetNumberOfParallelWorld() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4VUserDetectorConstruction::GetNumberOfParallelWorld()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserDetectorConstruction.hh:71:11
  t54.method("GetNumberOfParallelWorld", static_cast<G4int (G4VUserDetectorConstruction::*)()  const>(&G4VUserDetectorConstruction::GetNumberOfParallelWorld));

  /* End of G4VUserDetectorConstruction class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4VUserActionInitialization
   */

  DEBUG_MSG("Adding wrapper for void G4VUserActionInitialization::Build() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserActionInitialization::Build()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserActionInitialization.hh:65:18
  t55.method("Build", static_cast<void (G4VUserActionInitialization::*)()  const>(&G4VUserActionInitialization::Build));

  DEBUG_MSG("Adding wrapper for void G4VUserActionInitialization::BuildForMaster() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserActionInitialization::BuildForMaster()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserActionInitialization.hh:69:18
  t55.method("BuildForMaster", static_cast<void (G4VUserActionInitialization::*)()  const>(&G4VUserActionInitialization::BuildForMaster));

  DEBUG_MSG("Adding wrapper for G4VSteppingVerbose * G4VUserActionInitialization::InitializeSteppingVerbose() (" __HERE__ ")");
  // signature to use in the veto list: G4VSteppingVerbose * G4VUserActionInitialization::InitializeSteppingVerbose()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserActionInitialization.hh:76:33
  t55.method("InitializeSteppingVerbose", static_cast<G4VSteppingVerbose * (G4VUserActionInitialization::*)()  const>(&G4VUserActionInitialization::InitializeSteppingVerbose));

  /* End of G4VUserActionInitialization class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4VUserPrimaryGeneratorAction
   */

  DEBUG_MSG("Adding wrapper for void G4VUserPrimaryGeneratorAction::GeneratePrimaries(G4Event *) (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPrimaryGeneratorAction::GeneratePrimaries(G4Event *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPrimaryGeneratorAction.hh:54:18
  t57.method("GeneratePrimaries", static_cast<void (G4VUserPrimaryGeneratorAction::*)(G4Event *) >(&G4VUserPrimaryGeneratorAction::GeneratePrimaries));

  /* End of G4VUserPrimaryGeneratorAction class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4VPrimaryGenerator
   */

  DEBUG_MSG("Adding wrapper for G4bool G4VPrimaryGenerator::CheckVertexInsideWorld(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VPrimaryGenerator::CheckVertexInsideWorld(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPrimaryGenerator.hh:52:19
  t59.method("G4VPrimaryGenerator!CheckVertexInsideWorld", static_cast<G4bool (*)(const G4ThreeVector &) >(&G4VPrimaryGenerator::CheckVertexInsideWorld));

  DEBUG_MSG("Adding wrapper for void G4VPrimaryGenerator::GeneratePrimaryVertex(G4Event *) (" __HERE__ ")");
  // signature to use in the veto list: void G4VPrimaryGenerator::GeneratePrimaryVertex(G4Event *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPrimaryGenerator.hh:56:18
  t59.method("GeneratePrimaryVertex", static_cast<void (G4VPrimaryGenerator::*)(G4Event *) >(&G4VPrimaryGenerator::GeneratePrimaryVertex));

  DEBUG_MSG("Adding wrapper for G4ThreeVector G4VPrimaryGenerator::GetParticlePosition() (" __HERE__ ")");
  // signature to use in the veto list: G4ThreeVector G4VPrimaryGenerator::GetParticlePosition()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPrimaryGenerator.hh:60:26
  t59.method("GetParticlePosition", static_cast<G4ThreeVector (G4VPrimaryGenerator::*)() >(&G4VPrimaryGenerator::GetParticlePosition));

  DEBUG_MSG("Adding wrapper for G4double G4VPrimaryGenerator::GetParticleTime() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4VPrimaryGenerator::GetParticleTime()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPrimaryGenerator.hh:61:21
  t59.method("GetParticleTime", static_cast<G4double (G4VPrimaryGenerator::*)() >(&G4VPrimaryGenerator::GetParticleTime));

  DEBUG_MSG("Adding wrapper for void G4VPrimaryGenerator::SetParticlePosition(G4ThreeVector) (" __HERE__ ")");
  // signature to use in the veto list: void G4VPrimaryGenerator::SetParticlePosition(G4ThreeVector)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPrimaryGenerator.hh:63:17
  t59.method("SetParticlePosition", static_cast<void (G4VPrimaryGenerator::*)(G4ThreeVector) >(&G4VPrimaryGenerator::SetParticlePosition));

  DEBUG_MSG("Adding wrapper for void G4VPrimaryGenerator::SetParticleTime(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4VPrimaryGenerator::SetParticleTime(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VPrimaryGenerator.hh:65:17
  t59.method("SetParticleTime", static_cast<void (G4VPrimaryGenerator::*)(G4double) >(&G4VPrimaryGenerator::SetParticleTime));

  /* End of G4VPrimaryGenerator class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4ParticleGun
   */


  DEBUG_MSG("Adding wrapper for void G4ParticleGun::G4ParticleGun(G4int) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:69:14
  t60.constructor<G4int>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void G4ParticleGun::G4ParticleGun(G4ParticleDefinition *, G4int) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:70:14
  t60.constructor<G4ParticleDefinition *>(/*finalize=*/true);
  t60.constructor<G4ParticleDefinition *, G4int>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for void G4ParticleGun::GeneratePrimaryVertex(G4Event *) (" __HERE__ ")");
  // signature to use in the veto list: void G4ParticleGun::GeneratePrimaryVertex(G4Event *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:83:10
  t60.method("GeneratePrimaryVertex", static_cast<void (G4ParticleGun::*)(G4Event *) >(&G4ParticleGun::GeneratePrimaryVertex));

  DEBUG_MSG("Adding wrapper for void G4ParticleGun::SetParticleDefinition(G4ParticleDefinition *) (" __HERE__ ")");
  // signature to use in the veto list: void G4ParticleGun::SetParticleDefinition(G4ParticleDefinition *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:92:10
  t60.method("SetParticleDefinition", static_cast<void (G4ParticleGun::*)(G4ParticleDefinition *) >(&G4ParticleGun::SetParticleDefinition));

  DEBUG_MSG("Adding wrapper for void G4ParticleGun::SetParticleEnergy(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4ParticleGun::SetParticleEnergy(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:93:10
  t60.method("SetParticleEnergy", static_cast<void (G4ParticleGun::*)(G4double) >(&G4ParticleGun::SetParticleEnergy));

  DEBUG_MSG("Adding wrapper for void G4ParticleGun::SetParticleMomentum(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4ParticleGun::SetParticleMomentum(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:94:10
  t60.method("SetParticleMomentum", static_cast<void (G4ParticleGun::*)(G4double) >(&G4ParticleGun::SetParticleMomentum));

  DEBUG_MSG("Adding wrapper for void G4ParticleGun::SetParticleMomentum(G4ParticleMomentum) (" __HERE__ ")");
  // signature to use in the veto list: void G4ParticleGun::SetParticleMomentum(G4ParticleMomentum)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:95:10
  t60.method("SetParticleMomentum", static_cast<void (G4ParticleGun::*)(G4ParticleMomentum) >(&G4ParticleGun::SetParticleMomentum));

  DEBUG_MSG("Adding wrapper for void G4ParticleGun::SetParticleMomentumDirection(G4ParticleMomentum) (" __HERE__ ")");
  // signature to use in the veto list: void G4ParticleGun::SetParticleMomentumDirection(G4ParticleMomentum)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:96:17
  t60.method("SetParticleMomentumDirection", static_cast<void (G4ParticleGun::*)(G4ParticleMomentum) >(&G4ParticleGun::SetParticleMomentumDirection));

  DEBUG_MSG("Adding wrapper for void G4ParticleGun::SetParticleCharge(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4ParticleGun::SetParticleCharge(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:98:17
  t60.method("SetParticleCharge", static_cast<void (G4ParticleGun::*)(G4double) >(&G4ParticleGun::SetParticleCharge));

  DEBUG_MSG("Adding wrapper for void G4ParticleGun::SetParticlePolarization(G4ThreeVector) (" __HERE__ ")");
  // signature to use in the veto list: void G4ParticleGun::SetParticlePolarization(G4ThreeVector)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:100:17
  t60.method("SetParticlePolarization", static_cast<void (G4ParticleGun::*)(G4ThreeVector) >(&G4ParticleGun::SetParticlePolarization));

  DEBUG_MSG("Adding wrapper for void G4ParticleGun::SetNumberOfParticles(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4ParticleGun::SetNumberOfParticles(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:102:17
  t60.method("SetNumberOfParticles", static_cast<void (G4ParticleGun::*)(G4int) >(&G4ParticleGun::SetNumberOfParticles));

  DEBUG_MSG("Adding wrapper for G4ParticleDefinition * G4ParticleGun::GetParticleDefinition() (" __HERE__ ")");
  // signature to use in the veto list: G4ParticleDefinition * G4ParticleGun::GetParticleDefinition()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:105:34
  t60.method("GetParticleDefinition", static_cast<G4ParticleDefinition * (G4ParticleGun::*)()  const>(&G4ParticleGun::GetParticleDefinition));

  DEBUG_MSG("Adding wrapper for G4ParticleMomentum G4ParticleGun::GetParticleMomentumDirection() (" __HERE__ ")");
  // signature to use in the veto list: G4ParticleMomentum G4ParticleGun::GetParticleMomentumDirection()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:107:31
  t60.method("GetParticleMomentumDirection", static_cast<G4ParticleMomentum (G4ParticleGun::*)()  const>(&G4ParticleGun::GetParticleMomentumDirection));

  DEBUG_MSG("Adding wrapper for G4double G4ParticleGun::GetParticleEnergy() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4ParticleGun::GetParticleEnergy()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:109:21
  t60.method("GetParticleEnergy", static_cast<G4double (G4ParticleGun::*)()  const>(&G4ParticleGun::GetParticleEnergy));

  DEBUG_MSG("Adding wrapper for G4double G4ParticleGun::GetParticleMomentum() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4ParticleGun::GetParticleMomentum()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:111:21
  t60.method("GetParticleMomentum", static_cast<G4double (G4ParticleGun::*)()  const>(&G4ParticleGun::GetParticleMomentum));

  DEBUG_MSG("Adding wrapper for G4double G4ParticleGun::GetParticleCharge() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4ParticleGun::GetParticleCharge()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:113:21
  t60.method("GetParticleCharge", static_cast<G4double (G4ParticleGun::*)()  const>(&G4ParticleGun::GetParticleCharge));

  DEBUG_MSG("Adding wrapper for G4ThreeVector G4ParticleGun::GetParticlePolarization() (" __HERE__ ")");
  // signature to use in the veto list: G4ThreeVector G4ParticleGun::GetParticlePolarization()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:115:26
  t60.method("GetParticlePolarization", static_cast<G4ThreeVector (G4ParticleGun::*)()  const>(&G4ParticleGun::GetParticlePolarization));

  DEBUG_MSG("Adding wrapper for G4int G4ParticleGun::GetNumberOfParticles() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4ParticleGun::GetNumberOfParticles()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4ParticleGun.hh:117:18
  t60.method("GetNumberOfParticles", static_cast<G4int (G4ParticleGun::*)()  const>(&G4ParticleGun::GetNumberOfParticles));

  /* End of G4ParticleGun class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4JLExceptionHandler
   */

  DEBUG_MSG("Adding wrapper for G4bool G4JLExceptionHandler::Notify(const char *, const char *, G4ExceptionSeverity, const char *) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4JLExceptionHandler::Notify(const char *, const char *, G4ExceptionSeverity, const char *)
  // defined in ./cpp/Geant4Wrap.h:23:10
  t62.method("Notify", static_cast<G4bool (G4JLExceptionHandler::*)(const char *, const char *, G4ExceptionSeverity, const char *) >(&G4JLExceptionHandler::Notify));

  /* End of G4JLExceptionHandler class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4JLDetectorConstruction
   */


  DEBUG_MSG("Adding wrapper for void G4JLDetectorConstruction::G4JLDetectorConstruction(construct_f) (" __HERE__ ")");
  // defined in ./cpp/Geant4Wrap.h:33:5
  t64.constructor<construct_f>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for G4VPhysicalVolume * G4JLDetectorConstruction::Construct() (" __HERE__ ")");
  // signature to use in the veto list: G4VPhysicalVolume * G4JLDetectorConstruction::Construct()
  // defined in ./cpp/Geant4Wrap.h:35:24
  t64.method("Construct", static_cast<G4VPhysicalVolume * (G4JLDetectorConstruction::*)() >(&G4JLDetectorConstruction::Construct));

  /* End of G4JLDetectorConstruction class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4JLActionInitialization
   */


  DEBUG_MSG("Adding wrapper for void G4JLActionInitialization::G4JLActionInitialization(build_f) (" __HERE__ ")");
  // defined in ./cpp/Geant4Wrap.h:46:5
  t65.constructor<build_f>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for void G4JLActionInitialization::BuildForMaster() (" __HERE__ ")");
  // signature to use in the veto list: void G4JLActionInitialization::BuildForMaster()
  // defined in ./cpp/Geant4Wrap.h:48:10
  t65.method("BuildForMaster", static_cast<void (G4JLActionInitialization::*)()  const>(&G4JLActionInitialization::BuildForMaster));

  DEBUG_MSG("Adding wrapper for void G4JLActionInitialization::Build() (" __HERE__ ")");
  // signature to use in the veto list: void G4JLActionInitialization::Build()
  // defined in ./cpp/Geant4Wrap.h:49:10
  t65.method("Build", static_cast<void (G4JLActionInitialization::*)()  const>(&G4JLActionInitialization::Build));

  DEBUG_MSG("Adding wrapper for void G4JLActionInitialization::SetUserAction(G4VUserPrimaryGeneratorAction *) (" __HERE__ ")");
  // signature to use in the veto list: void G4JLActionInitialization::SetUserAction(G4VUserPrimaryGeneratorAction *)
  // defined in ./cpp/Geant4Wrap.h:51:10
  t65.method("SetUserAction", static_cast<void (G4JLActionInitialization::*)(G4VUserPrimaryGeneratorAction *)  const>(&G4JLActionInitialization::SetUserAction));

  DEBUG_MSG("Adding wrapper for void G4JLActionInitialization::SetUserAction(G4UserStackingAction *) (" __HERE__ ")");
  // signature to use in the veto list: void G4JLActionInitialization::SetUserAction(G4UserStackingAction *)
  // defined in ./cpp/Geant4Wrap.h:54:10
  t65.method("SetUserAction", static_cast<void (G4JLActionInitialization::*)(G4UserStackingAction *)  const>(&G4JLActionInitialization::SetUserAction));

  DEBUG_MSG("Adding wrapper for void G4JLActionInitialization::SetUserAction(G4UserTrackingAction *) (" __HERE__ ")");
  // signature to use in the veto list: void G4JLActionInitialization::SetUserAction(G4UserTrackingAction *)
  // defined in ./cpp/Geant4Wrap.h:55:10
  t65.method("SetUserAction", static_cast<void (G4JLActionInitialization::*)(G4UserTrackingAction *)  const>(&G4JLActionInitialization::SetUserAction));

  DEBUG_MSG("Adding wrapper for void G4JLActionInitialization::SetUserAction(G4UserSteppingAction *) (" __HERE__ ")");
  // signature to use in the veto list: void G4JLActionInitialization::SetUserAction(G4UserSteppingAction *)
  // defined in ./cpp/Geant4Wrap.h:56:10
  t65.method("SetUserAction", static_cast<void (G4JLActionInitialization::*)(G4UserSteppingAction *)  const>(&G4JLActionInitialization::SetUserAction));

  /* End of G4JLActionInitialization class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4JLParticleGun
   */

  DEBUG_MSG("Adding wrapper for G4ParticleGun * G4JLParticleGun::GetGun() (" __HERE__ ")");
  // signature to use in the veto list: G4ParticleGun * G4JLParticleGun::GetGun()
  // defined in ./cpp/Geant4Wrap.h:67:18
  t69.method("GetGun", static_cast<G4ParticleGun * (G4JLParticleGun::*)()  const>(&G4JLParticleGun::GetGun));

  DEBUG_MSG("Adding wrapper for void G4JLParticleGun::GeneratePrimaries(G4Event *) (" __HERE__ ")");
  // signature to use in the veto list: void G4JLParticleGun::GeneratePrimaries(G4Event *)
  // defined in ./cpp/Geant4Wrap.h:68:8
  t69.method("GeneratePrimaries", static_cast<void (G4JLParticleGun::*)(G4Event *) >(&G4JLParticleGun::GeneratePrimaries));

  /* End of G4JLParticleGun class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4RunManager
   */

  DEBUG_MSG("Adding wrapper for G4RunManager * G4RunManager::GetRunManager() (" __HERE__ ")");
  // signature to use in the veto list: G4RunManager * G4RunManager::GetRunManager()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:147:26
  t73.method("G4RunManager!GetRunManager", static_cast<G4RunManager * (*)() >(&G4RunManager::GetRunManager));

  DEBUG_MSG("Adding wrapper for void G4RunManager::BeamOn(G4int, const char *, G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::BeamOn(G4int, const char *, G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:163:18
  t73.method("BeamOn", static_cast<void (G4RunManager::*)(G4int, const char *, G4int) >(&G4RunManager::BeamOn));
  t73.method("BeamOn", [](G4RunManager& a, G4int arg0)->void{ a.BeamOn(arg0); });
  t73.method("BeamOn", [](G4RunManager& a, G4int arg0, const char * arg1)->void{ a.BeamOn(arg0, arg1); });
  t73.method("BeamOn", [](G4RunManager* a, G4int arg0)->void{ a->BeamOn(arg0); });
  t73.method("BeamOn", [](G4RunManager* a, G4int arg0, const char * arg1)->void{ a->BeamOn(arg0, arg1); });

  DEBUG_MSG("Adding wrapper for void G4RunManager::Initialize() (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::Initialize()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:175:18
  t73.method("Initialize", static_cast<void (G4RunManager::*)() >(&G4RunManager::Initialize));

  DEBUG_MSG("Adding wrapper for void G4RunManager::DefineWorldVolume(G4VPhysicalVolume *, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::DefineWorldVolume(G4VPhysicalVolume *, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:188:18
  t73.method("DefineWorldVolume", static_cast<void (G4RunManager::*)(G4VPhysicalVolume *, G4bool) >(&G4RunManager::DefineWorldVolume));
  t73.method("DefineWorldVolume", [](G4RunManager& a, G4VPhysicalVolume * arg0)->void{ a.DefineWorldVolume(arg0); });
  t73.method("DefineWorldVolume", [](G4RunManager* a, G4VPhysicalVolume * arg0)->void{ a->DefineWorldVolume(arg0); });

  DEBUG_MSG("Adding wrapper for void G4RunManager::AbortRun(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::AbortRun(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:197:18
  t73.method("AbortRun", static_cast<void (G4RunManager::*)(G4bool) >(&G4RunManager::AbortRun));
  t73.method("AbortRun", [](G4RunManager& a)->void{ a.AbortRun(); });
  t73.method("AbortRun", [](G4RunManager* a)->void{ a->AbortRun(); });

  DEBUG_MSG("Adding wrapper for void G4RunManager::AbortEvent() (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::AbortEvent()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:206:18
  t73.method("AbortEvent", static_cast<void (G4RunManager::*)() >(&G4RunManager::AbortEvent));

  DEBUG_MSG("Adding wrapper for void G4RunManager::InitializeGeometry() (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::InitializeGeometry()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:211:18
  t73.method("InitializeGeometry", static_cast<void (G4RunManager::*)() >(&G4RunManager::InitializeGeometry));

  DEBUG_MSG("Adding wrapper for void G4RunManager::InitializePhysics() (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::InitializePhysics()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:212:18
  t73.method("InitializePhysics", static_cast<void (G4RunManager::*)() >(&G4RunManager::InitializePhysics));

  DEBUG_MSG("Adding wrapper for G4bool G4RunManager::ConfirmBeamOnCondition() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4RunManager::ConfirmBeamOnCondition()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:219:20
  t73.method("ConfirmBeamOnCondition", static_cast<G4bool (G4RunManager::*)() >(&G4RunManager::ConfirmBeamOnCondition));

  DEBUG_MSG("Adding wrapper for void G4RunManager::RunInitialization() (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::RunInitialization()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:220:18
  t73.method("RunInitialization", static_cast<void (G4RunManager::*)() >(&G4RunManager::RunInitialization));

  DEBUG_MSG("Adding wrapper for void G4RunManager::DoEventLoop(G4int, const char *, G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::DoEventLoop(G4int, const char *, G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:221:18
  t73.method("DoEventLoop", static_cast<void (G4RunManager::*)(G4int, const char *, G4int) >(&G4RunManager::DoEventLoop));
  t73.method("DoEventLoop", [](G4RunManager& a, G4int arg0)->void{ a.DoEventLoop(arg0); });
  t73.method("DoEventLoop", [](G4RunManager& a, G4int arg0, const char * arg1)->void{ a.DoEventLoop(arg0, arg1); });
  t73.method("DoEventLoop", [](G4RunManager* a, G4int arg0)->void{ a->DoEventLoop(arg0); });
  t73.method("DoEventLoop", [](G4RunManager* a, G4int arg0, const char * arg1)->void{ a->DoEventLoop(arg0, arg1); });

  DEBUG_MSG("Adding wrapper for void G4RunManager::RunTermination() (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::RunTermination()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:223:18
  t73.method("RunTermination", static_cast<void (G4RunManager::*)() >(&G4RunManager::RunTermination));

  DEBUG_MSG("Adding wrapper for void G4RunManager::InitializeEventLoop(G4int, const char *, G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::InitializeEventLoop(G4int, const char *, G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:240:18
  t73.method("InitializeEventLoop", static_cast<void (G4RunManager::*)(G4int, const char *, G4int) >(&G4RunManager::InitializeEventLoop));
  t73.method("InitializeEventLoop", [](G4RunManager& a, G4int arg0)->void{ a.InitializeEventLoop(arg0); });
  t73.method("InitializeEventLoop", [](G4RunManager& a, G4int arg0, const char * arg1)->void{ a.InitializeEventLoop(arg0, arg1); });
  t73.method("InitializeEventLoop", [](G4RunManager* a, G4int arg0)->void{ a->InitializeEventLoop(arg0); });
  t73.method("InitializeEventLoop", [](G4RunManager* a, G4int arg0, const char * arg1)->void{ a->InitializeEventLoop(arg0, arg1); });

  DEBUG_MSG("Adding wrapper for void G4RunManager::ProcessOneEvent(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::ProcessOneEvent(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:243:18
  t73.method("ProcessOneEvent", static_cast<void (G4RunManager::*)(G4int) >(&G4RunManager::ProcessOneEvent));

  DEBUG_MSG("Adding wrapper for void G4RunManager::TerminateOneEvent() (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::TerminateOneEvent()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:244:18
  t73.method("TerminateOneEvent", static_cast<void (G4RunManager::*)() >(&G4RunManager::TerminateOneEvent));

  DEBUG_MSG("Adding wrapper for void G4RunManager::TerminateEventLoop() (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::TerminateEventLoop()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:245:18
  t73.method("TerminateEventLoop", static_cast<void (G4RunManager::*)() >(&G4RunManager::TerminateEventLoop));

  DEBUG_MSG("Adding wrapper for G4Event * G4RunManager::GenerateEvent(G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4Event * G4RunManager::GenerateEvent(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:248:22
  t73.method("GenerateEvent", static_cast<G4Event * (G4RunManager::*)(G4int) >(&G4RunManager::GenerateEvent));

  DEBUG_MSG("Adding wrapper for void G4RunManager::AnalyzeEvent(G4Event *) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::AnalyzeEvent(G4Event *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:249:18
  t73.method("AnalyzeEvent", static_cast<void (G4RunManager::*)(G4Event *) >(&G4RunManager::AnalyzeEvent));

  DEBUG_MSG("Adding wrapper for void G4RunManager::ConfigureProfilers(const std::vector<std::string> &) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::ConfigureProfilers(const std::vector<std::string> &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:259:18
  t73.method("ConfigureProfilers", static_cast<void (G4RunManager::*)(const std::vector<std::string> &) >(&G4RunManager::ConfigureProfilers));
  t73.method("ConfigureProfilers", [](G4RunManager& a)->void{ a.ConfigureProfilers(); });
  t73.method("ConfigureProfilers", [](G4RunManager* a)->void{ a->ConfigureProfilers(); });

  DEBUG_MSG("Adding wrapper for void G4RunManager::ConfigureProfilers(G4int, char **) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::ConfigureProfilers(G4int, char **)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:261:10
  t73.method("ConfigureProfilers", static_cast<void (G4RunManager::*)(G4int, char **) >(&G4RunManager::ConfigureProfilers));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetNumberOfThreads(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetNumberOfThreads(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:264:18
  t73.method("SetNumberOfThreads", static_cast<void (G4RunManager::*)(G4int) >(&G4RunManager::SetNumberOfThreads));

  DEBUG_MSG("Adding wrapper for G4int G4RunManager::GetNumberOfThreads() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4RunManager::GetNumberOfThreads()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:265:19
  t73.method("GetNumberOfThreads", static_cast<G4int (G4RunManager::*)()  const>(&G4RunManager::GetNumberOfThreads));

  DEBUG_MSG("Adding wrapper for void G4RunManager::DumpRegion(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::DumpRegion(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:269:10
  t73.method("DumpRegion", static_cast<void (G4RunManager::*)(const G4String &)  const>(&G4RunManager::DumpRegion));

  DEBUG_MSG("Adding wrapper for void G4RunManager::DumpRegion(G4Region *) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::DumpRegion(G4Region *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:271:10
  t73.method("DumpRegion", static_cast<void (G4RunManager::*)(G4Region *)  const>(&G4RunManager::DumpRegion));
  t73.method("DumpRegion", [](G4RunManager const& a)->void{ a.DumpRegion(); });
  t73.method("DumpRegion", [](G4RunManager const* a)->void{ a->DumpRegion(); });

  DEBUG_MSG("Adding wrapper for void G4RunManager::GeometryHasBeenModified(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::GeometryHasBeenModified(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:275:10
  t73.method("GeometryHasBeenModified", static_cast<void (G4RunManager::*)(G4bool) >(&G4RunManager::GeometryHasBeenModified));
  t73.method("GeometryHasBeenModified", [](G4RunManager& a)->void{ a.GeometryHasBeenModified(); });
  t73.method("GeometryHasBeenModified", [](G4RunManager* a)->void{ a->GeometryHasBeenModified(); });

  DEBUG_MSG("Adding wrapper for void G4RunManager::ReinitializeGeometry(G4bool, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::ReinitializeGeometry(G4bool, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:283:10
  t73.method("ReinitializeGeometry", static_cast<void (G4RunManager::*)(G4bool, G4bool) >(&G4RunManager::ReinitializeGeometry));
  t73.method("ReinitializeGeometry", [](G4RunManager& a)->void{ a.ReinitializeGeometry(); });
  t73.method("ReinitializeGeometry", [](G4RunManager& a, G4bool arg0)->void{ a.ReinitializeGeometry(arg0); });
  t73.method("ReinitializeGeometry", [](G4RunManager* a)->void{ a->ReinitializeGeometry(); });
  t73.method("ReinitializeGeometry", [](G4RunManager* a, G4bool arg0)->void{ a->ReinitializeGeometry(arg0); });

  DEBUG_MSG("Adding wrapper for void G4RunManager::PhysicsHasBeenModified() (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::PhysicsHasBeenModified()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:294:17
  t73.method("PhysicsHasBeenModified", static_cast<void (G4RunManager::*)() >(&G4RunManager::PhysicsHasBeenModified));

  DEBUG_MSG("Adding wrapper for void G4RunManager::CutOffHasBeenModified() (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::CutOffHasBeenModified()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:301:17
  t73.method("CutOffHasBeenModified", static_cast<void (G4RunManager::*)() >(&G4RunManager::CutOffHasBeenModified));

  DEBUG_MSG("Adding wrapper for void G4RunManager::ReOptimizeMotherOf(G4VPhysicalVolume *) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::ReOptimizeMotherOf(G4VPhysicalVolume *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:307:10
  t73.method("ReOptimizeMotherOf", static_cast<void (G4RunManager::*)(G4VPhysicalVolume *) >(&G4RunManager::ReOptimizeMotherOf));

  DEBUG_MSG("Adding wrapper for void G4RunManager::ReOptimize(G4LogicalVolume *) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::ReOptimize(G4LogicalVolume *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:314:10
  t73.method("ReOptimize", static_cast<void (G4RunManager::*)(G4LogicalVolume *) >(&G4RunManager::ReOptimize));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetGeometryToBeOptimized(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetGeometryToBeOptimized(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:317:17
  t73.method("SetGeometryToBeOptimized", static_cast<void (G4RunManager::*)(G4bool) >(&G4RunManager::SetGeometryToBeOptimized));

  DEBUG_MSG("Adding wrapper for G4bool G4RunManager::GetGeometryToBeOptimized() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4RunManager::GetGeometryToBeOptimized()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:326:19
  t73.method("GetGeometryToBeOptimized", static_cast<G4bool (G4RunManager::*)() >(&G4RunManager::GetGeometryToBeOptimized));

  DEBUG_MSG("Adding wrapper for void G4RunManager::GeometryDirectlyUpdated(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::GeometryDirectlyUpdated(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:331:10
  t73.method("GeometryDirectlyUpdated", static_cast<void (G4RunManager::*)(G4bool) >(&G4RunManager::GeometryDirectlyUpdated));
  t73.method("GeometryDirectlyUpdated", [](G4RunManager& a)->void{ a.GeometryDirectlyUpdated(); });
  t73.method("GeometryDirectlyUpdated", [](G4RunManager* a)->void{ a->GeometryDirectlyUpdated(); });

  DEBUG_MSG("Adding wrapper for G4bool G4RunManager::IfGeometryHasBeenDestroyed() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4RunManager::IfGeometryHasBeenDestroyed()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:336:19
  t73.method("G4RunManager!IfGeometryHasBeenDestroyed", static_cast<G4bool (*)() >(&G4RunManager::IfGeometryHasBeenDestroyed));

  DEBUG_MSG("Adding wrapper for void G4RunManager::ConstructScoringWorlds() (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::ConstructScoringWorlds()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:341:18
  t73.method("ConstructScoringWorlds", static_cast<void (G4RunManager::*)() >(&G4RunManager::ConstructScoringWorlds));

  DEBUG_MSG("Adding wrapper for void G4RunManager::rndmSaveThisRun() (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::rndmSaveThisRun()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:343:18
  t73.method("rndmSaveThisRun", static_cast<void (G4RunManager::*)() >(&G4RunManager::rndmSaveThisRun));

  DEBUG_MSG("Adding wrapper for void G4RunManager::rndmSaveThisEvent() (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::rndmSaveThisEvent()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:344:18
  t73.method("rndmSaveThisEvent", static_cast<void (G4RunManager::*)() >(&G4RunManager::rndmSaveThisEvent));

  DEBUG_MSG("Adding wrapper for void G4RunManager::RestoreRandomNumberStatus(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::RestoreRandomNumberStatus(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:345:18
  t73.method("RestoreRandomNumberStatus", static_cast<void (G4RunManager::*)(const G4String &) >(&G4RunManager::RestoreRandomNumberStatus));

  DEBUG_MSG("Adding wrapper for void G4RunManager::RestoreRndmEachEvent(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::RestoreRndmEachEvent(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:346:18
  t73.method("RestoreRndmEachEvent", static_cast<void (G4RunManager::*)(G4bool) >(&G4RunManager::RestoreRndmEachEvent));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetUserInitialization(G4VUserDetectorConstruction *) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetUserInitialization(G4VUserDetectorConstruction *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:348:18
  t73.method("SetUserInitialization", static_cast<void (G4RunManager::*)(G4VUserDetectorConstruction *) >(&G4RunManager::SetUserInitialization));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetUserInitialization(G4VUserPhysicsList *) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetUserInitialization(G4VUserPhysicsList *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:349:18
  t73.method("SetUserInitialization", static_cast<void (G4RunManager::*)(G4VUserPhysicsList *) >(&G4RunManager::SetUserInitialization));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetUserInitialization(G4VUserActionInitialization *) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetUserInitialization(G4VUserActionInitialization *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:350:18
  t73.method("SetUserInitialization", static_cast<void (G4RunManager::*)(G4VUserActionInitialization *) >(&G4RunManager::SetUserInitialization));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetUserAction(G4VUserPrimaryGeneratorAction *) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetUserAction(G4VUserPrimaryGeneratorAction *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:354:18
  t73.method("SetUserAction", static_cast<void (G4RunManager::*)(G4VUserPrimaryGeneratorAction *) >(&G4RunManager::SetUserAction));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetUserAction(G4UserStackingAction *) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetUserAction(G4UserStackingAction *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:356:18
  t73.method("SetUserAction", static_cast<void (G4RunManager::*)(G4UserStackingAction *) >(&G4RunManager::SetUserAction));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetUserAction(G4UserTrackingAction *) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetUserAction(G4UserTrackingAction *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:357:18
  t73.method("SetUserAction", static_cast<void (G4RunManager::*)(G4UserTrackingAction *) >(&G4RunManager::SetUserAction));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetUserAction(G4UserSteppingAction *) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetUserAction(G4UserSteppingAction *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:358:18
  t73.method("SetUserAction", static_cast<void (G4RunManager::*)(G4UserSteppingAction *) >(&G4RunManager::SetUserAction));

  DEBUG_MSG("Adding wrapper for const G4VUserDetectorConstruction * G4RunManager::GetUserDetectorConstruction() (" __HERE__ ")");
  // signature to use in the veto list: const G4VUserDetectorConstruction * G4RunManager::GetUserDetectorConstruction()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:372:47
  t73.method("GetUserDetectorConstruction", static_cast<const G4VUserDetectorConstruction * (G4RunManager::*)()  const>(&G4RunManager::GetUserDetectorConstruction));

  DEBUG_MSG("Adding wrapper for const G4VUserPhysicsList * G4RunManager::GetUserPhysicsList() (" __HERE__ ")");
  // signature to use in the veto list: const G4VUserPhysicsList * G4RunManager::GetUserPhysicsList()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:376:38
  t73.method("GetUserPhysicsList", static_cast<const G4VUserPhysicsList * (G4RunManager::*)()  const>(&G4RunManager::GetUserPhysicsList));

  DEBUG_MSG("Adding wrapper for const G4VUserActionInitialization * G4RunManager::GetUserActionInitialization() (" __HERE__ ")");
  // signature to use in the veto list: const G4VUserActionInitialization * G4RunManager::GetUserActionInitialization()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:380:47
  t73.method("GetUserActionInitialization", static_cast<const G4VUserActionInitialization * (G4RunManager::*)()  const>(&G4RunManager::GetUserActionInitialization));

  DEBUG_MSG("Adding wrapper for G4VUserActionInitialization * G4RunManager::GetNonConstUserActionInitialization() (" __HERE__ ")");
  // signature to use in the veto list: G4VUserActionInitialization * G4RunManager::GetNonConstUserActionInitialization()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:384:41
  t73.method("GetNonConstUserActionInitialization", static_cast<G4VUserActionInitialization * (G4RunManager::*)()  const>(&G4RunManager::GetNonConstUserActionInitialization));

  DEBUG_MSG("Adding wrapper for const G4VUserPrimaryGeneratorAction * G4RunManager::GetUserPrimaryGeneratorAction() (" __HERE__ ")");
  // signature to use in the veto list: const G4VUserPrimaryGeneratorAction * G4RunManager::GetUserPrimaryGeneratorAction()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:400:49
  t73.method("GetUserPrimaryGeneratorAction", static_cast<const G4VUserPrimaryGeneratorAction * (G4RunManager::*)()  const>(&G4RunManager::GetUserPrimaryGeneratorAction));

  DEBUG_MSG("Adding wrapper for const G4UserStackingAction * G4RunManager::GetUserStackingAction() (" __HERE__ ")");
  // signature to use in the veto list: const G4UserStackingAction * G4RunManager::GetUserStackingAction()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:408:40
  t73.method("GetUserStackingAction", static_cast<const G4UserStackingAction * (G4RunManager::*)()  const>(&G4RunManager::GetUserStackingAction));

  DEBUG_MSG("Adding wrapper for const G4UserTrackingAction * G4RunManager::GetUserTrackingAction() (" __HERE__ ")");
  // signature to use in the veto list: const G4UserTrackingAction * G4RunManager::GetUserTrackingAction()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:412:40
  t73.method("GetUserTrackingAction", static_cast<const G4UserTrackingAction * (G4RunManager::*)()  const>(&G4RunManager::GetUserTrackingAction));

  DEBUG_MSG("Adding wrapper for const G4UserSteppingAction * G4RunManager::GetUserSteppingAction() (" __HERE__ ")");
  // signature to use in the veto list: const G4UserSteppingAction * G4RunManager::GetUserSteppingAction()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:416:40
  t73.method("GetUserSteppingAction", static_cast<const G4UserSteppingAction * (G4RunManager::*)()  const>(&G4RunManager::GetUserSteppingAction));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetNumberOfAdditionalWaitingStacks(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetNumberOfAdditionalWaitingStacks(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:422:17
  t73.method("SetNumberOfAdditionalWaitingStacks", static_cast<void (G4RunManager::*)(G4int) >(&G4RunManager::SetNumberOfAdditionalWaitingStacks));

  DEBUG_MSG("Adding wrapper for const G4String & G4RunManager::GetVersionString() (" __HERE__ ")");
  // signature to use in the veto list: const G4String & G4RunManager::GetVersionString()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:431:28
  t73.method("GetVersionString", static_cast<const G4String & (G4RunManager::*)()  const>(&G4RunManager::GetVersionString));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetPrimaryTransformer(G4PrimaryTransformer *) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetPrimaryTransformer(G4PrimaryTransformer *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:436:17
  t73.method("SetPrimaryTransformer", static_cast<void (G4RunManager::*)(G4PrimaryTransformer *) >(&G4RunManager::SetPrimaryTransformer));

  DEBUG_MSG("Adding wrapper for void G4RunManager::StoreRandomNumberStatusToG4Event(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::StoreRandomNumberStatusToG4Event(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:441:17
  t73.method("StoreRandomNumberStatusToG4Event", static_cast<void (G4RunManager::*)(G4int) >(&G4RunManager::StoreRandomNumberStatusToG4Event));

  DEBUG_MSG("Adding wrapper for G4int G4RunManager::GetFlagRandomNumberStatusToG4Event() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4RunManager::GetFlagRandomNumberStatusToG4Event()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:451:18
  t73.method("GetFlagRandomNumberStatusToG4Event", static_cast<G4int (G4RunManager::*)()  const>(&G4RunManager::GetFlagRandomNumberStatusToG4Event));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetRandomNumberStore(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetRandomNumberStore(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:456:17
  t73.method("SetRandomNumberStore", static_cast<void (G4RunManager::*)(G4bool) >(&G4RunManager::SetRandomNumberStore));

  DEBUG_MSG("Adding wrapper for G4bool G4RunManager::GetRandomNumberStore() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4RunManager::GetRandomNumberStore()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:460:19
  t73.method("GetRandomNumberStore", static_cast<G4bool (G4RunManager::*)()  const>(&G4RunManager::GetRandomNumberStore));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetRandomNumberStoreDir(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetRandomNumberStoreDir(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:464:17
  t73.method("SetRandomNumberStoreDir", static_cast<void (G4RunManager::*)(const G4String &) >(&G4RunManager::SetRandomNumberStoreDir));

  DEBUG_MSG("Adding wrapper for const G4String & G4RunManager::GetRandomNumberStoreDir() (" __HERE__ ")");
  // signature to use in the veto list: const G4String & G4RunManager::GetRandomNumberStoreDir()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:487:28
  t73.method("GetRandomNumberStoreDir", static_cast<const G4String & (G4RunManager::*)()  const>(&G4RunManager::GetRandomNumberStoreDir));

  DEBUG_MSG("Adding wrapper for const G4String & G4RunManager::GetRandomNumberStatusForThisRun() (" __HERE__ ")");
  // signature to use in the veto list: const G4String & G4RunManager::GetRandomNumberStatusForThisRun()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:491:28
  t73.method("GetRandomNumberStatusForThisRun", static_cast<const G4String & (G4RunManager::*)()  const>(&G4RunManager::GetRandomNumberStatusForThisRun));

  DEBUG_MSG("Adding wrapper for const G4String & G4RunManager::GetRandomNumberStatusForThisEvent() (" __HERE__ ")");
  // signature to use in the veto list: const G4String & G4RunManager::GetRandomNumberStatusForThisEvent()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:495:28
  t73.method("GetRandomNumberStatusForThisEvent", static_cast<const G4String & (G4RunManager::*)()  const>(&G4RunManager::GetRandomNumberStatusForThisEvent));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetRandomNumberStorePerEvent(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetRandomNumberStorePerEvent(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:506:17
  t73.method("SetRandomNumberStorePerEvent", static_cast<void (G4RunManager::*)(G4bool) >(&G4RunManager::SetRandomNumberStorePerEvent));

  DEBUG_MSG("Adding wrapper for G4bool G4RunManager::GetRandomNumberStorePerEvent() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4RunManager::GetRandomNumberStorePerEvent()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:510:19
  t73.method("GetRandomNumberStorePerEvent", static_cast<G4bool (G4RunManager::*)()  const>(&G4RunManager::GetRandomNumberStorePerEvent));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetVerboseLevel(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetVerboseLevel(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:515:17
  t73.method("SetVerboseLevel", static_cast<void (G4RunManager::*)(G4int) >(&G4RunManager::SetVerboseLevel));

  DEBUG_MSG("Adding wrapper for G4int G4RunManager::GetVerboseLevel() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4RunManager::GetVerboseLevel()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:520:18
  t73.method("GetVerboseLevel", static_cast<G4int (G4RunManager::*)()  const>(&G4RunManager::GetVerboseLevel));

  DEBUG_MSG("Adding wrapper for G4int G4RunManager::GetPrintProgress() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4RunManager::GetPrintProgress()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:521:18
  t73.method("GetPrintProgress", static_cast<G4int (G4RunManager::*)() >(&G4RunManager::GetPrintProgress));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetPrintProgress(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetPrintProgress(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:522:17
  t73.method("SetPrintProgress", static_cast<void (G4RunManager::*)(G4int) >(&G4RunManager::SetPrintProgress));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetNumberOfEventsToBeStored(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetNumberOfEventsToBeStored(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:524:17
  t73.method("SetNumberOfEventsToBeStored", static_cast<void (G4RunManager::*)(G4int) >(&G4RunManager::SetNumberOfEventsToBeStored));

  DEBUG_MSG("Adding wrapper for const G4Event * G4RunManager::GetCurrentEvent() (" __HERE__ ")");
  // signature to use in the veto list: const G4Event * G4RunManager::GetCurrentEvent()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:537:27
  t73.method("GetCurrentEvent", static_cast<const G4Event * (G4RunManager::*)()  const>(&G4RunManager::GetCurrentEvent));

  DEBUG_MSG("Adding wrapper for const G4Event * G4RunManager::GetPreviousEvent(G4int) (" __HERE__ ")");
  // signature to use in the veto list: const G4Event * G4RunManager::GetPreviousEvent(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:540:27
  t73.method("GetPreviousEvent", static_cast<const G4Event * (G4RunManager::*)(G4int)  const>(&G4RunManager::GetPreviousEvent));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetRunIDCounter(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetRunIDCounter(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:558:17
  t73.method("SetRunIDCounter", static_cast<void (G4RunManager::*)(G4int) >(&G4RunManager::SetRunIDCounter));

  DEBUG_MSG("Adding wrapper for G4int G4RunManager::GetNumberOfParallelWorld() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4RunManager::GetNumberOfParallelWorld()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:562:18
  t73.method("GetNumberOfParallelWorld", static_cast<G4int (G4RunManager::*)()  const>(&G4RunManager::GetNumberOfParallelWorld));

  DEBUG_MSG("Adding wrapper for void G4RunManager::SetNumberOfEventsToBeProcessed(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4RunManager::SetNumberOfEventsToBeProcessed(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:563:17
  t73.method("SetNumberOfEventsToBeProcessed", static_cast<void (G4RunManager::*)(G4int) >(&G4RunManager::SetNumberOfEventsToBeProcessed));

  DEBUG_MSG("Adding wrapper for G4int G4RunManager::GetNumberOfEventsToBeProcessed() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4RunManager::GetNumberOfEventsToBeProcessed()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:567:18
  t73.method("GetNumberOfEventsToBeProcessed", static_cast<G4int (G4RunManager::*)()  const>(&G4RunManager::GetNumberOfEventsToBeProcessed));

  DEBUG_MSG("Adding wrapper for G4int G4RunManager::GetNumberOfSelectEvents() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4RunManager::GetNumberOfSelectEvents()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:571:18
  t73.method("GetNumberOfSelectEvents", static_cast<G4int (G4RunManager::*)()  const>(&G4RunManager::GetNumberOfSelectEvents));

  DEBUG_MSG("Adding wrapper for const G4String & G4RunManager::GetSelectMacro() (" __HERE__ ")");
  // signature to use in the veto list: const G4String & G4RunManager::GetSelectMacro()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:572:28
  t73.method("GetSelectMacro", static_cast<const G4String & (G4RunManager::*)()  const>(&G4RunManager::GetSelectMacro));

  DEBUG_MSG("Adding wrapper for G4RunManager::RMType G4RunManager::GetRunManagerType() (" __HERE__ ")");
  // signature to use in the veto list: G4RunManager::RMType G4RunManager::GetRunManagerType()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4RunManager.hh:582:19
  t73.method("GetRunManagerType", static_cast<G4RunManager::RMType (G4RunManager::*)()  const>(&G4RunManager::GetRunManagerType));

  /* End of G4RunManager class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4VUserPhysicsList
   */


  DEBUG_MSG("Adding wrapper for G4VUserPhysicsList & G4VUserPhysicsList::operator=(const G4VUserPhysicsList &) (" __HERE__ ")");
  // signature to use in the veto list: G4VUserPhysicsList & G4VUserPhysicsList::operator=(const G4VUserPhysicsList &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:114:25
  t76.method("assign", static_cast<G4VUserPhysicsList & (G4VUserPhysicsList::*)(const G4VUserPhysicsList &) >(&G4VUserPhysicsList::operator=));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::ConstructParticle() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::ConstructParticle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:117:18
  t76.method("ConstructParticle", static_cast<void (G4VUserPhysicsList::*)() >(&G4VUserPhysicsList::ConstructParticle));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::Construct() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::Construct()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:121:10
  t76.method("Construct", static_cast<void (G4VUserPhysicsList::*)() >(&G4VUserPhysicsList::Construct));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::ConstructProcess() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::ConstructProcess()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:125:18
  t76.method("ConstructProcess", static_cast<void (G4VUserPhysicsList::*)() >(&G4VUserPhysicsList::ConstructProcess));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::SetCuts() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::SetCuts()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:130:18
  t76.method("SetCuts", static_cast<void (G4VUserPhysicsList::*)() >(&G4VUserPhysicsList::SetCuts));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::SetDefaultCutValue(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::SetDefaultCutValue(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:133:10
  t76.method("SetDefaultCutValue", static_cast<void (G4VUserPhysicsList::*)(G4double) >(&G4VUserPhysicsList::SetDefaultCutValue));

  DEBUG_MSG("Adding wrapper for G4double G4VUserPhysicsList::GetDefaultCutValue() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4VUserPhysicsList::GetDefaultCutValue()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:134:14
  t76.method("GetDefaultCutValue", static_cast<G4double (G4VUserPhysicsList::*)()  const>(&G4VUserPhysicsList::GetDefaultCutValue));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::BuildPhysicsTable() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::BuildPhysicsTable()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:139:10
  t76.method("BuildPhysicsTable", static_cast<void (G4VUserPhysicsList::*)() >(&G4VUserPhysicsList::BuildPhysicsTable));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::PreparePhysicsTable(G4ParticleDefinition *) (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::PreparePhysicsTable(G4ParticleDefinition *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:144:10
  t76.method("PreparePhysicsTable", static_cast<void (G4VUserPhysicsList::*)(G4ParticleDefinition *) >(&G4VUserPhysicsList::PreparePhysicsTable));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::BuildPhysicsTable(G4ParticleDefinition *) (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::BuildPhysicsTable(G4ParticleDefinition *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:147:10
  t76.method("BuildPhysicsTable", static_cast<void (G4VUserPhysicsList::*)(G4ParticleDefinition *) >(&G4VUserPhysicsList::BuildPhysicsTable));

  DEBUG_MSG("Adding wrapper for G4bool G4VUserPhysicsList::StorePhysicsTable(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VUserPhysicsList::StorePhysicsTable(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:150:12
  t76.method("StorePhysicsTable", static_cast<G4bool (G4VUserPhysicsList::*)(const G4String &) >(&G4VUserPhysicsList::StorePhysicsTable));
  t76.method("StorePhysicsTable", [](G4VUserPhysicsList& a)->G4bool{ return a.StorePhysicsTable(); });
  t76.method("StorePhysicsTable", [](G4VUserPhysicsList* a)->G4bool{ return a->StorePhysicsTable(); });

  DEBUG_MSG("Adding wrapper for G4bool G4VUserPhysicsList::IsPhysicsTableRetrieved() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VUserPhysicsList::IsPhysicsTableRetrieved()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:155:12
  t76.method("IsPhysicsTableRetrieved", static_cast<G4bool (G4VUserPhysicsList::*)()  const>(&G4VUserPhysicsList::IsPhysicsTableRetrieved));

  DEBUG_MSG("Adding wrapper for G4bool G4VUserPhysicsList::IsStoredInAscii() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VUserPhysicsList::IsStoredInAscii()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:156:12
  t76.method("IsStoredInAscii", static_cast<G4bool (G4VUserPhysicsList::*)()  const>(&G4VUserPhysicsList::IsStoredInAscii));

  DEBUG_MSG("Adding wrapper for const G4String & G4VUserPhysicsList::GetPhysicsTableDirectory() (" __HERE__ ")");
  // signature to use in the veto list: const G4String & G4VUserPhysicsList::GetPhysicsTableDirectory()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:160:21
  t76.method("GetPhysicsTableDirectory", static_cast<const G4String & (G4VUserPhysicsList::*)()  const>(&G4VUserPhysicsList::GetPhysicsTableDirectory));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::SetPhysicsTableRetrieved(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::SetPhysicsTableRetrieved(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:163:10
  t76.method("SetPhysicsTableRetrieved", static_cast<void (G4VUserPhysicsList::*)(const G4String &) >(&G4VUserPhysicsList::SetPhysicsTableRetrieved));
  t76.method("SetPhysicsTableRetrieved", [](G4VUserPhysicsList& a)->void{ a.SetPhysicsTableRetrieved(); });
  t76.method("SetPhysicsTableRetrieved", [](G4VUserPhysicsList* a)->void{ a->SetPhysicsTableRetrieved(); });

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::SetStoredInAscii() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::SetStoredInAscii()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:164:10
  t76.method("SetStoredInAscii", static_cast<void (G4VUserPhysicsList::*)() >(&G4VUserPhysicsList::SetStoredInAscii));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::ResetPhysicsTableRetrieved() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::ResetPhysicsTableRetrieved()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:169:10
  t76.method("ResetPhysicsTableRetrieved", static_cast<void (G4VUserPhysicsList::*)() >(&G4VUserPhysicsList::ResetPhysicsTableRetrieved));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::ResetStoredInAscii() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::ResetStoredInAscii()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:170:10
  t76.method("ResetStoredInAscii", static_cast<void (G4VUserPhysicsList::*)() >(&G4VUserPhysicsList::ResetStoredInAscii));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::DumpList() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::DumpList()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:173:10
  t76.method("DumpList", static_cast<void (G4VUserPhysicsList::*)()  const>(&G4VUserPhysicsList::DumpList));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::DumpCutValuesTable(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::DumpCutValuesTable(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:176:10
  t76.method("DumpCutValuesTable", static_cast<void (G4VUserPhysicsList::*)(G4int) >(&G4VUserPhysicsList::DumpCutValuesTable));
  t76.method("DumpCutValuesTable", [](G4VUserPhysicsList& a)->void{ a.DumpCutValuesTable(); });
  t76.method("DumpCutValuesTable", [](G4VUserPhysicsList* a)->void{ a->DumpCutValuesTable(); });

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::DumpCutValuesTableIfRequested() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::DumpCutValuesTableIfRequested()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:180:10
  t76.method("DumpCutValuesTableIfRequested", static_cast<void (G4VUserPhysicsList::*)() >(&G4VUserPhysicsList::DumpCutValuesTableIfRequested));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::SetVerboseLevel(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::SetVerboseLevel(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:184:10
  t76.method("SetVerboseLevel", static_cast<void (G4VUserPhysicsList::*)(G4int) >(&G4VUserPhysicsList::SetVerboseLevel));

  DEBUG_MSG("Adding wrapper for G4int G4VUserPhysicsList::GetVerboseLevel() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4VUserPhysicsList::GetVerboseLevel()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:185:11
  t76.method("GetVerboseLevel", static_cast<G4int (G4VUserPhysicsList::*)()  const>(&G4VUserPhysicsList::GetVerboseLevel));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::UseCoupledTransportation(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::UseCoupledTransportation(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:191:10
  t76.method("UseCoupledTransportation", static_cast<void (G4VUserPhysicsList::*)(G4bool) >(&G4VUserPhysicsList::UseCoupledTransportation));
  t76.method("UseCoupledTransportation", [](G4VUserPhysicsList& a)->void{ a.UseCoupledTransportation(); });
  t76.method("UseCoupledTransportation", [](G4VUserPhysicsList* a)->void{ a->UseCoupledTransportation(); });

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::SetCutsWithDefault() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::SetCutsWithDefault()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:193:10
  t76.method("SetCutsWithDefault", static_cast<void (G4VUserPhysicsList::*)() >(&G4VUserPhysicsList::SetCutsWithDefault));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::SetCutValue(G4double, const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::SetCutValue(G4double, const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:198:10
  t76.method("SetCutValue", static_cast<void (G4VUserPhysicsList::*)(G4double, const G4String &) >(&G4VUserPhysicsList::SetCutValue));

  DEBUG_MSG("Adding wrapper for G4double G4VUserPhysicsList::GetCutValue(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4VUserPhysicsList::GetCutValue(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:201:14
  t76.method("GetCutValue", static_cast<G4double (G4VUserPhysicsList::*)(const G4String &)  const>(&G4VUserPhysicsList::GetCutValue));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::SetCutValue(G4double, const G4String &, const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::SetCutValue(G4double, const G4String &, const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:204:10
  t76.method("SetCutValue", static_cast<void (G4VUserPhysicsList::*)(G4double, const G4String &, const G4String &) >(&G4VUserPhysicsList::SetCutValue));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::SetParticleCuts(G4double, G4ParticleDefinition *, G4Region *) (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::SetParticleCuts(G4double, G4ParticleDefinition *, G4Region *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:208:10
  t76.method("SetParticleCuts", static_cast<void (G4VUserPhysicsList::*)(G4double, G4ParticleDefinition *, G4Region *) >(&G4VUserPhysicsList::SetParticleCuts));
  t76.method("SetParticleCuts", [](G4VUserPhysicsList& a, G4double arg0, G4ParticleDefinition * arg1)->void{ a.SetParticleCuts(arg0, arg1); });
  t76.method("SetParticleCuts", [](G4VUserPhysicsList* a, G4double arg0, G4ParticleDefinition * arg1)->void{ a->SetParticleCuts(arg0, arg1); });

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::SetParticleCuts(G4double, const G4String &, G4Region *) (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::SetParticleCuts(G4double, const G4String &, G4Region *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:210:10
  t76.method("SetParticleCuts", static_cast<void (G4VUserPhysicsList::*)(G4double, const G4String &, G4Region *) >(&G4VUserPhysicsList::SetParticleCuts));
  t76.method("SetParticleCuts", [](G4VUserPhysicsList& a, G4double arg0, const G4String & arg1)->void{ a.SetParticleCuts(arg0, arg1); });
  t76.method("SetParticleCuts", [](G4VUserPhysicsList* a, G4double arg0, const G4String & arg1)->void{ a->SetParticleCuts(arg0, arg1); });

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::SetCutsForRegion(G4double, const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::SetCutsForRegion(G4double, const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:217:10
  t76.method("SetCutsForRegion", static_cast<void (G4VUserPhysicsList::*)(G4double, const G4String &) >(&G4VUserPhysicsList::SetCutsForRegion));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::SetApplyCuts(G4bool, const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::SetApplyCuts(G4bool, const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:220:10
  t76.method("SetApplyCuts", static_cast<void (G4VUserPhysicsList::*)(G4bool, const G4String &) >(&G4VUserPhysicsList::SetApplyCuts));

  DEBUG_MSG("Adding wrapper for G4bool G4VUserPhysicsList::GetApplyCuts(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4VUserPhysicsList::GetApplyCuts(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:221:12
  t76.method("GetApplyCuts", static_cast<G4bool (G4VUserPhysicsList::*)(const G4String &)  const>(&G4VUserPhysicsList::GetApplyCuts));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::RemoveProcessManager() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::RemoveProcessManager()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:224:10
  t76.method("RemoveProcessManager", static_cast<void (G4VUserPhysicsList::*)() >(&G4VUserPhysicsList::RemoveProcessManager));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::RemoveTrackingManager() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::RemoveTrackingManager()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:228:10
  t76.method("RemoveTrackingManager", static_cast<void (G4VUserPhysicsList::*)() >(&G4VUserPhysicsList::RemoveTrackingManager));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::AddProcessManager(G4ParticleDefinition *, G4ProcessManager *) (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::AddProcessManager(G4ParticleDefinition *, G4ProcessManager *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:232:10
  t76.method("AddProcessManager", static_cast<void (G4VUserPhysicsList::*)(G4ParticleDefinition *, G4ProcessManager *) >(&G4VUserPhysicsList::AddProcessManager));
  t76.method("AddProcessManager", [](G4VUserPhysicsList& a, G4ParticleDefinition * arg0)->void{ a.AddProcessManager(arg0); });
  t76.method("AddProcessManager", [](G4VUserPhysicsList* a, G4ParticleDefinition * arg0)->void{ a->AddProcessManager(arg0); });

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::CheckParticleList() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::CheckParticleList()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:236:10
  t76.method("CheckParticleList", static_cast<void (G4VUserPhysicsList::*)() >(&G4VUserPhysicsList::CheckParticleList));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::DisableCheckParticleList() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::DisableCheckParticleList()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:239:10
  t76.method("DisableCheckParticleList", static_cast<void (G4VUserPhysicsList::*)() >(&G4VUserPhysicsList::DisableCheckParticleList));

  DEBUG_MSG("Adding wrapper for G4int G4VUserPhysicsList::GetInstanceID() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4VUserPhysicsList::GetInstanceID()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:241:18
  t76.method("GetInstanceID", static_cast<G4int (G4VUserPhysicsList::*)()  const>(&G4VUserPhysicsList::GetInstanceID));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::InitializeWorker() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::InitializeWorker()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:246:18
  t76.method("InitializeWorker", static_cast<void (G4VUserPhysicsList::*)() >(&G4VUserPhysicsList::InitializeWorker));

  DEBUG_MSG("Adding wrapper for void G4VUserPhysicsList::TerminateWorker() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUserPhysicsList::TerminateWorker()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:249:18
  t76.method("TerminateWorker", static_cast<void (G4VUserPhysicsList::*)() >(&G4VUserPhysicsList::TerminateWorker));

  /* End of G4VUserPhysicsList class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4UImanager
   */

  DEBUG_MSG("Adding wrapper for G4UImanager * G4UImanager::GetUIpointer() (" __HERE__ ")");
  // signature to use in the veto list: G4UImanager * G4UImanager::GetUIpointer()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:61:25
  t79.method("G4UImanager!GetUIpointer", static_cast<G4UImanager * (*)() >(&G4UImanager::GetUIpointer));

  DEBUG_MSG("Adding wrapper for G4UImanager * G4UImanager::GetMasterUIpointer() (" __HERE__ ")");
  // signature to use in the veto list: G4UImanager * G4UImanager::GetMasterUIpointer()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:62:25
  t79.method("G4UImanager!GetMasterUIpointer", static_cast<G4UImanager * (*)() >(&G4UImanager::GetMasterUIpointer));

  DEBUG_MSG("Adding wrapper for G4String G4UImanager::GetCurrentValues(const char *) (" __HERE__ ")");
  // signature to use in the veto list: G4String G4UImanager::GetCurrentValues(const char *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:73:14
  t79.method("GetCurrentValues", static_cast<G4String (G4UImanager::*)(const char *) >(&G4UImanager::GetCurrentValues));

  DEBUG_MSG("Adding wrapper for void G4UImanager::AddNewCommand(G4UIcommand *) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::AddNewCommand(G4UIcommand *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:79:10
  t79.method("AddNewCommand", static_cast<void (G4UImanager::*)(G4UIcommand *) >(&G4UImanager::AddNewCommand));

  DEBUG_MSG("Adding wrapper for void G4UImanager::RemoveCommand(G4UIcommand *) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::RemoveCommand(G4UIcommand *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:82:10
  t79.method("RemoveCommand", static_cast<void (G4UImanager::*)(G4UIcommand *) >(&G4UImanager::RemoveCommand));

  DEBUG_MSG("Adding wrapper for void G4UImanager::ExecuteMacroFile(const char *) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::ExecuteMacroFile(const char *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:86:10
  t79.method("ExecuteMacroFile", static_cast<void (G4UImanager::*)(const char *) >(&G4UImanager::ExecuteMacroFile));

  DEBUG_MSG("Adding wrapper for void G4UImanager::Loop(const char *, const char *, G4double, G4double, G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::Loop(const char *, const char *, G4double, G4double, G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:89:10
  t79.method("Loop", static_cast<void (G4UImanager::*)(const char *, const char *, G4double, G4double, G4double) >(&G4UImanager::Loop));
  t79.method("Loop", [](G4UImanager& a, const char * arg0, const char * arg1, G4double arg2, G4double arg3)->void{ a.Loop(arg0, arg1, arg2, arg3); });
  t79.method("Loop", [](G4UImanager* a, const char * arg0, const char * arg1, G4double arg2, G4double arg3)->void{ a->Loop(arg0, arg1, arg2, arg3); });

  DEBUG_MSG("Adding wrapper for void G4UImanager::Foreach(const char *, const char *, const char *) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::Foreach(const char *, const char *, const char *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:94:10
  t79.method("Foreach", static_cast<void (G4UImanager::*)(const char *, const char *, const char *) >(&G4UImanager::Foreach));

  DEBUG_MSG("Adding wrapper for G4int G4UImanager::ApplyCommand(const char *) (" __HERE__ ")");
  // signature to use in the veto list: G4int G4UImanager::ApplyCommand(const char *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:99:11
  t79.method("ApplyCommand", static_cast<G4int (G4UImanager::*)(const char *) >(&G4UImanager::ApplyCommand));

  DEBUG_MSG("Adding wrapper for G4UIcommand * G4UImanager::FindCommand(const char *) (" __HERE__ ")");
  // signature to use in the veto list: G4UIcommand * G4UImanager::FindCommand(const char *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:110:18
  t79.method("FindCommand", static_cast<G4UIcommand * (G4UImanager::*)(const char *) >(&G4UImanager::FindCommand));

  DEBUG_MSG("Adding wrapper for G4UIcommand * G4UImanager::FindCommand(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: G4UIcommand * G4UImanager::FindCommand(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:111:18
  t79.method("FindCommand", static_cast<G4UIcommand * (G4UImanager::*)(const G4String &) >(&G4UImanager::FindCommand));

  DEBUG_MSG("Adding wrapper for void G4UImanager::StoreHistory(const char *) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::StoreHistory(const char *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:117:10
  t79.method("StoreHistory", static_cast<void (G4UImanager::*)(const char *) >(&G4UImanager::StoreHistory));
  t79.method("StoreHistory", [](G4UImanager& a)->void{ a.StoreHistory(); });
  t79.method("StoreHistory", [](G4UImanager* a)->void{ a->StoreHistory(); });

  DEBUG_MSG("Adding wrapper for void G4UImanager::StoreHistory(G4bool, const char *) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::StoreHistory(G4bool, const char *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:118:10
  t79.method("StoreHistory", static_cast<void (G4UImanager::*)(G4bool, const char *) >(&G4UImanager::StoreHistory));
  t79.method("StoreHistory", [](G4UImanager& a, G4bool arg0)->void{ a.StoreHistory(arg0); });
  t79.method("StoreHistory", [](G4UImanager* a, G4bool arg0)->void{ a->StoreHistory(arg0); });

  DEBUG_MSG("Adding wrapper for void G4UImanager::ListCommands(const char *) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::ListCommands(const char *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:123:10
  t79.method("ListCommands", static_cast<void (G4UImanager::*)(const char *) >(&G4UImanager::ListCommands));

  DEBUG_MSG("Adding wrapper for void G4UImanager::SetAlias(const char *) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::SetAlias(const char *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:127:10
  t79.method("SetAlias", static_cast<void (G4UImanager::*)(const char *) >(&G4UImanager::SetAlias));

  DEBUG_MSG("Adding wrapper for void G4UImanager::RemoveAlias(const char *) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::RemoveAlias(const char *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:132:10
  t79.method("RemoveAlias", static_cast<void (G4UImanager::*)(const char *) >(&G4UImanager::RemoveAlias));

  DEBUG_MSG("Adding wrapper for void G4UImanager::ListAlias() (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::ListAlias()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:135:10
  t79.method("ListAlias", static_cast<void (G4UImanager::*)() >(&G4UImanager::ListAlias));

  DEBUG_MSG("Adding wrapper for G4String G4UImanager::SolveAlias(const char *) (" __HERE__ ")");
  // signature to use in the veto list: G4String G4UImanager::SolveAlias(const char *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:138:14
  t79.method("SolveAlias", static_cast<G4String (G4UImanager::*)(const char *) >(&G4UImanager::SolveAlias));

  DEBUG_MSG("Adding wrapper for void G4UImanager::CreateHTML(const char *) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::CreateHTML(const char *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:141:10
  t79.method("CreateHTML", static_cast<void (G4UImanager::*)(const char *) >(&G4UImanager::CreateHTML));
  t79.method("CreateHTML", [](G4UImanager& a)->void{ a.CreateHTML(); });
  t79.method("CreateHTML", [](G4UImanager* a)->void{ a->CreateHTML(); });

  DEBUG_MSG("Adding wrapper for void G4UImanager::LoopS(const char *) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::LoopS(const char *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:144:10
  t79.method("LoopS", static_cast<void (G4UImanager::*)(const char *) >(&G4UImanager::LoopS));

  DEBUG_MSG("Adding wrapper for void G4UImanager::ForeachS(const char *) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::ForeachS(const char *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:145:10
  t79.method("ForeachS", static_cast<void (G4UImanager::*)(const char *) >(&G4UImanager::ForeachS));

  DEBUG_MSG("Adding wrapper for G4bool G4UImanager::Notify(G4ApplicationState) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4UImanager::Notify(G4ApplicationState)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:149:12
  t79.method("Notify", static_cast<G4bool (G4UImanager::*)(G4ApplicationState) >(&G4UImanager::Notify));

  DEBUG_MSG("Adding wrapper for G4String G4UImanager::GetCurrentStringValue(const char *, G4int, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: G4String G4UImanager::GetCurrentStringValue(const char *, G4int, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:152:14
  t79.method("GetCurrentStringValue", static_cast<G4String (G4UImanager::*)(const char *, G4int, G4bool) >(&G4UImanager::GetCurrentStringValue));
  t79.method("GetCurrentStringValue", [](G4UImanager& a, const char * arg0)->G4String{ return a.GetCurrentStringValue(arg0); });
  t79.method("GetCurrentStringValue", [](G4UImanager& a, const char * arg0, G4int arg1)->G4String{ return a.GetCurrentStringValue(arg0, arg1); });
  t79.method("GetCurrentStringValue", [](G4UImanager* a, const char * arg0)->G4String{ return a->GetCurrentStringValue(arg0); });
  t79.method("GetCurrentStringValue", [](G4UImanager* a, const char * arg0, G4int arg1)->G4String{ return a->GetCurrentStringValue(arg0, arg1); });

  DEBUG_MSG("Adding wrapper for G4int G4UImanager::GetCurrentIntValue(const char *, G4int, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: G4int G4UImanager::GetCurrentIntValue(const char *, G4int, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:155:11
  t79.method("GetCurrentIntValue", static_cast<G4int (G4UImanager::*)(const char *, G4int, G4bool) >(&G4UImanager::GetCurrentIntValue));
  t79.method("GetCurrentIntValue", [](G4UImanager& a, const char * arg0)->G4int{ return a.GetCurrentIntValue(arg0); });
  t79.method("GetCurrentIntValue", [](G4UImanager& a, const char * arg0, G4int arg1)->G4int{ return a.GetCurrentIntValue(arg0, arg1); });
  t79.method("GetCurrentIntValue", [](G4UImanager* a, const char * arg0)->G4int{ return a->GetCurrentIntValue(arg0); });
  t79.method("GetCurrentIntValue", [](G4UImanager* a, const char * arg0, G4int arg1)->G4int{ return a->GetCurrentIntValue(arg0, arg1); });

  DEBUG_MSG("Adding wrapper for G4double G4UImanager::GetCurrentDoubleValue(const char *, G4int, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4UImanager::GetCurrentDoubleValue(const char *, G4int, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:157:14
  t79.method("GetCurrentDoubleValue", static_cast<G4double (G4UImanager::*)(const char *, G4int, G4bool) >(&G4UImanager::GetCurrentDoubleValue));
  t79.method("GetCurrentDoubleValue", [](G4UImanager& a, const char * arg0)->G4double{ return a.GetCurrentDoubleValue(arg0); });
  t79.method("GetCurrentDoubleValue", [](G4UImanager& a, const char * arg0, G4int arg1)->G4double{ return a.GetCurrentDoubleValue(arg0, arg1); });
  t79.method("GetCurrentDoubleValue", [](G4UImanager* a, const char * arg0)->G4double{ return a->GetCurrentDoubleValue(arg0); });
  t79.method("GetCurrentDoubleValue", [](G4UImanager* a, const char * arg0, G4int arg1)->G4double{ return a->GetCurrentDoubleValue(arg0, arg1); });

  DEBUG_MSG("Adding wrapper for G4String G4UImanager::GetCurrentStringValue(const char *, const char *, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: G4String G4UImanager::GetCurrentStringValue(const char *, const char *, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:160:14
  t79.method("GetCurrentStringValue", static_cast<G4String (G4UImanager::*)(const char *, const char *, G4bool) >(&G4UImanager::GetCurrentStringValue));
  t79.method("GetCurrentStringValue", [](G4UImanager& a, const char * arg0, const char * arg1)->G4String{ return a.GetCurrentStringValue(arg0, arg1); });
  t79.method("GetCurrentStringValue", [](G4UImanager* a, const char * arg0, const char * arg1)->G4String{ return a->GetCurrentStringValue(arg0, arg1); });

  DEBUG_MSG("Adding wrapper for G4int G4UImanager::GetCurrentIntValue(const char *, const char *, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: G4int G4UImanager::GetCurrentIntValue(const char *, const char *, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:163:11
  t79.method("GetCurrentIntValue", static_cast<G4int (G4UImanager::*)(const char *, const char *, G4bool) >(&G4UImanager::GetCurrentIntValue));
  t79.method("GetCurrentIntValue", [](G4UImanager& a, const char * arg0, const char * arg1)->G4int{ return a.GetCurrentIntValue(arg0, arg1); });
  t79.method("GetCurrentIntValue", [](G4UImanager* a, const char * arg0, const char * arg1)->G4int{ return a->GetCurrentIntValue(arg0, arg1); });

  DEBUG_MSG("Adding wrapper for G4double G4UImanager::GetCurrentDoubleValue(const char *, const char *, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4UImanager::GetCurrentDoubleValue(const char *, const char *, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:165:14
  t79.method("GetCurrentDoubleValue", static_cast<G4double (G4UImanager::*)(const char *, const char *, G4bool) >(&G4UImanager::GetCurrentDoubleValue));
  t79.method("GetCurrentDoubleValue", [](G4UImanager& a, const char * arg0, const char * arg1)->G4double{ return a.GetCurrentDoubleValue(arg0, arg1); });
  t79.method("GetCurrentDoubleValue", [](G4UImanager* a, const char * arg0, const char * arg1)->G4double{ return a->GetCurrentDoubleValue(arg0, arg1); });

  DEBUG_MSG("Adding wrapper for void G4UImanager::SetPauseAtBeginOfEvent(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::SetPauseAtBeginOfEvent(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:177:17
  t79.method("SetPauseAtBeginOfEvent", static_cast<void (G4UImanager::*)(G4bool) >(&G4UImanager::SetPauseAtBeginOfEvent));

  DEBUG_MSG("Adding wrapper for G4bool G4UImanager::GetPauseAtBeginOfEvent() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4UImanager::GetPauseAtBeginOfEvent()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:178:19
  t79.method("GetPauseAtBeginOfEvent", static_cast<G4bool (G4UImanager::*)()  const>(&G4UImanager::GetPauseAtBeginOfEvent));

  DEBUG_MSG("Adding wrapper for void G4UImanager::SetPauseAtEndOfEvent(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::SetPauseAtEndOfEvent(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:179:17
  t79.method("SetPauseAtEndOfEvent", static_cast<void (G4UImanager::*)(G4bool) >(&G4UImanager::SetPauseAtEndOfEvent));

  DEBUG_MSG("Adding wrapper for G4bool G4UImanager::GetPauseAtEndOfEvent() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4UImanager::GetPauseAtEndOfEvent()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:180:19
  t79.method("GetPauseAtEndOfEvent", static_cast<G4bool (G4UImanager::*)()  const>(&G4UImanager::GetPauseAtEndOfEvent));

  DEBUG_MSG("Adding wrapper for void G4UImanager::SetVerboseLevel(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::SetVerboseLevel(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:199:17
  t79.method("SetVerboseLevel", static_cast<void (G4UImanager::*)(G4int) >(&G4UImanager::SetVerboseLevel));

  DEBUG_MSG("Adding wrapper for G4int G4UImanager::GetVerboseLevel() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4UImanager::GetVerboseLevel()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:200:18
  t79.method("GetVerboseLevel", static_cast<G4int (G4UImanager::*)()  const>(&G4UImanager::GetVerboseLevel));

  DEBUG_MSG("Adding wrapper for G4int G4UImanager::GetNumberOfHistory() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4UImanager::GetNumberOfHistory()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:201:18
  t79.method("GetNumberOfHistory", static_cast<G4int (G4UImanager::*)()  const>(&G4UImanager::GetNumberOfHistory));

  DEBUG_MSG("Adding wrapper for G4String G4UImanager::GetPreviousCommand(G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4String G4UImanager::GetPreviousCommand(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:202:21
  t79.method("GetPreviousCommand", static_cast<G4String (G4UImanager::*)(G4int)  const>(&G4UImanager::GetPreviousCommand));

  DEBUG_MSG("Adding wrapper for void G4UImanager::SetMaxHistSize(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::SetMaxHistSize(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:211:17
  t79.method("SetMaxHistSize", static_cast<void (G4UImanager::*)(G4int) >(&G4UImanager::SetMaxHistSize));

  DEBUG_MSG("Adding wrapper for G4int G4UImanager::GetMaxHistSize() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4UImanager::GetMaxHistSize()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:212:18
  t79.method("GetMaxHistSize", static_cast<G4int (G4UImanager::*)()  const>(&G4UImanager::GetMaxHistSize));

  DEBUG_MSG("Adding wrapper for void G4UImanager::SetMacroSearchPath(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::SetMacroSearchPath(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:214:17
  t79.method("SetMacroSearchPath", static_cast<void (G4UImanager::*)(const G4String &) >(&G4UImanager::SetMacroSearchPath));

  DEBUG_MSG("Adding wrapper for const G4String & G4UImanager::GetMacroSearchPath() (" __HERE__ ")");
  // signature to use in the veto list: const G4String & G4UImanager::GetMacroSearchPath()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:215:28
  t79.method("GetMacroSearchPath", static_cast<const G4String & (G4UImanager::*)()  const>(&G4UImanager::GetMacroSearchPath));

  DEBUG_MSG("Adding wrapper for void G4UImanager::ParseMacroSearchPath() (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::ParseMacroSearchPath()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:216:10
  t79.method("ParseMacroSearchPath", static_cast<void (G4UImanager::*)() >(&G4UImanager::ParseMacroSearchPath));

  DEBUG_MSG("Adding wrapper for G4String G4UImanager::FindMacroPath(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: G4String G4UImanager::FindMacroPath(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:217:14
  t79.method("FindMacroPath", static_cast<G4String (G4UImanager::*)(const G4String &)  const>(&G4UImanager::FindMacroPath));

  DEBUG_MSG("Adding wrapper for void G4UImanager::SetMasterUIManager(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::SetMasterUIManager(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:219:17
  t79.method("SetMasterUIManager", static_cast<void (G4UImanager::*)(G4bool) >(&G4UImanager::SetMasterUIManager));

  DEBUG_MSG("Adding wrapper for void G4UImanager::SetIgnoreCmdNotFound(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::SetIgnoreCmdNotFound(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:229:17
  t79.method("SetIgnoreCmdNotFound", static_cast<void (G4UImanager::*)(G4bool) >(&G4UImanager::SetIgnoreCmdNotFound));

  DEBUG_MSG("Adding wrapper for std::vector<G4String> * G4UImanager::GetCommandStack() (" __HERE__ ")");
  // signature to use in the veto list: std::vector<G4String> * G4UImanager::GetCommandStack()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:231:28
  t79.method("GetCommandStack", static_cast<std::vector<G4String> * (G4UImanager::*)() >(&G4UImanager::GetCommandStack));

  DEBUG_MSG("Adding wrapper for void G4UImanager::SetUpForAThread(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::SetUpForAThread(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:234:10
  t79.method("SetUpForAThread", static_cast<void (G4UImanager::*)(G4int) >(&G4UImanager::SetUpForAThread));

  DEBUG_MSG("Adding wrapper for void G4UImanager::SetUpForSpecialThread(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::SetUpForSpecialThread(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:237:10
  t79.method("SetUpForSpecialThread", static_cast<void (G4UImanager::*)(const G4String &) >(&G4UImanager::SetUpForSpecialThread));

  DEBUG_MSG("Adding wrapper for G4int G4UImanager::GetThreadID() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4UImanager::GetThreadID()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:239:18
  t79.method("GetThreadID", static_cast<G4int (G4UImanager::*)()  const>(&G4UImanager::GetThreadID));

  DEBUG_MSG("Adding wrapper for void G4UImanager::SetCoutFileName(const G4String &, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::SetCoutFileName(const G4String &, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:241:10
  t79.method("SetCoutFileName", static_cast<void (G4UImanager::*)(const G4String &, G4bool) >(&G4UImanager::SetCoutFileName));
  t79.method("SetCoutFileName", [](G4UImanager& a)->void{ a.SetCoutFileName(); });
  t79.method("SetCoutFileName", [](G4UImanager& a, const G4String & arg0)->void{ a.SetCoutFileName(arg0); });
  t79.method("SetCoutFileName", [](G4UImanager* a)->void{ a->SetCoutFileName(); });
  t79.method("SetCoutFileName", [](G4UImanager* a, const G4String & arg0)->void{ a->SetCoutFileName(arg0); });

  DEBUG_MSG("Adding wrapper for void G4UImanager::SetCerrFileName(const G4String &, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::SetCerrFileName(const G4String &, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:243:10
  t79.method("SetCerrFileName", static_cast<void (G4UImanager::*)(const G4String &, G4bool) >(&G4UImanager::SetCerrFileName));
  t79.method("SetCerrFileName", [](G4UImanager& a)->void{ a.SetCerrFileName(); });
  t79.method("SetCerrFileName", [](G4UImanager& a, const G4String & arg0)->void{ a.SetCerrFileName(arg0); });
  t79.method("SetCerrFileName", [](G4UImanager* a)->void{ a->SetCerrFileName(); });
  t79.method("SetCerrFileName", [](G4UImanager* a, const G4String & arg0)->void{ a->SetCerrFileName(arg0); });

  DEBUG_MSG("Adding wrapper for void G4UImanager::SetThreadPrefixString(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::SetThreadPrefixString(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:245:10
  t79.method("SetThreadPrefixString", static_cast<void (G4UImanager::*)(const G4String &) >(&G4UImanager::SetThreadPrefixString));
  t79.method("SetThreadPrefixString", [](G4UImanager& a)->void{ a.SetThreadPrefixString(); });
  t79.method("SetThreadPrefixString", [](G4UImanager* a)->void{ a->SetThreadPrefixString(); });

  DEBUG_MSG("Adding wrapper for void G4UImanager::SetThreadUseBuffer(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::SetThreadUseBuffer(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:246:10
  t79.method("SetThreadUseBuffer", static_cast<void (G4UImanager::*)(G4bool) >(&G4UImanager::SetThreadUseBuffer));
  t79.method("SetThreadUseBuffer", [](G4UImanager& a)->void{ a.SetThreadUseBuffer(); });
  t79.method("SetThreadUseBuffer", [](G4UImanager* a)->void{ a->SetThreadUseBuffer(); });

  DEBUG_MSG("Adding wrapper for void G4UImanager::SetThreadIgnore(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::SetThreadIgnore(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:247:10
  t79.method("SetThreadIgnore", static_cast<void (G4UImanager::*)(G4int) >(&G4UImanager::SetThreadIgnore));
  t79.method("SetThreadIgnore", [](G4UImanager& a)->void{ a.SetThreadIgnore(); });
  t79.method("SetThreadIgnore", [](G4UImanager* a)->void{ a->SetThreadIgnore(); });

  DEBUG_MSG("Adding wrapper for void G4UImanager::SetThreadIgnoreInit(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::SetThreadIgnoreInit(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:248:10
  t79.method("SetThreadIgnoreInit", static_cast<void (G4UImanager::*)(G4bool) >(&G4UImanager::SetThreadIgnoreInit));
  t79.method("SetThreadIgnoreInit", [](G4UImanager& a)->void{ a.SetThreadIgnoreInit(); });
  t79.method("SetThreadIgnoreInit", [](G4UImanager* a)->void{ a->SetThreadIgnoreInit(); });

  DEBUG_MSG("Adding wrapper for void G4UImanager::UseDoublePrecisionStr(G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::UseDoublePrecisionStr(G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:251:17
  t79.method("G4UImanager!UseDoublePrecisionStr", static_cast<void (*)(G4bool) >(&G4UImanager::UseDoublePrecisionStr));

  DEBUG_MSG("Adding wrapper for G4bool G4UImanager::DoublePrecisionStr() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4UImanager::DoublePrecisionStr()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:252:19
  t79.method("G4UImanager!DoublePrecisionStr", static_cast<G4bool (*)() >(&G4UImanager::DoublePrecisionStr));

  DEBUG_MSG("Adding wrapper for G4int G4UImanager::GetLastReturnCode() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4UImanager::GetLastReturnCode()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:254:18
  t79.method("GetLastReturnCode", static_cast<G4int (G4UImanager::*)()  const>(&G4UImanager::GetLastReturnCode));

  DEBUG_MSG("Adding wrapper for bool G4UImanager::IsLastCommandOutputTreated() (" __HERE__ ")");
  // signature to use in the veto list: bool G4UImanager::IsLastCommandOutputTreated()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:256:17
  t79.method("IsLastCommandOutputTreated", static_cast<bool (G4UImanager::*)() >(&G4UImanager::IsLastCommandOutputTreated));

  DEBUG_MSG("Adding wrapper for void G4UImanager::SetLastCommandOutputTreated() (" __HERE__ ")");
  // signature to use in the veto list: void G4UImanager::SetLastCommandOutputTreated()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UImanager.hh:257:17
  t79.method("SetLastCommandOutputTreated", static_cast<void (G4UImanager::*)() >(&G4UImanager::SetLastCommandOutputTreated));

  /* End of G4UImanager class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4NistManager
   */

  DEBUG_MSG("Adding wrapper for G4NistManager * G4NistManager::Instance() (" __HERE__ ")");
  // signature to use in the veto list: G4NistManager * G4NistManager::Instance()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:87:25
  t87.method("G4NistManager!Instance", static_cast<G4NistManager * (*)() >(&G4NistManager::Instance));

  DEBUG_MSG("Adding wrapper for G4Element * G4NistManager::GetElement(size_t) (" __HERE__ ")");
  // signature to use in the veto list: G4Element * G4NistManager::GetElement(size_t)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:92:21
  t87.method("GetElement", static_cast<G4Element * (G4NistManager::*)(size_t)  const>(&G4NistManager::GetElement));

  DEBUG_MSG("Adding wrapper for G4Element * G4NistManager::FindElement(G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4Element * G4NistManager::FindElement(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:96:21
  t87.method("FindElement", static_cast<G4Element * (G4NistManager::*)(G4int)  const>(&G4NistManager::FindElement));

  DEBUG_MSG("Adding wrapper for G4Element * G4NistManager::FindOrBuildElement(G4int, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: G4Element * G4NistManager::FindOrBuildElement(G4int, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:97:21
  t87.method("FindOrBuildElement", static_cast<G4Element * (G4NistManager::*)(G4int, G4bool) >(&G4NistManager::FindOrBuildElement));
  t87.method("FindOrBuildElement", [](G4NistManager& a, G4int arg0)->G4Element *{ return a.FindOrBuildElement(arg0); });
  t87.method("FindOrBuildElement", [](G4NistManager* a, G4int arg0)->G4Element *{ return a->FindOrBuildElement(arg0); });

  DEBUG_MSG("Adding wrapper for G4Element * G4NistManager::FindOrBuildElement(const G4String &, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: G4Element * G4NistManager::FindOrBuildElement(const G4String &, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:101:21
  t87.method("FindOrBuildElement", static_cast<G4Element * (G4NistManager::*)(const G4String &, G4bool) >(&G4NistManager::FindOrBuildElement));
  t87.method("FindOrBuildElement", [](G4NistManager& a, const G4String & arg0)->G4Element *{ return a.FindOrBuildElement(arg0); });
  t87.method("FindOrBuildElement", [](G4NistManager* a, const G4String & arg0)->G4Element *{ return a->FindOrBuildElement(arg0); });

  DEBUG_MSG("Adding wrapper for size_t G4NistManager::GetNumberOfElements() (" __HERE__ ")");
  // signature to use in the veto list: size_t G4NistManager::GetNumberOfElements()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:106:17
  t87.method("GetNumberOfElements", static_cast<size_t (G4NistManager::*)()  const>(&G4NistManager::GetNumberOfElements));

  DEBUG_MSG("Adding wrapper for G4int G4NistManager::GetZ(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: G4int G4NistManager::GetZ(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:110:16
  t87.method("GetZ", static_cast<G4int (G4NistManager::*)(const G4String &)  const>(&G4NistManager::GetZ));

  DEBUG_MSG("Adding wrapper for G4double G4NistManager::GetAtomicMassAmu(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4NistManager::GetAtomicMassAmu(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:115:19
  t87.method("GetAtomicMassAmu", static_cast<G4double (G4NistManager::*)(const G4String &)  const>(&G4NistManager::GetAtomicMassAmu));

  DEBUG_MSG("Adding wrapper for G4double G4NistManager::GetAtomicMassAmu(G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4NistManager::GetAtomicMassAmu(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:120:19
  t87.method("GetAtomicMassAmu", static_cast<G4double (G4NistManager::*)(G4int)  const>(&G4NistManager::GetAtomicMassAmu));

  DEBUG_MSG("Adding wrapper for G4double G4NistManager::GetIsotopeMass(G4int, G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4NistManager::GetIsotopeMass(G4int, G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:124:19
  t87.method("GetIsotopeMass", static_cast<G4double (G4NistManager::*)(G4int, G4int)  const>(&G4NistManager::GetIsotopeMass));

  DEBUG_MSG("Adding wrapper for G4double G4NistManager::GetAtomicMass(G4int, G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4NistManager::GetAtomicMass(G4int, G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:129:19
  t87.method("GetAtomicMass", static_cast<G4double (G4NistManager::*)(G4int, G4int)  const>(&G4NistManager::GetAtomicMass));

  DEBUG_MSG("Adding wrapper for G4double G4NistManager::GetTotalElectronBindingEnergy(G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4NistManager::GetTotalElectronBindingEnergy(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:133:19
  t87.method("GetTotalElectronBindingEnergy", static_cast<G4double (G4NistManager::*)(G4int)  const>(&G4NistManager::GetTotalElectronBindingEnergy));

  DEBUG_MSG("Adding wrapper for G4int G4NistManager::GetNistFirstIsotopeN(G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4int G4NistManager::GetNistFirstIsotopeN(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:137:16
  t87.method("GetNistFirstIsotopeN", static_cast<G4int (G4NistManager::*)(G4int)  const>(&G4NistManager::GetNistFirstIsotopeN));

  DEBUG_MSG("Adding wrapper for G4int G4NistManager::GetNumberOfNistIsotopes(G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4int G4NistManager::GetNumberOfNistIsotopes(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:141:16
  t87.method("GetNumberOfNistIsotopes", static_cast<G4int (G4NistManager::*)(G4int)  const>(&G4NistManager::GetNumberOfNistIsotopes));

  DEBUG_MSG("Adding wrapper for G4double G4NistManager::GetIsotopeAbundance(G4int, G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4NistManager::GetIsotopeAbundance(G4int, G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:145:19
  t87.method("GetIsotopeAbundance", static_cast<G4double (G4NistManager::*)(G4int, G4int)  const>(&G4NistManager::GetIsotopeAbundance));

  DEBUG_MSG("Adding wrapper for void G4NistManager::PrintElement(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4NistManager::PrintElement(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:149:15
  t87.method("PrintElement", static_cast<void (G4NistManager::*)(G4int)  const>(&G4NistManager::PrintElement));

  DEBUG_MSG("Adding wrapper for void G4NistManager::PrintElement(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4NistManager::PrintElement(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:153:8
  t87.method("PrintElement", static_cast<void (G4NistManager::*)(const G4String &)  const>(&G4NistManager::PrintElement));

  DEBUG_MSG("Adding wrapper for void G4NistManager::PrintG4Element(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4NistManager::PrintG4Element(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:157:8
  t87.method("PrintG4Element", static_cast<void (G4NistManager::*)(const G4String &)  const>(&G4NistManager::PrintG4Element));

  DEBUG_MSG("Adding wrapper for const std::vector<G4String> & G4NistManager::GetNistElementNames() (" __HERE__ ")");
  // signature to use in the veto list: const std::vector<G4String> & G4NistManager::GetNistElementNames()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:161:39
  t87.method("GetNistElementNames", static_cast<const std::vector<G4String> & (G4NistManager::*)()  const>(&G4NistManager::GetNistElementNames));

  DEBUG_MSG("Adding wrapper for G4double G4NistManager::GetMeanIonisationEnergy(G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4NistManager::GetMeanIonisationEnergy(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:165:19
  t87.method("GetMeanIonisationEnergy", static_cast<G4double (G4NistManager::*)(G4int)  const>(&G4NistManager::GetMeanIonisationEnergy));

  DEBUG_MSG("Adding wrapper for G4double G4NistManager::GetNominalDensity(G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4NistManager::GetNominalDensity(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:170:19
  t87.method("GetNominalDensity", static_cast<G4double (G4NistManager::*)(G4int)  const>(&G4NistManager::GetNominalDensity));

  DEBUG_MSG("Adding wrapper for G4Material * G4NistManager::GetMaterial(size_t) (" __HERE__ ")");
  // signature to use in the veto list: G4Material * G4NistManager::GetMaterial(size_t)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:174:22
  t87.method("GetMaterial", static_cast<G4Material * (G4NistManager::*)(size_t)  const>(&G4NistManager::GetMaterial));

  DEBUG_MSG("Adding wrapper for G4Material * G4NistManager::FindMaterial(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: G4Material * G4NistManager::FindMaterial(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:178:22
  t87.method("FindMaterial", static_cast<G4Material * (G4NistManager::*)(const G4String &)  const>(&G4NistManager::FindMaterial));

  DEBUG_MSG("Adding wrapper for G4Material * G4NistManager::FindOrBuildMaterial(const G4String &, G4bool, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: G4Material * G4NistManager::FindOrBuildMaterial(const G4String &, G4bool, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:179:22
  t87.method("FindOrBuildMaterial", static_cast<G4Material * (G4NistManager::*)(const G4String &, G4bool, G4bool) >(&G4NistManager::FindOrBuildMaterial));
  t87.method("FindOrBuildMaterial", [](G4NistManager& a, const G4String & arg0)->G4Material *{ return a.FindOrBuildMaterial(arg0); });
  t87.method("FindOrBuildMaterial", [](G4NistManager& a, const G4String & arg0, G4bool arg1)->G4Material *{ return a.FindOrBuildMaterial(arg0, arg1); });
  t87.method("FindOrBuildMaterial", [](G4NistManager* a, const G4String & arg0)->G4Material *{ return a->FindOrBuildMaterial(arg0); });
  t87.method("FindOrBuildMaterial", [](G4NistManager* a, const G4String & arg0, G4bool arg1)->G4Material *{ return a->FindOrBuildMaterial(arg0, arg1); });

  DEBUG_MSG("Adding wrapper for G4Material * G4NistManager::FindSimpleMaterial(G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4Material * G4NistManager::FindSimpleMaterial(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:185:22
  t87.method("FindSimpleMaterial", static_cast<G4Material * (G4NistManager::*)(G4int)  const>(&G4NistManager::FindSimpleMaterial));

  DEBUG_MSG("Adding wrapper for G4Material * G4NistManager::FindOrBuildSimpleMaterial(G4int, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: G4Material * G4NistManager::FindOrBuildSimpleMaterial(G4int, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:186:22
  t87.method("FindOrBuildSimpleMaterial", static_cast<G4Material * (G4NistManager::*)(G4int, G4bool) >(&G4NistManager::FindOrBuildSimpleMaterial));
  t87.method("FindOrBuildSimpleMaterial", [](G4NistManager& a, G4int arg0)->G4Material *{ return a.FindOrBuildSimpleMaterial(arg0); });
  t87.method("FindOrBuildSimpleMaterial", [](G4NistManager* a, G4int arg0)->G4Material *{ return a->FindOrBuildSimpleMaterial(arg0); });

  DEBUG_MSG("Adding wrapper for G4Material * G4NistManager::BuildMaterialWithNewDensity(const G4String &, const G4String &, G4double, G4double, G4double) (" __HERE__ ")");
  // signature to use in the veto list: G4Material * G4NistManager::BuildMaterialWithNewDensity(const G4String &, const G4String &, G4double, G4double, G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:192:15
  t87.method("BuildMaterialWithNewDensity", static_cast<G4Material * (G4NistManager::*)(const G4String &, const G4String &, G4double, G4double, G4double) >(&G4NistManager::BuildMaterialWithNewDensity));
  t87.method("BuildMaterialWithNewDensity", [](G4NistManager& a, const G4String & arg0, const G4String & arg1)->G4Material *{ return a.BuildMaterialWithNewDensity(arg0, arg1); });
  t87.method("BuildMaterialWithNewDensity", [](G4NistManager& a, const G4String & arg0, const G4String & arg1, G4double arg2)->G4Material *{ return a.BuildMaterialWithNewDensity(arg0, arg1, arg2); });
  t87.method("BuildMaterialWithNewDensity", [](G4NistManager& a, const G4String & arg0, const G4String & arg1, G4double arg2, G4double arg3)->G4Material *{ return a.BuildMaterialWithNewDensity(arg0, arg1, arg2, arg3); });
  t87.method("BuildMaterialWithNewDensity", [](G4NistManager* a, const G4String & arg0, const G4String & arg1)->G4Material *{ return a->BuildMaterialWithNewDensity(arg0, arg1); });
  t87.method("BuildMaterialWithNewDensity", [](G4NistManager* a, const G4String & arg0, const G4String & arg1, G4double arg2)->G4Material *{ return a->BuildMaterialWithNewDensity(arg0, arg1, arg2); });
  t87.method("BuildMaterialWithNewDensity", [](G4NistManager* a, const G4String & arg0, const G4String & arg1, G4double arg2, G4double arg3)->G4Material *{ return a->BuildMaterialWithNewDensity(arg0, arg1, arg2, arg3); });

  DEBUG_MSG("Adding wrapper for G4Material * G4NistManager::ConstructNewMaterial(const G4String &, const std::vector<G4String> &, const std::vector<G4int> &, G4double, G4bool, G4State, G4double, G4double) (" __HERE__ ")");
  // signature to use in the veto list: G4Material * G4NistManager::ConstructNewMaterial(const G4String &, const std::vector<G4String> &, const std::vector<G4int> &, G4double, G4bool, G4State, G4double, G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:201:22
  t87.method("ConstructNewMaterial", static_cast<G4Material * (G4NistManager::*)(const G4String &, const std::vector<G4String> &, const std::vector<G4int> &, G4double, G4bool, G4State, G4double, G4double) >(&G4NistManager::ConstructNewMaterial));
  t87.method("ConstructNewMaterial", [](G4NistManager& a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4int> & arg2, G4double arg3)->G4Material *{ return a.ConstructNewMaterial(arg0, arg1, arg2, arg3); });
  t87.method("ConstructNewMaterial", [](G4NistManager& a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4int> & arg2, G4double arg3, G4bool arg4)->G4Material *{ return a.ConstructNewMaterial(arg0, arg1, arg2, arg3, arg4); });
  t87.method("ConstructNewMaterial", [](G4NistManager& a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4int> & arg2, G4double arg3, G4bool arg4, G4State arg5)->G4Material *{ return a.ConstructNewMaterial(arg0, arg1, arg2, arg3, arg4, arg5); });
  t87.method("ConstructNewMaterial", [](G4NistManager& a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4int> & arg2, G4double arg3, G4bool arg4, G4State arg5, G4double arg6)->G4Material *{ return a.ConstructNewMaterial(arg0, arg1, arg2, arg3, arg4, arg5, arg6); });
  t87.method("ConstructNewMaterial", [](G4NistManager* a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4int> & arg2, G4double arg3)->G4Material *{ return a->ConstructNewMaterial(arg0, arg1, arg2, arg3); });
  t87.method("ConstructNewMaterial", [](G4NistManager* a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4int> & arg2, G4double arg3, G4bool arg4)->G4Material *{ return a->ConstructNewMaterial(arg0, arg1, arg2, arg3, arg4); });
  t87.method("ConstructNewMaterial", [](G4NistManager* a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4int> & arg2, G4double arg3, G4bool arg4, G4State arg5)->G4Material *{ return a->ConstructNewMaterial(arg0, arg1, arg2, arg3, arg4, arg5); });
  t87.method("ConstructNewMaterial", [](G4NistManager* a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4int> & arg2, G4double arg3, G4bool arg4, G4State arg5, G4double arg6)->G4Material *{ return a->ConstructNewMaterial(arg0, arg1, arg2, arg3, arg4, arg5, arg6); });

  DEBUG_MSG("Adding wrapper for G4Material * G4NistManager::ConstructNewMaterial(const G4String &, const std::vector<G4String> &, const std::vector<G4double> &, G4double, G4bool, G4State, G4double, G4double) (" __HERE__ ")");
  // signature to use in the veto list: G4Material * G4NistManager::ConstructNewMaterial(const G4String &, const std::vector<G4String> &, const std::vector<G4double> &, G4double, G4bool, G4State, G4double, G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:214:22
  t87.method("ConstructNewMaterial", static_cast<G4Material * (G4NistManager::*)(const G4String &, const std::vector<G4String> &, const std::vector<G4double> &, G4double, G4bool, G4State, G4double, G4double) >(&G4NistManager::ConstructNewMaterial));
  t87.method("ConstructNewMaterial", [](G4NistManager& a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4double> & arg2, G4double arg3)->G4Material *{ return a.ConstructNewMaterial(arg0, arg1, arg2, arg3); });
  t87.method("ConstructNewMaterial", [](G4NistManager& a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4double> & arg2, G4double arg3, G4bool arg4)->G4Material *{ return a.ConstructNewMaterial(arg0, arg1, arg2, arg3, arg4); });
  t87.method("ConstructNewMaterial", [](G4NistManager& a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4double> & arg2, G4double arg3, G4bool arg4, G4State arg5)->G4Material *{ return a.ConstructNewMaterial(arg0, arg1, arg2, arg3, arg4, arg5); });
  t87.method("ConstructNewMaterial", [](G4NistManager& a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4double> & arg2, G4double arg3, G4bool arg4, G4State arg5, G4double arg6)->G4Material *{ return a.ConstructNewMaterial(arg0, arg1, arg2, arg3, arg4, arg5, arg6); });
  t87.method("ConstructNewMaterial", [](G4NistManager* a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4double> & arg2, G4double arg3)->G4Material *{ return a->ConstructNewMaterial(arg0, arg1, arg2, arg3); });
  t87.method("ConstructNewMaterial", [](G4NistManager* a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4double> & arg2, G4double arg3, G4bool arg4)->G4Material *{ return a->ConstructNewMaterial(arg0, arg1, arg2, arg3, arg4); });
  t87.method("ConstructNewMaterial", [](G4NistManager* a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4double> & arg2, G4double arg3, G4bool arg4, G4State arg5)->G4Material *{ return a->ConstructNewMaterial(arg0, arg1, arg2, arg3, arg4, arg5); });
  t87.method("ConstructNewMaterial", [](G4NistManager* a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4double> & arg2, G4double arg3, G4bool arg4, G4State arg5, G4double arg6)->G4Material *{ return a->ConstructNewMaterial(arg0, arg1, arg2, arg3, arg4, arg5, arg6); });

  DEBUG_MSG("Adding wrapper for G4Material * G4NistManager::ConstructNewGasMaterial(const G4String &, const G4String &, G4double, G4double, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: G4Material * G4NistManager::ConstructNewGasMaterial(const G4String &, const G4String &, G4double, G4double, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:226:22
  t87.method("ConstructNewGasMaterial", static_cast<G4Material * (G4NistManager::*)(const G4String &, const G4String &, G4double, G4double, G4bool) >(&G4NistManager::ConstructNewGasMaterial));
  t87.method("ConstructNewGasMaterial", [](G4NistManager& a, const G4String & arg0, const G4String & arg1, G4double arg2, G4double arg3)->G4Material *{ return a.ConstructNewGasMaterial(arg0, arg1, arg2, arg3); });
  t87.method("ConstructNewGasMaterial", [](G4NistManager* a, const G4String & arg0, const G4String & arg1, G4double arg2, G4double arg3)->G4Material *{ return a->ConstructNewGasMaterial(arg0, arg1, arg2, arg3); });

  DEBUG_MSG("Adding wrapper for G4Material * G4NistManager::ConstructNewIdealGasMaterial(const G4String &, const std::vector<G4String> &, const std::vector<G4int> &, G4bool, G4double, G4double) (" __HERE__ ")");
  // signature to use in the veto list: G4Material * G4NistManager::ConstructNewIdealGasMaterial(const G4String &, const std::vector<G4String> &, const std::vector<G4int> &, G4bool, G4double, G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:234:22
  t87.method("ConstructNewIdealGasMaterial", static_cast<G4Material * (G4NistManager::*)(const G4String &, const std::vector<G4String> &, const std::vector<G4int> &, G4bool, G4double, G4double) >(&G4NistManager::ConstructNewIdealGasMaterial));
  t87.method("ConstructNewIdealGasMaterial", [](G4NistManager& a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4int> & arg2)->G4Material *{ return a.ConstructNewIdealGasMaterial(arg0, arg1, arg2); });
  t87.method("ConstructNewIdealGasMaterial", [](G4NistManager& a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4int> & arg2, G4bool arg3)->G4Material *{ return a.ConstructNewIdealGasMaterial(arg0, arg1, arg2, arg3); });
  t87.method("ConstructNewIdealGasMaterial", [](G4NistManager& a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4int> & arg2, G4bool arg3, G4double arg4)->G4Material *{ return a.ConstructNewIdealGasMaterial(arg0, arg1, arg2, arg3, arg4); });
  t87.method("ConstructNewIdealGasMaterial", [](G4NistManager* a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4int> & arg2)->G4Material *{ return a->ConstructNewIdealGasMaterial(arg0, arg1, arg2); });
  t87.method("ConstructNewIdealGasMaterial", [](G4NistManager* a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4int> & arg2, G4bool arg3)->G4Material *{ return a->ConstructNewIdealGasMaterial(arg0, arg1, arg2, arg3); });
  t87.method("ConstructNewIdealGasMaterial", [](G4NistManager* a, const G4String & arg0, const std::vector<G4String> & arg1, const std::vector<G4int> & arg2, G4bool arg3, G4double arg4)->G4Material *{ return a->ConstructNewIdealGasMaterial(arg0, arg1, arg2, arg3, arg4); });

  DEBUG_MSG("Adding wrapper for void G4NistManager::SetDensityEffectCalculatorFlag(const G4String &, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4NistManager::SetDensityEffectCalculatorFlag(const G4String &, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:244:8
  t87.method("SetDensityEffectCalculatorFlag", static_cast<void (G4NistManager::*)(const G4String &, G4bool) >(&G4NistManager::SetDensityEffectCalculatorFlag));

  DEBUG_MSG("Adding wrapper for void G4NistManager::SetDensityEffectCalculatorFlag(G4Material *, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4NistManager::SetDensityEffectCalculatorFlag(G4Material *, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:248:8
  t87.method("SetDensityEffectCalculatorFlag", static_cast<void (G4NistManager::*)(G4Material *, G4bool) >(&G4NistManager::SetDensityEffectCalculatorFlag));

  DEBUG_MSG("Adding wrapper for size_t G4NistManager::GetNumberOfMaterials() (" __HERE__ ")");
  // signature to use in the veto list: size_t G4NistManager::GetNumberOfMaterials()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:252:17
  t87.method("GetNumberOfMaterials", static_cast<size_t (G4NistManager::*)()  const>(&G4NistManager::GetNumberOfMaterials));

  DEBUG_MSG("Adding wrapper for G4int G4NistManager::GetVerbose() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4NistManager::GetVerbose()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:254:16
  t87.method("GetVerbose", static_cast<G4int (G4NistManager::*)()  const>(&G4NistManager::GetVerbose));

  DEBUG_MSG("Adding wrapper for void G4NistManager::SetVerbose(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4NistManager::SetVerbose(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:256:8
  t87.method("SetVerbose", static_cast<void (G4NistManager::*)(G4int) >(&G4NistManager::SetVerbose));

  DEBUG_MSG("Adding wrapper for void G4NistManager::PrintG4Material(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4NistManager::PrintG4Material(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:260:8
  t87.method("PrintG4Material", static_cast<void (G4NistManager::*)(const G4String &)  const>(&G4NistManager::PrintG4Material));

  DEBUG_MSG("Adding wrapper for void G4NistManager::ListMaterials(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4NistManager::ListMaterials(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:269:15
  t87.method("ListMaterials", static_cast<void (G4NistManager::*)(const G4String &)  const>(&G4NistManager::ListMaterials));

  DEBUG_MSG("Adding wrapper for const std::vector<G4String> & G4NistManager::GetNistMaterialNames() (" __HERE__ ")");
  // signature to use in the veto list: const std::vector<G4String> & G4NistManager::GetNistMaterialNames()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:273:39
  t87.method("GetNistMaterialNames", static_cast<const std::vector<G4String> & (G4NistManager::*)()  const>(&G4NistManager::GetNistMaterialNames));

  DEBUG_MSG("Adding wrapper for G4double G4NistManager::GetZ13(G4double) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4NistManager::GetZ13(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:277:19
  t87.method("GetZ13", static_cast<G4double (G4NistManager::*)(G4double)  const>(&G4NistManager::GetZ13));

  DEBUG_MSG("Adding wrapper for G4double G4NistManager::GetZ13(G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4NistManager::GetZ13(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:278:19
  t87.method("GetZ13", static_cast<G4double (G4NistManager::*)(G4int)  const>(&G4NistManager::GetZ13));

  DEBUG_MSG("Adding wrapper for G4double G4NistManager::GetA27(G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4NistManager::GetA27(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:282:19
  t87.method("GetA27", static_cast<G4double (G4NistManager::*)(G4int)  const>(&G4NistManager::GetA27));

  DEBUG_MSG("Adding wrapper for G4double G4NistManager::GetLOGZ(G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4NistManager::GetLOGZ(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:286:19
  t87.method("GetLOGZ", static_cast<G4double (G4NistManager::*)(G4int)  const>(&G4NistManager::GetLOGZ));

  DEBUG_MSG("Adding wrapper for G4double G4NistManager::GetLOGAMU(G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4NistManager::GetLOGAMU(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:287:19
  t87.method("GetLOGAMU", static_cast<G4double (G4NistManager::*)(G4int)  const>(&G4NistManager::GetLOGAMU));

  DEBUG_MSG("Adding wrapper for G4ICRU90StoppingData * G4NistManager::GetICRU90StoppingData() (" __HERE__ ")");
  // signature to use in the veto list: G4ICRU90StoppingData * G4NistManager::GetICRU90StoppingData()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4NistManager.hh:289:25
  t87.method("GetICRU90StoppingData", static_cast<G4ICRU90StoppingData * (G4NistManager::*)() >(&G4NistManager::GetICRU90StoppingData));

  /* End of G4NistManager class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4CSGSolid
   */


  DEBUG_MSG("Adding wrapper for G4Polyhedron * G4CSGSolid::GetPolyhedron() (" __HERE__ ")");
  // signature to use in the veto list: G4Polyhedron * G4CSGSolid::GetPolyhedron()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4CSGSolid.hh:50:27
  t91.method("GetPolyhedron", static_cast<G4Polyhedron * (G4CSGSolid::*)()  const>(&G4CSGSolid::GetPolyhedron));


  DEBUG_MSG("Adding wrapper for G4CSGSolid & G4CSGSolid::operator=(const G4CSGSolid &) (" __HERE__ ")");
  // signature to use in the veto list: G4CSGSolid & G4CSGSolid::operator=(const G4CSGSolid &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4CSGSolid.hh:60:17
  t91.method("assign", static_cast<G4CSGSolid & (G4CSGSolid::*)(const G4CSGSolid &) >(&G4CSGSolid::operator=));

  /* End of G4CSGSolid class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4SteppingVerbose
   */

  DEBUG_MSG("Adding wrapper for G4VSteppingVerbose * G4SteppingVerbose::Clone() (" __HERE__ ")");
  // signature to use in the veto list: G4VSteppingVerbose * G4SteppingVerbose::Clone()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:51:33
  t92.method("Clone", static_cast<G4VSteppingVerbose * (G4SteppingVerbose::*)() >(&G4SteppingVerbose::Clone));

  DEBUG_MSG("Adding wrapper for void G4SteppingVerbose::NewStep() (" __HERE__ ")");
  // signature to use in the veto list: void G4SteppingVerbose::NewStep()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:56:18
  t92.method("NewStep", static_cast<void (G4SteppingVerbose::*)() >(&G4SteppingVerbose::NewStep));

  DEBUG_MSG("Adding wrapper for void G4SteppingVerbose::AtRestDoItInvoked() (" __HERE__ ")");
  // signature to use in the veto list: void G4SteppingVerbose::AtRestDoItInvoked()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:57:18
  t92.method("AtRestDoItInvoked", static_cast<void (G4SteppingVerbose::*)() >(&G4SteppingVerbose::AtRestDoItInvoked));

  DEBUG_MSG("Adding wrapper for void G4SteppingVerbose::AlongStepDoItAllDone() (" __HERE__ ")");
  // signature to use in the veto list: void G4SteppingVerbose::AlongStepDoItAllDone()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:58:18
  t92.method("AlongStepDoItAllDone", static_cast<void (G4SteppingVerbose::*)() >(&G4SteppingVerbose::AlongStepDoItAllDone));

  DEBUG_MSG("Adding wrapper for void G4SteppingVerbose::PostStepDoItAllDone() (" __HERE__ ")");
  // signature to use in the veto list: void G4SteppingVerbose::PostStepDoItAllDone()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:59:18
  t92.method("PostStepDoItAllDone", static_cast<void (G4SteppingVerbose::*)() >(&G4SteppingVerbose::PostStepDoItAllDone));

  DEBUG_MSG("Adding wrapper for void G4SteppingVerbose::AlongStepDoItOneByOne() (" __HERE__ ")");
  // signature to use in the veto list: void G4SteppingVerbose::AlongStepDoItOneByOne()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:60:18
  t92.method("AlongStepDoItOneByOne", static_cast<void (G4SteppingVerbose::*)() >(&G4SteppingVerbose::AlongStepDoItOneByOne));

  DEBUG_MSG("Adding wrapper for void G4SteppingVerbose::PostStepDoItOneByOne() (" __HERE__ ")");
  // signature to use in the veto list: void G4SteppingVerbose::PostStepDoItOneByOne()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:61:18
  t92.method("PostStepDoItOneByOne", static_cast<void (G4SteppingVerbose::*)() >(&G4SteppingVerbose::PostStepDoItOneByOne));

  DEBUG_MSG("Adding wrapper for void G4SteppingVerbose::StepInfo() (" __HERE__ ")");
  // signature to use in the veto list: void G4SteppingVerbose::StepInfo()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:62:18
  t92.method("StepInfo", static_cast<void (G4SteppingVerbose::*)() >(&G4SteppingVerbose::StepInfo));

  DEBUG_MSG("Adding wrapper for void G4SteppingVerbose::TrackingStarted() (" __HERE__ ")");
  // signature to use in the veto list: void G4SteppingVerbose::TrackingStarted()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:63:18
  t92.method("TrackingStarted", static_cast<void (G4SteppingVerbose::*)() >(&G4SteppingVerbose::TrackingStarted));

  DEBUG_MSG("Adding wrapper for void G4SteppingVerbose::DPSLStarted() (" __HERE__ ")");
  // signature to use in the veto list: void G4SteppingVerbose::DPSLStarted()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:64:18
  t92.method("DPSLStarted", static_cast<void (G4SteppingVerbose::*)() >(&G4SteppingVerbose::DPSLStarted));

  DEBUG_MSG("Adding wrapper for void G4SteppingVerbose::DPSLUserLimit() (" __HERE__ ")");
  // signature to use in the veto list: void G4SteppingVerbose::DPSLUserLimit()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:65:18
  t92.method("DPSLUserLimit", static_cast<void (G4SteppingVerbose::*)() >(&G4SteppingVerbose::DPSLUserLimit));

  DEBUG_MSG("Adding wrapper for void G4SteppingVerbose::DPSLPostStep() (" __HERE__ ")");
  // signature to use in the veto list: void G4SteppingVerbose::DPSLPostStep()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:66:18
  t92.method("DPSLPostStep", static_cast<void (G4SteppingVerbose::*)() >(&G4SteppingVerbose::DPSLPostStep));

  DEBUG_MSG("Adding wrapper for void G4SteppingVerbose::DPSLAlongStep() (" __HERE__ ")");
  // signature to use in the veto list: void G4SteppingVerbose::DPSLAlongStep()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:67:18
  t92.method("DPSLAlongStep", static_cast<void (G4SteppingVerbose::*)() >(&G4SteppingVerbose::DPSLAlongStep));

  DEBUG_MSG("Adding wrapper for void G4SteppingVerbose::VerboseTrack() (" __HERE__ ")");
  // signature to use in the veto list: void G4SteppingVerbose::VerboseTrack()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:68:18
  t92.method("VerboseTrack", static_cast<void (G4SteppingVerbose::*)() >(&G4SteppingVerbose::VerboseTrack));

  DEBUG_MSG("Adding wrapper for void G4SteppingVerbose::VerboseParticleChange() (" __HERE__ ")");
  // signature to use in the veto list: void G4SteppingVerbose::VerboseParticleChange()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:69:18
  t92.method("VerboseParticleChange", static_cast<void (G4SteppingVerbose::*)() >(&G4SteppingVerbose::VerboseParticleChange));

  DEBUG_MSG("Adding wrapper for void G4SteppingVerbose::ShowStep() (" __HERE__ ")");
  // signature to use in the veto list: void G4SteppingVerbose::ShowStep()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:70:18
  t92.method("ShowStep", static_cast<void (G4SteppingVerbose::*)()  const>(&G4SteppingVerbose::ShowStep));

  DEBUG_MSG("Adding wrapper for void G4SteppingVerbose::UseBestUnit(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4SteppingVerbose::UseBestUnit(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:76:17
  t92.method("G4SteppingVerbose!UseBestUnit", static_cast<void (*)(G4int) >(&G4SteppingVerbose::UseBestUnit));
  t92.method("G4SteppingVerbose!UseBestUnit", []()->void{ G4SteppingVerbose::UseBestUnit(); });

  DEBUG_MSG("Adding wrapper for G4int G4SteppingVerbose::BestUnitPrecision() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4SteppingVerbose::BestUnitPrecision()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4SteppingVerbose.hh:77:18
  t92.method("G4SteppingVerbose!BestUnitPrecision", static_cast<G4int (*)() >(&G4SteppingVerbose::BestUnitPrecision));

  /* End of G4SteppingVerbose class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4PVPlacement
   */


  DEBUG_MSG("Adding wrapper for void G4PVPlacement::G4PVPlacement(G4RotationMatrix *, const G4ThreeVector &, G4LogicalVolume *, const G4String &, G4LogicalVolume *, G4bool, G4int, G4bool) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4PVPlacement.hh:47:5
  t93.constructor<G4RotationMatrix *, const G4ThreeVector &, G4LogicalVolume *, const G4String &, G4LogicalVolume *, G4bool, G4int>(/*finalize=*/false);
  t93.constructor<G4RotationMatrix *, const G4ThreeVector &, G4LogicalVolume *, const G4String &, G4LogicalVolume *, G4bool, G4int, G4bool>(/*finalize=*/false);


  DEBUG_MSG("Adding wrapper for void G4PVPlacement::G4PVPlacement(const G4Transform3D &, G4LogicalVolume *, const G4String &, G4LogicalVolume *, G4bool, G4int, G4bool) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4PVPlacement.hh:69:5
  t93.constructor<const G4Transform3D &, G4LogicalVolume *, const G4String &, G4LogicalVolume *, G4bool, G4int>(/*finalize=*/false);
  t93.constructor<const G4Transform3D &, G4LogicalVolume *, const G4String &, G4LogicalVolume *, G4bool, G4int, G4bool>(/*finalize=*/false);


  DEBUG_MSG("Adding wrapper for void G4PVPlacement::G4PVPlacement(G4RotationMatrix *, const G4ThreeVector &, const G4String &, G4LogicalVolume *, G4VPhysicalVolume *, G4bool, G4int, G4bool) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4PVPlacement.hh:90:5
  t93.constructor<G4RotationMatrix *, const G4ThreeVector &, const G4String &, G4LogicalVolume *, G4VPhysicalVolume *, G4bool, G4int>(/*finalize=*/false);
  t93.constructor<G4RotationMatrix *, const G4ThreeVector &, const G4String &, G4LogicalVolume *, G4VPhysicalVolume *, G4bool, G4int, G4bool>(/*finalize=*/false);


  DEBUG_MSG("Adding wrapper for void G4PVPlacement::G4PVPlacement(const G4Transform3D &, const G4String &, G4LogicalVolume *, G4VPhysicalVolume *, G4bool, G4int, G4bool) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4PVPlacement.hh:102:5
  t93.constructor<const G4Transform3D &, const G4String &, G4LogicalVolume *, G4VPhysicalVolume *, G4bool, G4int>(/*finalize=*/false);
  t93.constructor<const G4Transform3D &, const G4String &, G4LogicalVolume *, G4VPhysicalVolume *, G4bool, G4int, G4bool>(/*finalize=*/false);

  DEBUG_MSG("Adding wrapper for G4int G4PVPlacement::GetCopyNo() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4PVPlacement::GetCopyNo()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4PVPlacement.hh:117:18
  t93.method("GetCopyNo", static_cast<G4int (G4PVPlacement::*)()  const>(&G4PVPlacement::GetCopyNo));

  DEBUG_MSG("Adding wrapper for void G4PVPlacement::SetCopyNo(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4PVPlacement::SetCopyNo(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4PVPlacement.hh:119:10
  t93.method("SetCopyNo", static_cast<void (G4PVPlacement::*)(G4int) >(&G4PVPlacement::SetCopyNo));

  DEBUG_MSG("Adding wrapper for G4bool G4PVPlacement::CheckOverlaps(G4int, G4double, G4bool, G4int) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4PVPlacement::CheckOverlaps(G4int, G4double, G4bool, G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4PVPlacement.hh:122:12
  t93.method("CheckOverlaps", static_cast<G4bool (G4PVPlacement::*)(G4int, G4double, G4bool, G4int) >(&G4PVPlacement::CheckOverlaps));
  t93.method("CheckOverlaps", [](G4PVPlacement& a)->G4bool{ return a.CheckOverlaps(); });
  t93.method("CheckOverlaps", [](G4PVPlacement& a, G4int arg0)->G4bool{ return a.CheckOverlaps(arg0); });
  t93.method("CheckOverlaps", [](G4PVPlacement& a, G4int arg0, G4double arg1)->G4bool{ return a.CheckOverlaps(arg0, arg1); });
  t93.method("CheckOverlaps", [](G4PVPlacement& a, G4int arg0, G4double arg1, G4bool arg2)->G4bool{ return a.CheckOverlaps(arg0, arg1, arg2); });
  t93.method("CheckOverlaps", [](G4PVPlacement* a)->G4bool{ return a->CheckOverlaps(); });
  t93.method("CheckOverlaps", [](G4PVPlacement* a, G4int arg0)->G4bool{ return a->CheckOverlaps(arg0); });
  t93.method("CheckOverlaps", [](G4PVPlacement* a, G4int arg0, G4double arg1)->G4bool{ return a->CheckOverlaps(arg0, arg1); });
  t93.method("CheckOverlaps", [](G4PVPlacement* a, G4int arg0, G4double arg1, G4bool arg2)->G4bool{ return a->CheckOverlaps(arg0, arg1, arg2); });

  DEBUG_MSG("Adding wrapper for G4bool G4PVPlacement::IsMany() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4PVPlacement::IsMany()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4PVPlacement.hh:143:12
  t93.method("IsMany", static_cast<G4bool (G4PVPlacement::*)()  const>(&G4PVPlacement::IsMany));

  DEBUG_MSG("Adding wrapper for G4bool G4PVPlacement::IsReplicated() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4PVPlacement::IsReplicated()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4PVPlacement.hh:144:12
  t93.method("IsReplicated", static_cast<G4bool (G4PVPlacement::*)()  const>(&G4PVPlacement::IsReplicated));

  DEBUG_MSG("Adding wrapper for G4bool G4PVPlacement::IsParameterised() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4PVPlacement::IsParameterised()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4PVPlacement.hh:145:12
  t93.method("IsParameterised", static_cast<G4bool (G4PVPlacement::*)()  const>(&G4PVPlacement::IsParameterised));

  DEBUG_MSG("Adding wrapper for G4VPVParameterisation * G4PVPlacement::GetParameterisation() (" __HERE__ ")");
  // signature to use in the veto list: G4VPVParameterisation * G4PVPlacement::GetParameterisation()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4PVPlacement.hh:146:28
  t93.method("GetParameterisation", static_cast<G4VPVParameterisation * (G4PVPlacement::*)()  const>(&G4PVPlacement::GetParameterisation));

  DEBUG_MSG("Adding wrapper for void G4PVPlacement::GetReplicationData(EAxis &, G4int &, G4double &, G4double &, G4bool &) (" __HERE__ ")");
  // signature to use in the veto list: void G4PVPlacement::GetReplicationData(EAxis &, G4int &, G4double &, G4double &, G4bool &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4PVPlacement.hh:147:10
  t93.method("GetReplicationData", static_cast<void (G4PVPlacement::*)(EAxis &, G4int &, G4double &, G4double &, G4bool &)  const>(&G4PVPlacement::GetReplicationData));

  DEBUG_MSG("Adding wrapper for G4bool G4PVPlacement::IsRegularStructure() (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4PVPlacement::IsRegularStructure()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4PVPlacement.hh:152:12
  t93.method("IsRegularStructure", static_cast<G4bool (G4PVPlacement::*)()  const>(&G4PVPlacement::IsRegularStructure));

  DEBUG_MSG("Adding wrapper for G4int G4PVPlacement::GetRegularStructureId() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4PVPlacement::GetRegularStructureId()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4PVPlacement.hh:153:11
  t93.method("GetRegularStructureId", static_cast<G4int (G4PVPlacement::*)()  const>(&G4PVPlacement::GetRegularStructureId));

  DEBUG_MSG("Adding wrapper for EVolume G4PVPlacement::VolumeType() (" __HERE__ ")");
  // signature to use in the veto list: EVolume G4PVPlacement::VolumeType()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4PVPlacement.hh:155:13
  t93.method("VolumeType", static_cast<EVolume (G4PVPlacement::*)()  const>(&G4PVPlacement::VolumeType));

  /* End of G4PVPlacement class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4VUPLData
   */

  DEBUG_MSG("Adding wrapper for void G4VUPLData::initialize() (" __HERE__ ")");
  // signature to use in the veto list: void G4VUPLData::initialize()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:66:10
  t94.method("initialize", static_cast<void (G4VUPLData::*)() >(&G4VUPLData::initialize));

  DEBUG_MSG("Adding _theMessenger methods  to provide read access to the field _theMessenger (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:69:33
  // signature to use in the veto list: G4VUPLData::_theMessenger
  t94.method("_theMessenger", [](const G4VUPLData& a) -> G4UserPhysicsListMessenger * { return a._theMessenger; });
  t94.method("_theMessenger", [](G4VUPLData& a) -> G4UserPhysicsListMessenger * { return a._theMessenger; });
  t94.method("_theMessenger", [](const G4VUPLData* a) -> G4UserPhysicsListMessenger * { return a->_theMessenger; });
  t94.method("_theMessenger", [](G4VUPLData* a) -> G4UserPhysicsListMessenger * { return a->_theMessenger; });
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:69:33
  // signature to use in the veto list: G4VUPLData::_theMessenger
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding _theMessenger! methods to provide write access to the field _theMessenger (" __HERE__ ")");
  t94.method("_theMessenger!", [](G4VUPLData& a, G4UserPhysicsListMessenger * val) -> G4UserPhysicsListMessenger * { return a._theMessenger = val; });

  DEBUG_MSG("Adding _theMessenger! methods to provide write access to the field _theMessenger (" __HERE__ ")");
  t94.method("_theMessenger!", [](G4VUPLData* a, G4UserPhysicsListMessenger * val) -> G4UserPhysicsListMessenger * { return a->_theMessenger = val; });

  DEBUG_MSG("Adding _thePLHelper methods  to provide read access to the field _thePLHelper (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:70:26
  // signature to use in the veto list: G4VUPLData::_thePLHelper
  t94.method("_thePLHelper", [](const G4VUPLData& a) -> G4PhysicsListHelper * { return a._thePLHelper; });
  t94.method("_thePLHelper", [](G4VUPLData& a) -> G4PhysicsListHelper * { return a._thePLHelper; });
  t94.method("_thePLHelper", [](const G4VUPLData* a) -> G4PhysicsListHelper * { return a->_thePLHelper; });
  t94.method("_thePLHelper", [](G4VUPLData* a) -> G4PhysicsListHelper * { return a->_thePLHelper; });
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:70:26
  // signature to use in the veto list: G4VUPLData::_thePLHelper
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding _thePLHelper! methods to provide write access to the field _thePLHelper (" __HERE__ ")");
  t94.method("_thePLHelper!", [](G4VUPLData& a, G4PhysicsListHelper * val) -> G4PhysicsListHelper * { return a._thePLHelper = val; });

  DEBUG_MSG("Adding _thePLHelper! methods to provide write access to the field _thePLHelper (" __HERE__ ")");
  t94.method("_thePLHelper!", [](G4VUPLData* a, G4PhysicsListHelper * val) -> G4PhysicsListHelper * { return a->_thePLHelper = val; });

  DEBUG_MSG("Adding _fIsPhysicsTableBuilt methods  to provide read access to the field _fIsPhysicsTableBuilt (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:71:12
  // signature to use in the veto list: G4VUPLData::_fIsPhysicsTableBuilt
  t94.method("_fIsPhysicsTableBuilt", [](const G4VUPLData& a) -> G4bool { return a._fIsPhysicsTableBuilt; });
  t94.method("_fIsPhysicsTableBuilt", [](G4VUPLData& a) -> G4bool { return a._fIsPhysicsTableBuilt; });
  t94.method("_fIsPhysicsTableBuilt", [](const G4VUPLData* a) -> G4bool { return a->_fIsPhysicsTableBuilt; });
  t94.method("_fIsPhysicsTableBuilt", [](G4VUPLData* a) -> G4bool { return a->_fIsPhysicsTableBuilt; });
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:71:12
  // signature to use in the veto list: G4VUPLData::_fIsPhysicsTableBuilt
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding _fIsPhysicsTableBuilt! methods to provide write access to the field _fIsPhysicsTableBuilt (" __HERE__ ")");
  t94.method("_fIsPhysicsTableBuilt!", [](G4VUPLData& a, G4bool val) -> G4bool { return a._fIsPhysicsTableBuilt = val; });

  DEBUG_MSG("Adding _fIsPhysicsTableBuilt! methods to provide write access to the field _fIsPhysicsTableBuilt (" __HERE__ ")");
  t94.method("_fIsPhysicsTableBuilt!", [](G4VUPLData* a, G4bool val) -> G4bool { return a->_fIsPhysicsTableBuilt = val; });

  DEBUG_MSG("Adding _fDisplayThreshold methods  to provide read access to the field _fDisplayThreshold (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:72:11
  // signature to use in the veto list: G4VUPLData::_fDisplayThreshold
  t94.method("_fDisplayThreshold", [](const G4VUPLData& a) -> G4int { return a._fDisplayThreshold; });
  t94.method("_fDisplayThreshold", [](G4VUPLData& a) -> G4int { return a._fDisplayThreshold; });
  t94.method("_fDisplayThreshold", [](const G4VUPLData* a) -> G4int { return a->_fDisplayThreshold; });
  t94.method("_fDisplayThreshold", [](G4VUPLData* a) -> G4int { return a->_fDisplayThreshold; });
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VUserPhysicsList.hh:72:11
  // signature to use in the veto list: G4VUPLData::_fDisplayThreshold
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding _fDisplayThreshold! methods to provide write access to the field _fDisplayThreshold (" __HERE__ ")");
  t94.method("_fDisplayThreshold!", [](G4VUPLData& a, G4int val) -> G4int { return a._fDisplayThreshold = val; });

  DEBUG_MSG("Adding _fDisplayThreshold! methods to provide write access to the field _fDisplayThreshold (" __HERE__ ")");
  t94.method("_fDisplayThreshold!", [](G4VUPLData* a, G4int val) -> G4int { return a->_fDisplayThreshold = val; });

  /* End of G4VUPLData class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4UserPhysicsListMessenger
   */


  DEBUG_MSG("Adding wrapper for void G4UserPhysicsListMessenger::G4UserPhysicsListMessenger(G4VUserPhysicsList *) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserPhysicsListMessenger.hh:67:5
  t95.constructor<G4VUserPhysicsList *>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for void G4UserPhysicsListMessenger::SetNewValue(G4UIcommand *, G4String) (" __HERE__ ")");
  // signature to use in the veto list: void G4UserPhysicsListMessenger::SetNewValue(G4UIcommand *, G4String)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserPhysicsListMessenger.hh:70:18
  t95.method("SetNewValue", static_cast<void (G4UserPhysicsListMessenger::*)(G4UIcommand *, G4String) >(&G4UserPhysicsListMessenger::SetNewValue));

  DEBUG_MSG("Adding wrapper for G4String G4UserPhysicsListMessenger::GetCurrentValue(G4UIcommand *) (" __HERE__ ")");
  // signature to use in the veto list: G4String G4UserPhysicsListMessenger::GetCurrentValue(G4UIcommand *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4UserPhysicsListMessenger.hh:71:22
  t95.method("GetCurrentValue", static_cast<G4String (G4UserPhysicsListMessenger::*)(G4UIcommand *) >(&G4UserPhysicsListMessenger::GetCurrentValue));

  /* End of G4UserPhysicsListMessenger class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4VMPLData
   */

  DEBUG_MSG("Adding wrapper for void G4VMPLData::initialize() (" __HERE__ ")");
  // signature to use in the veto list: void G4VMPLData::initialize()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:61:10
  t98.method("initialize", static_cast<void (G4VMPLData::*)() >(&G4VMPLData::initialize));

  DEBUG_MSG("Adding physicsVector methods  to provide read access to the field physicsVector (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:64:28
  // signature to use in the veto list: G4VMPLData::physicsVector
  t98.method("physicsVector", [](const G4VMPLData& a) -> G4VMPLData::G4PhysConstVectorData * { return a.physicsVector; });
  t98.method("physicsVector", [](G4VMPLData& a) -> G4VMPLData::G4PhysConstVectorData * { return a.physicsVector; });
  t98.method("physicsVector", [](const G4VMPLData* a) -> G4VMPLData::G4PhysConstVectorData * { return a->physicsVector; });
  t98.method("physicsVector", [](G4VMPLData* a) -> G4VMPLData::G4PhysConstVectorData * { return a->physicsVector; });
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:64:28
  // signature to use in the veto list: G4VMPLData::physicsVector
  // with ! suffix to veto the setter only

  DEBUG_MSG("Adding physicsVector! methods to provide write access to the field physicsVector (" __HERE__ ")");
  t98.method("physicsVector!", [](G4VMPLData& a, G4VMPLData::G4PhysConstVectorData * val) -> G4VMPLData::G4PhysConstVectorData * { return a.physicsVector = val; });

  DEBUG_MSG("Adding physicsVector! methods to provide write access to the field physicsVector (" __HERE__ ")");
  t98.method("physicsVector!", [](G4VMPLData* a, G4VMPLData::G4PhysConstVectorData * val) -> G4VMPLData::G4PhysConstVectorData * { return a->physicsVector = val; });

  /* End of G4VMPLData class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4VModularPhysicsList
   */

  DEBUG_MSG("Adding wrapper for void G4VModularPhysicsList::ConstructParticle() (" __HERE__ ")");
  // signature to use in the veto list: void G4VModularPhysicsList::ConstructParticle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:93:18
  t99.method("ConstructParticle", static_cast<void (G4VModularPhysicsList::*)() >(&G4VModularPhysicsList::ConstructParticle));

  DEBUG_MSG("Adding wrapper for void G4VModularPhysicsList::ConstructProcess() (" __HERE__ ")");
  // signature to use in the veto list: void G4VModularPhysicsList::ConstructProcess()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:97:18
  t99.method("ConstructProcess", static_cast<void (G4VModularPhysicsList::*)() >(&G4VModularPhysicsList::ConstructProcess));

  DEBUG_MSG("Adding wrapper for void G4VModularPhysicsList::RegisterPhysics(G4VPhysicsConstructor *) (" __HERE__ ")");
  // signature to use in the veto list: void G4VModularPhysicsList::RegisterPhysics(G4VPhysicsConstructor *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:102:10
  t99.method("RegisterPhysics", static_cast<void (G4VModularPhysicsList::*)(G4VPhysicsConstructor *) >(&G4VModularPhysicsList::RegisterPhysics));

  DEBUG_MSG("Adding wrapper for const G4VPhysicsConstructor * G4VModularPhysicsList::GetPhysics(G4int) (" __HERE__ ")");
  // signature to use in the veto list: const G4VPhysicsConstructor * G4VModularPhysicsList::GetPhysics(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:105:34
  t99.method("GetPhysics", static_cast<const G4VPhysicsConstructor * (G4VModularPhysicsList::*)(G4int)  const>(&G4VModularPhysicsList::GetPhysics));

  DEBUG_MSG("Adding wrapper for const G4VPhysicsConstructor * G4VModularPhysicsList::GetPhysics(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: const G4VPhysicsConstructor * G4VModularPhysicsList::GetPhysics(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:106:34
  t99.method("GetPhysics", static_cast<const G4VPhysicsConstructor * (G4VModularPhysicsList::*)(const G4String &)  const>(&G4VModularPhysicsList::GetPhysics));

  DEBUG_MSG("Adding wrapper for const G4VPhysicsConstructor * G4VModularPhysicsList::GetPhysicsWithType(G4int) (" __HERE__ ")");
  // signature to use in the veto list: const G4VPhysicsConstructor * G4VModularPhysicsList::GetPhysicsWithType(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:107:34
  t99.method("GetPhysicsWithType", static_cast<const G4VPhysicsConstructor * (G4VModularPhysicsList::*)(G4int)  const>(&G4VModularPhysicsList::GetPhysicsWithType));

  DEBUG_MSG("Adding wrapper for void G4VModularPhysicsList::ReplacePhysics(G4VPhysicsConstructor *) (" __HERE__ ")");
  // signature to use in the veto list: void G4VModularPhysicsList::ReplacePhysics(G4VPhysicsConstructor *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:109:10
  t99.method("ReplacePhysics", static_cast<void (G4VModularPhysicsList::*)(G4VPhysicsConstructor *) >(&G4VModularPhysicsList::ReplacePhysics));

  DEBUG_MSG("Adding wrapper for void G4VModularPhysicsList::RemovePhysics(G4VPhysicsConstructor *) (" __HERE__ ")");
  // signature to use in the veto list: void G4VModularPhysicsList::RemovePhysics(G4VPhysicsConstructor *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:116:10
  t99.method("RemovePhysics", static_cast<void (G4VModularPhysicsList::*)(G4VPhysicsConstructor *) >(&G4VModularPhysicsList::RemovePhysics));

  DEBUG_MSG("Adding wrapper for void G4VModularPhysicsList::RemovePhysics(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4VModularPhysicsList::RemovePhysics(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:117:10
  t99.method("RemovePhysics", static_cast<void (G4VModularPhysicsList::*)(G4int) >(&G4VModularPhysicsList::RemovePhysics));

  DEBUG_MSG("Adding wrapper for void G4VModularPhysicsList::RemovePhysics(const G4String &) (" __HERE__ ")");
  // signature to use in the veto list: void G4VModularPhysicsList::RemovePhysics(const G4String &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:118:10
  t99.method("RemovePhysics", static_cast<void (G4VModularPhysicsList::*)(const G4String &) >(&G4VModularPhysicsList::RemovePhysics));

  DEBUG_MSG("Adding wrapper for G4int G4VModularPhysicsList::GetInstanceID() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4VModularPhysicsList::GetInstanceID()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:121:18
  t99.method("GetInstanceID", static_cast<G4int (G4VModularPhysicsList::*)()  const>(&G4VModularPhysicsList::GetInstanceID));

  DEBUG_MSG("Adding wrapper for void G4VModularPhysicsList::TerminateWorker() (" __HERE__ ")");
  // signature to use in the veto list: void G4VModularPhysicsList::TerminateWorker()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:123:18
  t99.method("TerminateWorker", static_cast<void (G4VModularPhysicsList::*)() >(&G4VModularPhysicsList::TerminateWorker));

  DEBUG_MSG("Adding wrapper for void G4VModularPhysicsList::SetVerboseLevel(G4int) (" __HERE__ ")");
  // signature to use in the veto list: void G4VModularPhysicsList::SetVerboseLevel(G4int)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:125:10
  t99.method("SetVerboseLevel", static_cast<void (G4VModularPhysicsList::*)(G4int) >(&G4VModularPhysicsList::SetVerboseLevel));

  DEBUG_MSG("Adding wrapper for G4int G4VModularPhysicsList::GetVerboseLevel() (" __HERE__ ")");
  // signature to use in the veto list: G4int G4VModularPhysicsList::GetVerboseLevel()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VModularPhysicsList.hh:126:11
  t99.method("GetVerboseLevel", static_cast<G4int (G4VModularPhysicsList::*)()  const>(&G4VModularPhysicsList::GetVerboseLevel));

  /* End of G4VModularPhysicsList class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class QGS_BIC
   */


  DEBUG_MSG("Adding wrapper for void QGS_BIC::QGS_BIC(G4int) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/QGS_BIC.hh:48:3
  t101.constructor<G4int>(/*finalize=*/true);

  /* End of QGS_BIC class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class QBBC
   */


  DEBUG_MSG("Adding wrapper for void QBBC::QBBC(G4int, const G4String &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/QBBC.hh:47:12
  t102.constructor<G4int>(/*finalize=*/true);
  t102.constructor<G4int, const G4String &>(/*finalize=*/true);

  /* End of QBBC class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class FTFP_BERT
   */


  DEBUG_MSG("Adding wrapper for void FTFP_BERT::FTFP_BERT(G4int) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/FTFP_BERT.hh:49:3
  t103.constructor<G4int>(/*finalize=*/true);

  /* End of FTFP_BERT class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4Box
   */


  DEBUG_MSG("Adding wrapper for void G4Box::G4Box(const G4String &, G4double, G4double, G4double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:59:5
  t104.constructor<const G4String &, G4double, G4double, G4double>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for void G4Box::ComputeDimensions(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *) (" __HERE__ ")");
  // signature to use in the veto list: void G4Box::ComputeDimensions(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:64:10
  t104.method("ComputeDimensions", static_cast<void (G4Box::*)(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *) >(&G4Box::ComputeDimensions));

  DEBUG_MSG("Adding wrapper for void G4Box::BoundingLimits(G4ThreeVector &, G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: void G4Box::BoundingLimits(G4ThreeVector &, G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:68:10
  t104.method("BoundingLimits", static_cast<void (G4Box::*)(G4ThreeVector &, G4ThreeVector &)  const>(&G4Box::BoundingLimits));

  DEBUG_MSG("Adding wrapper for G4double G4Box::GetXHalfLength() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Box::GetXHalfLength()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:77:21
  t104.method("GetXHalfLength", static_cast<G4double (G4Box::*)()  const>(&G4Box::GetXHalfLength));

  DEBUG_MSG("Adding wrapper for G4double G4Box::GetYHalfLength() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Box::GetYHalfLength()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:78:21
  t104.method("GetYHalfLength", static_cast<G4double (G4Box::*)()  const>(&G4Box::GetYHalfLength));

  DEBUG_MSG("Adding wrapper for G4double G4Box::GetZHalfLength() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Box::GetZHalfLength()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:79:21
  t104.method("GetZHalfLength", static_cast<G4double (G4Box::*)()  const>(&G4Box::GetZHalfLength));

  DEBUG_MSG("Adding wrapper for void G4Box::SetXHalfLength(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Box::SetXHalfLength(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:81:10
  t104.method("SetXHalfLength", static_cast<void (G4Box::*)(G4double) >(&G4Box::SetXHalfLength));

  DEBUG_MSG("Adding wrapper for void G4Box::SetYHalfLength(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Box::SetYHalfLength(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:82:10
  t104.method("SetYHalfLength", static_cast<void (G4Box::*)(G4double) >(&G4Box::SetYHalfLength));

  DEBUG_MSG("Adding wrapper for void G4Box::SetZHalfLength(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Box::SetZHalfLength(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:83:10
  t104.method("SetZHalfLength", static_cast<void (G4Box::*)(G4double) >(&G4Box::SetZHalfLength));

  DEBUG_MSG("Adding wrapper for G4double G4Box::GetCubicVolume() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Box::GetCubicVolume()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:87:21
  t104.method("GetCubicVolume", static_cast<G4double (G4Box::*)() >(&G4Box::GetCubicVolume));

  DEBUG_MSG("Adding wrapper for G4double G4Box::GetSurfaceArea() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Box::GetSurfaceArea()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:88:21
  t104.method("GetSurfaceArea", static_cast<G4double (G4Box::*)() >(&G4Box::GetSurfaceArea));

  DEBUG_MSG("Adding wrapper for EInside G4Box::Inside(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: EInside G4Box::Inside(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:90:13
  t104.method("Inside", static_cast<EInside (G4Box::*)(const G4ThreeVector &)  const>(&G4Box::Inside));

  DEBUG_MSG("Adding wrapper for G4ThreeVector G4Box::SurfaceNormal(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4ThreeVector G4Box::SurfaceNormal(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:91:19
  t104.method("SurfaceNormal", static_cast<G4ThreeVector (G4Box::*)(const G4ThreeVector &)  const>(&G4Box::SurfaceNormal));

  DEBUG_MSG("Adding wrapper for G4double G4Box::DistanceToIn(const G4ThreeVector &, const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Box::DistanceToIn(const G4ThreeVector &, const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:92:14
  t104.method("DistanceToIn", static_cast<G4double (G4Box::*)(const G4ThreeVector &, const G4ThreeVector &)  const>(&G4Box::DistanceToIn));

  DEBUG_MSG("Adding wrapper for G4double G4Box::DistanceToIn(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Box::DistanceToIn(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:93:14
  t104.method("DistanceToIn", static_cast<G4double (G4Box::*)(const G4ThreeVector &)  const>(&G4Box::DistanceToIn));

  DEBUG_MSG("Adding wrapper for G4double G4Box::DistanceToOut(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Box::DistanceToOut(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:94:14
  t104.method("DistanceToOut", static_cast<G4double (G4Box::*)(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *)  const>(&G4Box::DistanceToOut));
  t104.method("DistanceToOut", [](G4Box const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1)->G4double{ return a.DistanceToOut(arg0, arg1); });
  t104.method("DistanceToOut", [](G4Box const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2)->G4double{ return a.DistanceToOut(arg0, arg1, arg2); });
  t104.method("DistanceToOut", [](G4Box const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2, G4bool * arg3)->G4double{ return a.DistanceToOut(arg0, arg1, arg2, arg3); });
  t104.method("DistanceToOut", [](G4Box const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1)->G4double{ return a->DistanceToOut(arg0, arg1); });
  t104.method("DistanceToOut", [](G4Box const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2)->G4double{ return a->DistanceToOut(arg0, arg1, arg2); });
  t104.method("DistanceToOut", [](G4Box const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2, G4bool * arg3)->G4double{ return a->DistanceToOut(arg0, arg1, arg2, arg3); });

  DEBUG_MSG("Adding wrapper for G4double G4Box::DistanceToOut(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Box::DistanceToOut(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:98:14
  t104.method("DistanceToOut", static_cast<G4double (G4Box::*)(const G4ThreeVector &)  const>(&G4Box::DistanceToOut));

  DEBUG_MSG("Adding wrapper for G4GeometryType G4Box::GetEntityType() (" __HERE__ ")");
  // signature to use in the veto list: G4GeometryType G4Box::GetEntityType()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:100:20
  t104.method("GetEntityType", static_cast<G4GeometryType (G4Box::*)()  const>(&G4Box::GetEntityType));

  DEBUG_MSG("Adding wrapper for G4ThreeVector G4Box::GetPointOnSurface() (" __HERE__ ")");
  // signature to use in the veto list: G4ThreeVector G4Box::GetPointOnSurface()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:101:19
  t104.method("GetPointOnSurface", static_cast<G4ThreeVector (G4Box::*)()  const>(&G4Box::GetPointOnSurface));

  DEBUG_MSG("Adding wrapper for G4VSolid * G4Box::Clone() (" __HERE__ ")");
  // signature to use in the veto list: G4VSolid * G4Box::Clone()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:103:15
  t104.method("Clone", static_cast<G4VSolid * (G4Box::*)()  const>(&G4Box::Clone));

  DEBUG_MSG("Adding wrapper for G4Polyhedron * G4Box::CreatePolyhedron() (" __HERE__ ")");
  // signature to use in the veto list: G4Polyhedron * G4Box::CreatePolyhedron()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:111:19
  t104.method("CreatePolyhedron", static_cast<G4Polyhedron * (G4Box::*)()  const>(&G4Box::CreatePolyhedron));


  DEBUG_MSG("Adding wrapper for void G4Box::G4Box(const G4Box &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:120:5
  t104.constructor<const G4Box &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for G4Box & G4Box::operator=(const G4Box &) (" __HERE__ ")");
  // signature to use in the veto list: G4Box & G4Box::operator=(const G4Box &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Box.hh:121:12
  t104.method("assign", static_cast<G4Box & (G4Box::*)(const G4Box &) >(&G4Box::operator=));

  /* End of G4Box class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4Cons
   */


  DEBUG_MSG("Adding wrapper for void G4Cons::G4Cons(const G4String &, G4double, G4double, G4double, G4double, G4double, G4double, G4double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:81:5
  t105.constructor<const G4String &, G4double, G4double, G4double, G4double, G4double, G4double, G4double>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for G4double G4Cons::GetInnerRadiusMinusZ() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Cons::GetInnerRadiusMinusZ()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:95:21
  t105.method("GetInnerRadiusMinusZ", static_cast<G4double (G4Cons::*)()  const>(&G4Cons::GetInnerRadiusMinusZ));

  DEBUG_MSG("Adding wrapper for G4double G4Cons::GetOuterRadiusMinusZ() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Cons::GetOuterRadiusMinusZ()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:96:21
  t105.method("GetOuterRadiusMinusZ", static_cast<G4double (G4Cons::*)()  const>(&G4Cons::GetOuterRadiusMinusZ));

  DEBUG_MSG("Adding wrapper for G4double G4Cons::GetInnerRadiusPlusZ() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Cons::GetInnerRadiusPlusZ()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:97:21
  t105.method("GetInnerRadiusPlusZ", static_cast<G4double (G4Cons::*)()  const>(&G4Cons::GetInnerRadiusPlusZ));

  DEBUG_MSG("Adding wrapper for G4double G4Cons::GetOuterRadiusPlusZ() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Cons::GetOuterRadiusPlusZ()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:98:21
  t105.method("GetOuterRadiusPlusZ", static_cast<G4double (G4Cons::*)()  const>(&G4Cons::GetOuterRadiusPlusZ));

  DEBUG_MSG("Adding wrapper for G4double G4Cons::GetZHalfLength() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Cons::GetZHalfLength()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:99:21
  t105.method("GetZHalfLength", static_cast<G4double (G4Cons::*)()  const>(&G4Cons::GetZHalfLength));

  DEBUG_MSG("Adding wrapper for G4double G4Cons::GetStartPhiAngle() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Cons::GetStartPhiAngle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:100:21
  t105.method("GetStartPhiAngle", static_cast<G4double (G4Cons::*)()  const>(&G4Cons::GetStartPhiAngle));

  DEBUG_MSG("Adding wrapper for G4double G4Cons::GetDeltaPhiAngle() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Cons::GetDeltaPhiAngle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:101:21
  t105.method("GetDeltaPhiAngle", static_cast<G4double (G4Cons::*)()  const>(&G4Cons::GetDeltaPhiAngle));

  DEBUG_MSG("Adding wrapper for G4double G4Cons::GetSinStartPhi() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Cons::GetSinStartPhi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:102:21
  t105.method("GetSinStartPhi", static_cast<G4double (G4Cons::*)()  const>(&G4Cons::GetSinStartPhi));

  DEBUG_MSG("Adding wrapper for G4double G4Cons::GetCosStartPhi() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Cons::GetCosStartPhi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:103:21
  t105.method("GetCosStartPhi", static_cast<G4double (G4Cons::*)()  const>(&G4Cons::GetCosStartPhi));

  DEBUG_MSG("Adding wrapper for G4double G4Cons::GetSinEndPhi() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Cons::GetSinEndPhi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:104:21
  t105.method("GetSinEndPhi", static_cast<G4double (G4Cons::*)()  const>(&G4Cons::GetSinEndPhi));

  DEBUG_MSG("Adding wrapper for G4double G4Cons::GetCosEndPhi() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Cons::GetCosEndPhi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:105:21
  t105.method("GetCosEndPhi", static_cast<G4double (G4Cons::*)()  const>(&G4Cons::GetCosEndPhi));

  DEBUG_MSG("Adding wrapper for void G4Cons::SetInnerRadiusMinusZ(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Cons::SetInnerRadiusMinusZ(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:109:17
  t105.method("SetInnerRadiusMinusZ", static_cast<void (G4Cons::*)(G4double) >(&G4Cons::SetInnerRadiusMinusZ));

  DEBUG_MSG("Adding wrapper for void G4Cons::SetOuterRadiusMinusZ(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Cons::SetOuterRadiusMinusZ(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:110:17
  t105.method("SetOuterRadiusMinusZ", static_cast<void (G4Cons::*)(G4double) >(&G4Cons::SetOuterRadiusMinusZ));

  DEBUG_MSG("Adding wrapper for void G4Cons::SetInnerRadiusPlusZ(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Cons::SetInnerRadiusPlusZ(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:111:17
  t105.method("SetInnerRadiusPlusZ", static_cast<void (G4Cons::*)(G4double) >(&G4Cons::SetInnerRadiusPlusZ));

  DEBUG_MSG("Adding wrapper for void G4Cons::SetOuterRadiusPlusZ(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Cons::SetOuterRadiusPlusZ(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:112:17
  t105.method("SetOuterRadiusPlusZ", static_cast<void (G4Cons::*)(G4double) >(&G4Cons::SetOuterRadiusPlusZ));

  DEBUG_MSG("Adding wrapper for void G4Cons::SetZHalfLength(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Cons::SetZHalfLength(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:113:17
  t105.method("SetZHalfLength", static_cast<void (G4Cons::*)(G4double) >(&G4Cons::SetZHalfLength));

  DEBUG_MSG("Adding wrapper for void G4Cons::SetStartPhiAngle(G4double, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4Cons::SetStartPhiAngle(G4double, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:114:17
  t105.method("SetStartPhiAngle", static_cast<void (G4Cons::*)(G4double, G4bool) >(&G4Cons::SetStartPhiAngle));
  t105.method("SetStartPhiAngle", [](G4Cons& a, G4double arg0)->void{ a.SetStartPhiAngle(arg0); });
  t105.method("SetStartPhiAngle", [](G4Cons* a, G4double arg0)->void{ a->SetStartPhiAngle(arg0); });

  DEBUG_MSG("Adding wrapper for void G4Cons::SetDeltaPhiAngle(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Cons::SetDeltaPhiAngle(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:115:17
  t105.method("SetDeltaPhiAngle", static_cast<void (G4Cons::*)(G4double) >(&G4Cons::SetDeltaPhiAngle));

  DEBUG_MSG("Adding wrapper for G4double G4Cons::GetCubicVolume() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Cons::GetCubicVolume()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:119:21
  t105.method("GetCubicVolume", static_cast<G4double (G4Cons::*)() >(&G4Cons::GetCubicVolume));

  DEBUG_MSG("Adding wrapper for G4double G4Cons::GetSurfaceArea() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Cons::GetSurfaceArea()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:120:21
  t105.method("GetSurfaceArea", static_cast<G4double (G4Cons::*)() >(&G4Cons::GetSurfaceArea));

  DEBUG_MSG("Adding wrapper for void G4Cons::ComputeDimensions(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *) (" __HERE__ ")");
  // signature to use in the veto list: void G4Cons::ComputeDimensions(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:122:10
  t105.method("ComputeDimensions", static_cast<void (G4Cons::*)(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *) >(&G4Cons::ComputeDimensions));

  DEBUG_MSG("Adding wrapper for void G4Cons::BoundingLimits(G4ThreeVector &, G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: void G4Cons::BoundingLimits(G4ThreeVector &, G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:126:10
  t105.method("BoundingLimits", static_cast<void (G4Cons::*)(G4ThreeVector &, G4ThreeVector &)  const>(&G4Cons::BoundingLimits));

  DEBUG_MSG("Adding wrapper for EInside G4Cons::Inside(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: EInside G4Cons::Inside(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:133:13
  t105.method("Inside", static_cast<EInside (G4Cons::*)(const G4ThreeVector &)  const>(&G4Cons::Inside));

  DEBUG_MSG("Adding wrapper for G4ThreeVector G4Cons::SurfaceNormal(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4ThreeVector G4Cons::SurfaceNormal(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:135:19
  t105.method("SurfaceNormal", static_cast<G4ThreeVector (G4Cons::*)(const G4ThreeVector &)  const>(&G4Cons::SurfaceNormal));

  DEBUG_MSG("Adding wrapper for G4double G4Cons::DistanceToIn(const G4ThreeVector &, const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Cons::DistanceToIn(const G4ThreeVector &, const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:137:14
  t105.method("DistanceToIn", static_cast<G4double (G4Cons::*)(const G4ThreeVector &, const G4ThreeVector &)  const>(&G4Cons::DistanceToIn));

  DEBUG_MSG("Adding wrapper for G4double G4Cons::DistanceToIn(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Cons::DistanceToIn(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:139:14
  t105.method("DistanceToIn", static_cast<G4double (G4Cons::*)(const G4ThreeVector &)  const>(&G4Cons::DistanceToIn));

  DEBUG_MSG("Adding wrapper for G4double G4Cons::DistanceToOut(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Cons::DistanceToOut(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:140:14
  t105.method("DistanceToOut", static_cast<G4double (G4Cons::*)(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *)  const>(&G4Cons::DistanceToOut));
  t105.method("DistanceToOut", [](G4Cons const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1)->G4double{ return a.DistanceToOut(arg0, arg1); });
  t105.method("DistanceToOut", [](G4Cons const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2)->G4double{ return a.DistanceToOut(arg0, arg1, arg2); });
  t105.method("DistanceToOut", [](G4Cons const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2, G4bool * arg3)->G4double{ return a.DistanceToOut(arg0, arg1, arg2, arg3); });
  t105.method("DistanceToOut", [](G4Cons const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1)->G4double{ return a->DistanceToOut(arg0, arg1); });
  t105.method("DistanceToOut", [](G4Cons const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2)->G4double{ return a->DistanceToOut(arg0, arg1, arg2); });
  t105.method("DistanceToOut", [](G4Cons const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2, G4bool * arg3)->G4double{ return a->DistanceToOut(arg0, arg1, arg2, arg3); });

  DEBUG_MSG("Adding wrapper for G4double G4Cons::DistanceToOut(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Cons::DistanceToOut(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:145:14
  t105.method("DistanceToOut", static_cast<G4double (G4Cons::*)(const G4ThreeVector &)  const>(&G4Cons::DistanceToOut));

  DEBUG_MSG("Adding wrapper for G4GeometryType G4Cons::GetEntityType() (" __HERE__ ")");
  // signature to use in the veto list: G4GeometryType G4Cons::GetEntityType()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:147:20
  t105.method("GetEntityType", static_cast<G4GeometryType (G4Cons::*)()  const>(&G4Cons::GetEntityType));

  DEBUG_MSG("Adding wrapper for G4ThreeVector G4Cons::GetPointOnSurface() (" __HERE__ ")");
  // signature to use in the veto list: G4ThreeVector G4Cons::GetPointOnSurface()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:149:19
  t105.method("GetPointOnSurface", static_cast<G4ThreeVector (G4Cons::*)()  const>(&G4Cons::GetPointOnSurface));

  DEBUG_MSG("Adding wrapper for G4VSolid * G4Cons::Clone() (" __HERE__ ")");
  // signature to use in the veto list: G4VSolid * G4Cons::Clone()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:151:15
  t105.method("Clone", static_cast<G4VSolid * (G4Cons::*)()  const>(&G4Cons::Clone));

  DEBUG_MSG("Adding wrapper for G4Polyhedron * G4Cons::CreatePolyhedron() (" __HERE__ ")");
  // signature to use in the veto list: G4Polyhedron * G4Cons::CreatePolyhedron()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:158:19
  t105.method("CreatePolyhedron", static_cast<G4Polyhedron * (G4Cons::*)()  const>(&G4Cons::CreatePolyhedron));


  DEBUG_MSG("Adding wrapper for void G4Cons::G4Cons(const G4Cons &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:168:5
  t105.constructor<const G4Cons &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for G4Cons & G4Cons::operator=(const G4Cons &) (" __HERE__ ")");
  // signature to use in the veto list: G4Cons & G4Cons::operator=(const G4Cons &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Cons.hh:169:13
  t105.method("assign", static_cast<G4Cons & (G4Cons::*)(const G4Cons &) >(&G4Cons::operator=));

  /* End of G4Cons class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4Tubs
   */


  DEBUG_MSG("Adding wrapper for void G4Tubs::G4Tubs(const G4String &, G4double, G4double, G4double, G4double, G4double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:78:5
  t106.constructor<const G4String &, G4double, G4double, G4double, G4double, G4double>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for G4double G4Tubs::GetInnerRadius() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Tubs::GetInnerRadius()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:93:21
  t106.method("GetInnerRadius", static_cast<G4double (G4Tubs::*)()  const>(&G4Tubs::GetInnerRadius));

  DEBUG_MSG("Adding wrapper for G4double G4Tubs::GetOuterRadius() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Tubs::GetOuterRadius()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:94:21
  t106.method("GetOuterRadius", static_cast<G4double (G4Tubs::*)()  const>(&G4Tubs::GetOuterRadius));

  DEBUG_MSG("Adding wrapper for G4double G4Tubs::GetZHalfLength() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Tubs::GetZHalfLength()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:95:21
  t106.method("GetZHalfLength", static_cast<G4double (G4Tubs::*)()  const>(&G4Tubs::GetZHalfLength));

  DEBUG_MSG("Adding wrapper for G4double G4Tubs::GetStartPhiAngle() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Tubs::GetStartPhiAngle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:96:21
  t106.method("GetStartPhiAngle", static_cast<G4double (G4Tubs::*)()  const>(&G4Tubs::GetStartPhiAngle));

  DEBUG_MSG("Adding wrapper for G4double G4Tubs::GetDeltaPhiAngle() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Tubs::GetDeltaPhiAngle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:97:21
  t106.method("GetDeltaPhiAngle", static_cast<G4double (G4Tubs::*)()  const>(&G4Tubs::GetDeltaPhiAngle));

  DEBUG_MSG("Adding wrapper for G4double G4Tubs::GetSinStartPhi() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Tubs::GetSinStartPhi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:98:21
  t106.method("GetSinStartPhi", static_cast<G4double (G4Tubs::*)()  const>(&G4Tubs::GetSinStartPhi));

  DEBUG_MSG("Adding wrapper for G4double G4Tubs::GetCosStartPhi() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Tubs::GetCosStartPhi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:99:21
  t106.method("GetCosStartPhi", static_cast<G4double (G4Tubs::*)()  const>(&G4Tubs::GetCosStartPhi));

  DEBUG_MSG("Adding wrapper for G4double G4Tubs::GetSinEndPhi() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Tubs::GetSinEndPhi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:100:21
  t106.method("GetSinEndPhi", static_cast<G4double (G4Tubs::*)()  const>(&G4Tubs::GetSinEndPhi));

  DEBUG_MSG("Adding wrapper for G4double G4Tubs::GetCosEndPhi() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Tubs::GetCosEndPhi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:101:21
  t106.method("GetCosEndPhi", static_cast<G4double (G4Tubs::*)()  const>(&G4Tubs::GetCosEndPhi));

  DEBUG_MSG("Adding wrapper for void G4Tubs::SetInnerRadius(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Tubs::SetInnerRadius(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:105:17
  t106.method("SetInnerRadius", static_cast<void (G4Tubs::*)(G4double) >(&G4Tubs::SetInnerRadius));

  DEBUG_MSG("Adding wrapper for void G4Tubs::SetOuterRadius(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Tubs::SetOuterRadius(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:106:17
  t106.method("SetOuterRadius", static_cast<void (G4Tubs::*)(G4double) >(&G4Tubs::SetOuterRadius));

  DEBUG_MSG("Adding wrapper for void G4Tubs::SetZHalfLength(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Tubs::SetZHalfLength(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:107:17
  t106.method("SetZHalfLength", static_cast<void (G4Tubs::*)(G4double) >(&G4Tubs::SetZHalfLength));

  DEBUG_MSG("Adding wrapper for void G4Tubs::SetStartPhiAngle(G4double, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4Tubs::SetStartPhiAngle(G4double, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:108:17
  t106.method("SetStartPhiAngle", static_cast<void (G4Tubs::*)(G4double, G4bool) >(&G4Tubs::SetStartPhiAngle));
  t106.method("SetStartPhiAngle", [](G4Tubs& a, G4double arg0)->void{ a.SetStartPhiAngle(arg0); });
  t106.method("SetStartPhiAngle", [](G4Tubs* a, G4double arg0)->void{ a->SetStartPhiAngle(arg0); });

  DEBUG_MSG("Adding wrapper for void G4Tubs::SetDeltaPhiAngle(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Tubs::SetDeltaPhiAngle(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:109:17
  t106.method("SetDeltaPhiAngle", static_cast<void (G4Tubs::*)(G4double) >(&G4Tubs::SetDeltaPhiAngle));

  DEBUG_MSG("Adding wrapper for G4double G4Tubs::GetCubicVolume() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Tubs::GetCubicVolume()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:113:21
  t106.method("GetCubicVolume", static_cast<G4double (G4Tubs::*)() >(&G4Tubs::GetCubicVolume));

  DEBUG_MSG("Adding wrapper for G4double G4Tubs::GetSurfaceArea() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Tubs::GetSurfaceArea()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:114:21
  t106.method("GetSurfaceArea", static_cast<G4double (G4Tubs::*)() >(&G4Tubs::GetSurfaceArea));

  DEBUG_MSG("Adding wrapper for void G4Tubs::ComputeDimensions(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *) (" __HERE__ ")");
  // signature to use in the veto list: void G4Tubs::ComputeDimensions(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:116:10
  t106.method("ComputeDimensions", static_cast<void (G4Tubs::*)(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *) >(&G4Tubs::ComputeDimensions));

  DEBUG_MSG("Adding wrapper for void G4Tubs::BoundingLimits(G4ThreeVector &, G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: void G4Tubs::BoundingLimits(G4ThreeVector &, G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:120:10
  t106.method("BoundingLimits", static_cast<void (G4Tubs::*)(G4ThreeVector &, G4ThreeVector &)  const>(&G4Tubs::BoundingLimits));

  DEBUG_MSG("Adding wrapper for EInside G4Tubs::Inside(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: EInside G4Tubs::Inside(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:127:13
  t106.method("Inside", static_cast<EInside (G4Tubs::*)(const G4ThreeVector &)  const>(&G4Tubs::Inside));

  DEBUG_MSG("Adding wrapper for G4ThreeVector G4Tubs::SurfaceNormal(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4ThreeVector G4Tubs::SurfaceNormal(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:129:19
  t106.method("SurfaceNormal", static_cast<G4ThreeVector (G4Tubs::*)(const G4ThreeVector &)  const>(&G4Tubs::SurfaceNormal));

  DEBUG_MSG("Adding wrapper for G4double G4Tubs::DistanceToIn(const G4ThreeVector &, const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Tubs::DistanceToIn(const G4ThreeVector &, const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:131:14
  t106.method("DistanceToIn", static_cast<G4double (G4Tubs::*)(const G4ThreeVector &, const G4ThreeVector &)  const>(&G4Tubs::DistanceToIn));

  DEBUG_MSG("Adding wrapper for G4double G4Tubs::DistanceToIn(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Tubs::DistanceToIn(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:132:14
  t106.method("DistanceToIn", static_cast<G4double (G4Tubs::*)(const G4ThreeVector &)  const>(&G4Tubs::DistanceToIn));

  DEBUG_MSG("Adding wrapper for G4double G4Tubs::DistanceToOut(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Tubs::DistanceToOut(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:133:14
  t106.method("DistanceToOut", static_cast<G4double (G4Tubs::*)(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *)  const>(&G4Tubs::DistanceToOut));
  t106.method("DistanceToOut", [](G4Tubs const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1)->G4double{ return a.DistanceToOut(arg0, arg1); });
  t106.method("DistanceToOut", [](G4Tubs const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2)->G4double{ return a.DistanceToOut(arg0, arg1, arg2); });
  t106.method("DistanceToOut", [](G4Tubs const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2, G4bool * arg3)->G4double{ return a.DistanceToOut(arg0, arg1, arg2, arg3); });
  t106.method("DistanceToOut", [](G4Tubs const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1)->G4double{ return a->DistanceToOut(arg0, arg1); });
  t106.method("DistanceToOut", [](G4Tubs const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2)->G4double{ return a->DistanceToOut(arg0, arg1, arg2); });
  t106.method("DistanceToOut", [](G4Tubs const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2, G4bool * arg3)->G4double{ return a->DistanceToOut(arg0, arg1, arg2, arg3); });

  DEBUG_MSG("Adding wrapper for G4double G4Tubs::DistanceToOut(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Tubs::DistanceToOut(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:137:14
  t106.method("DistanceToOut", static_cast<G4double (G4Tubs::*)(const G4ThreeVector &)  const>(&G4Tubs::DistanceToOut));

  DEBUG_MSG("Adding wrapper for G4GeometryType G4Tubs::GetEntityType() (" __HERE__ ")");
  // signature to use in the veto list: G4GeometryType G4Tubs::GetEntityType()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:139:20
  t106.method("GetEntityType", static_cast<G4GeometryType (G4Tubs::*)()  const>(&G4Tubs::GetEntityType));

  DEBUG_MSG("Adding wrapper for G4ThreeVector G4Tubs::GetPointOnSurface() (" __HERE__ ")");
  // signature to use in the veto list: G4ThreeVector G4Tubs::GetPointOnSurface()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:141:19
  t106.method("GetPointOnSurface", static_cast<G4ThreeVector (G4Tubs::*)()  const>(&G4Tubs::GetPointOnSurface));

  DEBUG_MSG("Adding wrapper for G4VSolid * G4Tubs::Clone() (" __HERE__ ")");
  // signature to use in the veto list: G4VSolid * G4Tubs::Clone()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:143:15
  t106.method("Clone", static_cast<G4VSolid * (G4Tubs::*)()  const>(&G4Tubs::Clone));

  DEBUG_MSG("Adding wrapper for G4Polyhedron * G4Tubs::CreatePolyhedron() (" __HERE__ ")");
  // signature to use in the veto list: G4Polyhedron * G4Tubs::CreatePolyhedron()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:150:25
  t106.method("CreatePolyhedron", static_cast<G4Polyhedron * (G4Tubs::*)()  const>(&G4Tubs::CreatePolyhedron));


  DEBUG_MSG("Adding wrapper for void G4Tubs::G4Tubs(const G4Tubs &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:160:5
  t106.constructor<const G4Tubs &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for G4Tubs & G4Tubs::operator=(const G4Tubs &) (" __HERE__ ")");
  // signature to use in the veto list: G4Tubs & G4Tubs::operator=(const G4Tubs &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Tubs.hh:161:13
  t106.method("assign", static_cast<G4Tubs & (G4Tubs::*)(const G4Tubs &) >(&G4Tubs::operator=));

  /* End of G4Tubs class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4Orb
   */


  DEBUG_MSG("Adding wrapper for void G4Orb::G4Orb(const G4String &, G4double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:59:5
  t107.constructor<const G4String &, G4double>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for G4double G4Orb::GetRadius() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Orb::GetRadius()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:65:21
  t107.method("GetRadius", static_cast<G4double (G4Orb::*)()  const>(&G4Orb::GetRadius));

  DEBUG_MSG("Adding wrapper for G4double G4Orb::GetRadialTolerance() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Orb::GetRadialTolerance()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:66:21
  t107.method("GetRadialTolerance", static_cast<G4double (G4Orb::*)()  const>(&G4Orb::GetRadialTolerance));

  DEBUG_MSG("Adding wrapper for void G4Orb::SetRadius(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Orb::SetRadius(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:68:17
  t107.method("SetRadius", static_cast<void (G4Orb::*)(G4double) >(&G4Orb::SetRadius));

  DEBUG_MSG("Adding wrapper for G4double G4Orb::GetCubicVolume() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Orb::GetCubicVolume()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:72:21
  t107.method("GetCubicVolume", static_cast<G4double (G4Orb::*)() >(&G4Orb::GetCubicVolume));

  DEBUG_MSG("Adding wrapper for G4double G4Orb::GetSurfaceArea() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Orb::GetSurfaceArea()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:73:21
  t107.method("GetSurfaceArea", static_cast<G4double (G4Orb::*)() >(&G4Orb::GetSurfaceArea));

  DEBUG_MSG("Adding wrapper for void G4Orb::ComputeDimensions(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *) (" __HERE__ ")");
  // signature to use in the veto list: void G4Orb::ComputeDimensions(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:75:10
  t107.method("ComputeDimensions", static_cast<void (G4Orb::*)(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *) >(&G4Orb::ComputeDimensions));

  DEBUG_MSG("Adding wrapper for void G4Orb::BoundingLimits(G4ThreeVector &, G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: void G4Orb::BoundingLimits(G4ThreeVector &, G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:79:10
  t107.method("BoundingLimits", static_cast<void (G4Orb::*)(G4ThreeVector &, G4ThreeVector &)  const>(&G4Orb::BoundingLimits));

  DEBUG_MSG("Adding wrapper for EInside G4Orb::Inside(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: EInside G4Orb::Inside(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:86:13
  t107.method("Inside", static_cast<EInside (G4Orb::*)(const G4ThreeVector &)  const>(&G4Orb::Inside));

  DEBUG_MSG("Adding wrapper for G4ThreeVector G4Orb::SurfaceNormal(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4ThreeVector G4Orb::SurfaceNormal(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:88:19
  t107.method("SurfaceNormal", static_cast<G4ThreeVector (G4Orb::*)(const G4ThreeVector &)  const>(&G4Orb::SurfaceNormal));

  DEBUG_MSG("Adding wrapper for G4double G4Orb::DistanceToIn(const G4ThreeVector &, const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Orb::DistanceToIn(const G4ThreeVector &, const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:90:14
  t107.method("DistanceToIn", static_cast<G4double (G4Orb::*)(const G4ThreeVector &, const G4ThreeVector &)  const>(&G4Orb::DistanceToIn));

  DEBUG_MSG("Adding wrapper for G4double G4Orb::DistanceToIn(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Orb::DistanceToIn(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:93:14
  t107.method("DistanceToIn", static_cast<G4double (G4Orb::*)(const G4ThreeVector &)  const>(&G4Orb::DistanceToIn));

  DEBUG_MSG("Adding wrapper for G4double G4Orb::DistanceToOut(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Orb::DistanceToOut(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:95:14
  t107.method("DistanceToOut", static_cast<G4double (G4Orb::*)(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *)  const>(&G4Orb::DistanceToOut));
  t107.method("DistanceToOut", [](G4Orb const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1)->G4double{ return a.DistanceToOut(arg0, arg1); });
  t107.method("DistanceToOut", [](G4Orb const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2)->G4double{ return a.DistanceToOut(arg0, arg1, arg2); });
  t107.method("DistanceToOut", [](G4Orb const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2, G4bool * arg3)->G4double{ return a.DistanceToOut(arg0, arg1, arg2, arg3); });
  t107.method("DistanceToOut", [](G4Orb const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1)->G4double{ return a->DistanceToOut(arg0, arg1); });
  t107.method("DistanceToOut", [](G4Orb const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2)->G4double{ return a->DistanceToOut(arg0, arg1, arg2); });
  t107.method("DistanceToOut", [](G4Orb const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2, G4bool * arg3)->G4double{ return a->DistanceToOut(arg0, arg1, arg2, arg3); });

  DEBUG_MSG("Adding wrapper for G4double G4Orb::DistanceToOut(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Orb::DistanceToOut(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:101:14
  t107.method("DistanceToOut", static_cast<G4double (G4Orb::*)(const G4ThreeVector &)  const>(&G4Orb::DistanceToOut));

  DEBUG_MSG("Adding wrapper for G4GeometryType G4Orb::GetEntityType() (" __HERE__ ")");
  // signature to use in the veto list: G4GeometryType G4Orb::GetEntityType()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:103:20
  t107.method("GetEntityType", static_cast<G4GeometryType (G4Orb::*)()  const>(&G4Orb::GetEntityType));

  DEBUG_MSG("Adding wrapper for G4ThreeVector G4Orb::GetPointOnSurface() (" __HERE__ ")");
  // signature to use in the veto list: G4ThreeVector G4Orb::GetPointOnSurface()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:105:19
  t107.method("GetPointOnSurface", static_cast<G4ThreeVector (G4Orb::*)()  const>(&G4Orb::GetPointOnSurface));

  DEBUG_MSG("Adding wrapper for G4VSolid * G4Orb::Clone() (" __HERE__ ")");
  // signature to use in the veto list: G4VSolid * G4Orb::Clone()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:107:15
  t107.method("Clone", static_cast<G4VSolid * (G4Orb::*)()  const>(&G4Orb::Clone));

  DEBUG_MSG("Adding wrapper for G4Polyhedron * G4Orb::CreatePolyhedron() (" __HERE__ ")");
  // signature to use in the veto list: G4Polyhedron * G4Orb::CreatePolyhedron()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:115:19
  t107.method("CreatePolyhedron", static_cast<G4Polyhedron * (G4Orb::*)()  const>(&G4Orb::CreatePolyhedron));


  DEBUG_MSG("Adding wrapper for void G4Orb::G4Orb(const G4Orb &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:124:5
  t107.constructor<const G4Orb &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for G4Orb & G4Orb::operator=(const G4Orb &) (" __HERE__ ")");
  // signature to use in the veto list: G4Orb & G4Orb::operator=(const G4Orb &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Orb.hh:125:12
  t107.method("assign", static_cast<G4Orb & (G4Orb::*)(const G4Orb &) >(&G4Orb::operator=));

  /* End of G4Orb class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4Sphere
   */


  DEBUG_MSG("Adding wrapper for void G4Sphere::G4Sphere(const G4String &, G4double, G4double, G4double, G4double, G4double, G4double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:84:5
  t108.constructor<const G4String &, G4double, G4double, G4double, G4double, G4double, G4double>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::GetInnerRadius() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::GetInnerRadius()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:98:21
  t108.method("GetInnerRadius", static_cast<G4double (G4Sphere::*)()  const>(&G4Sphere::GetInnerRadius));

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::GetOuterRadius() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::GetOuterRadius()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:99:21
  t108.method("GetOuterRadius", static_cast<G4double (G4Sphere::*)()  const>(&G4Sphere::GetOuterRadius));

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::GetStartPhiAngle() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::GetStartPhiAngle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:100:21
  t108.method("GetStartPhiAngle", static_cast<G4double (G4Sphere::*)()  const>(&G4Sphere::GetStartPhiAngle));

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::GetDeltaPhiAngle() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::GetDeltaPhiAngle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:101:21
  t108.method("GetDeltaPhiAngle", static_cast<G4double (G4Sphere::*)()  const>(&G4Sphere::GetDeltaPhiAngle));

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::GetStartThetaAngle() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::GetStartThetaAngle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:102:21
  t108.method("GetStartThetaAngle", static_cast<G4double (G4Sphere::*)()  const>(&G4Sphere::GetStartThetaAngle));

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::GetDeltaThetaAngle() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::GetDeltaThetaAngle()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:103:21
  t108.method("GetDeltaThetaAngle", static_cast<G4double (G4Sphere::*)()  const>(&G4Sphere::GetDeltaThetaAngle));

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::GetSinStartPhi() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::GetSinStartPhi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:104:21
  t108.method("GetSinStartPhi", static_cast<G4double (G4Sphere::*)()  const>(&G4Sphere::GetSinStartPhi));

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::GetCosStartPhi() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::GetCosStartPhi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:105:21
  t108.method("GetCosStartPhi", static_cast<G4double (G4Sphere::*)()  const>(&G4Sphere::GetCosStartPhi));

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::GetSinEndPhi() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::GetSinEndPhi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:106:21
  t108.method("GetSinEndPhi", static_cast<G4double (G4Sphere::*)()  const>(&G4Sphere::GetSinEndPhi));

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::GetCosEndPhi() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::GetCosEndPhi()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:107:21
  t108.method("GetCosEndPhi", static_cast<G4double (G4Sphere::*)()  const>(&G4Sphere::GetCosEndPhi));

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::GetSinStartTheta() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::GetSinStartTheta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:108:21
  t108.method("GetSinStartTheta", static_cast<G4double (G4Sphere::*)()  const>(&G4Sphere::GetSinStartTheta));

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::GetCosStartTheta() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::GetCosStartTheta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:109:21
  t108.method("GetCosStartTheta", static_cast<G4double (G4Sphere::*)()  const>(&G4Sphere::GetCosStartTheta));

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::GetSinEndTheta() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::GetSinEndTheta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:110:21
  t108.method("GetSinEndTheta", static_cast<G4double (G4Sphere::*)()  const>(&G4Sphere::GetSinEndTheta));

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::GetCosEndTheta() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::GetCosEndTheta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:111:21
  t108.method("GetCosEndTheta", static_cast<G4double (G4Sphere::*)()  const>(&G4Sphere::GetCosEndTheta));

  DEBUG_MSG("Adding wrapper for void G4Sphere::SetInnerRadius(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Sphere::SetInnerRadius(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:115:17
  t108.method("SetInnerRadius", static_cast<void (G4Sphere::*)(G4double) >(&G4Sphere::SetInnerRadius));

  DEBUG_MSG("Adding wrapper for void G4Sphere::SetOuterRadius(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Sphere::SetOuterRadius(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:116:17
  t108.method("SetOuterRadius", static_cast<void (G4Sphere::*)(G4double) >(&G4Sphere::SetOuterRadius));

  DEBUG_MSG("Adding wrapper for void G4Sphere::SetStartPhiAngle(G4double, G4bool) (" __HERE__ ")");
  // signature to use in the veto list: void G4Sphere::SetStartPhiAngle(G4double, G4bool)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:117:17
  t108.method("SetStartPhiAngle", static_cast<void (G4Sphere::*)(G4double, G4bool) >(&G4Sphere::SetStartPhiAngle));
  t108.method("SetStartPhiAngle", [](G4Sphere& a, G4double arg0)->void{ a.SetStartPhiAngle(arg0); });
  t108.method("SetStartPhiAngle", [](G4Sphere* a, G4double arg0)->void{ a->SetStartPhiAngle(arg0); });

  DEBUG_MSG("Adding wrapper for void G4Sphere::SetDeltaPhiAngle(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Sphere::SetDeltaPhiAngle(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:118:17
  t108.method("SetDeltaPhiAngle", static_cast<void (G4Sphere::*)(G4double) >(&G4Sphere::SetDeltaPhiAngle));

  DEBUG_MSG("Adding wrapper for void G4Sphere::SetStartThetaAngle(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Sphere::SetStartThetaAngle(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:119:17
  t108.method("SetStartThetaAngle", static_cast<void (G4Sphere::*)(G4double) >(&G4Sphere::SetStartThetaAngle));

  DEBUG_MSG("Adding wrapper for void G4Sphere::SetDeltaThetaAngle(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Sphere::SetDeltaThetaAngle(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:120:17
  t108.method("SetDeltaThetaAngle", static_cast<void (G4Sphere::*)(G4double) >(&G4Sphere::SetDeltaThetaAngle));

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::GetCubicVolume() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::GetCubicVolume()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:124:14
  t108.method("GetCubicVolume", static_cast<G4double (G4Sphere::*)() >(&G4Sphere::GetCubicVolume));

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::GetSurfaceArea() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::GetSurfaceArea()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:125:14
  t108.method("GetSurfaceArea", static_cast<G4double (G4Sphere::*)() >(&G4Sphere::GetSurfaceArea));

  DEBUG_MSG("Adding wrapper for void G4Sphere::ComputeDimensions(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *) (" __HERE__ ")");
  // signature to use in the veto list: void G4Sphere::ComputeDimensions(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:127:10
  t108.method("ComputeDimensions", static_cast<void (G4Sphere::*)(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *) >(&G4Sphere::ComputeDimensions));

  DEBUG_MSG("Adding wrapper for void G4Sphere::BoundingLimits(G4ThreeVector &, G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: void G4Sphere::BoundingLimits(G4ThreeVector &, G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:131:10
  t108.method("BoundingLimits", static_cast<void (G4Sphere::*)(G4ThreeVector &, G4ThreeVector &)  const>(&G4Sphere::BoundingLimits));

  DEBUG_MSG("Adding wrapper for EInside G4Sphere::Inside(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: EInside G4Sphere::Inside(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:138:13
  t108.method("Inside", static_cast<EInside (G4Sphere::*)(const G4ThreeVector &)  const>(&G4Sphere::Inside));

  DEBUG_MSG("Adding wrapper for G4ThreeVector G4Sphere::SurfaceNormal(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4ThreeVector G4Sphere::SurfaceNormal(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:140:19
  t108.method("SurfaceNormal", static_cast<G4ThreeVector (G4Sphere::*)(const G4ThreeVector &)  const>(&G4Sphere::SurfaceNormal));

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::DistanceToIn(const G4ThreeVector &, const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::DistanceToIn(const G4ThreeVector &, const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:142:14
  t108.method("DistanceToIn", static_cast<G4double (G4Sphere::*)(const G4ThreeVector &, const G4ThreeVector &)  const>(&G4Sphere::DistanceToIn));

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::DistanceToIn(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::DistanceToIn(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:145:14
  t108.method("DistanceToIn", static_cast<G4double (G4Sphere::*)(const G4ThreeVector &)  const>(&G4Sphere::DistanceToIn));

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::DistanceToOut(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::DistanceToOut(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:147:14
  t108.method("DistanceToOut", static_cast<G4double (G4Sphere::*)(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *)  const>(&G4Sphere::DistanceToOut));
  t108.method("DistanceToOut", [](G4Sphere const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1)->G4double{ return a.DistanceToOut(arg0, arg1); });
  t108.method("DistanceToOut", [](G4Sphere const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2)->G4double{ return a.DistanceToOut(arg0, arg1, arg2); });
  t108.method("DistanceToOut", [](G4Sphere const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2, G4bool * arg3)->G4double{ return a.DistanceToOut(arg0, arg1, arg2, arg3); });
  t108.method("DistanceToOut", [](G4Sphere const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1)->G4double{ return a->DistanceToOut(arg0, arg1); });
  t108.method("DistanceToOut", [](G4Sphere const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2)->G4double{ return a->DistanceToOut(arg0, arg1, arg2); });
  t108.method("DistanceToOut", [](G4Sphere const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2, G4bool * arg3)->G4double{ return a->DistanceToOut(arg0, arg1, arg2, arg3); });

  DEBUG_MSG("Adding wrapper for G4double G4Sphere::DistanceToOut(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Sphere::DistanceToOut(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:153:14
  t108.method("DistanceToOut", static_cast<G4double (G4Sphere::*)(const G4ThreeVector &)  const>(&G4Sphere::DistanceToOut));

  DEBUG_MSG("Adding wrapper for G4GeometryType G4Sphere::GetEntityType() (" __HERE__ ")");
  // signature to use in the veto list: G4GeometryType G4Sphere::GetEntityType()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:155:20
  t108.method("GetEntityType", static_cast<G4GeometryType (G4Sphere::*)()  const>(&G4Sphere::GetEntityType));

  DEBUG_MSG("Adding wrapper for G4ThreeVector G4Sphere::GetPointOnSurface() (" __HERE__ ")");
  // signature to use in the veto list: G4ThreeVector G4Sphere::GetPointOnSurface()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:157:19
  t108.method("GetPointOnSurface", static_cast<G4ThreeVector (G4Sphere::*)()  const>(&G4Sphere::GetPointOnSurface));

  DEBUG_MSG("Adding wrapper for G4VSolid * G4Sphere::Clone() (" __HERE__ ")");
  // signature to use in the veto list: G4VSolid * G4Sphere::Clone()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:159:15
  t108.method("Clone", static_cast<G4VSolid * (G4Sphere::*)()  const>(&G4Sphere::Clone));

  DEBUG_MSG("Adding wrapper for G4Polyhedron * G4Sphere::CreatePolyhedron() (" __HERE__ ")");
  // signature to use in the veto list: G4Polyhedron * G4Sphere::CreatePolyhedron()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:167:19
  t108.method("CreatePolyhedron", static_cast<G4Polyhedron * (G4Sphere::*)()  const>(&G4Sphere::CreatePolyhedron));


  DEBUG_MSG("Adding wrapper for void G4Sphere::G4Sphere(const G4Sphere &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:177:5
  t108.constructor<const G4Sphere &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for G4Sphere & G4Sphere::operator=(const G4Sphere &) (" __HERE__ ")");
  // signature to use in the veto list: G4Sphere & G4Sphere::operator=(const G4Sphere &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Sphere.hh:178:15
  t108.method("assign", static_cast<G4Sphere & (G4Sphere::*)(const G4Sphere &) >(&G4Sphere::operator=));

  /* End of G4Sphere class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4Trd
   */


  DEBUG_MSG("Adding wrapper for void G4Trd::G4Trd(const G4String &, G4double, G4double, G4double, G4double, G4double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:66:5
  t109.constructor<const G4String &, G4double, G4double, G4double, G4double, G4double>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for G4double G4Trd::GetXHalfLength1() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Trd::GetXHalfLength1()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:79:21
  t109.method("GetXHalfLength1", static_cast<G4double (G4Trd::*)()  const>(&G4Trd::GetXHalfLength1));

  DEBUG_MSG("Adding wrapper for G4double G4Trd::GetXHalfLength2() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Trd::GetXHalfLength2()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:80:21
  t109.method("GetXHalfLength2", static_cast<G4double (G4Trd::*)()  const>(&G4Trd::GetXHalfLength2));

  DEBUG_MSG("Adding wrapper for G4double G4Trd::GetYHalfLength1() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Trd::GetYHalfLength1()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:81:21
  t109.method("GetYHalfLength1", static_cast<G4double (G4Trd::*)()  const>(&G4Trd::GetYHalfLength1));

  DEBUG_MSG("Adding wrapper for G4double G4Trd::GetYHalfLength2() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Trd::GetYHalfLength2()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:82:21
  t109.method("GetYHalfLength2", static_cast<G4double (G4Trd::*)()  const>(&G4Trd::GetYHalfLength2));

  DEBUG_MSG("Adding wrapper for G4double G4Trd::GetZHalfLength() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Trd::GetZHalfLength()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:83:21
  t109.method("GetZHalfLength", static_cast<G4double (G4Trd::*)()  const>(&G4Trd::GetZHalfLength));

  DEBUG_MSG("Adding wrapper for void G4Trd::SetXHalfLength1(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Trd::SetXHalfLength1(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:87:17
  t109.method("SetXHalfLength1", static_cast<void (G4Trd::*)(G4double) >(&G4Trd::SetXHalfLength1));

  DEBUG_MSG("Adding wrapper for void G4Trd::SetXHalfLength2(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Trd::SetXHalfLength2(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:88:17
  t109.method("SetXHalfLength2", static_cast<void (G4Trd::*)(G4double) >(&G4Trd::SetXHalfLength2));

  DEBUG_MSG("Adding wrapper for void G4Trd::SetYHalfLength1(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Trd::SetYHalfLength1(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:89:17
  t109.method("SetYHalfLength1", static_cast<void (G4Trd::*)(G4double) >(&G4Trd::SetYHalfLength1));

  DEBUG_MSG("Adding wrapper for void G4Trd::SetYHalfLength2(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Trd::SetYHalfLength2(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:90:17
  t109.method("SetYHalfLength2", static_cast<void (G4Trd::*)(G4double) >(&G4Trd::SetYHalfLength2));

  DEBUG_MSG("Adding wrapper for void G4Trd::SetZHalfLength(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Trd::SetZHalfLength(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:91:17
  t109.method("SetZHalfLength", static_cast<void (G4Trd::*)(G4double) >(&G4Trd::SetZHalfLength));

  DEBUG_MSG("Adding wrapper for void G4Trd::SetAllParameters(G4double, G4double, G4double, G4double, G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Trd::SetAllParameters(G4double, G4double, G4double, G4double, G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:93:10
  t109.method("SetAllParameters", static_cast<void (G4Trd::*)(G4double, G4double, G4double, G4double, G4double) >(&G4Trd::SetAllParameters));

  DEBUG_MSG("Adding wrapper for G4double G4Trd::GetCubicVolume() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Trd::GetCubicVolume()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:99:14
  t109.method("GetCubicVolume", static_cast<G4double (G4Trd::*)() >(&G4Trd::GetCubicVolume));

  DEBUG_MSG("Adding wrapper for G4double G4Trd::GetSurfaceArea() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Trd::GetSurfaceArea()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:100:14
  t109.method("GetSurfaceArea", static_cast<G4double (G4Trd::*)() >(&G4Trd::GetSurfaceArea));

  DEBUG_MSG("Adding wrapper for void G4Trd::ComputeDimensions(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *) (" __HERE__ ")");
  // signature to use in the veto list: void G4Trd::ComputeDimensions(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:102:10
  t109.method("ComputeDimensions", static_cast<void (G4Trd::*)(G4VPVParameterisation *, const G4int, const G4VPhysicalVolume *) >(&G4Trd::ComputeDimensions));

  DEBUG_MSG("Adding wrapper for void G4Trd::BoundingLimits(G4ThreeVector &, G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: void G4Trd::BoundingLimits(G4ThreeVector &, G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:106:10
  t109.method("BoundingLimits", static_cast<void (G4Trd::*)(G4ThreeVector &, G4ThreeVector &)  const>(&G4Trd::BoundingLimits));

  DEBUG_MSG("Adding wrapper for EInside G4Trd::Inside(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: EInside G4Trd::Inside(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:113:13
  t109.method("Inside", static_cast<EInside (G4Trd::*)(const G4ThreeVector &)  const>(&G4Trd::Inside));

  DEBUG_MSG("Adding wrapper for G4ThreeVector G4Trd::SurfaceNormal(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4ThreeVector G4Trd::SurfaceNormal(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:115:19
  t109.method("SurfaceNormal", static_cast<G4ThreeVector (G4Trd::*)(const G4ThreeVector &)  const>(&G4Trd::SurfaceNormal));

  DEBUG_MSG("Adding wrapper for G4double G4Trd::DistanceToIn(const G4ThreeVector &, const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Trd::DistanceToIn(const G4ThreeVector &, const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:117:14
  t109.method("DistanceToIn", static_cast<G4double (G4Trd::*)(const G4ThreeVector &, const G4ThreeVector &)  const>(&G4Trd::DistanceToIn));

  DEBUG_MSG("Adding wrapper for G4double G4Trd::DistanceToIn(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Trd::DistanceToIn(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:120:14
  t109.method("DistanceToIn", static_cast<G4double (G4Trd::*)(const G4ThreeVector &)  const>(&G4Trd::DistanceToIn));

  DEBUG_MSG("Adding wrapper for G4double G4Trd::DistanceToOut(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Trd::DistanceToOut(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:122:14
  t109.method("DistanceToOut", static_cast<G4double (G4Trd::*)(const G4ThreeVector &, const G4ThreeVector &, const G4bool, G4bool *, G4ThreeVector *)  const>(&G4Trd::DistanceToOut));
  t109.method("DistanceToOut", [](G4Trd const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1)->G4double{ return a.DistanceToOut(arg0, arg1); });
  t109.method("DistanceToOut", [](G4Trd const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2)->G4double{ return a.DistanceToOut(arg0, arg1, arg2); });
  t109.method("DistanceToOut", [](G4Trd const& a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2, G4bool * arg3)->G4double{ return a.DistanceToOut(arg0, arg1, arg2, arg3); });
  t109.method("DistanceToOut", [](G4Trd const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1)->G4double{ return a->DistanceToOut(arg0, arg1); });
  t109.method("DistanceToOut", [](G4Trd const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2)->G4double{ return a->DistanceToOut(arg0, arg1, arg2); });
  t109.method("DistanceToOut", [](G4Trd const* a, const G4ThreeVector & arg0, const G4ThreeVector & arg1, const G4bool arg2, G4bool * arg3)->G4double{ return a->DistanceToOut(arg0, arg1, arg2, arg3); });

  DEBUG_MSG("Adding wrapper for G4double G4Trd::DistanceToOut(const G4ThreeVector &) (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Trd::DistanceToOut(const G4ThreeVector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:128:14
  t109.method("DistanceToOut", static_cast<G4double (G4Trd::*)(const G4ThreeVector &)  const>(&G4Trd::DistanceToOut));

  DEBUG_MSG("Adding wrapper for G4GeometryType G4Trd::GetEntityType() (" __HERE__ ")");
  // signature to use in the veto list: G4GeometryType G4Trd::GetEntityType()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:130:20
  t109.method("GetEntityType", static_cast<G4GeometryType (G4Trd::*)()  const>(&G4Trd::GetEntityType));

  DEBUG_MSG("Adding wrapper for G4ThreeVector G4Trd::GetPointOnSurface() (" __HERE__ ")");
  // signature to use in the veto list: G4ThreeVector G4Trd::GetPointOnSurface()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:132:19
  t109.method("GetPointOnSurface", static_cast<G4ThreeVector (G4Trd::*)()  const>(&G4Trd::GetPointOnSurface));

  DEBUG_MSG("Adding wrapper for G4VSolid * G4Trd::Clone() (" __HERE__ ")");
  // signature to use in the veto list: G4VSolid * G4Trd::Clone()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:134:15
  t109.method("Clone", static_cast<G4VSolid * (G4Trd::*)()  const>(&G4Trd::Clone));

  DEBUG_MSG("Adding wrapper for G4Polyhedron * G4Trd::CreatePolyhedron() (" __HERE__ ")");
  // signature to use in the veto list: G4Polyhedron * G4Trd::CreatePolyhedron()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:141:19
  t109.method("CreatePolyhedron", static_cast<G4Polyhedron * (G4Trd::*)()  const>(&G4Trd::CreatePolyhedron));


  DEBUG_MSG("Adding wrapper for void G4Trd::G4Trd(const G4Trd &) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:150:5
  t109.constructor<const G4Trd &>(/*finalize=*/true);

  DEBUG_MSG("Adding wrapper for G4Trd & G4Trd::operator=(const G4Trd &) (" __HERE__ ")");
  // signature to use in the veto list: G4Trd & G4Trd::operator=(const G4Trd &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Trd.hh:151:12
  t109.method("assign", static_cast<G4Trd & (G4Trd::*)(const G4Trd &) >(&G4Trd::operator=));

  /* End of G4Trd class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class CLHEP::HepLorentzRotation::HepLorentzRotation_row
   */


  DEBUG_MSG("Adding wrapper for void CLHEP::HepLorentzRotation::HepLorentzRotation_row::HepLorentzRotation_row(const CLHEP::HepLorentzRotation &, int) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:178:12
  t114.constructor<const CLHEP::HepLorentzRotation &, int>(/*finalize=*/true);
  types.set_override_module(jl_base_module);


  DEBUG_MSG("Adding getindex method to wrap double CLHEP::HepLorentzRotation::HepLorentzRotation_row::operator[](int) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:179:19
  t114.method("getindex",
    [](CLHEP::HepLorentzRotation::HepLorentzRotation_row& a, int i){
    return a[i];
  });

  /* End of CLHEP::HepLorentzRotation::HepLorentzRotation_row class method wrappers
   **********************************************************************/


  /**********************************************************************/
  /* Wrappers for the methods of class G4Colour
   */

  types.unset_override_module();


  DEBUG_MSG("Adding wrapper for void G4Colour::G4Colour(G4double, G4double, G4double, G4double) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:88:3
  t115.constructor<G4double>(/*finalize=*/true);
  t115.constructor<G4double, G4double>(/*finalize=*/true);
  t115.constructor<G4double, G4double, G4double>(/*finalize=*/true);
  t115.constructor<G4double, G4double, G4double, G4double>(/*finalize=*/true);


  DEBUG_MSG("Adding wrapper for void G4Colour::G4Colour(G4ThreeVector) (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:91:3
  t115.constructor<G4ThreeVector>(/*finalize=*/true);
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for G4bool G4Colour::operator!=(const G4Colour &) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4Colour::operator!=(const G4Colour &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:98:10
  t115.method("!=", static_cast<G4bool (G4Colour::*)(const G4Colour &)  const>(&G4Colour::operator!=));

  DEBUG_MSG("Adding wrapper for G4bool G4Colour::operator==(const G4Colour &) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4Colour::operator==(const G4Colour &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:99:10
  t115.method("==", static_cast<G4bool (G4Colour::*)(const G4Colour &)  const>(&G4Colour::operator==));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for G4Colour & G4Colour::operator+=(const G4Colour &) (" __HERE__ ")");
  // signature to use in the veto list: G4Colour & G4Colour::operator+=(const G4Colour &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:101:13
  t115.method("add!", static_cast<G4Colour & (G4Colour::*)(const G4Colour &) >(&G4Colour::operator+=));

  DEBUG_MSG("Adding wrapper for G4double G4Colour::GetRed() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Colour::GetRed()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:107:12
  t115.method("GetRed", static_cast<G4double (G4Colour::*)()  const>(&G4Colour::GetRed));

  DEBUG_MSG("Adding wrapper for G4double G4Colour::GetGreen() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Colour::GetGreen()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:108:12
  t115.method("GetGreen", static_cast<G4double (G4Colour::*)()  const>(&G4Colour::GetGreen));

  DEBUG_MSG("Adding wrapper for G4double G4Colour::GetBlue() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Colour::GetBlue()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:109:12
  t115.method("GetBlue", static_cast<G4double (G4Colour::*)()  const>(&G4Colour::GetBlue));

  DEBUG_MSG("Adding wrapper for G4double G4Colour::GetAlpha() (" __HERE__ ")");
  // signature to use in the veto list: G4double G4Colour::GetAlpha()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:110:12
  t115.method("GetAlpha", static_cast<G4double (G4Colour::*)()  const>(&G4Colour::GetAlpha));

  DEBUG_MSG("Adding wrapper for void G4Colour::SetRed(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Colour::SetRed(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:112:8
  t115.method("SetRed", static_cast<void (G4Colour::*)(G4double) >(&G4Colour::SetRed));

  DEBUG_MSG("Adding wrapper for void G4Colour::SetGreen(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Colour::SetGreen(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:113:8
  t115.method("SetGreen", static_cast<void (G4Colour::*)(G4double) >(&G4Colour::SetGreen));

  DEBUG_MSG("Adding wrapper for void G4Colour::SetBlue(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Colour::SetBlue(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:114:8
  t115.method("SetBlue", static_cast<void (G4Colour::*)(G4double) >(&G4Colour::SetBlue));

  DEBUG_MSG("Adding wrapper for void G4Colour::SetAlpha(G4double) (" __HERE__ ")");
  // signature to use in the veto list: void G4Colour::SetAlpha(G4double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:115:8
  t115.method("SetAlpha", static_cast<void (G4Colour::*)(G4double) >(&G4Colour::SetAlpha));

  DEBUG_MSG("Adding wrapper for G4Colour G4Colour::White() (" __HERE__ ")");
  // signature to use in the veto list: G4Colour G4Colour::White()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:117:19
  t115.method("G4Colour!White", static_cast<G4Colour (*)() >(&G4Colour::White));

  DEBUG_MSG("Adding wrapper for G4Colour G4Colour::Gray() (" __HERE__ ")");
  // signature to use in the veto list: G4Colour G4Colour::Gray()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:118:19
  t115.method("G4Colour!Gray", static_cast<G4Colour (*)() >(&G4Colour::Gray));

  DEBUG_MSG("Adding wrapper for G4Colour G4Colour::Grey() (" __HERE__ ")");
  // signature to use in the veto list: G4Colour G4Colour::Grey()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:119:19
  t115.method("G4Colour!Grey", static_cast<G4Colour (*)() >(&G4Colour::Grey));

  DEBUG_MSG("Adding wrapper for G4Colour G4Colour::Black() (" __HERE__ ")");
  // signature to use in the veto list: G4Colour G4Colour::Black()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:120:19
  t115.method("G4Colour!Black", static_cast<G4Colour (*)() >(&G4Colour::Black));

  DEBUG_MSG("Adding wrapper for G4Colour G4Colour::Brown() (" __HERE__ ")");
  // signature to use in the veto list: G4Colour G4Colour::Brown()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:121:19
  t115.method("G4Colour!Brown", static_cast<G4Colour (*)() >(&G4Colour::Brown));

  DEBUG_MSG("Adding wrapper for G4Colour G4Colour::Red() (" __HERE__ ")");
  // signature to use in the veto list: G4Colour G4Colour::Red()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:122:19
  t115.method("G4Colour!Red", static_cast<G4Colour (*)() >(&G4Colour::Red));

  DEBUG_MSG("Adding wrapper for G4Colour G4Colour::Green() (" __HERE__ ")");
  // signature to use in the veto list: G4Colour G4Colour::Green()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:123:19
  t115.method("G4Colour!Green", static_cast<G4Colour (*)() >(&G4Colour::Green));

  DEBUG_MSG("Adding wrapper for G4Colour G4Colour::Blue() (" __HERE__ ")");
  // signature to use in the veto list: G4Colour G4Colour::Blue()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:124:19
  t115.method("G4Colour!Blue", static_cast<G4Colour (*)() >(&G4Colour::Blue));

  DEBUG_MSG("Adding wrapper for G4Colour G4Colour::Cyan() (" __HERE__ ")");
  // signature to use in the veto list: G4Colour G4Colour::Cyan()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:125:19
  t115.method("G4Colour!Cyan", static_cast<G4Colour (*)() >(&G4Colour::Cyan));

  DEBUG_MSG("Adding wrapper for G4Colour G4Colour::Magenta() (" __HERE__ ")");
  // signature to use in the veto list: G4Colour G4Colour::Magenta()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:126:19
  t115.method("G4Colour!Magenta", static_cast<G4Colour (*)() >(&G4Colour::Magenta));

  DEBUG_MSG("Adding wrapper for G4Colour G4Colour::Yellow() (" __HERE__ ")");
  // signature to use in the veto list: G4Colour G4Colour::Yellow()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:127:19
  t115.method("G4Colour!Yellow", static_cast<G4Colour (*)() >(&G4Colour::Yellow));

  DEBUG_MSG("Adding wrapper for G4bool G4Colour::GetColour(const G4String &, G4Colour &) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4Colour::GetColour(const G4String &, G4Colour &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:129:17
  t115.method("G4Colour!GetColour", static_cast<G4bool (*)(const G4String &, G4Colour &) >(&G4Colour::GetColour));

  DEBUG_MSG("Adding wrapper for void G4Colour::AddToMap(const G4String &, const G4Colour &) (" __HERE__ ")");
  // signature to use in the veto list: void G4Colour::AddToMap(const G4String &, const G4Colour &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:135:15
  t115.method("G4Colour!AddToMap", static_cast<void (*)(const G4String &, const G4Colour &) >(&G4Colour::AddToMap));

  DEBUG_MSG("Adding wrapper for void G4Colour::InitialiseColourMap() (" __HERE__ ")");
  // signature to use in the veto list: void G4Colour::InitialiseColourMap()
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:139:15
  t115.method("G4Colour!InitialiseColourMap", static_cast<void (*)() >(&G4Colour::InitialiseColourMap));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for G4bool G4Colour::operator<(const G4Colour &) (" __HERE__ ")");
  // signature to use in the veto list: G4bool G4Colour::operator<(const G4Colour &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4Colour.hh:142:10
  t115.method("<", static_cast<G4bool (G4Colour::*)(const G4Colour &)  const>(&G4Colour::operator<));

  /* End of G4Colour class method wrappers
   **********************************************************************/


  /**********************************************************************
   * Wrappers for global functions and variables including
   * class static members
   */

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::rotationXOf(const CLHEP::Hep3Vector &, double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::rotationXOf(const CLHEP::Hep3Vector &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:400:12
  types.method("CLHEP!rotationXOf", static_cast<CLHEP::Hep3Vector (*)(const CLHEP::Hep3Vector &, double) >(&CLHEP::rotationXOf));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::rotationYOf(const CLHEP::Hep3Vector &, double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::rotationYOf(const CLHEP::Hep3Vector &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:401:12
  types.method("CLHEP!rotationYOf", static_cast<CLHEP::Hep3Vector (*)(const CLHEP::Hep3Vector &, double) >(&CLHEP::rotationYOf));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::rotationZOf(const CLHEP::Hep3Vector &, double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::rotationZOf(const CLHEP::Hep3Vector &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:402:12
  types.method("CLHEP!rotationZOf", static_cast<CLHEP::Hep3Vector (*)(const CLHEP::Hep3Vector &, double) >(&CLHEP::rotationZOf));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::rotationOf(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &, double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::rotationOf(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:404:12
  types.method("CLHEP!rotationOf", static_cast<CLHEP::Hep3Vector (*)(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &, double) >(&CLHEP::rotationOf));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::rotationOf(const CLHEP::Hep3Vector &, const CLHEP::HepAxisAngle &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::rotationOf(const CLHEP::Hep3Vector &, const CLHEP::HepAxisAngle &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:406:12
  types.method("CLHEP!rotationOf", static_cast<CLHEP::Hep3Vector (*)(const CLHEP::Hep3Vector &, const CLHEP::HepAxisAngle &) >(&CLHEP::rotationOf));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::rotationOf(const CLHEP::Hep3Vector &, double, double, double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::rotationOf(const CLHEP::Hep3Vector &, double, double, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:408:12
  types.method("CLHEP!rotationOf", static_cast<CLHEP::Hep3Vector (*)(const CLHEP::Hep3Vector &, double, double, double) >(&CLHEP::rotationOf));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::rotationOf(const CLHEP::Hep3Vector &, const CLHEP::HepEulerAngles &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::rotationOf(const CLHEP::Hep3Vector &, const CLHEP::HepEulerAngles &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:410:12
  types.method("CLHEP!rotationOf", static_cast<CLHEP::Hep3Vector (*)(const CLHEP::Hep3Vector &, const CLHEP::HepEulerAngles &) >(&CLHEP::rotationOf));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::operator/(const CLHEP::Hep3Vector &, double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::operator/(const CLHEP::Hep3Vector &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:424:12
  types.method("/", static_cast<CLHEP::Hep3Vector (*)(const CLHEP::Hep3Vector &, double) >(&CLHEP::operator/));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::operator+(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::operator+(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:427:19
  types.method("+", static_cast<CLHEP::Hep3Vector (*)(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &) >(&CLHEP::operator+));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::operator-(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::operator-(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:430:19
  types.method("-", static_cast<CLHEP::Hep3Vector (*)(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &) >(&CLHEP::operator-));

  DEBUG_MSG("Adding wrapper for double CLHEP::operator*(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: double CLHEP::operator*(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:433:15
  types.method("*", static_cast<double (*)(const CLHEP::Hep3Vector &, const CLHEP::Hep3Vector &) >(&CLHEP::operator*));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::operator*(const CLHEP::Hep3Vector &, double) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::operator*(const CLHEP::Hep3Vector &, double)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:436:19
  types.method("*", static_cast<CLHEP::Hep3Vector (*)(const CLHEP::Hep3Vector &, double) >(&CLHEP::operator*));

  DEBUG_MSG("Adding wrapper for CLHEP::Hep3Vector CLHEP::operator*(double, const CLHEP::Hep3Vector &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::Hep3Vector CLHEP::operator*(double, const CLHEP::Hep3Vector &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:437:19
  types.method("*", static_cast<CLHEP::Hep3Vector (*)(double, const CLHEP::Hep3Vector &) >(&CLHEP::operator*));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation CLHEP::inverseOf(const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation CLHEP::inverseOf(const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:33:20
  types.method("CLHEP!inverseOf", static_cast<CLHEP::HepRotation (*)(const CLHEP::HepRotation &) >(&CLHEP::inverseOf));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation CLHEP::operator*(const CLHEP::HepRotationX &, const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation CLHEP::operator*(const CLHEP::HepRotationX &, const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:34:20
  types.method("*", static_cast<CLHEP::HepRotation (*)(const CLHEP::HepRotationX &, const CLHEP::HepRotation &) >(&CLHEP::operator*));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation CLHEP::operator*(const CLHEP::HepRotationY &, const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation CLHEP::operator*(const CLHEP::HepRotationY &, const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:35:20
  types.method("*", static_cast<CLHEP::HepRotation (*)(const CLHEP::HepRotationY &, const CLHEP::HepRotation &) >(&CLHEP::operator*));

  DEBUG_MSG("Adding wrapper for CLHEP::HepRotation CLHEP::operator*(const CLHEP::HepRotationZ &, const CLHEP::HepRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepRotation CLHEP::operator*(const CLHEP::HepRotationZ &, const CLHEP::HepRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:36:20
  types.method("*", static_cast<CLHEP::HepRotation (*)(const CLHEP::HepRotationZ &, const CLHEP::HepRotation &) >(&CLHEP::operator*));

  types.unset_override_module();

  DEBUG_MSG("Adding wrapper for void SetParticleByName(G4ParticleGun *, const char *) (" __HERE__ ")");
  // signature to use in the veto list: void SetParticleByName(G4ParticleGun *, const char *)
  // defined in ./cpp/Geant4Wrap.h:73:6
  types.method("SetParticleByName", static_cast<void (*)(G4ParticleGun *, const char *) >(&SetParticleByName));

  DEBUG_MSG("Adding wrapper for G4String make_G4String(const char *) (" __HERE__ ")");
  // signature to use in the veto list: G4String make_G4String(const char *)
  // defined in ./cpp/Geant4Wrap.h:74:17
  types.method("make_G4String", static_cast<G4String (*)(const char *) >(&make_G4String));

  DEBUG_MSG("Adding wrapper for char * G4JL_getenv(const char *) (" __HERE__ ")");
  // signature to use in the veto list: char * G4JL_getenv(const char *)
  // defined in ./cpp/Geant4Wrap.h:79:7
  types.method("G4JL_getenv", static_cast<char * (*)(const char *) >(&G4JL_getenv));

  DEBUG_MSG("Adding wrapper for int G4JL_setenv(const char *, const char *) (" __HERE__ ")");
  // signature to use in the veto list: int G4JL_setenv(const char *, const char *)
  // defined in ./cpp/Geant4Wrap.h:80:7
  types.method("G4JL_setenv", static_cast<int (*)(const char *, const char *) >(&G4JL_setenv));

  DEBUG_MSG("Adding wrapper for void G4JL_init() (" __HERE__ ")");
  // signature to use in the veto list: void G4JL_init()
  // defined in ./cpp/Geant4Wrap.h:81:7
  types.method("G4JL_init", static_cast<void (*)() >(&G4JL_init));

  DEBUG_MSG("Adding wrapper for CLHEP::HepBoost CLHEP::inverseOf(const CLHEP::HepBoost &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepBoost CLHEP::inverseOf(const CLHEP::HepBoost &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Boost.h:32:17
  types.method("CLHEP!inverseOf", static_cast<CLHEP::HepBoost (*)(const CLHEP::HepBoost &) >(&CLHEP::inverseOf));

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation CLHEP::inverseOf(const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation CLHEP::inverseOf(const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:34:27
  types.method("CLHEP!inverseOf", static_cast<CLHEP::HepLorentzRotation (*)(const CLHEP::HepLorentzRotation &) >(&CLHEP::inverseOf));
  types.set_override_module(jl_base_module);

  DEBUG_MSG("Adding wrapper for CLHEP::HepLorentzRotation CLHEP::operator*(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: CLHEP::HepLorentzRotation CLHEP::operator*(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:35:20
  types.method("*", static_cast<CLHEP::HepLorentzRotation (*)(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &) >(&CLHEP::operator*));

  DEBUG_MSG("Adding wrapper for bool CLHEP::operator==(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::operator==(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:348:13
  types.method("==", static_cast<bool (*)(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &) >(&CLHEP::operator==));

  DEBUG_MSG("Adding wrapper for bool CLHEP::operator!=(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::operator!=(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:350:13
  types.method("!=", static_cast<bool (*)(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &) >(&CLHEP::operator!=));

  DEBUG_MSG("Adding wrapper for bool CLHEP::operator<=(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::operator<=(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:352:13
  types.method("<=", static_cast<bool (*)(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &) >(&CLHEP::operator<=));

  DEBUG_MSG("Adding wrapper for bool CLHEP::operator>=(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::operator>=(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:354:13
  types.method(">=", static_cast<bool (*)(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &) >(&CLHEP::operator>=));

  DEBUG_MSG("Adding wrapper for bool CLHEP::operator<(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::operator<(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:356:13
  types.method("<", static_cast<bool (*)(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &) >(&CLHEP::operator<));

  DEBUG_MSG("Adding wrapper for bool CLHEP::operator>(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::operator>(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:358:13
  types.method(">", static_cast<bool (*)(const CLHEP::HepRotation &, const CLHEP::HepLorentzRotation &) >(&CLHEP::operator>));

  DEBUG_MSG("Adding wrapper for bool CLHEP::operator==(const CLHEP::HepBoost &, const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::operator==(const CLHEP::HepBoost &, const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:361:13
  types.method("==", static_cast<bool (*)(const CLHEP::HepBoost &, const CLHEP::HepLorentzRotation &) >(&CLHEP::operator==));

  DEBUG_MSG("Adding wrapper for bool CLHEP::operator!=(const CLHEP::HepBoost &, const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::operator!=(const CLHEP::HepBoost &, const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:363:13
  types.method("!=", static_cast<bool (*)(const CLHEP::HepBoost &, const CLHEP::HepLorentzRotation &) >(&CLHEP::operator!=));

  DEBUG_MSG("Adding wrapper for bool CLHEP::operator<=(const CLHEP::HepBoost &, const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::operator<=(const CLHEP::HepBoost &, const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:365:13
  types.method("<=", static_cast<bool (*)(const CLHEP::HepBoost &, const CLHEP::HepLorentzRotation &) >(&CLHEP::operator<=));

  DEBUG_MSG("Adding wrapper for bool CLHEP::operator>=(const CLHEP::HepBoost &, const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::operator>=(const CLHEP::HepBoost &, const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:367:13
  types.method(">=", static_cast<bool (*)(const CLHEP::HepBoost &, const CLHEP::HepLorentzRotation &) >(&CLHEP::operator>=));

  DEBUG_MSG("Adding wrapper for bool CLHEP::operator<(const CLHEP::HepBoost &, const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::operator<(const CLHEP::HepBoost &, const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:369:13
  types.method("<", static_cast<bool (*)(const CLHEP::HepBoost &, const CLHEP::HepLorentzRotation &) >(&CLHEP::operator<));

  DEBUG_MSG("Adding wrapper for bool CLHEP::operator>(const CLHEP::HepBoost &, const CLHEP::HepLorentzRotation &) (" __HERE__ ")");
  // signature to use in the veto list: bool CLHEP::operator>(const CLHEP::HepBoost &, const CLHEP::HepLorentzRotation &)
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:371:13
  types.method(">", static_cast<bool (*)(const CLHEP::HepBoost &, const CLHEP::HepLorentzRotation &) >(&CLHEP::operator>));
  types.unset_override_module();

  DEBUG_MSG("Adding CLHEP!HepXHat methods to provide access to the global variable CLHEP::HepXHat (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:419:33
  types.method("CLHEP!HepXHat", []()-> const CLHEP::Hep3Vector& { return CLHEP::HepXHat; });

  DEBUG_MSG("Adding CLHEP!HepYHat methods to provide access to the global variable CLHEP::HepYHat (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:419:42
  types.method("CLHEP!HepYHat", []()-> const CLHEP::Hep3Vector& { return CLHEP::HepYHat; });

  DEBUG_MSG("Adding CLHEP!HepZHat methods to provide access to the global variable CLHEP::HepZHat (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/ThreeVector.h:419:51
  types.method("CLHEP!HepZHat", []()-> const CLHEP::Hep3Vector& { return CLHEP::HepZHat; });

  DEBUG_MSG("Adding CLHEP!HepRotation!IDENTITY methods to provide access to the global variable CLHEP::HepRotation::IDENTITY (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/Rotation.h:366:36
  types.method("CLHEP!HepRotation!IDENTITY", []()-> const CLHEP::HepRotation& { return CLHEP::HepRotation::IDENTITY; });

  DEBUG_MSG("Adding HepGeom!Transform3D!Identity methods to provide access to the global variable HepGeom::Transform3D::Identity (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Geometry/Transform3D.h:196:38
  types.method("HepGeom!Transform3D!Identity", []()-> const HepGeom::Transform3D& { return HepGeom::Transform3D::Identity; });

  DEBUG_MSG("Adding CLHEP!HepLorentzRotation!IDENTITY methods to provide access to the global variable CLHEP::HepLorentzRotation::IDENTITY (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/CLHEP/Vector/LorentzRotation.h:53:43
  types.method("CLHEP!HepLorentzRotation!IDENTITY", []()-> const CLHEP::HepLorentzRotation& { return CLHEP::HepLorentzRotation::IDENTITY; });

  DEBUG_MSG("Adding G4VisAttributes!fMinLineSegmentsPerCircle methods to provide access to the global variable G4VisAttributes::fMinLineSegmentsPerCircle (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:138:26
  types.method("G4VisAttributes!fMinLineSegmentsPerCircle", []()-> G4int { return G4VisAttributes::fMinLineSegmentsPerCircle; });

  DEBUG_MSG("Adding G4VisAttributes!fVeryLongTime methods to provide access to the global variable G4VisAttributes::fVeryLongTime (" __HERE__ ")");
  // defined in /Users/mato/.julia/artifacts/9d4b417a98ec8f720b8871baefe87108f864656f/include/Geant4/G4VisAttributes.hh:141:29
  types.method("G4VisAttributes!fVeryLongTime", []()-> G4double { return G4VisAttributes::fVeryLongTime; });

  /* End of global function wrappers
   **********************************************************************/

  DEBUG_MSG("End of wrapper definitions");

}
