
        
              def can_be_resolved_in_ui?
        # Try to parse each conflict. If the MR's mergeable status hasn't been
        # updated, ensure that we don't say there are conflicts to resolve
        # when there are no conflict files.
        files.each(&:lines)
        files.any?
      rescue Gitlab::Git::CommandError,
             Gitlab::Git::Conflict::Parser::UnresolvableError,
             Gitlab::Git::Conflict::Resolver::ConflictSideMissing,
             Gitlab::Git::Conflict::File::UnsupportedEncoding
        false
      end
      cache_method :can_be_resolved_in_ui?
    
          def arranged_checks
        return [@skips, @runs] if @skips && @runs
    
          def positive_condition_is_false?(object)
        @positive_condition && !object.instance_exec(&@positive_condition)
      end
    
          def issue_table
        Issue.arel_table
      end
    
                case platform
            when 'iOS' then self.platform :ios, '10.0'
            when 'macOS' then self.platform :macos, '10.10'
            end
    
      gem.licenses      = ['MIT']
    
    Then(/^directories referenced in :linked_files are created in shared$/) do
  dirs = TestApp.linked_files.map { |path| TestApp.shared_path.join(path).dirname }
  dirs.each do |dir|
    run_vagrant_command(test_dir_exists(dir))
  end
end
    
      def symlinked?(symlink_path, target_path)
    '[ #{symlink_path} -ef #{target_path} ]'
  end
    
          def load_built_in_scm
        require 'capistrano/scm/#{scm_name}'
        scm_class = Object.const_get(built_in_scm_plugin_class_name)
        # We use :load_immediately because we are initializing the SCM plugin
        # late in the load process and therefore can't use the standard
        # load:defaults technique.
        install_plugin(scm_class, load_immediately: true)
      end
    
          def add_property(key, value)
        if respond_to?('#{key}=')
          send('#{key}=', value)
        else
          set(key, value)
        end
      end
    
      let(:prefix) { '' } # A prefix before the opening brace.
  let(:suffix) { '' } # A suffix for the line after the closing brace.
  let(:open) { nil } # The opening brace.
  let(:close) { nil } # The closing brace.
  let(:a) { 'a' } # The first element.
  let(:b) { 'b' } # The second element.
  let(:b_comment) { '' } # Comment after the second element.
  let(:multi_prefix) { '' } # Prefix multi and heredoc with this.
  let(:multi) do # A viable multi-line element.
    <<-RUBY.strip_indent.chomp
      {
      foo: bar
      }
    RUBY
  end
  # This heredoc is unsafe to edit around because it ends on the same line as
  # the node itself.
  let(:heredoc) do
    <<-RUBY.strip_indent.chomp
      <<-EOM
      baz
      EOM
    RUBY
  end
  # This heredoc is safe to edit around because it ends on a line before the
  # last line of the node.
  let(:safe_heredoc) do
    <<-RUBY.strip_indent.chomp
      {
      a: <<-EOM
      baz
      EOM
      }
    RUBY
  end
    
          # Returns an array of all the when branches in the `case` statement.
      #
      # @return [Array<WhenNode>] an array of `when` nodes
      def when_branches
        node_parts[1...-1]
      end
    
          # Returns the body of the `for` loop.
      #
      # @return [Node, nil] The body of the `for` loop.
      def body
        node_parts[2]
      end
    end
  end
end

    
            def keyword_splat?
          [first, second].any?(&:kwsplat_type?)
        end
      end
    
          # Checks whether any argument of the node is a splat
      # argument, i.e. `*splat`.
      #
      # @return [Boolean] whether the node is a splat argument
      def splat_argument?
        arguments? &&
          (arguments.any?(&:splat_type?) || arguments.any?(&:restarg_type?))
      end
      alias rest_argument? splat_argument?