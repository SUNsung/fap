
        
        ScrollView* bln_word_window_handle();  //return handle
void build_image_window(int width, int height);
void display_bln_lines(ScrollView window,
                       ScrollView::Color colour,
                       float scale_factor,
                       float y_offset,
                       float minx,
                       float maxx);
                                 //function to call
void pgeditor_msg(  //message display
                  const char *msg);
void pgeditor_show_point(  //display coords
                         SVEvent *event);
                                 //put bln word in       box
void show_point(PAGE_RES* page_res, float x, float y);
    
    #define UNLV_EXT  '.uzn'  // unlv zone file
    
    #include 'ccstruct.h'
    
    // Fits a line to the points, ignoring the skip_first initial points and the
// skip_last final points, returning the fitted line as a pair of points,
// and the upper quartile error.
double DetLineFit::Fit(int skip_first, int skip_last,
                       ICOORD* pt1, ICOORD* pt2) {
  // Do something sensible with no points.
  if (pts_.empty()) {
    pt1->set_x(0);
    pt1->set_y(0);
    *pt2 = *pt1;
    return 0.0;
  }
  // Count the points and find the first and last kNumEndPoints.
  int pt_count = pts_.size();
  ICOORD* starts[kNumEndPoints];
  if (skip_first >= pt_count) skip_first = pt_count - 1;
  int start_count = 0;
  int end_i = MIN(skip_first + kNumEndPoints, pt_count);
  for (int i = skip_first; i < end_i; ++i) {
    starts[start_count++] = &pts_[i].pt;
  }
  ICOORD* ends[kNumEndPoints];
  if (skip_last >= pt_count) skip_last = pt_count - 1;
  int end_count = 0;
  end_i = MAX(0, pt_count - kNumEndPoints - skip_last);
  for (int i = pt_count - 1 - skip_last; i >= end_i; --i) {
    ends[end_count++] = &pts_[i].pt;
  }
  // 1 or 2 points need special treatment.
  if (pt_count <= 2) {
    *pt1 = *starts[0];
    if (pt_count > 1)
      *pt2 = *ends[0];
    else
      *pt2 = *pt1;
    return 0.0;
  }
  // Although with between 2 and 2*kNumEndPoints-1 points, there will be
  // overlap in the starts, ends sets, this is OK and taken care of by the
  // if (*start != *end) test below, which also tests for equal input points.
  double best_uq = -1.0;
  // Iterate each pair of points and find the best fitting line.
  for (int i = 0; i < start_count; ++i) {
    ICOORD* start = starts[i];
    for (int j = 0; j < end_count; ++j) {
      ICOORD* end = ends[j];
      if (*start != *end) {
        ComputeDistances(*start, *end);
        // Compute the upper quartile error from the line.
        double dist = EvaluateLineFit();
        if (dist < best_uq || best_uq < 0.0) {
          best_uq = dist;
          *pt1 = *start;
          *pt2 = *end;
        }
      }
    }
  }
  // Finally compute the square root to return the true distance.
  return best_uq > 0.0 ? sqrt(best_uq) : best_uq;
}
    
    // Returns the sqrt of the mean squared error measured perpendicular from the
// line through mean_point() in the direction dir.
//
// Derivation:
//   Lemma:  Let v and x_i (i=1..N) be a k-dimensional vectors (1xk matrices).
//     Let % be dot product and ' be transpose.  Note that:
//      Sum[i=1..N] (v % x_i)^2
//         = v * [x_1' x_2' ... x_N'] * [x_1' x_2' .. x_N']' * v'
//     If x_i have average 0 we have:
//       = v * (N * COVARIANCE_MATRIX(X)) * v'
//     Expanded for the case that k = 2, where we treat the dimensions
//     as x_i and y_i, this is:
//       = v * (N * [VAR(X), COV(X,Y); COV(X,Y) VAR(Y)]) * v'
//  Now, we are trying to calculate the mean squared error, where v is
//  perpendicular to our line of interest:
//    Mean squared error
//      = E [ (v % (x_i - x_avg))) ^2 ]
//      = Sum (v % (x_i - x_avg))^2 / N
//      = v * N * [VAR(X) COV(X,Y); COV(X,Y) VAR(Y)] / N * v'
//      = v * [VAR(X) COV(X,Y); COV(X,Y) VAR(Y)] * v'
//      = code below
double LLSQ::rms_orth(const FCOORD &dir) const {
  FCOORD v = !dir;
  v.normalise();
  return sqrt(v.x() * v.x() * x_variance() +
              2 * v.x() * v.y() * covariance() +
              v.y() * v.y() * y_variance());
}
    
    #include 'leveldb/env.h'
    
          case kPrevLogNumber:
        if (GetVarint64(&input, &prev_log_number_)) {
          has_prev_log_number_ = true;
        } else {
          msg = 'previous log number';
        }
        break;
    
    #include <stddef.h>
