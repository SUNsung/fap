
        
                class RadioButtonBuilder < Builder # :nodoc:
          def radio_button(extra_html_options = {})
            html_options = extra_html_options.merge(@input_html_options)
            html_options[:skip_default_ids] = false
            @template_object.radio_button(@object_name, @method_name, @value, html_options)
          end
        end
    
        def find_all_with_query(query) # :nodoc:
      paths.each do |resolver|
        templates = resolver.find_all_with_query(query)
        return templates unless templates.empty?
      end
    
          self.view_paths = [ActionView::FixtureResolver.new(
        'some/template.erb'             => 'hello <%= foo %> bar',
        'layouts/hello.erb'             => 'With String <%= yield %>',
        'layouts/hello_locals.erb'      => 'With String <%= yield %>',
        'layouts/hello_override.erb'    => 'With Override <%= yield %>',
        'layouts/overwrite.erb'         => 'Overwrite <%= yield %>',
        'layouts/with_false_layout.erb' => 'False Layout <%= yield %>',
        'abstract_controller_tests/layouts/with_string_implied_child.erb' =>
                                           'With Implied <%= yield %>',
        'abstract_controller_tests/layouts/with_grand_child_of_implied.erb' =>
                                           'With Grand Child <%= yield %>'
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
      def pinned_version
    Keg.new(path.resolved_path).version if pinned?
  end
end

    
        it 'returns false if the given string is not a switch' do
      %w[b ns bar --bar -n a bad arg].each do |s|
        expect(subject.switch?(s)).to be false
      end
    end
  end
    
      context 'Bash completion' do
    subject { HOMEBREW_LIBRARY_PATH.parent.parent/'completions/bash/brew' }
    
    class Converter
  extend Forwardable
  include Network
  include LessConversion
  include JsConversion
  include FontsConversion
    
        def str_to_byte_pos(pos)
      @s.string.slice(0, pos).bytesize
    end
  end
end
    
    class NodeMincerTest < Minitest::Test
  DUMMY_PATH = 'test/dummy_node_mincer'
    
    DEPRECATION
    
    module Sass
  module CacheStores
    # A backend for the Sass cache using the filesystem.
    class Filesystem < Base
      # The directory where the cached files will be stored.
      #
      # @return [String]
      attr_accessor :cache_location
    
          # Get the publicly-visible URL for an imported file. This URL is used by
      # source maps to link to the source stylesheet. This may return `nil` to
      # indicate that no public URL is available; however, this will cause
      # sourcemap generation to fail if any CSS is generated from files imported
      # from this importer.
      #
      # If an absolute 'file:' URI can be produced for an imported file, that
      # should be preferred to returning `nil`. However, a URL relative to
      # `sourcemap_directory` should be preferred over an absolute 'file:' URI.
      #
      # @param uri [String] A URI known to be valid for this importer.
      # @param sourcemap_directory [String, NilClass] The absolute path to a
      #   directory on disk where the sourcemap will be saved. If uri refers to
      #   a file on disk that's accessible relative to sourcemap_directory, this
      #   may return a relative URL. This may be `nil` if the sourcemap's
      #   eventual location is unknown.
      # @return [String?] The publicly-visible URL for this file, or `nil`
      #   indicating that no publicly-visible URL exists. This should be
      #   appropriately URL-escaped.
      def public_url(uri, sourcemap_directory)
        return if @public_url_warning_issued
        @public_url_warning_issued = true
        Sass::Util.sass_warn <<WARNING
WARNING: #{self.class.name} should define the #public_url method.
WARNING
        nil
      end
    
    desc 'Watch the site and regenerate when it changes'
task :watch do
  raise '### You haven't set anything up yet. First run `rake install` to set up an Octopress theme.' unless File.directory?(source_dir)
  puts 'Starting to watch source with Jekyll and Compass.'
  system 'compass compile --css-dir #{source_dir}/stylesheets' unless File.exist?('#{source_dir}/stylesheets/screen.css')
  jekyllPid = Process.spawn({'OCTOPRESS_ENV'=>'preview'}, 'jekyll build --watch')
  compassPid = Process.spawn('compass watch')
    
        # Creates an instance of CategoryIndex for each category page, renders it, and
    # writes the output to a file.
    #
    #  +category_dir+ is the String path to the category folder.
    #  +category+     is the category currently being processed.
    def write_category_index(category_dir, category)
      index = CategoryIndex.new(self, self.source, category_dir, category)
      index.render(self.layouts, site_payload)
      index.write(self.dest)
      # Record the fact that this page has been added, otherwise Site::cleanup will remove it.
      self.pages << index
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
        def sizes
      attrs = 'width='#{@sizes[0]}'' if @sizes[0]
      attrs += ' height='#{@sizes[1]}'' if @sizes[1]
      attrs
    end
  end
end