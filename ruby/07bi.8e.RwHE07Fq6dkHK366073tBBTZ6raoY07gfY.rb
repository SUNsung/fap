
        
                  new(hash)
        end
    
            # Builds a PR from a GitHub API response.
        #
        # issue - An instance of `Sawyer::Resource` containing the PR details.
        def self.from_api_response(pr)
          assignee =
            if pr.assignee
              Representation::User.from_api_response(pr.assignee)
            end
    
          def meta_path
        File.join path, META_FILENAME
      end
    
        def xpath(*args)
      doc.xpath(*args)
    end
    
            subtitle = at_css('.hero-subtitle').try(:content)
        breadcrumbs = css('.breadcrumbs li').map(&:content)[2..-2]
    
            css('ul.methods', 'ul.properties', 'ul.events').add_class('defs').each do |node|
          node.css('> li > h3').each do |h3|
            next if h3.content.present?
            h3.content = h3.next_element.content
            h3.next_element.remove
          end
        end
      end
    end
  end
end

    
    def ruby_version_at_least?(version_string)
  ruby_version = Gem::Version.new(RUBY_VERSION.dup)
  version = Gem::Version.new(version_string)
  ruby_version >= version
end
    
      # Compile a file on disk to CSS.
  #
  # @raise [Sass::SyntaxError] if there's an error in the document
  # @raise [Encoding::UndefinedConversionError] if the source encoding
  #   cannot be converted to UTF-8
  # @raise [ArgumentError] if the document uses an unknown encoding with `@charset`
  #
  # @overload compile_file(filename, options = {})
  #   Return the compiled CSS rather than writing it to a file.
  #
  #   @param filename [String] The path to the Sass, SCSS, or CSS file on disk.
  #   @param options [{Symbol => Object}] An options hash;
  #     see {file:SASS_REFERENCE.md#Options the Sass options documentation}
  #   @return [String] The compiled CSS.
  #
  # @overload compile_file(filename, css_filename, options = {})
  #   Write the compiled CSS to a file.
  #
  #   @param filename [String] The path to the Sass, SCSS, or CSS file on disk.
  #   @param options [{Symbol => Object}] An options hash;
  #     see {file:SASS_REFERENCE.md#Options the Sass options documentation}
  #   @param css_filename [String] The location to which to write the compiled CSS.
  def self.compile_file(filename, *args)
    options = args.last.is_a?(Hash) ? args.pop : {}
    css_filename = args.shift
    result = Sass::Engine.for_file(filename, options).render
    if css_filename
      options[:css_filename] ||= css_filename
      open(css_filename, 'w') {|css_file| css_file.write(result)}
      nil
    else
      result
    end
  end
end
    
          # @see Base#\_store
      def _store(key, version, sha, contents)
        compiled_filename = path_to(key)
        FileUtils.mkdir_p(File.dirname(compiled_filename))
        Sass::Util.atomic_create_and_write_file(compiled_filename) do |f|
          f.puts(version)
          f.puts(sha)
          f.write(contents)
        end
      rescue Errno::EACCES
        # pass
      end
    
      # A read-only wrapper for a lexical environment for SassScript.
  class ReadOnlyEnvironment < BaseEnvironment
    def initialize(parent = nil, options = nil)
      super
      @content_cached = nil
    end
    # The read-only environment of the caller of this environment's mixin or function.
    #
    # @see BaseEnvironment#caller
    # @return {ReadOnlyEnvironment}
    def caller
      return @caller if @caller
      env = super
      @caller ||= env.is_a?(ReadOnlyEnvironment) ? env : ReadOnlyEnvironment.new(env, env.options)
    end
    
          input.close if input.is_a?(File)
    
      desc 'Updates the last know version of CocoaPods in the specs repo'
  task :post_release do
    title 'Updating last known version in Specs repo'
    specs_branch = 'master'
    Dir.chdir('../Specs') do
      puts Dir.pwd
      sh 'git checkout #{specs_branch}'
      sh 'git pull'
    
    ENV['COCOAPODS_DISABLE_STATS'] = 'true'

    
          private
    
          def header_format
        has_header && @header.format.to_s
      end
    
      test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end
    
      begin
    require 'gollum-lib'
    wiki = Gollum::Wiki.new(gollum_path, wiki_options)
    if !wiki.exist? then
      raise Gollum::InvalidGitRepositoryError
    end
    if wiki_options[:plantuml_url]
      Gollum::Filter::PlantUML.configure do |config|
        puts 'Using #{wiki_options[:plantuml_url]} as PlantUML endpoint'
        config.url = wiki_options[:plantuml_url]
      end
    end
    puts
    puts 'Loaded Gollum wiki at:'
    puts '#{File.expand_path(gollum_path).inspect}'
    puts
    puts 'Example API calls:'
    puts %(    page = wiki.page('page-name'))
    puts %(    # => <Gollum::Page>)
    puts
    puts %(    page.raw_data)
    puts %(    # => '# My wiki page')
    puts
    puts %(    page.formatted_data)
    puts %(    # => '<h1>My wiki page</h1>')
    puts
    puts 'Full API documentation at:'
    puts 'https://github.com/gollum/gollum-lib'
    puts
    IRB.start_session(binding)
  rescue Gollum::InvalidGitRepositoryError, Gollum::NoSuchPathError
    puts 'Invalid Gollum wiki at #{File.expand_path(gollum_path).inspect}'
    exit 0
  end
else
  require 'gollum/app'
  Precious::App.set(:gollum_path, gollum_path)
  Precious::App.set(:wiki_options, wiki_options)
  Precious::App.settings.mustache[:templates] = wiki_options[:template_dir] if wiki_options[:template_dir]
    
      s.test_files = s.files.select { |path| path =~ /^test\/test_.*\.rb/ }
end
