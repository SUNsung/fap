
        
            # Some actions have special handling in fast_file.rb, that means we can't directly call the action
    # but we have to use the same logic that is in fast_file.rb instead.
    # That's where this switch statement comes into play
    def run_action_requiring_special_handling(command: nil, parameter_map: nil, action_return_type: nil)
      action_return = nil
      closure_argument_value = nil # only used if the action uses it
    
          context 'with valid path to compile_commands.json' do
        context 'with no path to oclint' do
          let(:result) do
            Fastlane::FastFile.new.parse('lane :test do
              oclint( compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json' )
            end').runner.execute(:test)
          end
          let(:command) { 'cd #{File.expand_path('.').shellescape} && oclint -report-type=html -o=oclint_report.html' }
    
        it 'adds an environment Hash at the beginning' do
      message = 'A message'
      command = command_from_args({ 'PATH' => '/usr/local/bin' }, 'git', 'commit', '-m', message)
      expect(command).to eq('PATH=/usr/local/bin git commit -m #{message.shellescape}')
    end
    
        # Creates a new option
    # @param key (Symbol) the key which is used as command parameters or key in the fastlane tools
    # @param env_name (String) the name of the environment variable, which is only used if no other values were found
    # @param description (String) A description shown to the user
    # @param short_option (String) A string of length 1 which is used for the command parameters (e.g. -f)
    # @param default_value the value which is used if there was no given values and no environment values
    # @param default_value_dynamic (Boolean) Set if the default value is generated dynamically
    # @param verify_block an optional block which is called when a new value is set.
    #   Check value is valid. This could be type checks or if a folder/file exists
    #   You have to raise a specific exception if something goes wrong. Append .red after the string
    # @param is_string *DEPRECATED: Use `type` instead* (Boolean) is that parameter a string? Defaults to true. If it's true, the type string will be verified.
    # @param type (Class) the data type of this config item. Takes precedence over `is_string`. Use `:shell_string` to allow types `String`, `Hash` and `Array` that will be converted to shell-escaped strings
    # @param skip_type_validation (Boolean) is false by default. If set to true, type of the parameter will not be validated.
    # @param optional (Boolean) is false by default. If set to true, also string values will not be asked to the user
    # @param conflicting_options ([]) array of conflicting option keys(@param key). This allows to resolve conflicts intelligently
    # @param conflict_block an optional block which is called when options conflict happens
    # @param deprecated (Boolean|String) Set if the option is deprecated. A deprecated option should be optional and is made optional if the parameter isn't set, and fails otherwise
    # @param sensitive (Boolean) Set if the variable is sensitive, such as a password or API token, to prevent echoing when prompted for the parameter
    # @param display_in_shell (Boolean) Set if the variable can be used from shell
    # rubocop:disable Metrics/ParameterLists
    def initialize(key: nil,
                   env_name: nil,
                   description: nil,
                   short_option: nil,
                   default_value: nil,
                   default_value_dynamic: false,
                   verify_block: nil,
                   is_string: true,
                   type: nil,
                   skip_type_validation: false,
                   optional: nil,
                   conflicting_options: nil,
                   conflict_block: nil,
                   deprecated: nil,
                   sensitive: nil,
                   code_gen_sensitive: false,
                   code_gen_default_value: nil,
                   display_in_shell: true)
      UI.user_error!('key must be a symbol') unless key.kind_of?(Symbol)
      UI.user_error!('env_name must be a String') unless (env_name || '').kind_of?(String)
    
          it 'should not be fooled by 10 local code signing identities available' do
        allow(FastlaneCore::CertChecker).to receive(:wwdr_certificate_installed?).and_return(true)
        allow(FastlaneCore::CertChecker).to receive(:list_available_identities).and_return('     10 valid identities found\n')
        expect(FastlaneCore::UI).not_to(receive(:error))
    
              it 'throws an error if it's invalid' do
            expect do
              @config.set(:output, 132)
            end.to raise_error(''output' value must be a String! Found #{123.class} instead.')
            expect do
              @config.set(:wait_processing_interval, -1)
            end.to raise_error('Please enter a valid positive number of seconds')
          end
    
    describe 'Kernel#taint' do
  it 'returns self' do
    o = Object.new
    o.taint.should equal(o)
  end
    
      it 'creates a public method in TOPLEVEL_BINDING' do
    eval @code, TOPLEVEL_BINDING
    Object.should have_method :boom
  end
    
      def index
    @address_endpoints = @server.address_endpoints.order(:address).to_a
  end
    
      before_action do
    if params[:server_id]
      @server = organization.servers.present.find_by_permalink!(params[:server_id])
      params[:id] && @ip_pool_rule = @server.ip_pool_rules.find_by_uuid!(params[:id])
    else
      params[:id] && @ip_pool_rule = organization.ip_pool_rules.find_by_uuid!(params[:id])
    end
  end
    
      def create
    @server = organization.servers.build(safe_params(:permalink))
    if @server.save
      redirect_to_with_json organization_server_path(organization, @server)
    else
      render_form_errors 'new', @server
    end
  end
    
        def delete(name, **opts)
      options = opts.merge(value: 'deleted', expires: Time.at(0))
      self.[]=(name, options)
    end
  end
end

    
            # All available content types.
        def content_types
          c_types = namespace_stackable_with_hash(:content_types)
          Grape::ContentTypes.content_types_for c_types
        end