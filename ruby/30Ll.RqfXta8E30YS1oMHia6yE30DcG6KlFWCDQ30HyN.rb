
        
          def test_assert_not_called
    assert_not_called(@object, :decrement) do
      @object.increment
    end
  end
    
        def assert_welcome(resp)
      resp = Array(resp)
    
          begin
        thread.join
    
          broadcaster = server.broadcaster_for(broadcasting)
      broadcaster.broadcast(message)
    
      def cable_config
    { adapter: 'redis', driver: 'ruby' }
  end
end
    
            msg = ' Please append `--trace` to the `#{cmd.name}` command '
        dashes = '-' * msg.length
        Jekyll.logger.error '', dashes
        Jekyll.logger.error 'Jekyll #{Jekyll::VERSION} ', msg
        Jekyll.logger.error '', ' for any additional information or backtrace. '
        Jekyll.logger.abort_with '', dashes
      end
      # rubocop: enable RescueException
    end
  end
end

    
          # Public: A list of processors that you provide via plugins.
      # This is really only available if you are not in safe mode, if you are
      # in safe mode (re: GitHub) then there will be none.
    
        def excluded?(entry)
      glob_include?(site.exclude, relative_to_source(entry)).tap do |excluded|
        if excluded
          Jekyll.logger.debug(
            'EntryFilter:',
            'excluded #{relative_to_source(entry)}'
          )
        end
      end
    end
    
            expect(result).to eq('/usr/local/bin/cloc --exclude-dir=test1,test2,build --by-file --xml  --out=build/cloc.xml')
      end
    
    Applications attributed to Apple are excluded from the output.
    
      desc 'update main and version in bower.json'
  task :generate do
    require 'bootstrap-sass'
    Dir.chdir Bootstrap.gem_path do
      spec       = JSON.parse(File.read 'bower.json')
    
          def request_authorization_consent_form
        add_claims_to_scopes
        endpoint = Api::OpenidConnect::AuthorizationPoint::EndpointStartPoint.new(current_user)
        handle_start_point_response(endpoint)
      end
    
          rescue_from OpenIDConnect::ValidationFailed,
                  ActiveRecord::RecordInvalid, Api::OpenidConnect::Error::InvalidSectorIdentifierUri do |e|
        validation_fail_as_json(e)
      end
    
            def initialize(node, variable)
          unless VARIABLE_ASSIGNMENT_TYPES.include?(node.type)
            raise ArgumentError,
                  'Node type must be any of #{VARIABLE_ASSIGNMENT_TYPES}, ' \
                  'passed #{node.type}'
          end
    
            def on_case(case_node)
          case_node.when_branches.each_with_object([]) do |when_node, previous|
            when_node.each_condition do |condition|
              next unless repeated_condition?(previous, condition)
    
          def expect_no_offenses(source, file = nil)
        inspect_source(source, file)
    
          # The body of the method definition.
      #
      # @note this can be either a `begin` node, if the method body contains
      #       multiple expressions, or any other node, if it contains a single
      #       expression.
      #
      # @return [Node] the body of the method definition
      def body
        node_parts[0]
      end