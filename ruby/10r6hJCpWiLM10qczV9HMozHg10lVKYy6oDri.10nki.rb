
        
              def version?
        version.present?
      end
    
        def push(*names)
      @filters.push *filter_const(names)
    end
    
          if base == dest
        ''
      elsif dest.start_with? File.join(base, '')
        url.path[(path.length)..-1]
      end
    end
    
            if at_css('.api-type-label.module')
          at_css('h1').content = subpath.remove('api/')
        end
    
      def initialize(repo: 'twbs/bootstrap', branch: 'master', save_to: {}, cache_path: 'tmp/converter-cache-bootstrap')
    @logger     = Logger.new
    @repo       = repo
    @branch     = branch || 'master'
    @branch_sha = get_branch_sha
    @cache_path = cache_path
    @repo_url   = 'https://github.com/#@repo'
    @save_to    = {
        js:    'assets/javascripts/bootstrap',
        scss:  'assets/stylesheets/bootstrap',
        fonts: 'assets/fonts/bootstrap'}.merge(save_to)
  end
    
        private
    
        # .btn { ... } -> @mixin btn { ... }; .btn { @include btn }
    def extract_mixins_from_selectors(file, selectors_to_mixins)
      selectors_to_mixins.each do |selector, mixin|
        file = replace_rules file, Regexp.escape(selector), prefix: false do |selector_css|
          log_transform '#{selector} { ... } -> @mixin #{mixin} { ... }; #{selector} { @include #{mixin} } ', from: 'extract_mixins_from_selectors'
          <<-SCSS
// [converter] extracted from `#{selector}` for libsass compatibility
@mixin #{mixin} {#{unwrap_rule_block(selector_css)}
}
// [converter] extracted as `@mixin #{mixin}` for libsass compatibility
#{selector} {
  @include #{mixin};
}
          SCSS
        end
      end
      file
    end
    
      # Specifies the header that your server uses for sending files.
  # config.action_dispatch.x_sendfile_header = 'X-Sendfile' # for apache
  # config.action_dispatch.x_sendfile_header = 'X-Accel-Redirect' # for nginx
    
            parser = Sass::SCSS::Parser.new(value,
          @options[:filename], @options[:importer],
          @line, to_parser_offset(@offset))
        parsed_value = parser.parse_declaration_value
        end_offset = start_offset + value.length
      elsif value.strip.empty?
        parsed_value = [Sass::Script::Tree::Literal.new(Sass::Script::Value::String.new(''))]
        end_offset = start_offset
      else
        expr = parse_script(value, :offset => to_parser_offset(start_offset))
        end_offset = expr.source_range.end_pos.offset - 1
        parsed_value = [expr]
      end
      node = Tree::PropNode.new(parse_interp(name), parsed_value, prop)
      node.value_source_range = Sass::Source::Range.new(
        Sass::Source::Position.new(line.index, to_parser_offset(start_offset)),
        Sass::Source::Position.new(line.index, to_parser_offset(end_offset)),
        @options[:filename], @options[:importer])
      if !node.custom_property? && value.strip.empty? && line.children.empty?
        raise SyntaxError.new(
          'Invalid property: \'#{node.declaration}\' (no value).' +
          node.pseudo_class_selector_message)
      end
    
        # The top-level Environment object.
    #
    # @return [Environment]
    def global_env
      @global_env ||= global? ? self : @parent.global_env
    end
    
          # If this importer is based on files on the local filesystem This method
      # should return true if the file, when changed, should trigger a
      # recompile.
      #
      # It is acceptable for non-sass files to be watched and trigger a recompile.
      #
      # @param filename [String] The absolute filename for a file that has changed.
      # @return [Boolean] When the file changed should cause a recompile.
      def watched_file?(filename)
        false
      end
    end
  end
end

    
      include_examples 'multiline literal brace layout' do
    let(:open) { '{' }
    let(:close) { '}' }
    let(:a) { 'a: 1' }
    let(:b) { 'b: 2' }
    let(:multi_prefix) { 'b: ' }
    let(:multi) do
      <<-RUBY.strip_indent.chomp
        [
        1
        ]
      RUBY
    end
  end