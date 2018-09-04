
        
              agent = Agent.find_by(name: 'Test Scheduler Agent')
    
          expect(exporter.as_json[:control_links]).to eq([{ :controller => guid_order(agent_list, :jane_rain_notifier_agent), :control_target => guid_order(agent_list, :jane_weather_agent) }])
    end
  end
    
    describe ConvertWebsiteAgentTemplateForMerge do
  let :old_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title' }
    }
  end
    
      it 'should have .id, .type and .name' do
    t = '[{{agent.id}}]{{agent.type}}: {{agent.name}}'
    expect(interpolate(t, @wsa1)).to eq('[#{@wsa1.id}]WebsiteAgent: XKCD')
    expect(interpolate(t, @wsa2)).to eq('[#{@wsa2.id}]WebsiteAgent: Dilbert')
    expect(interpolate(t, @efa)).to eq('[#{@efa.id}]EventFormattingAgent: Formatter')
  end
    
      platform_is_not :windows do
    it 'does not expand shell variables when given multiples arguments' do
      lambda { @object.system('echo', @shell_var) }.should output_to_fd('#{@shell_var}\n')
    end
  end
    
        lambda {
      catch :blah do
        throw :blah, :return_value, 2, 3, 4, 5
      end
    }.should raise_error(ArgumentError)
  end
    
        # Make rules use parent refs so that
    #
    #     foo
    #       color: green
    #     foo.bar
    #       color: blue
    #
    # becomes
    #
    #     foo
    #       color: green
    #       &.bar
    #         color: blue
    #
    # @param root [Tree::Node] The parent node
    def parent_ref_rules(root)
      current_rule = nil
      root.children.map! do |child|
        unless child.is_a?(Tree::RuleNode)
          parent_ref_rules(child) if child.is_a?(Tree::DirectiveNode)
          next child
        end
    
          if value.start_with?('(')
        parser = Sass::SCSS::Parser.new(value,
          @options[:filename], @options[:importer],
          @line, to_parser_offset(@offset))
        offset = line.offset + line.text.index('at-root').to_i - 1
        return Tree::AtRootNode.new(parser.parse_at_root_query)
      end
    
        # Modify the top Sass backtrace entries
    # (that is, the most deeply nested ones)
    # to have the given attributes.
    #
    # Specifically, this goes through the backtrace entries
    # from most deeply nested to least,
    # setting the given attributes for each entry.
    # If an entry already has one of the given attributes set,
    # the pre-existing attribute takes precedence
    # and is not used for less deeply-nested entries
    # (even if they don't have that attribute set).
    #
    # @param attrs [{Symbol => Object}] The information to add to the backtrace entry.
    #   See \{#sass\_backtrace}
    def modify_backtrace(attrs)
      attrs = attrs.reject {|_k, v| v.nil?}
      # Move backwards through the backtrace
      (0...sass_backtrace.size).to_a.reverse_each do |i|
        entry = sass_backtrace[i]
        sass_backtrace[i] = attrs.merge(entry)
        attrs.reject! {|k, _v| entry.include?(k)}
        break if attrs.empty?
      end
    end
    
        # @param args [Array<String>] The command-line arguments
    def initialize(args, default_syntax)
      super(args)
      @options[:sourcemap] = :auto
      @options[:for_engine] = {
        :load_paths => default_sass_path
      }
      @default_syntax = default_syntax
    end
    
          # Get the cache key pair for the given Sass URI.
      # The URI need not be checked for validity.
      #
      # The only strict requirement is that the returned pair of strings
      # uniquely identify the file at the given URI.
      # However, the first component generally corresponds roughly to the directory,
      # and the second to the basename, of the URI.
      #
      # Note that keys must be unique *across importers*.
      # Thus it's probably a good idea to include the importer name
      # at the beginning of the first component.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [(String, String)] The key pair which uniquely identifies
      #   the file at the given URI.
      def key(uri, options)
        Sass::Util.abstract(self)
      end