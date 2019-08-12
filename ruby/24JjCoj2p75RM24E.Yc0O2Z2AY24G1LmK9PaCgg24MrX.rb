
        
          desc 'Create a nicely formatted history page for the jekyll site based on the repo history.'
  task :history do
    siteify_file('History.markdown', { 'title' => 'History' })
  end
    
    def docs_folder
  'docs'
end
    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
        def upload_images(language)
      Supply::IMAGES_TYPES.each do |image_type|
        search = File.join(metadata_path, language, Supply::IMAGES_FOLDER_NAME, image_type) + '.#{IMAGE_FILE_EXTENSIONS}'
        path = Dir.glob(search, File::FNM_CASEFOLD).last
        next unless path
    
            mock_client_response(:get_builds_for_train, with: hash_including(train_version: '1.0')) do
          [
            {
              id: 1,
              appAdamId: 10,
              trainVersion: '1.0',
              uploadDate: '2017-01-01T12:00:00.000+0000',
              externalState: 'testflight.build.state.export.compliance.missing'
            }
          ]
        end
    
          UI.verbose('Fetching a new access token from Google...')
    
              directories.find do |category|
            path = File.join(category_directory(category), file_name)
            @repository.blob_at(@commit.id, path)
          end
        end
      end
    end
  end
end

    
            it { expect(presenter.can_approve?).to eq(false) }
      end
    end
  end
    
        subject.unfold_diff_files([position])
  end
end

    
    class Devise::ConfirmationsController < DeviseController
  # GET /resource/confirmation/new
  def new
    self.resource = resource_class.new
  end
    
          respond_to_on_destroy
    end
  end
    
        # The path used after unlocking the resource
    def after_unlock_path_for(resource)
      new_session_path(resource)  if is_navigational_format?
    end
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
      def initialize(info = {})
    super(merge_info(info,
      'Name'          => 'Bind TCP Stager (RC4 Stage Encryption, Metasm)',
      'Description'   => 'Connect back to the attacker',
      'Author'        => ['hdm', 'skape', 'sf', 'mihi', 'max3raza', 'RageLtMan'],
      'License'       => MSF_LICENSE,
      'Platform'      => 'win',
      'Arch'          => ARCH_X64,
      'Handler'       => Msf::Handler::BindTcp,
      'Convention'    => 'sockrdi',
      'Stager'        => { 'RequiresMidstager' => false }
      ))
  end
end

    
      # reports the hash info to metasploit backend
  def report_hash(type, hash, user)
    return unless hash.present?
    print_good('#{type}:#{user}:#{hash}')
    case type
    when 'NT'
      private_data = '#{Metasploit::Credential::NTLMHash::BLANK_LM_HASH}:#{hash}'
      private_type = :ntlm_hash
      jtr_format = 'ntlm'
    when 'LM'
      private_data = '#{hash}:#{Metasploit::Credential::NTLMHash::BLANK_NT_HASH}'
      private_type = :ntlm_hash
      jtr_format = 'lm'
    when 'SHA-512 PBKDF2'
      private_data = hash
      private_type = :nonreplayable_hash
      jtr_format = 'PBKDF2-HMAC-SHA512'
    when 'SHA-512'
      private_data = hash
      private_type = :nonreplayable_hash
      jtr_format = 'xsha512'
    when 'SHA-1'
      private_data = hash
      private_type = :nonreplayable_hash
      jtr_format = 'xsha'
    end
    create_credential(
      jtr_format: jtr_format,
      workspace_id: myworkspace_id,
      origin_type: :session,
      session_id: session_db_id,
      post_reference_name: self.refname,
      username: user,
      private_data: private_data,
      private_type: private_type
    )
    print_status('Credential saved in database.')
  end
    
            This module expects a URL to be provided using the URL option.
        Alternatively, multiple URLs can be provided by supplying the
        path to a file containing a list of URLs in the URL_LIST option.
    
        # XXX: $HOME may not work in some cases
    register_dir_for_cleanup('$HOME/.groovy/grapes/#{vendor}')
  end
    
        #
    # Automatically allow the webcam to run on the target machine
    #
    args = ''
    if remote_browser_path =~ /Chrome/
      args = '--allow-file-access-from-files --use-fake-ui-for-media-stream'
    elsif remote_browser_path =~ /Firefox/
      profile_name = Rex::Text.rand_text_alpha(8)
      o = cmd_exec('#{remote_browser_path} --CreateProfile #{profile_name} #{tmp_dir}\\#{profile_name}')
      profile_path = (o.scan(/created profile '.+' at '(.+)'/).flatten[0] || '').strip
      setting = %|user_pref('media.navigator.permission.disabled', true);|
      begin
        write_file(profile_path, setting)
      rescue RuntimeError => e
        elog('webcam_chat failed: #{e.class} #{e}')
        raise 'Unable to write the necessary setting for Firefox.'
      end
      args = '-p #{profile_name}'
    end
    
      # Function to install payload as a service
  #-------------------------------------------------------------------------------
  def install_service(path)
    print_status('Creating service #{@service_name}')
    
    @@ login
<form action='/'>
  <label for='user'>User Name:</label>
  <input name='user' value='' />
  <input type='submit' value='GO!' />
