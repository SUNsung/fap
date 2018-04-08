
        
        // Generate constructors.
#include 'ipc/struct_constructor_macros.h'
#include 'content/nw/src/common/common_message_generator.h'
    
    IPC_SYNC_MESSAGE_ROUTED3_1(ShellViewHostMsg_Call_Static_Method_Sync,
                           std::string /* type name */,
                           std::string /* method name */,
                           base::ListValue /* arguments */,
                           base::ListValue /* result */)
    
    namespace base {
class ListValue;
}
    
    #endif  // CONTENT_SHELL_PATHS_MAC_H_

    
    Clipboard::Clipboard(int id,
           const base::WeakPtr<DispatcherHost>& dispatcher_host,
           const base::DictionaryValue& option)
    : Base(id, dispatcher_host, option) {
}
    
    
    {}  // namespace nw
    
    
void MenuItem::UpdateKeys(GtkAccelGroup *gtk_accel_group){
  this->gtk_accel_group = gtk_accel_group;
  if (enable_shortcut && GTK_IS_ACCEL_GROUP(gtk_accel_group)){
    gtk_widget_add_accelerator(
      menu_item_,
      'activate',
      gtk_accel_group,
      keyval,
      modifiers_mask,
      GTK_ACCEL_VISIBLE);
  }
  if (submenu_ != NULL){
    submenu_->UpdateKeys(gtk_accel_group);
  }
  return;
}
    
    /// A millisecond internal applied to extension initialization.
extern const size_t kExtensionInitializeLatency;
    
    using AddExternalCallback =
    std::function<Status(const std::string&, const PluginResponse&)>;
    
      /**
   * @brief Sets up the process as an osquery shell.
   *
   * The shell is lighter than a daemon and disables (by default) features.
   */
  void initShell() const;
    
    static int osquery_close(dev_t dev, int flag, int fmt, struct proc *p) {
  // Only one daemon should request a close.
  lck_mtx_lock(osquery.mtx);
  if (osquery.open_count == 1) {
    unsubscribe_all_events();
    cleanup_user_kernel_buffer();
    osquery.open_count--;
  }
  lck_mtx_unlock(osquery.mtx);
    }
    
      /*
   * @brief a helper variable for keeping track of the compressed tar.
   *
   * This variable is the absolute location of the tar archive created from
   * zstd of the archive.
   */
  boost::filesystem::path compressPath_;
    
    
    {  std::vector<char> hostname(size, 0x0);
  std::string hostname_string;
  if (hostname.data() != nullptr) {
    gethostname(hostname.data(), size - 1);
    hostname_string = std::string(hostname.data());
  }
  boost::algorithm::trim(hostname_string);
  return hostname_string;
}
    
    #include <stdint.h>
    
    
    
    // Unless required by applicable law or agreed to in writing, software distributed under the License is
// distributed on an 'AS IS' basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
// either express or implied. See the License for the specific language governing permissions and
// limitations under the License.