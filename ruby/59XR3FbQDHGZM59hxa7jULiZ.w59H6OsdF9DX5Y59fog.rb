
        
          attr_reader :blob, :variation
    
            def view_rendered?(view, expected_locals)
          locals_for(view).any? do |actual_locals|
            expected_locals.all? { |key, value| value == actual_locals[key] }
          end
        end
      end
    
              # Takes the environment such as +:production+ or +:development+.
          # This requires that the @configurations was initialized with a key that
          # matches.
          #
          #   Resolver.new('production' => {}).resolve_symbol_connection(:production)
          #   # => {}
          #
          def resolve_symbol_connection(spec)
            if config = configurations[spec.to_s]
              resolve_connection(config).merge('name' => spec.to_s)
            else
              raise(AdapterNotSpecified, ''#{spec}' database is not configured. Available: #{configurations.keys.inspect}')
            end
          end
    
            def cast_value(value)
          case value
          when true then 1
          when false then 0
          else
            value.to_i rescue nil
          end
        end
    
    class WebServiceTest < ActionDispatch::IntegrationTest
  class TestController < ActionController::Base
    def assign_parameters
      if params[:full]
        render plain: dump_params_keys
      else
        render plain: (params.keys - ['controller', 'action']).sort.join(', ')
      end
    end
    
        private
      # 'Deserialize' the mailer class name by hand in case another argument
      # (like a Global ID reference) raised DeserializationError.
      def mailer_class
        if mailer = Array(@serialized_arguments).first || Array(arguments).first
          mailer.constantize
        end
      end
    
    options = {
  sort: true,
  limit: 30,
  format: :text,
}
    
        # Internal: Extract excerpt from the content
    #
    # By default excerpt is your first paragraph of a doc: everything before
    # the first two new lines:
    #
    #     ---
    #     title: Example
    #     ---
    #
    #     First paragraph with [link][1].
    #
    #     Second paragraph.
    #
    #     [1]: http://example.com/
    #
    # This is fairly good option for Markdown and Textile files. But might cause
    # problems for HTML docs (which is quite unusual for Jekyll). If default
    # excerpt delimiter is not good for you, you might want to set your own via
    # configuration option `excerpt_separator`. For example, following is a good
    # alternative for HTML docs:
    #
    #     # file: _config.yml
    #     excerpt_separator: '<!-- more -->'
    #
    # Notice that all markdown-style link references will be appended to the
    # excerpt. So the example doc above will have this excerpt source:
    #
    #     First paragraph with [link][1].
    #
    #     [1]: http://example.com/
    #
    # Excerpts are rendered same time as content is rendered.
    #
    # Returns excerpt String
    def extract_excerpt(doc_content)
      head, _, tail = doc_content.to_s.partition(doc.excerpt_separator)
    
          #
      # The version constraint required to activate a given gem.
      # Usually the gem version requirement is '> 0,' because any version
      # will do. In the case of jekyll-docs, however, we require the exact
      # same version as Jekyll.
      #
      # Returns a String version constraint in a parseable form for
      # RubyGems.
      def version_constraint(gem_name)
        return '= #{Jekyll::VERSION}' if gem_name.to_s.eql?('jekyll-docs')
        '> 0'
      end
    
      def find_matching_tag(tag)
    if key?(tag)
      tag
    else
      find_altivec_tag(tag) || find_or_later_tag(tag)
    end
  end
    
        def self.rm_DS_Store
      paths = Queue.new
      %w[Cellar Frameworks Library bin etc include lib opt sbin share var].
        map { |p| HOMEBREW_PREFIX/p }.each { |p| paths << p if p.exist? }
      workers = (0...Hardware::CPU.cores).map do
        Thread.new do
          begin
            while p = paths.pop(true)
              quiet_system 'find', p, '-name', '.DS_Store', '-delete'
            end
          rescue ThreadError # ignore empty queue error
          end
        end
      end
      workers.map(&:join)
    end
    
      def test_into
    @opt.def_option '-h', '--host=HOST', 'hostname'
    @opt.def_option '-p', '--port=PORT', 'port', Integer
    @opt.def_option '-v', '--verbose' do @verbose = true end
    @opt.def_option '-q', '--quiet' do @quiet = true end
    result = {}
    @opt.parse %w(--host localhost --port 8000 -v), into: result
    assert_equal({host: 'localhost', port: 8000, verbose: true}, result)
    assert_equal(true, @verbose)
  end
end

    
        ELEMENT_INFOS = ITunesBaseModel::ELEMENT_INFOS +
      [['duration', :element, 'content']]
    
    if __FILE__ == $0
  opt = {
    :execs => [],
    :dir => File.dirname(__FILE__),
    :repeat => 1,
    :measure_target => :real,
    :output => nil,
    :raw_output => nil,
    :format => :tsv,
  }
  formats = {
    :tsv => '.tsv',
    :markdown => '.md',
    :plain => '.txt',
  }
    
        def register_compass_extension
      ::Compass::Frameworks.register(
          'bootstrap',
          :version               => Bootstrap::VERSION,
          :path                  => gem_path,
          :stylesheets_directory => stylesheets_path,
          :templates_directory   => File.join(gem_path, 'templates')
      )
    end
    
      def save_file(path, content, mode='w')
    dir = File.dirname(path)
    FileUtils.mkdir_p(dir) unless File.directory?(dir)
    File.open(path, mode) { |file| file.write(content) }
  end
    
      find_files = ->(path) {
    Find.find(Pathname.new(path).relative_path_from(Pathname.new Dir.pwd).to_s).map do |path|
      path if File.file?(path)
    end.compact
  }
    
        def initialize(klass, name, options)
      @klass = klass
      @name = name
      @options = options
    end
    
        # Returns the filename, the same way as ':basename.:extension' would.
    def filename attachment, style_name
      [ basename(attachment, style_name), extension(attachment, style_name) ].delete_if(&:empty?).join('.'.freeze)
    end
    
            def responds?
          methods = @subject.instance_methods.map(&:to_s)
          methods.include?('#{@attachment_name}') &&
            methods.include?('#{@attachment_name}=') &&
            methods.include?('#{@attachment_name}?')
        end
    
            protected