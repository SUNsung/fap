
        
        Then(/^the releases path is created$/) do
  run_vagrant_command(test_dir_exists(TestApp.releases_path))
end
    
        def role_properties_for(names, &block)
      servers.role_properties_for(names, &block)
    end
    
          def scm_name
        fetch(:scm)
      end
    
            # Skip validation behavior if no validators are registered for this key
        return super unless validators.key?(key)
    
    def source_version
  @source_version ||= File.read(File.expand_path('../VERSION', __FILE__)).strip
end
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
          it 'detects closing brace on same line as last multiline element' do
        src = construct(false, a, make_multi(multi), false)
        inspect_source(src)
    
          it 'detects closing brace on separate line from last element' do
        inspect_source(source)
    
          # Checks whether this node is an `unless` statement. (This is not true
      # of ternary operators and `if` statements.)
      #
      # @return [Boolean] whether the node is an `unless` statement
      def unless?
        keyword == 'unless'
      end
    
          # A shorthand for getting the last argument of the node.
      # Equivalent to `arguments.last`.
      #
      # @return [Node, nil] the last argument of the node,
      #                     or `nil` if there are no arguments
      def last_argument
        arguments[-1]
      end