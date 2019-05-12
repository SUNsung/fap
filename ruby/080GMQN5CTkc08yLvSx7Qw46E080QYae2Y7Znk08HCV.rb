
        
            def translation_scope
      'devise.unlocks'
    end
end

    
      # Returns a signed in resource from session (if one exists)
  def signed_in_resource
    warden.authenticate(scope: resource_name)
  end
    
    module Devise
  module Controllers
    # Provide the ability to store a location.
    # Used to redirect back to a desired path after sign in.
    # Included by default in all controllers.
    module StoreLocation
      # Returns and delete (if it's navigational format) the url stored in the session for
      # the given scope. Useful for giving redirect backs after sign up:
      #
      # Example:
      #
      #   redirect_to stored_location_for(:user) || root_path
      #
      def stored_location_for(resource_or_scope)
        session_key = stored_location_key_for(resource_or_scope)
    
          # If the record is persisted, remove the remember token (but only if
      # it exists), and save the record without validations.
      def forget_me!
        return unless persisted?
        self.remember_token = nil if respond_to?(:remember_token)
        self.remember_created_at = nil if self.class.expire_all_remember_me_on_sign_out
        save(validate: false)
      end
    
              # Make sure we're only working with one VM if single target
          if options[:single_target] && vms.length != 1
            vm = @env.primary_vm
            raise Errors::MultiVMTargetRequired if !vm
            vms = [vm]
          end
    
            # This contains all the registered host capabilities.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :host_capabilities
    
            # This returns all the config classes for the various pushes.
        #
        # @return [Registry]
        def push_configs
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:push])
            end
          end
        end
    
    Rake::TestTask.new(:'test:core') do |t|
  core_tests = %w[base delegator encoding extensions filter
     helpers mapped_error middleware radius rdoc
     readme request response result route_added_hook
     routing server settings sinatra static templates]
  t.test_files = core_tests.map {|n| 'test/#{n}_test.rb'}
  t.ruby_opts = ['-r rubygems'] if defined? Gem
  t.ruby_opts << '-I.'
  t.warning = true
end
    
            modes       = Array options[:escape]
        @escaper    = options[:escaper]
        @html       = modes.include? :html
        @javascript = modes.include? :javascript
        @url        = modes.include? :url
    
      describe '.random_token' do
    it 'generates a base64 encoded 32 character string' do
      expect(Base64.strict_decode64(token).length).to eq(32)
    end
  end
end

    
          # Checks whether this node body is a void context.
      #
      # @return [Boolean] whether the `def` node body is a void context
      def void_context?
        method?(:initialize) || assignment_method?
      end
    
            MESSAGES = [
          'Passing safe_level with the 2nd argument of `ERB.new` is ' \
          'deprecated. Do not use it, and specify other arguments as ' \
          'keyword arguments.',
          'Passing trim_mode with the 3rd argument of `ERB.new` is ' \
          'deprecated. Use keyword argument like ' \
          '`ERB.new(str, trim_mode: %<arg_value>s)` instead.',
          'Passing eoutvar with the 4th argument of `ERB.new` is ' \
          'deprecated. Use keyword argument like ' \
          '`ERB.new(str, eoutvar: %<arg_value>s)` instead.'
        ].freeze