
        
          def zsh_completion_caveats
    if keg && keg.completion_installed?(:zsh) then <<-EOS.undent
      zsh completion has been installed to:
        #{HOMEBREW_PREFIX}/share/zsh/site-functions
      EOS
    end
  end
    
      def kernel
    `uname -m`.chomp
  end
    
      def cxxstdlib_check(check_type)
    self.class.cxxstdlib_check check_type
  end
    
          GivenDailyLike.increment_for(user.id)
      expect(value_for(user.id, dt)).to eq(1)
      expect(limit_reached_for(user.id, dt)).to eq(false)
    
      smoke_user = User.seed do |u|
    u.id = 0
    u.name = 'smoke_user'
    u.username = 'smoke_user'
    u.username_lower = 'smoke_user'
    u.password = 'P4ssw0rd'
    u.active = true
    u.approved = true
    u.approved_at = Time.now
    u.trust_level = TrustLevel[3]
  end.first
    
        Category.transaction do
      lounge.group_names = ['trust_level_3']
      unless lounge.save
        puts lounge.errors.full_messages
        raise 'Failed to set permissions on trust level 3 lounge category!'
      end
    
        def finalize_session
      @threads.map(&:join)
    end
  end
end

    
          it 'builds with a single dependency' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              command: 'build',
              dependencies: ['TestDependency']
            )
          end').runner.execute(:test)
    
          it 'Does not use pattern matching for tag name if so requested' do
        result = Fastlane::FastFile.new.parse('lane :test do
          changelog_from_git_commits()
        end').runner.execute(:test)
    
            expect(result[1]).to start_with('security set-keychain-settings')
        expect(result[1]).to include('-t 300')
        expect(result[1]).to_not(include('-l'))
        expect(result[1]).to_not(include('-u'))
        expect(result[1]).to include('~/Library/Keychains/test.keychain')
        expect(result[2]).to start_with('security list-keychains -s')
        expect(result[2]).to end_with(File.expand_path('~/Library/Keychains/test.keychain').to_s)
      end
    
          it 'handles the extensions parameter with multiple elements correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extensions: ['m', 'h'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.{m,h}')
      end
    
          context 'when specify strict option' do
        it 'adds strict option' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              strict: true
            )
          end').runner.execute(:test)
    
        describe 'shell escaping' do
      let(:keychain_name) { 'keychain with spaces.keychain' }
      let(:shell_escaped_name) { keychain_name.shellescape }
      let(:name_regex) { Regexp.new(Regexp.escape(shell_escaped_name)) }
    
          it '#environment_variable_name_profile_path uses the correct env variable' do
        result = Match::Utils.environment_variable_name_profile_path(app_identifier: 'tools.fastlane.app', type: 'appstore')
        expect(result).to eq('sigh_tools.fastlane.app_appstore_profile-path')
      end
    
        if resource.errors.empty?
      resource.unlock_access! if unlockable?(resource)
      if Devise.sign_in_after_reset_password
        flash_message = resource.active_for_authentication? ? :updated : :updated_not_active
        set_flash_message!(:notice, flash_message)
        sign_in(resource_name, resource)
      else
        set_flash_message!(:notice, :updated_not_active)
      end
      respond_with resource, location: after_resetting_password_path_for(resource)
    else
      set_minimum_password_length
      respond_with resource
    end
  end
    
    class Devise::SessionsController < DeviseController
  prepend_before_action :require_no_authentication, only: [:new, :create]
  prepend_before_action :allow_params_authentication!, only: :create
  prepend_before_action :verify_signed_out_user, only: :destroy
  prepend_before_action(only: [:create, :destroy]) { request.env['devise.skip_timeout'] = true }
    
    MESSAGE
  end
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
    end
    
        if controller = options[:controller]
      controller = (controller == true ? module_name : controller)
      CONTROLLERS[module_name] = controller
    end
    
          # The main accessor for the warden proxy instance
      def warden
        request.env['warden'] or raise MissingWarden
      end
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
            # This is called to upgrade this V1 config to V2. The parameter given
        # is the full V2 configuration object, so you can do anything to it
        # that you want.
        #
        # No return value is expected, modifications should be made directly
        # to the new V2 object.
        #
        # @param [V2::Root] new
        def upgrade(new)
        end
    
              @registered.each do |plugin|
            plugin.config.each do |key, klass|
              result[key] = klass
            end
          end
    
            # Defines an additionally available host implementation with
        # the given key.
        #
        # @param [String] name Name of the host.
        # @param [String] parent Name of the parent host (if any)
        def self.host(name, parent=nil, &block)
          components.hosts.register(name.to_sym) do
            parent = parent.to_sym if parent
    
            # Sends a kerberos request, and reads the response through the connection
        #
        # @param req [Rex::Proto::Kerberos::Model::KdcRequest] the request to send
        # @return [<Rex::Proto::Kerberos::Model::KrbError, Rex::Proto::Kerberos::Model::KdcResponse>] The kerberos message
        # @raise [RuntimeError] if the transport protocol is unknown or the response can't be parsed.
        # @raise [NotImplementedError] if the transport protocol isn't supported
        def send_recv(req)
          send_request(req)
          res = recv_response
    
              # Encodes the Rex::Proto::Kerberos::CredentialCache::Principal into an String
          #
          # @return [String] encoded principal
          def encode
            encoded = ''
            encoded << encode_name_type
            encoded << [components.length].pack('N')
            encoded << encode_realm
            encoded << encode_components
    
            end
      end
    end
  end
end
    
              # @!attribute type
          #   @return [Integer] The algorithm used to generate the checksum
          attr_accessor :type
          # @!attribute checksum
          #   @return [String] The checksum itself
          attr_accessor :checksum
    
              # Decodes a Rex::Proto::Kerberos::Model::EncKdcResponse from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
        %w[iOS macOS].each do |platform|
        abstract_target '#{platform} Pods' do
            project '#{platform} Modules.xcodeproj'
    
            # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end

    
    ```
#{plugins_string}
```
#{markdown_podfile}
EOS
      end
    
        mkdir_p page_dir
    file = '#{page_dir}/#{filename}.#{extension}'
    if File.exist?(file)
      abort('rake aborted!') if ask('#{file} already exists. Do you want to overwrite?', ['y', 'n']) == 'n'
    end
    puts 'Creating new page: #{file}'
    open(file, 'w') do |page|
      page.puts '---'
      page.puts 'layout: page'
      page.puts 'title: \'#{title}\''
      page.puts 'date: #{Time.now.strftime('%Y-%m-%d %H:%M')}'
      page.puts 'comments: true'
      page.puts 'sharing: true'
      page.puts 'footer: true'
      page.puts '---'
    end
  else
    puts 'Syntax error: #{args.filename} contains unsupported characters'
  end
end
    
        def generate(site)
      site.write_category_indexes
    end
    
        def handle_gist_redirecting(data)
      redirected_url = data.header['Location']
      if redirected_url.nil? || redirected_url.empty?
        raise ArgumentError, 'GitHub replied with a 302 but didn't provide a location in the response headers.'
      end
    
      # Improved version of Liquid's truncate:
  # - Doesn't cut in the middle of a word.
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncate(input, length)
    if input.length > length && input[0..(length-1)] =~ /(.+)\b.+$/im
      $1.strip + ' &hellip;'
    else
      input
    end
  end