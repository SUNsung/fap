
        
        # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
              new_blog_path = File.expand_path(args.join(' '), Dir.pwd)
          FileUtils.mkdir_p new_blog_path
          if preserve_source_location?(new_blog_path, options)
            Jekyll.logger.error 'Conflict:', '#{new_blog_path} exists and is not empty.'
            Jekyll.logger.abort_with '', 'Ensure #{new_blog_path} is empty or else ' \
                      'try again with `--force` to proceed and overwrite any files.'
          end
    
                Process.detach(pid)
            Jekyll.logger.info 'Server detached with pid '#{pid}'.', \
                               'Run `pkill -f jekyll' or `kill -9 #{pid}'' \
                               ' to stop the server.'
          else
            t = Thread.new { server.start }
            trap('INT') { server.shutdown }
            t.join
          end
        end
    
          # Public: A list of processors that you provide via plugins.
      # This is really only available if you are not in safe mode, if you are
      # in safe mode (re: GitHub) then there will be none.
    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
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
    
          # This deletes the block with the given key if it exists.
      def delete(key)
        key    = Regexp.quote(key)
        regexp = /^#\s*VAGRANT-BEGIN:\s*#{key}$.*^#\s*VAGRANT-END:\s*#{key}$\r?\n?/m
        @value.gsub!(regexp, '')
      end
    
            def update
          authorize! :update, stock_location
          if stock_location.update_attributes(stock_location_params)
            respond_with(stock_location, status: 200, default_template: :show)
          else
            invalid_resource!(stock_location)
          end
        end