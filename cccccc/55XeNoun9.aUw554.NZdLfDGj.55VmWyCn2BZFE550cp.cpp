
        
        class GlobalShortcut : public extensions::GlobalShortcutListener::Observer,
                       public mate::TrackableObject<GlobalShortcut> {
 public:
  static mate::Handle<GlobalShortcut> Create(v8::Isolate* isolate);
    }
    
    #include 'base/command_line.h'
    
    
    { private:
  DISALLOW_COPY_AND_ASSIGN(UnresponsiveSuppressor);
};
    
      // This notification is sent when extensions::TabHelper::SetExtensionApp is
  // invoked. The source is the extensions::TabHelper SetExtensionApp was
  // invoked on.
  NOTIFICATION_TAB_CONTENTS_APPLICATION_EXTENSION_CHANGED,
    
      // Sets size to which the thumbnails should be scaled. If called after
  // StartUpdating() then some thumbnails may be still scaled to the old size
  // until they are updated.
  virtual void SetThumbnailSize(const gfx::Size& thumbnail_size) = 0;
    
    #ifndef CHROME_BROWSER_PRINTING_PRINT_VIEW_MANAGER_OBSERVER_H_
#define CHROME_BROWSER_PRINTING_PRINT_VIEW_MANAGER_OBSERVER_H_
    
    // filenames
const base::FilePath::CharType kCacheDirname[] = FPL('Cache');
const base::FilePath::CharType kChannelIDFilename[] = FPL('Origin Bound Certs');
const base::FilePath::CharType kCookieFilename[] = FPL('Cookies');
const base::FilePath::CharType kCRLSetFilename[] =
    FPL('Certificate Revocation Lists');
const base::FilePath::CharType kCustomDictionaryFileName[] =
    FPL('Custom Dictionary.txt');
const base::FilePath::CharType kExtensionActivityLogFilename[] =
    FPL('Extension Activity');
const base::FilePath::CharType kExtensionsCookieFilename[] =
    FPL('Extension Cookies');
const base::FilePath::CharType kFirstRunSentinel[] = FPL('First Run');
const base::FilePath::CharType kGCMStoreDirname[] = FPL('GCM Store');
const base::FilePath::CharType kLocalStateFilename[] = FPL('Local State');
const base::FilePath::CharType kLocalStorePoolName[] = FPL('LocalStorePool');
const base::FilePath::CharType kMediaCacheDirname[] = FPL('Media Cache');
const base::FilePath::CharType kNetworkPersistentStateFilename[] =
    FPL('Network Persistent State');
const base::FilePath::CharType kOfflinePageArchviesDirname[] =
    FPL('Offline Pages/archives');
const base::FilePath::CharType kOfflinePageMetadataDirname[] =
    FPL('Offline Pages/metadata');
const base::FilePath::CharType kPreferencesFilename[] = FPL('Preferences');
const base::FilePath::CharType kProtectedPreferencesFilenameDeprecated[] =
    FPL('Protected Preferences');
const base::FilePath::CharType kReadmeFilename[] = FPL('README');
const base::FilePath::CharType kResetPromptMementoFilename[] =
    FPL('Reset Prompt Memento');
const base::FilePath::CharType kSafeBrowsingBaseFilename[] =
    FPL('Safe Browsing');
const base::FilePath::CharType kSecurePreferencesFilename[] =
    FPL('Secure Preferences');
const base::FilePath::CharType kServiceStateFileName[] = FPL('Service State');
const base::FilePath::CharType kSingletonCookieFilename[] =
    FPL('SingletonCookie');
const base::FilePath::CharType kSingletonLockFilename[] = FPL('SingletonLock');
const base::FilePath::CharType kSingletonSocketFilename[] =
    FPL('SingletonSocket');
const base::FilePath::CharType kSupervisedUserSettingsFilename[] =
    FPL('Managed Mode Settings');
const base::FilePath::CharType kThemePackFilename[] = FPL('Cached Theme.pak');
const base::FilePath::CharType kThemePackMaterialDesignFilename[] =
    FPL('Cached Theme Material Design.pak');