</form>
    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
          def cookie_paths(path)
        path = '/' if path.to_s.empty?
        paths = []
        Pathname.new(path).descend { |p| paths << p.to_s }
        paths
      end
    
            modes       = Array options[:escape]
        @escaper    = options[:escaper]
        @html       = modes.include? :html
        @javascript = modes.include? :javascript
        @url        = modes.include? :url
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
        it 'denies requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
          it { expect(module_node.body.begin_type?).to be(true) }
    end
    
          it_behaves_like 'single capture'
    end
    
        def self.cache_root(config_store)
      root = config_store.for('.').for_all_cops['CacheRootDirectory']
      root ||= if ENV.key?('XDG_CACHE_HOME')
                 # Include user ID in the path to make sure the user has write
                 # access.
                 File.join(ENV['XDG_CACHE_HOME'], Process.uid.to_s)
               else
                 File.join(ENV['HOME'], '.cache')
               end
      File.join(root, 'rubocop_cache')
    end
    
      it 'does not register offense when guard clause is before `ensure`' do
    expect_no_offenses(<<~RUBY)
      def foo
        begin
          return another_object if something_different?
        ensure
          bar
        end
      end
    RUBY
  end
    
    # define charCodeAt on String
class String
  def charCodeAt(k)
    # use scan, nil check, and unpack instead of ord for 1.8
    # 1.9 can simply use self[k].ord
    # http://stackoverflow.com/questions/7793177/split-utf8-string-regardless-of-ruby-version
    c = self.scan(/./mu)[k]
    return nil if c.nil?
    c.unpack('U')[0]
  end
end
    
          def page_dir
        @page_dir
      end
    
          def author
        first = page.last_version
        return DEFAULT_AUTHOR unless first
        first.author.name.respond_to?(:force_encoding) ? first.author.name.force_encoding('UTF-8') : first.author.name
      end
    
        assert_match /Edit Page/,             last_response.body, ''Edit Page' link is blocked in compare template'
    assert_match /Revert Changes/,        last_response.body, ''Revert Changes' link is blocked in compare template'
  end
    
    context 'Frontend Unicode support' do
  include Rack::Test::Methods
    
    desc 'Update gemspec'
task :gemspec => :validate do
  # read spec file and split out manifest section
  spec = File.read(gemspec_file)
  head, manifest, tail = spec.split('  # = MANIFEST =\n')
    
      s.rdoc_options = ['--charset=UTF-8']
  s.extra_rdoc_files = %w[README.md LICENSE]
    
        def initialize(dir, existing, attempted, message = nil)
      @dir            = dir
      @existing_path  = existing
      @attempted_path = attempted
      super(message || 'Cannot write #{@dir}/#{@attempted_path}, found #{@dir}/#{@existing_path}.')
    end
  end
end
    
      describe 'POST /chat_channel_memberships' do
    it 'creates chat channel invitation' do
      user.add_role(:super_admin)
      mems_num = ChatChannelMembership.all.size
      post '/chat_channel_memberships', params: {
        chat_channel_membership: {
          user_id: second_user.id, chat_channel_id: chat_channel.id
        }
      }
      expect(ChatChannelMembership.all.size).to eq(mems_num + 1)
      expect(ChatChannelMembership.last.status).to eq('pending')
    end
    
      def user_org_admin?
    user.org_admin?(record.organization_id)
  end
end

    
      def article
    @article = Article.find(params[:id])
    not_found unless @article.published
    
      def self.buff!(article_id, text, buffer_profile_id_code, social_service_name = 'twitter', tag_id = nil)
    buffer_response = send_to_buffer(text, buffer_profile_id_code)
    create(
      article_id: article_id,
      tag_id: tag_id,
      body_text: text,
      buffer_profile_id_code: buffer_profile_id_code,
      social_service_name: social_service_name,
      buffer_response: buffer_response,
      status: 'sent_direct',
    )
  end
    
      def to_s_extension; 'txz'; end
    
      private
  def input(package)
    # Notes:
    # * npm respects PREFIX
    settings = {
      'cache' => build_path('npm_cache'),
      'loglevel' => 'warn',
      'global' => 'true'
    }
    
        File.write(build_path('build-info'), `pkg_info -X pkg_install | egrep '^(MACHINE_ARCH|OPSYS|OS_VERSION|PKGTOOLS_VERSION)'`)
    
        platforms.each do |platform|
      logger.info('Generating service manifest.', :platform => platform.class.name)
      platform.program = command.first
      platform.name = attributes[:pleaserun_name]
      platform.args = command[1..-1]
      platform.description = if attributes[:description_given?]
        attributes[:description]
      else
        platform.name
      end
      pleaserun_attributes.each do |attribute_name|
        attribute = 'pleaserun_#{attribute_name}'.to_sym
        if attributes.has_key?(attribute) and not attributes[attribute].nil?
          platform.send('#{attribute_name}=', attributes[attribute])
        end
      end
    
        # Generate the package 'Prototype' file
    File.open('#{build_path}/Prototype', 'w') do |prototype|
      prototype.puts('i pkginfo')
      prototype.puts('i preinstall') if self.scripts['pre-install']
      prototype.puts('i postinstall') if self.scripts['post-install']