
        
              # Converts the array to a comma-separated sentence where the last element is
      # joined by the connector word. This is the html_safe-aware version of
      # ActiveSupport's {Array#to_sentence}[http://api.rubyonrails.org/classes/Array.html#method-i-to_sentence].
      #
      def to_sentence(array, options = {})
        options.assert_valid_keys(:words_connector, :two_words_connector, :last_word_connector, :locale)
    
            class RadioButtonBuilder < Builder # :nodoc:
          def radio_button(extra_html_options = {})
            html_options = extra_html_options.merge(@input_html_options)
            html_options[:skip_default_ids] = false
            @template_object.radio_button(@object_name, @method_name, @value, html_options)
          end
        end
    
                options = options.dup
            options[:field_name]           = @method_name
            options[:include_position]     = true
            options[:prefix]             ||= @object_name
            options[:index]                = @auto_index if @auto_index && !options.has_key?(:index)
    
          def exists?(name, prefixes = [], partial = false, keys = [], **options)
        @view_paths.exists?(*args_for_lookup(name, prefixes, partial, keys, options))
      end
      alias :template_exists? :exists?
    
          def typecast(paths)
        paths.map do |path|
          case path
          when Pathname, String
            OptimizedFileSystemResolver.new path.to_s
          else
            path
          end
        end
      end
  end
end

    
          def flag(name, description: nil, required_for: nil, depends_on: nil)
        if name.end_with? '='
          required = OptionParser::REQUIRED_ARGUMENT
          name.chomp! '='
        else
          required = OptionParser::OPTIONAL_ARGUMENT
        end
        description = option_to_description(name) if description.nil?
        @parser.on(name, description, required) do |option_value|
          Homebrew.args[option_to_name(name)] = option_value
        end
    
      def external_commands
    cmd_paths = PATH.new(ENV['PATH']).append(Tap.cmd_directories)
    cmd_paths.each_with_object([]) do |path, cmds|
      Dir['#{path}/brew-*'].each do |file|
        next unless File.executable?(file)
        cmd = File.basename(file, '.rb')[5..-1]
        next if cmd.include?('.')
        cmds << cmd
      end
    end.sort
  end
    
    # Undocumented options:
#     `-D` activates debugging and profiling of the audit methods (not the same as `--debug`)
#     `--list-checks` lists all audit methods
    
        if GitHub.api_credentials_type == :none
      puts <<~EOS
        You can create a new personal access token:
         #{GitHub::ALL_SCOPES_URL}
        and then set the new HOMEBREW_GITHUB_API_TOKEN as the authentication method.
    
        print_remaining_files remaining_root_files, root, other
  end
    
        return if ARGV.dry_run?
    
          if rails?
        register_rails_engine
      elsif lotus?
        register_lotus
      elsif sprockets?
        register_sprockets
      end
    
        # convert recursively evaluated selector $list to @for loop
    def mixin_all_grid_columns(css, selector: raise('pass class'), from: 1, to: raise('pass to'))
      mxn_def = css.each_line.first.strip
      # inject local variables as default arguments
      # this is to avoid overwriting outer variables with the same name with Sass <= 3.3
      # see also: https://github.com/twbs/bootstrap-sass/issues/636
      locals = <<-SASS.strip
        $i: #{from}, $list: '#{selector}'
      SASS
      mxn_def.sub!(/(\(?)(\)\s*\{)/) {  '#{$1}#{', ' if $1.empty?}#{locals}#{$2}' }
      step_body = (css =~ /\$list \{\n(.*?)\n[ ]*\}/m) && $1
<<-SASS
// [converter] This is defined recursively in LESS, but Sass supports real loops
#{mxn_def}
  @for $i from (#{from} + 1) through #{to} {
    $list: '\#{$list}, #{selector}';
  }
  \#{$list} {
#{unindent step_body, 2}
  }
}
SASS
    end
    
              context 'and a comment after the last element' do
            let(:b_comment) { ' # comment b' }
    
            when_branches.each do |condition|
          yield condition
        end
    
            private