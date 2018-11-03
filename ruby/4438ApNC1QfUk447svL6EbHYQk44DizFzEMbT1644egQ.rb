
        
                  def value
            if @allow_method_names_outside_object
              object.public_send @method_name if object && object.respond_to?(@method_name)
            else
              object.public_send @method_name if object
            end
          end
    
    begin
  error_pipe = UNIXSocket.open(ENV['HOMEBREW_ERROR_PIPE'], &:recv_io)
  error_pipe.fcntl(Fcntl::F_SETFD, Fcntl::FD_CLOEXEC)
    
              if File.extname(file) == '.rb'
            tree[subtree] ||= []
            tree[subtree] << file
          end
        end
      end
    
              def action_title
            'Stop'
          end
    
          def version_slug
        return if version.blank?
        slug = version.downcase
        slug.gsub! '+', 'p'
        slug.gsub! '#', 's'
        slug.gsub! %r{[^a-z0-9\_\.]}, '_'
        slug
      end
    
        def absolute_url_string?(str)
      str =~ SCHEME_RGX
    end
    
        def ==(other)
      other.is_a?(self.class) && filters == other.filters
    end
    
        def error?
      code == 0 || code != 404 && code != 403 && code >= 400 && code <= 599
    end
    
            subclass.base_url = base_url
        subclass.root_path = root_path
        subclass.initial_paths = initial_paths.dup
        subclass.options = options.deep_dup
        subclass.html_filters = html_filters.inheritable_copy
        subclass.text_filters = text_filters.inheritable_copy
        subclass.stubs = stubs.dup
      end
    
        self.base_url = 'http://localhost/'
    
          if base == dest
        ''
      elsif dest.start_with? File.join(base, '')
        url.path[(path.length)..-1]
      end
    end
    
          def get_type
        if slug.start_with?('guide/')
          'Guide'
        elsif slug.start_with?('cookbook/')
          'Cookbook'
        elsif slug == 'glossary'
          'Guide'
        else
          type = at_css('.nav-title.is-selected').content.strip
          type.remove! ' Reference'
          type << ': #{mod}' if mod
          type
        end
      end
    
      it 'raises #{frozen_error_class} on an untainted, frozen object' do
    o = Object.new.freeze
    lambda { o.taint }.should raise_error(frozen_error_class)
  end
    
      it 'returns true when passed ?R if the argument is readable by the real uid' do
    Kernel.test(?R, @file).should be_true
  end
    
      def global_options_manpage_lines
    lines = ['These options are applicable across all sub-commands.\n']
    lines += Homebrew::CLI::Parser.global_options.values.map do |names, _, desc|
      short, long = names
      generate_option_doc(short, long, desc)
    end
    lines
  end
    
    using CleanupRefinement
    
      # @private
  def initialize(name, path, spec, alias_path: nil)
    @name = name
    @path = path
    @alias_path = alias_path
    @alias_name = if alias_path
      File.basename(alias_path)
    end
    @revision = self.class.revision || 0
    @version_scheme = self.class.version_scheme || 0
    
        module NewFormulaAudit
      class Options < FormulaCop
        DEP_OPTION = 'New formulae should not use `deprecated_option`'.freeze
        OPTION = 'Formulae should not have an `option`'.freeze
    
      context 'When auditing options' do
    it 'reports an offense when using the 32-bit option' do
      expect_offense(<<~RUBY)
        class Foo < Formula
          url 'https://example.com/foo-1.0.tgz'
          option 'with-32-bit'
                       ^^^^^^ macOS has been 64-bit only since 10.6 so 32-bit options are deprecated.
        end
      RUBY
    end
    
      def to_ary
    @paths.dup.to_ary
  end
  alias to_a to_ary