#include <stdint.h>
#include <string>
#include <vector>
#include 'leveldb/slice.h'
#include 'util/hash.h'
    
    TEST(FilterBlockTest, SingleChunk) {
  FilterBlockBuilder builder(&policy_);
  builder.StartBlock(100);
  builder.AddKey('foo');
  builder.AddKey('bar');
  builder.AddKey('box');
  builder.StartBlock(200);
  builder.AddKey('box');
  builder.StartBlock(300);
  builder.AddKey('hello');
  Slice block = builder.Finish();
  FilterBlockReader reader(&policy_, block);
  ASSERT_TRUE(reader.KeyMayMatch(100, 'foo'));
  ASSERT_TRUE(reader.KeyMayMatch(100, 'bar'));
  ASSERT_TRUE(reader.KeyMayMatch(100, 'box'));
  ASSERT_TRUE(reader.KeyMayMatch(100, 'hello'));
  ASSERT_TRUE(reader.KeyMayMatch(100, 'foo'));
  ASSERT_TRUE(! reader.KeyMayMatch(100, 'missing'));
  ASSERT_TRUE(! reader.KeyMayMatch(100, 'other'));
}
    
      // Encoded length of a Footer.  Note that the serialization of a
  // Footer will always occupy exactly this many bytes.  It consists
  // of two block handles and a magic number.
  enum {
    kEncodedLength = 2*BlockHandle::kMaxEncodedLength + 8
  };
    
    Iterator* NewErrorIterator(const Status& status) {
  return new EmptyIterator(status);
}
    
        // Compress
    int maxlen = data_sz + 512 + (data_sz >> 2) + sizeof(int); // total guess
    char* compressed = use_compression ? new char[maxlen] : data;
    int compressed_sz = use_compression ? stb_compress((stb_uchar*)compressed, (stb_uchar*)data, data_sz) : data_sz;
    if (use_compression)
		memset(compressed + compressed_sz, 0, maxlen - compressed_sz);
    
    #if !defined(IMGUI_DISABLE_OBSOLETE_FUNCTIONS) && defined(IMGUI_DISABLE_TEST_WINDOWS) && !defined(IMGUI_DISABLE_DEMO_WINDOWS)   // Obsolete name since 1.53, TEST->DEMO
#define IMGUI_DISABLE_DEMO_WINDOWS
#endif
    
    
    {        // Rendering
        glViewport(0, 0, (int)ImGui::GetIO().DisplaySize.x, (int)ImGui::GetIO().DisplaySize.y);
        glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        //glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound
        ImGui::Render();
        ImGui_ImplSdlGL2_RenderDrawData(ImGui::GetDrawData());
        SDL_GL_SwapWindow(window);
    }
    
            // 1. Show a simple window.
        // Tip: if we don't call ImGui::Begin()/ImGui::End() the widgets automatically appears in a window called 'Debug'.
        {
            static float f = 0.0f;
            static int counter = 0;
            ImGui::Text('Hello, world!');                           // Display some text (you can use a format string too)
            ImGui::SliderFloat('float', &f, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f    
            ImGui::ColorEdit3('clear color', (float*)&clear_color); // Edit 3 floats representing a color
    }
    
    
    {    // Restore modified state
    glDisableClientState(GL_COLOR_ARRAY);
    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    glDisableClientState(GL_VERTEX_ARRAY);
    glBindTexture(GL_TEXTURE_2D, (GLuint)last_texture);
    glMatrixMode(GL_MODELVIEW);
    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glPopAttrib();
    glPolygonMode(GL_FRONT, (GLenum)last_polygon_mode[0]); glPolygonMode(GL_BACK, (GLenum)last_polygon_mode[1]);
    glViewport(last_viewport[0], last_viewport[1], (GLsizei)last_viewport[2], (GLsizei)last_viewport[3]);
    glScissor(last_scissor_box[0], last_scissor_box[1], (GLsizei)last_scissor_box[2], (GLsizei)last_scissor_box[3]);
}