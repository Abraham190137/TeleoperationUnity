
//using System;
//using Unity.Robotics;
//using UnityEngine;

//namespace Unity.Robotics.UrdfImporter.Control
//{
//    public enum RotationDirection { None = 0, Positive = 1, Negative = -1 };
//    public enum ControlType { PositionControl };

//    public class Controller : MonoBehaviour
//    {
//        private ArticulationBody[] articulationChain;

//        [InspectorReadOnly(hideInEditMode: true)]
//        [HideInInspector]
//        public ControlType control = ControlType.PositionControl;
//        public float stiffness;
//        public float damping;
//        public float forceLimit;
//        public float speed = 5f; // Units: degree/s
//        public float torque = 100f; // Units: Nm or N
//        public float acceleration = 5f;// Units: m/s^2 / degree/s^2
//        private float moveDirection = 0;

//        void Start()
//        {
//            this.gameObject.AddComponent<FKRobot>();
//            articulationChain = this.GetComponentsInChildren<ArticulationBody>();
//            int defDyanmicVal = 10;
//            foreach (ArticulationBody joint in articulationChain)
//            {
//                joint.gameObject.AddComponent<JointControl>();
//                joint.jointFriction = defDyanmicVal;
//                joint.angularDamping = defDyanmicVal;
//                ArticulationDrive currentDrive = joint.xDrive;
//                currentDrive.forceLimit = forceLimit;
//                joint.xDrive = currentDrive;
//            }
//        }

//        void Update()
//        {
//            UpdateDirection();
//        }

//        public void moveDirectionUpdate(float direction_input)
//        {
//            moveDirection = direction_input;
//        }

//        private void UpdateDirection()
//        {

//            JointControl current2 = articulationChain[2].GetComponent<JointControl>();
//            JointControl current3 = articulationChain[3].GetComponent<JointControl>();

//            if (current2.controltype != control || current3.controltype != control)
//            {
//                UpdateControlType(current2);
//                UpdateControlType(current3);
//            }

//            if (moveDirection > 0)
//            {
//                current2.direction = RotationDirection.Positive;
//                current3.direction = RotationDirection.Positive;
//            }
//            else if (moveDirection < 0)
//            {
//                current2.direction = RotationDirection.Negative;
//                current3.direction = RotationDirection.Negative;
//            }
//            else
//            {
//                current2.direction = RotationDirection.None;
//                current3.direction = RotationDirection.None;
//            }
//        }

//        public void UpdateControlType(JointControl joint)
//        {
//            joint.controltype = control;
//            if (control == ControlType.PositionControl)
//            {
//                ArticulationDrive drive = joint.joint.xDrive;
//                drive.stiffness = stiffness;
//                drive.damping = damping;
//                joint.joint.xDrive = drive;
//            }
//        }
//    }
//}

