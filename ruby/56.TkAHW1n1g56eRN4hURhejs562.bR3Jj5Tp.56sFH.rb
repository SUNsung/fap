
        
          include SignatureVerification
    
        def set_account
      @account = Account.find(params[:account_id])
      @user = @account.user
    end
    
          if @report_note.save
        if params[:create_and_resolve]
          @report.resolve!(current_account)
          log_action :resolve, @report
    
              property = parse_property(name, parse_interp(name), value, :old, line, value_start_offset)
          property.name_source_range = Sass::Source::Range.new(
            Sass::Source::Position.new(@line, to_parser_offset(name_start_offset)),
            Sass::Source::Position.new(@line, to_parser_offset(name_end_offset)),
            @options[:filename], @options[:importer])
          property
        end
      when ?$
        parse_variable(line)
      when COMMENT_CHAR
        parse_comment(line)
      when DIRECTIVE_CHAR
        parse_directive(parent, line, root)
      when ESCAPE_CHAR
        Tree::RuleNode.new(parse_interp(line.text[1..-1]), full_line_range(line))
      when MIXIN_DEFINITION_CHAR
        parse_mixin_definition(line)
      when MIXIN_INCLUDE_CHAR
        if line.text[1].nil? || line.text[1] == ?\s
          Tree::RuleNode.new(parse_interp(line.text), full_line_range(line))
        else
          parse_mixin_include(line, root)
        end
      else
        parse_property_or_rule(line)
      end
    end
    
          def inherited_hash_writer(name)
        class_eval <<-RUBY, __FILE__, __LINE__ + 1
          def set_#{name}(name, value)
            name = name.tr('_', '-')
            @#{name}s[name] = value unless try_set_#{name}(name, value)
          end
    
        def split_colon_path(path)
      one, two = path.split(':', 2)
      if one && two && Sass::Util.windows? &&
          one =~ /\A[A-Za-z]\Z/ && two =~ %r{\A[/\\]}
        # If we're on Windows and we were passed a drive letter path,
        # don't split on that colon.
        one2, two = two.split(':', 2)
        one = one + ':' + one2
      end
      return one, two
    end
    
          # A string representation of the importer.
      # Should be overridden by subclasses.
      #
      # This is used to help debugging,
      # and should usually just show the load path encapsulated by this importer.
      #
      # @return [String]
      def to_s
        Sass::Util.abstract(self)
      end
    
    Given(/^an invalid release named '(.+)'$/) do |filename|
  run_vagrant_command('mkdir -p #{TestApp.release_path(filename)}')
end

    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
          # Internal use only.
      def peek(key, default=nil, &block)
        value = fetch_for(key, default, &block)
        while callable_without_parameters?(value)
          value = (values[key] = value.call)
        end
        value
      end
    
    class LogStash::PluginManager::Unpack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'unpack a packaged tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'unpack a packaged  zip file', :default => LogStash::Environment.windows?
    
        # remove any version constrain from the Gemfile so the plugin(s) can be updated to latest version
    # calling update without requirements will remove any previous requirements
    plugins = plugins_to_update(previous_gem_specs_map)
    # Skipping the major version validation when using a local cache as we can have situations
    # without internet connection.
    filtered_plugins = plugins.map { |plugin| gemfile.find(plugin) }
      .compact
      .reject { |plugin| REJECTED_OPTIONS.any? { |key| plugin.options.has_key?(key) } }
      .each   { |plugin| gemfile.update(plugin.name) }
    
      it 'records when the config was read' do
    expect(subject.read_at).to be <= Time.now
  end