
        
          def initialize(app, options = nil)
    @app = app
    if GlobalSetting.enable_cors && GlobalSetting.cors_origin.present?
      @global_origins = GlobalSetting.cors_origin.split(',').map(&:strip)
    end
  end
    
        def base_url
      @base_url || Discourse.base_url
    end
    attr_writer :base_url
  end
    
      def query
    @query ||= JavascriptCache.where(digest: params[:digest]).limit(1)
  end
    
        # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
          # Sign out all active users or scopes. This helper is useful for signing out all roles
      # in one click. This signs out ALL scopes in warden. Returns true if there was at least one logout
      # and false if there was no user logged in on all scopes.
      def sign_out_all_scopes(lock=true)
        users = Devise.mappings.keys.map { |s| warden.user(scope: s, run_callbacks: false) }
    
          def add_fragment_back_to_path(uri, path)
        [path, uri.fragment].compact.join('#')
      end
    end
  end
end

    
            # Attempt to find a user by its reset_password_token to reset its
        # password. If a user is found and token is still valid, reset its password and automatically
        # try saving the record. If not user is found, returns a new user
        # containing an error in reset_password_token attribute.
        # Attributes must contain reset_password_token, password and confirmation
        def reset_password_by_token(attributes={})
          original_token       = attributes[:reset_password_token]
          reset_password_token = Devise.token_generator.digest(self, :reset_password_token, original_token)
    
          def rememberable_value
        if respond_to?(:remember_token)
          remember_token
        elsif respond_to?(:authenticatable_salt) && (salt = authenticatable_salt.presence)
          salt
        else
          raise 'authenticatable_salt returned nil for the #{self.class.name} model. ' \
            'In order to use rememberable, you must ensure a password is always set ' \
            'or have a remember_token column in your model or implement your own ' \
            'rememberable_value in the model with custom logic.'
        end
      end
    
    # This is the version that ships with OS X 10.10, so be sure we test against it.
# At the same time, the 1.7.7 version won't install cleanly on Ruby > 2.2,
# so we use a fork that makes a trivial change to a macro invocation.
gem 'json', :git => 'https://github.com/segiddins/json.git', :branch => 'seg-1.7.7-ruby-2.2'
    
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

    
          # Custom destructuring method. This can be used to normalize
      # destructuring for different variations of the node.
      #
      # In this case, the `def` node destructures into:
      #
      #   `method_name, arguments, body`
      #
      # while the `defs` node destructures into:
      #
      #   `receiver, method_name, arguments, body`
      #
      # so we reverse the destructured array to get the optional receiver
      # at the end, where it can be discarded.
      #
      # @return [Array] the different parts of the `def` or `defs` node
      def node_parts
        to_a.reverse
      end
    end
  end
end

    
            def key_delta(alignment = :left)
          return 0 if first.same_line?(second)
          return 0 if keyword_splat? && alignment == :right
    
            private
    
          def min_size_config
        cop_config['MinSize']
      end
    
          def preference_fields(object, form)
        return unless object.respond_to?(:preferences)
    
          # finds class for a given symbol / string
      #
      # Example :
      # :products returns Spree::Product
      # :my_products returns MyProduct if MyProduct is defined
      # :my_products returns My::Product if My::Product is defined
      # if cannot constantize it returns nil
      # This will allow us to use cancan abilities on tab
      def klass_for(name)
        model_name = name.to_s
    
        it 'rejects invalid jsfiddle link' do
      expect do
        generate_new_liquid('invalid_jsfiddle_link')
      end.to raise_error(StandardError)
    end
    
      config.vm.provision :puppet do |puppet|
    puppet.manifests_path = 'test'
    puppet.manifest_file = 'vagrant.pp'
  end
end

    
        # do channel-discover if required
    if !attributes[:pear_channel].nil?
      logger.info('Custom channel specified', :channel => attributes[:pear_channel])
      channel_list = safesystemout('pear', '-c', config, 'list-channels')
      if channel_list !~ /#{Regexp.quote(attributes[:pear_channel])}/
        logger.info('Discovering new channel', :channel => attributes[:pear_channel])
        safesystem('pear', '-c', config, 'channel-discover', attributes[:pear_channel])
      end
      input_package = '#{attributes[:pear_channel]}/#{input_package}'
      logger.info('Prefixing package name with channel', :package => input_package)
    end
    
      end
    
        begin
      safesystem('#{attributes[:python_bin]} -c 'import pkg_resources'')
    rescue FPM::Util::ProcessFailed => e
      logger.error('Your python environment is missing a working setuptools module. I tried to find the 'pkg_resources' module but failed.', :python => attributes[:python_bin], :error => e)
      raise FPM::Util::ProcessFailed, 'Python (#{attributes[:python_bin]}) is missing pkg_resources module.'
    end
    
    # Support for self extracting sh files (.sh files)
#
# This class only supports output of packages.
#
# The sh package is a single sh file with a tar payload concatenated to the end.
# The script can unpack the tarball to install it and call optional post install scripts.
class FPM::Package::Sh < FPM::Package