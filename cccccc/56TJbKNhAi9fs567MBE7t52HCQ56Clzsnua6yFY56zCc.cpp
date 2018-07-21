#ifndef GUETZLI_FAST_LOG_H_
#define GUETZLI_FAST_LOG_H_
    
    #include 'guetzli/jpeg_data.h'
    
    std::vector<uint8_t> DecodeJpegToRGB(const JPEGData& jpg) {
  if (jpg.components.size() == 1 ||
      (jpg.components.size() == 3 &&
       HasYCbCrColorSpace(jpg) && (jpg.Is420() || jpg.Is444()))) {
    OutputImage img(jpg.width, jpg.height);
    img.CopyFromJpegData(jpg);
    return img.ToSRGB();
  }
  return std::vector<uint8_t>();
}
    
    class OutputImageComponent {
 public:
  OutputImageComponent(int w, int h);
    }
    
    // Butteraugli scores that correspond to JPEG quality levels, starting at
// kLowestQuality. They were computed by taking median BA scores of JPEGs
// generated using libjpeg-turbo at given quality from a set of PNGs.
// The scores above quality level 100 are just linearly decreased so that score
// for 110 is 90% of the score for 100.
const double kScoreForQuality[] = {
  2.810761,  // 70
  2.729300,
  2.689687,
  2.636811,
  2.547863,
  2.525400,
  2.473416,
  2.366133,
  2.338078,
  2.318654,
  2.201674,  // 80
  2.145517,
  2.087322,
  2.009328,
  1.945456,
  1.900112,
  1.805701,
  1.750194,
  1.644175,
  1.562165,
  1.473608,  // 90
  1.382021,
  1.294298,
  1.185402,
  1.066781,
  0.971769,  // 95
  0.852901,
  0.724544,
  0.611302,
  0.443185,
  0.211578,  // 100
  0.209462,
  0.207346,
  0.205230,
  0.203114,
  0.200999,  // 105
  0.198883,
  0.196767,
  0.194651,
  0.192535,
  0.190420,  // 110
  0.190420,
};
    
      Eigen::MatrixXd m_a = Eigen::MatrixXd::Identity(2, 2);
    
    #include 'modules/perception/traffic_light/recognizer/unity_recognize.h'
    
    /**
 * @class RTKReplayPlanner
 * @brief RTKReplayPlanner is a derived class of Planner.
 *        It reads a recorded trajectory from a trajectory file and
 *        outputs proper segment of the trajectory according to vehicle
 * position.
 */
class RTKReplayPlanner : public Planner {
 public:
  /**
   * @brief Constructor
   */
  RTKReplayPlanner();
    }