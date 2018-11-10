
        
            # Is the given key a platform block or a lane?
    def is_platform_block?(key)
      UI.crash!('No key given') unless key
    
          command.args.each do |arg|
        arg_value = arg.value
        if arg.value_type.to_s.to_sym == :string_closure
          closure = proc { |string_value| closure_argument_value = string_value }
          arg_value = closure
        end
        parameter_map[arg.name.to_sym] = arg_value
      end
    
            message = 'builds/test/#{prefix}#{build_number} (fastlane)'
        tag = 'builds/test/#{prefix}#{build_number}'
        expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape}')
      end
    
              expect(value).to eq(nil)
        end
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
        res = 0
    b.each_byte { |byte| res |= byte ^ l.shift }
    res == 0
  end
end
    
          # The main accessor for the warden proxy instance
      def warden
        request.env['warden'] or raise MissingWarden
      end
    
          def remember_key(resource, scope)
        resource.rememberable_options.fetch(:key, 'remember_#{scope}_token')
      end
    end
  end
end

    
            expire_data_after_sign_in!
    
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
    
    describe 'Kernel.srand' do
  it 'is a private method' do
    Kernel.should have_private_instance_method(:srand)
  end
    
      def test_file_exists(path)
    exists?('f', path)
  end
    
            standard_rake_options.each { |args| opts.on(*args) }
        opts.environment('RAKEOPT')
      end.parse!
    end
    
          def self.[](host)
        host.is_a?(Server) ? host : new(host)
      end
    
        # we assume that the first file that requires 'sinatra' is the
    # app_file. all other path related options are calculated based
    # on this path by default.
    set :app_file, caller_files.first || $0
    
          def safe?(env)
        %w[GET HEAD OPTIONS TRACE].include? env['REQUEST_METHOD']
      end
    
      include_examples 'multiline literal brace layout method argument' do
    let(:open) { '{' }
    let(:close) { '}' }
    let(:a) { 'a: 1' }
    let(:b) { 'b: 2' }
    let(:multi_prefix) { 'b: ' }
    let(:multi) { ['[', '1', ']'] }
  end
    
          # A shorthand for getting the first argument of the node.
      # Equivalent to `arguments.first`.
      #
      # @return [Node, nil] the first argument of the node,
      #                     or `nil` if there are no arguments
      def first_argument
        arguments[0]
      end