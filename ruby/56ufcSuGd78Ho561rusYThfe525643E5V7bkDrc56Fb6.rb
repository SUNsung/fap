
        
          # Returns real navigational formats which are supported by Rails
  def navigational_formats
    @navigational_formats ||= Devise.navigational_formats.select { |format| Mime::EXTENSION_LOOKUP[format.to_s] }
  end
    
              path
        end
      end
    
    module Devise
  module Controllers
    # Create url helpers to be used with resource/scope configuration. Acts as
    # proxies to the generated routes created by devise.
    # Resource param can be a string or symbol, a class, or an instance object.
    # Example using a :user resource:
    #
    #   new_session_path(:user)      => new_user_session_path
    #   session_path(:user)          => user_session_path
    #   destroy_session_path(:user)  => destroy_user_session_path
    #
    #   new_password_path(:user)     => new_user_password_path
    #   password_path(:user)         => user_password_path
    #   edit_password_path(:user)    => edit_user_password_path
    #
    #   new_confirmation_path(:user) => new_user_confirmation_path
    #   confirmation_path(:user)     => user_confirmation_path
    #
    # Those helpers are included by default to ActionController::Base.
    #
    # In case you want to add such helpers to another class, you can do
    # that as long as this new class includes both url_helpers and
    # mounted_helpers. Example:
    #
    #     include Rails.application.routes.url_helpers
    #     include Rails.application.routes.mounted_helpers
    #
    module UrlHelpers
      def self.remove_helpers!
        self.instance_methods.map(&:to_s).grep(/_(url|path)$/).each do |method|
          remove_method method
        end
      end
    
          def headers_for(action, opts)
        headers = {
          subject: subject_for(action),
          to: resource.email,
          from: mailer_sender(devise_mapping),
          reply_to: mailer_reply_to(devise_mapping),
          template_path: template_paths,
          template_name: action
        }.merge(opts)
    
      class SendPrivate < Base
    def perform(*_args)
      # don't federate in cucumber
    end
  end
    
        it 'generates the aspects_manage_contacts_json fixture', fixture: true do
      # adds one not mutual contact
      bob.share_with(FactoryGirl.create(:person), @aspect)
    
          it 'doesn't post' do
        expect(alice).not_to receive(:like!)
        post :create, params: like_hash
        expect(response.code).to eq('422')
      end
    end
    
        it 'marks all notifications in the current filter as read' do
      request.env['HTTP_REFERER'] = 'I wish I were spelled right'
      FactoryGirl.create(:notification, recipient: alice, target: post)
      FactoryGirl.create(:notification, recipient: alice, type: 'Notifications::StartedSharing')
      expect(Notification.where(unread: true).count).to eq(2)
      get :read_all, params: {type: 'started_sharing'}
      expect(Notification.where(unread: true).count).to eq(1)
    end
    
          it 'returns an empty array for a post with no reshares' do
        get :index, params: {post_id: @post.id}, format: :json
        expect(JSON.parse(response.body)).to eq([])
      end
    
          context 'getting started' do
        it 'add the inviter to gon' do
          user = FactoryGirl.create(:user, getting_started: true, invited_by: alice)
          sign_in user
    
      def build_path(path=nil)
    @build_path ||= Stud::Temporary.directory('package-#{type}-build')
    
        # Publish the package.
    repo_path = build_path('#{name}_repo')
    safesystem('pkgrepo', 'create', repo_path)
    safesystem('pkgrepo', 'set', '-s', repo_path, 'publisher/prefix=#{attributes[:p5p_publisher]}')
    safesystem('pkgsend', '-s', repo_path,
      'publish', '-d', '#{staging_path}', '#{build_path}/#{name}.p5m')
    safesystem('pkgrecv', '-s', repo_path, '-a',
      '-d', build_path('#{name}.p5p'), name)
    
      def generate_mtree
    ::Dir.chdir(build_path) do
      cmd = 'LANG=C bsdtar '
      cmd += '-czf .MTREE '
      cmd += '--format=mtree '
      cmd += '--options='!all,use-set,type,uid,gid,mode,time,size,md5,sha256,link' '
      cmd += ::Dir.entries('.').reject{|entry| entry =~ /^\.{1,2}$/ }.join(' ')
      safesystem(cmd)
    end
  end # def generate_mtree
    
      # Sanitize package name.
  # Some PyPI packages can be named 'python-foo', so we don't want to end up
  # with a package named 'python-python-foo'.
  # But we want packages named like 'pythonweb' to be suffixed
  # 'python-pythonweb'.
  def fix_name(name)
    if name.start_with?('python')
      # If the python package is called 'python-foo' strip the 'python-' part while
      # prepending the package name prefix.
      return [attributes[:python_package_name_prefix], name.gsub(/^python-/, '')].join('-')
    else
      return [attributes[:python_package_name_prefix], name].join('-')
    end
  end # def fix_name
    
      def create_scripts
    if script?(:after_install)
      File.write(File.join(fpm_meta_path, 'after_install'), script(:after_install))
    end
  end
    
      def architecture
    case @architecture
    when nil, 'native'
      @architecture = %x{uname -p}.chomp
    end
    # 'all' is a valid arch according to
    # http://www.bolthole.com/solaris/makeapackage.html
    
        # Add the tar compression flag if necessary
    tar_compression_flag(input_path).tap do |flag|
      args << flag unless flag.nil?
    end
    
        realpath = Pathname.new(input_path).realpath.to_s
    ::Dir.chdir(build_path) do
      safesystem('unzip', realpath)
    end