const base::FilePath::CharType kWebAppDirname[] = FPL('Web Applications');
    
    namespace atom {
    }
    
    
    {}  // namespace nw

    
      GtkRequisition menu_req;
  gtk_widget_size_request(GTK_WIDGET(menu), &menu_req);
  GdkScreen* screen;
  gdk_display_get_pointer(gdk_display_get_default(), &screen, NULL, NULL, NULL);
  gint monitor = gdk_screen_get_monitor_at_point(screen, *x, *y);
    
    class NwMenuGetNSStringWithFixupFunction : public NWSyncExtensionFunction {
 public:
  NwMenuGetNSStringWithFixupFunction(){}
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    
 protected:
  ~NwMenuGetNSStringWithFixupFunction() override {}
    
  DECLARE_EXTENSION_FUNCTION('nw.Menu.getNSStringWithFixup', UNKNOWN)
 private:
  DISALLOW_COPY_AND_ASSIGN(NwMenuGetNSStringWithFixupFunction);
};
    
    class NwObjCallObjectMethodFunction : public NWSyncExtensionFunction {
 public:
  NwObjCallObjectMethodFunction();
  bool RunNWSync(base::ListValue* response, std::string* error) override;
    }
    
    void projectPoints(cv::InputArray objectPoints, cv::OutputArray imagePoints,
                   cv::InputArray _rvec,cv::InputArray _tvec,
                   const IntrinsicParams& param, cv::OutputArray jacobian);
    
    
    {            ptr[tid] = partial = partial + ptr[tid + 16];
            ptr[tid] = partial = partial + ptr[tid + 8];
            ptr[tid] = partial = partial + ptr[tid + 4];
            ptr[tid] = partial = partial + ptr[tid + 2];
            ptr[tid] = partial = partial + ptr[tid + 1];
        }
    
        // Extension: 3.0
    extern void (CODEGEN_FUNCPTR *ColorMaski)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
    extern void (CODEGEN_FUNCPTR *GetBooleani_v)(GLenum target, GLuint index, GLboolean *data);
    extern void (CODEGEN_FUNCPTR *GetIntegeri_v)(GLenum target, GLuint index, GLint *data);
    extern void (CODEGEN_FUNCPTR *Enablei)(GLenum target, GLuint index);
    extern void (CODEGEN_FUNCPTR *Disablei)(GLenum target, GLuint index);
    extern GLboolean (CODEGEN_FUNCPTR *IsEnabledi)(GLenum target, GLuint index);
    extern void (CODEGEN_FUNCPTR *BeginTransformFeedback)(GLenum primitiveMode);
    extern void (CODEGEN_FUNCPTR *EndTransformFeedback)();
    extern void (CODEGEN_FUNCPTR *BindBufferRange)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
    extern void (CODEGEN_FUNCPTR *BindBufferBase)(GLenum target, GLuint index, GLuint buffer);
    extern void (CODEGEN_FUNCPTR *TransformFeedbackVaryings)(GLuint program, GLsizei count, const GLchar* const *varyings, GLenum bufferMode);
    extern void (CODEGEN_FUNCPTR *GetTransformFeedbackVarying)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
    extern void (CODEGEN_FUNCPTR *ClampColor)(GLenum target, GLenum clamp);
    extern void (CODEGEN_FUNCPTR *BeginConditionalRender)(GLuint id, GLenum mode);
    extern void (CODEGEN_FUNCPTR *EndConditionalRender)();
    extern void (CODEGEN_FUNCPTR *VertexAttribIPointer)(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
    extern void (CODEGEN_FUNCPTR *GetVertexAttribIiv)(GLuint index, GLenum pname, GLint *params);
    extern void (CODEGEN_FUNCPTR *GetVertexAttribIuiv)(GLuint index, GLenum pname, GLuint *params);
    extern void (CODEGEN_FUNCPTR *VertexAttribI1i)(GLuint index, GLint x);
    extern void (CODEGEN_FUNCPTR *VertexAttribI2i)(GLuint index, GLint x, GLint y);
    extern void (CODEGEN_FUNCPTR *VertexAttribI3i)(GLuint index, GLint x, GLint y, GLint z);
    extern void (CODEGEN_FUNCPTR *VertexAttribI4i)(GLuint index, GLint x, GLint y, GLint z, GLint w);
    extern void (CODEGEN_FUNCPTR *VertexAttribI1ui)(GLuint index, GLuint x);
    extern void (CODEGEN_FUNCPTR *VertexAttribI2ui)(GLuint index, GLuint x, GLuint y);
    extern void (CODEGEN_FUNCPTR *VertexAttribI3ui)(GLuint index, GLuint x, GLuint y, GLuint z);
    extern void (CODEGEN_FUNCPTR *VertexAttribI4ui)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
    extern void (CODEGEN_FUNCPTR *VertexAttribI1iv)(GLuint index, const GLint *v);
    extern void (CODEGEN_FUNCPTR *VertexAttribI2iv)(GLuint index, const GLint *v);
    extern void (CODEGEN_FUNCPTR *VertexAttribI3iv)(GLuint index, const GLint *v);
    extern void (CODEGEN_FUNCPTR *VertexAttribI4iv)(GLuint index, const GLint *v);
    extern void (CODEGEN_FUNCPTR *VertexAttribI1uiv)(GLuint index, const GLuint *v);
    extern void (CODEGEN_FUNCPTR *VertexAttribI2uiv)(GLuint index, const GLuint *v);
    extern void (CODEGEN_FUNCPTR *VertexAttribI3uiv)(GLuint index, const GLuint *v);
    extern void (CODEGEN_FUNCPTR *VertexAttribI4uiv)(GLuint index, const GLuint *v);
    extern void (CODEGEN_FUNCPTR *VertexAttribI4bv)(GLuint index, const GLbyte *v);
    extern void (CODEGEN_FUNCPTR *VertexAttribI4sv)(GLuint index, const GLshort *v);
    extern void (CODEGEN_FUNCPTR *VertexAttribI4ubv)(GLuint index, const GLubyte *v);
    extern void (CODEGEN_FUNCPTR *VertexAttribI4usv)(GLuint index, const GLushort *v);
    extern void (CODEGEN_FUNCPTR *GetUniformuiv)(GLuint program, GLint location, GLuint *params);
    extern void (CODEGEN_FUNCPTR *BindFragDataLocation)(GLuint program, GLuint color, const GLchar *name);
    extern GLint (CODEGEN_FUNCPTR *GetFragDataLocation)(GLuint program, const GLchar *name);
    extern void (CODEGEN_FUNCPTR *Uniform1ui)(GLint location, GLuint v0);
    extern void (CODEGEN_FUNCPTR *Uniform2ui)(GLint location, GLuint v0, GLuint v1);
    extern void (CODEGEN_FUNCPTR *Uniform3ui)(GLint location, GLuint v0, GLuint v1, GLuint v2);
    extern void (CODEGEN_FUNCPTR *Uniform4ui)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
    extern void (CODEGEN_FUNCPTR *Uniform1uiv)(GLint location, GLsizei count, const GLuint *value);
    extern void (CODEGEN_FUNCPTR *Uniform2uiv)(GLint location, GLsizei count, const GLuint *value);
    extern void (CODEGEN_FUNCPTR *Uniform3uiv)(GLint location, GLsizei count, const GLuint *value);
    extern void (CODEGEN_FUNCPTR *Uniform4uiv)(GLint location, GLsizei count, const GLuint *value);
    extern void (CODEGEN_FUNCPTR *TexParameterIiv)(GLenum target, GLenum pname, const GLint *params);
    extern void (CODEGEN_FUNCPTR *TexParameterIuiv)(GLenum target, GLenum pname, const GLuint *params);
    extern void (CODEGEN_FUNCPTR *GetTexParameterIiv)(GLenum target, GLenum pname, GLint *params);
    extern void (CODEGEN_FUNCPTR *GetTexParameterIuiv)(GLenum target, GLenum pname, GLuint *params);
    extern void (CODEGEN_FUNCPTR *ClearBufferiv)(GLenum buffer, GLint drawbuffer, const GLint *value);
    extern void (CODEGEN_FUNCPTR *ClearBufferuiv)(GLenum buffer, GLint drawbuffer, const GLuint *value);
    extern void (CODEGEN_FUNCPTR *ClearBufferfv)(GLenum buffer, GLint drawbuffer, const GLfloat *value);
    extern void (CODEGEN_FUNCPTR *ClearBufferfi)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
    extern const GLubyte * (CODEGEN_FUNCPTR *GetStringi)(GLenum name, GLuint index);
    
    #include 'runtime_common.hpp'
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
        std::string strstack;
    
    
    {  private:
    std::vector<std::string> vecdump_;
};
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    //
//  comm_frequency_limit.h
//  comm
//
//  Created by liucan on 13-11-23.
//
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.
    
    //============================================================================
// Name        : has_member.h
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
    
    jbyteArray JNU_Buffer2JbyteArray(JNIEnv* _env, const AutoBuffer& ab);
jbyteArray JNU_Buffer2JbyteArray(JNIEnv* _env, const void* _buffer, size_t _length);
void JNU_FreeJbyteArray(JNIEnv* _env, jbyteArray bytes);
    
    
#endif /* SCOP_JENV_H_ */
