
        
        # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    def graceful_require
  Jekyll::External.require_with_graceful_fail('json')
  JSON.pretty_generate(DATA)
end
    
    def native_relative
  DOC_PATH.sub('#{COL_PATH}/', '')
end
    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
    end

    
          # Returns true if the given value is present in the set.
      #
      # raw_key - The key of the set to check.
      # value - The value to check for.
      def self.set_includes?(raw_key, value)
        key = cache_key_for(raw_key)
    
          # Returns the details of a GitHub repository.
      #
      # name - The path (in the form `owner/repository`) of the repository.
      def repository(name)
        with_rate_limit { octokit.repo(name) }
      end
    
            def importer_class
          LfsObjectImporter
        end
    
            val.to_i if val.present?
      end
    
            expose_attribute :iid, :title, :description, :milestone_number,
                         :created_at, :updated_at, :state, :assignees,
                         :label_names, :author
    
          def action_for_grape(env)
        endpoint = env[ENDPOINT_KEY]
        route = endpoint.route rescue nil
    
          it 'uses the specified argument as the width if * is followed by a number and $' do
        format('%1$*2$b', 10, 10).should == '      1010'
        format('%1$*2$B', 10, 10).should == '      1010'
        format('%1$*2$d', 112, 10).should == '       112'
        format('%1$*2$i', 112, 10).should == '       112'
        format('%1$*2$o', 87, 10).should == '       127'
        format('%1$*2$u', 112, 10).should == '       112'
        format('%1$*2$x', 196, 10).should == '        c4'
        format('%1$*2$X', 196, 10).should == '        C4'
    
      platform_is :windows do
    it 'does expand shell variables when given multiples arguments' do
      # See https://bugs.ruby-lang.org/issues/12231
      lambda { @object.system('echo', @shell_var) }.should output_to_fd('foo\n')
    end
  end
    
          # Returns the value of this `hash` element.
      #
      # @note For keyword splats, this returns the whole node
      #
      # @return [Node] the value of the hash element
      def value
        node_parts[1]
      end
    
          # A shorthand for getting the last argument of the node.
      # Equivalent to `arguments.last`.
      #
      # @return [Node, nil] the last argument of the node,
      #                     or `nil` if there are no arguments
      def last_argument
        arguments[-1]
      end
    
        def handle_gist_redirecting(data)
      redirected_url = data.header['Location']
      if redirected_url.nil? || redirected_url.empty?
        raise ArgumentError, 'GitHub replied with a 302 but didn't provide a location in the response headers.'
      end
    
    module OctopressFilters
  def self.pre_filter(page)
    if page.ext.match('html|textile|markdown|md|haml|slim|xml')
      input = BacktickCodeBlock::render_code_block(page.content)
      page.content = input.gsub /(<figure.+?>.+?<\/figure>)/m do
        TemplateWrapper::safe_wrap($1)
      end
    end
  end
  def self.post_filter(page)
    if page.ext.match('html|textile|markdown|md|haml|slim|xml')
      page.output = TemplateWrapper::unwrap(page.output)
    end
  end
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end