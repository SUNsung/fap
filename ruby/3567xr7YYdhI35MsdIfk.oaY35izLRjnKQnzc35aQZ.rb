
        
            # The path used after confirmation.
    def after_confirmation_path_for(resource_name, resource)
      if signed_in?(resource_name)
        signed_in_root_path(resource)
      else
        new_session_path(resource_name)
      end
    end
    
      # GET /resource/unlock?unlock_token=abcdef
  def show
    self.resource = resource_class.unlock_access_by_token(params[:unlock_token])
    yield resource if block_given?
    
          def mailer_sender(mapping, sender = :from)
        default_sender = default_params[sender]
        if default_sender.present?
          default_sender.respond_to?(:to_proc) ? instance_eval(&default_sender) : default_sender
        elsif Devise.mailer_sender.is_a?(Proc)
          Devise.mailer_sender.call(mapping.name)
        else
          Devise.mailer_sender
        end
      end
    
      auto_updates true
  depends_on cask: 'homebrew/cask-versions/adobe-photoshop-lightroom600'
    
        remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
    def await_condition &condition
  start_time = Time.zone.now
  until condition.call
    return false if (Time.zone.now - start_time) > Capybara.default_max_wait_time
    sleep 0.05
  end
  true
end

    
      class SendPublic < Base
    def perform(*_args)
      # don't federate in cucumber
    end
  end
    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
          delete :destroy, params: {post_id: @message.id, id: @like.id}, format: :json
      expect(response.status).to eq(204)
    end
    
          it 'federates' do
        allow_any_instance_of(Participation::Generator).to receive(:create!)
        expect(Diaspora::Federation::Dispatcher).to receive(:defer_dispatch)
        post_request!
      end
    
      THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
  'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
=end
    
          def is_edit_page
        false
      end
    
      test 'clean path without leading slash' do
    assert_equal '/Mordor', clean_path('Mordor')
  end
    
        assert body.include?('<span class='username'>Charles Pence</span>'), '/latest_changes should include the Author Charles Pence'
    assert body.include?('a8ad3c0'), '/latest_changes should include the :latest_changes_count commit'
    assert !body.include?('60f12f4'), '/latest_changes should not include more than latest_changes_count commits'
    assert body.include?('<a href='Data-Two.csv/874f597a5659b4c3b153674ea04e406ff393975e'>Data-Two.csv</a>'), '/latest_changes include links to modified files in #{body}'
    assert body.include?('<a href='Hobbit/874f597a5659b4c3b153674ea04e406ff393975e'>Hobbit.md</a>'), '/latest_changes should include links to modified pages in #{body}'
  end
    
        # Extract the path string that Gollum::Wiki expects
    def extract_path(file_path)
      return nil if file_path.nil?
      last_slash = file_path.rindex('/')
      if last_slash
        file_path[0, last_slash]
      end
    end
    
    Liquid::Template.register_tag('img', Jekyll::ImageTag)

    
          rtn = ''
      (context.environments.first['site'][@array_name] || []).each do |file|
        if file !~ /^[a-zA-Z0-9_\/\.-]+$/ || file =~ /\.\// || file =~ /\/\./
          rtn = rtn + 'Include file '#{file}' contains invalid characters or sequences'
        end
    
          if File.symlink?(code_path)
        return 'Code directory '#{code_path}' cannot be a symlink'
      end
    
    end
Liquid::Template.register_filter OctopressLiquidFilters
    
      spec.add_development_dependency('rspec', '~> 3.0.0') # license: MIT (according to wikipedia)
  spec.add_development_dependency('insist', '~> 1.0.0') # license: Apache 2
  spec.add_development_dependency('pry')
    
      # Copy a path.
  #
  # Files will be hardlinked if possible, but copied otherwise.
  # Symlinks should be copied as symlinks.
  def copy(source, destination)
    logger.debug('Copying path', :source => source, :destination => destination)
    directory = File.dirname(destination)
    # lstat to follow symlinks
    dstat = File.stat(directory) rescue nil
    if dstat.nil?
      FileUtils.mkdir_p(directory, :mode => 0755)
    elsif dstat.directory?
      # do nothing, it's already a directory!
    else
      # It exists and is not a directory. This is probably a user error or a bug.
      readable_path = directory.gsub(staging_path, '')
      logger.error('You wanted to copy a file into a directory, but that's not a directory, it's a file!', :path => readable_path, :stat => dstat)
      raise FPM::InvalidPackageConfiguration, 'Tried to treat #{readable_path} like a directory, but it's a file!'
    end
    
      dont_obsolete_paths = []
  option '--dont-obsolete', 'DONT_OBSOLETE_PATH',
    'A file path for which to 'dont-obsolete' in the built PackageInfo. ' \
    'Can be specified multiple times.' do |path|
      dont_obsolete_paths << path
    end
    
    
    {  FIND_SCRIPT_FUNCTION_LINE =
    /^\s*(\w+)\s*\(\s*\)\s*\{\s*([^}]+?)?\s*(\})?\s*$/
    
      # Returns the path to the tar file containing the packed up staging directory
  def payload
    payload_tar = build_path('payload.tar')
    logger.info('Creating payload tar ', :path => payload_tar)
    
        return @architecture
  end # def architecture