
        
        # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    DOC_PATH = File.join(File.expand_path(__dir__), '_puppies', 'rover.md')
COL_PATH = File.join(File.expand_path(__dir__), '_puppies')
    
              new_blog_path = File.expand_path(args.join(' '), Dir.pwd)
          FileUtils.mkdir_p new_blog_path
          if preserve_source_location?(new_blog_path, options)
            Jekyll.logger.error 'Conflict:', '#{new_blog_path} exists and is not empty.'
            Jekyll.logger.abort_with '', 'Ensure #{new_blog_path} is empty or else ' \
                      'try again with `--force` to proceed and overwrite any files.'
          end
    
            expect(new_source).to eq(['#{prefix}#{open}#{a},',
                                  '#{b}#{close}',
                                  suffix].join($RS))
      end
    end
  end
end

    
          # Returns the branch of the `if` node that gets evaluated when its
      # condition is falsey.
      #
      # @note This is normalized for `unless` nodes.
      #
      # @return [Node] the falsey branch node of the `if` node
      # @return [nil] when there is no else branch
      def else_branch
        node_parts[2]
      end
    
          # A shorthand for getting the first argument of the node.
      # Equivalent to `arguments.first`.
      #
      # @return [Node, nil] the first argument of the node,
      #                     or `nil` if there are no arguments
      def first_argument
        arguments[0]
      end
    
            def destroy
          @option_value = scope.accessible_by(current_ability, :destroy).find(params[:id])
          @option_value.destroy
          render plain: nil, status: 204
        end