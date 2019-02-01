
        
          def translation_scope
    'devise.omniauth_callbacks'
  end
end

    
      config.middleware.use Warden::Manager do |config|
    Devise.warden_config = config
  end
    
                  define_method method do |resource_or_scope, *args|
                scope = Devise::Mapping.find_scope!(resource_or_scope)
                router_name = Devise.mappings[scope].router_name
                context = router_name ? send(router_name) : _devise_route_context
                context.send('#{action}#{scope}_#{module_name}_#{path_or_url}', *args)
              end
            end
          end
        end
      end
    
          # A callback initiated after successfully being remembered. This can be
      # used to insert your own logic that is only run after the user is
      # remembered.
      #
      # Example:
      #
      #   def after_remembered
      #     self.update_attribute(:invite_code, nil)
      #   end
      #
      def after_remembered
      end
    
    module Devise
  module Models
    # Timeoutable takes care of verifying whether a user session has already
    # expired or not. When a session expires after the configured time, the user
    # will be asked for credentials again, it means, they will be redirected
    # to the sign in page.
    #
    # == Options
    #
    # Timeoutable adds the following options to devise_for:
    #
    #   * +timeout_in+: the interval to timeout the user session without activity.
    #
    # == Examples
    #
    #   user.timedout?(30.minutes.ago)
    #
    module Timeoutable
      extend ActiveSupport::Concern
    
        # This returns whether the guest is ready to work. If this returns
    # `false`, then {#detect!} should be called in order to detect the
    # guest OS.
    #
    # @return [Boolean]
    def ready?
      !!capability_host_chain
    end
  end
end

    
            # Configures the given list of networks on the virtual machine.
        #
        # The networks parameter will be an array of hashes where the hashes
        # represent the configuration of a network interface. The structure
        # of the hash will be roughly the following:
        #
        # {
        #   type:      :static,
        #   ip:        '192.168.33.10',
        #   netmask:   '255.255.255.0',
        #   interface: 1
        # }
        #
        def configure_networks(networks)
          raise BaseError, _key: :unsupported_configure_networks
        end
    
            # Returns the internal data associated with this plugin. This
        # should NOT be called by the general public.
        #
        # @return [Hash]
        def self.data
          @data ||= {}
        end
    
        after do
      rm_r @tmp_file
    end
    
      it 'raises ArgumentError if 3 or more arguments provided' do
    lambda {
      catch :blah do
        throw :blah, :return_value, 2
      end
    }.should raise_error(ArgumentError)
    
        $Kernel_trace_var_global = 'foo'
    captured.should == 'foo'
  end
    
            -> { w.f4('', 0) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.warn_call_lineno}: warning: \n$|)
        -> { w.f4(nil, 0) }.should output(nil, %r|core/kernel/fixtures/classes.rb:#{w.warn_call_lineno}: warning: \n$|)
      end
    
      it 'returns the method name as symbol' do
    eval(@code, TOPLEVEL_BINDING).should equal :boom
  end
end

    
    def prev_version
  return prev_feature + '.0' if source_version.end_with? '.0'
  source_version.gsub(/\d+$/) { |s| s.to_i - 1 }
end
    
          def referrer(env)
        ref = env['HTTP_REFERER'].to_s
        return if !options[:allow_empty_referrer] and ref.empty?
        URI.parse(ref).host || Request.new(env).host
      rescue URI::InvalidURIError
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   CSRF
    # Supported browsers:: all
    # More infos::         http://flask.pocoo.org/docs/0.10/security/#json-security
    #                      http://haacked.com/archive/2008/11/20/anatomy-of-a-subtle-json-vulnerability.aspx
    #
    # JSON GET APIs are vulnerable to being embedded as JavaScript when the
    # Array prototype has been patched to track data. Checks the referrer
    # even on GET requests if the content type is JSON.
    #
    # If request includes Origin HTTP header, defers to HttpOrigin to determine
    # if the request is safe. Please refer to the documentation for more info.
    #
    # The `:allow_if` option can be set to a proc to use custom allow/deny logic.
    class JsonCsrf < Base
      default_options :allow_if => nil
    
      it 'should allow setting CSP3 no arg directives' do
    mock_app do
      use Rack::Protection::ContentSecurityPolicy, :block_all_mixed_content => true, :disown_opener => true, :upgrade_insecure_requests => true
    
          def partial(name)
        if name == :author_template
          self.class.partial('history_authors/#{@wiki.user_icons}')
        else
          super
        end
      end
    
      class Error < StandardError;
  end
    
            def delta(first, second, alignment = :left)
          case alignment
          when :left
            first.column - second.column
          when :right
            first.last_column - second.last_column
          else
            0
          end
        end
    
      private
  # return the identifier by prepending the reverse-domain prefix
  # to the package name, else return just the name
  def identifier
    identifier = name.dup
    if self.attributes[:osxpkg_identifier_prefix]
      identifier.insert(0, '#{self.attributes[:osxpkg_identifier_prefix]}.')
    end
    identifier
  end # def identifier
    
        php_bin = attributes[:pear_php_bin] || '/usr/bin/php'
    logger.info('Setting php_bin', :php_bin => php_bin)
    safesystem('pear', '-c', config, 'config-set', 'php_bin', php_bin)
    
          File.open(File.join(builddir, 'manifests', manifest), 'w') do |f|
        logger.info('manifest: #{f.path}')
        template = template(File.join('puppet', '#{manifest}.erb'))
        ::Dir.chdir(fileroot) do
          f.puts template.result(binding)
        end
      end
    end
  end # def generate_specfile
    
        self.architecture = metadata['architecture']
    self.description = metadata['description']
    # Sometimes the license field is multiple lines; do best-effort and just
    # use the first line.
    self.license = metadata['license'].split(/[\r\n]+/).first
    self.version = metadata['version']
    self.url = metadata['url']
    
      def parsed_options
    options.to_h.map do |option, value|
      opt = option.to_s.tr('_', '-')