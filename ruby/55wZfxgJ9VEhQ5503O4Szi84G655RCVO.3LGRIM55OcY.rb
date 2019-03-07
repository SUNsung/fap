
        
        class FormulaPin
  def initialize(f)
    @f = f
  end
    
          context 'applies to formats aAeEfgG' do
        it 'forces a decimal point to be added, even if no digits follow' do
          format('%#.0a', 16.25).should == '0x1.p+4'
          format('%#.0A', 16.25).should == '0X1.P+4'
    
      platform_is :windows do
    it 'does expand shell variables when given multiples arguments' do
      # See https://bugs.ruby-lang.org/issues/12231
      lambda { @object.system('echo', @shell_var) }.should output_to_fd('foo\n')
    end
  end
    
        private
    
      def test_font_helper_without_suffix
    assert_match %r(url\(['']?/assets/.*eot['']?\)), @css
  end
    
        # Transform
    #
    #     foo, bar, baz
    #       color: blue
    #
    # into
    #
    #     foo
    #       color: blue
    #     bar
    #       color: blue
    #     baz
    #       color: blue
    #
    # @param root [Tree::Node] The parent node
    def expand_commas(root)
      root.children.map! do |child|
        # child.parsed_rules.members.size > 1 iff the rule contains a comma
        unless child.is_a?(Tree::RuleNode) && child.parsed_rules.members.size > 1
          expand_commas(child) if child.is_a?(Tree::DirectiveNode)
          next child
        end
        child.parsed_rules.members.map do |seq|
          node = Tree::RuleNode.new([])
          node.parsed_rules = make_cseq(seq)
          node.children = child.children
          node
        end
      end
      root.children.flatten!
    end
    
        def parse_include_directive(parent, line, root, value, offset)
      parse_mixin_include(line, root)
    end
    
        # @return [String] The error message
    def to_s
      @message
    end
    
        # Tells optparse how to parse the arguments
    # available for all executables.
    #
    # This is meant to be overridden by subclasses
    # so they can add their own options.
    #
    # @param opts [OptionParser]
    def set_opts(opts)
      Sass::Util.abstract(this)
    end
    
          # Returns the time the given Sass file was last modified.
      #
      # If the given file has been deleted or the time can't be accessed
      # for some other reason, this should return nil.
      #
      # @param uri [String] The URI of the file to check.
      #   Comes from a `:filename` option set on an engine returned by this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [Time, nil]
      def mtime(uri, options)
        Sass::Util.abstract(self)
      end
    
          def title
        h1 = @h1_title ? page_header_from_content(@content) : false
        h1 || @page.url_path_title
      end
    
      test 'show sidebar, header, footer when present' do
    divs = [@wiki.page('_Header').formatted_data, @wiki.page('_Footer').formatted_data, @wiki.page('_Sidebar').formatted_data]
    @wiki.write_page('HeaderTest', :markdown, 'Test', commit_details)
    get '/HeaderTest'
    divs.each {|div| assert_match div, last_response.body}
  end
    
      test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end
    
      def app
    Precious::App
  end
end
    
    def bump_version
  old_file = File.read('lib/#{name}.rb')
  old_version_line = old_file[/^\s*VERSION\s*=\s*.*/]
  new_version = next_version
  # replace first match of old vesion with new version
  old_file.sub!(old_version_line, '  VERSION = '#{new_version}'')
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
    
===============================================
 Error for category_generator.rb plugin
-----------------------------------------------
 No 'category_index.html' in source/_layouts/
 Perhaps you haven't installed a theme yet.
===============================================
    
      class ImageTag < Liquid::Tag
    @img = nil
    
    
    
    desc 'Test the paperclip plugin under all supported Rails versions.'
task :all do |t|
  if ENV['BUNDLE_GEMFILE']
    exec('rake spec && cucumber')
  else
    exec('rm -f gemfiles/*.lock')
    Rake::Task['appraisal:gemfiles'].execute
    Rake::Task['appraisal:install'].execute
    exec('rake appraisal')
  end
end
    
      def migration_file_name
    '#{migration_name}.rb'
  end
    
        def names_for(klass)
      @attachments[klass].keys
    end
    
        # Returns the id of the instance in a split path form. e.g. returns
    # 000/001/234 for an id of 1234.
    def id_partition attachment, style_name
      case id = attachment.instance.id
      when Integer
        if id < ID_PARTITION_LIMIT
          ('%09d'.freeze % id).scan(/\d{3}/).join('/'.freeze)
        else
          ('%012d'.freeze % id).scan(/\d{3}/).join('/'.freeze)
        end
      when String
        id.scan(/.{3}/).first(3).join('/'.freeze)
      else
        nil
      end
    end
    
          # concatenate the two into the final apk
      concat_zip_tars(controltar_path, datatar_path, output_path)
    end
    
      # Output this package to the given directory.
  def output(output_path)
    output_check(output_path)
    
        # Follow similar rules to these used in ``to_s_fullversion`` method.
    # FIXME: maybe epoch should also be introduced somehow ('#{version},#{epoch})?
    #        should it go to pkgdata['version'] or to another place?
    # https://www.freebsd.org/doc/en/books/porters-handbook/makefile-naming.html
    pkg_version = (iteration and (iteration.to_i > 0)) ?  '#{version}-#{iteration}' : '#{version}'
    
      end # def input
end # class FPM::Package::PEAR

    
      # Default specfile generator just makes one specfile, whatever that is for
  # this package.
  def generate_specfile(builddir)
    paths = []
    logger.info('PWD: #{File.join(builddir, unpack_data_to)}')
    fileroot = File.join(builddir, unpack_data_to)
    Dir.chdir(fileroot) do
      Find.find('.') do |p|
        next if p == '.'
        paths << p
      end
    end
    logger.info(paths[-1])
    manifests = %w{package.pp package/remove.pp}
    
      def program_exists?(program)
    # Scan path to find the executable
    # Do this to help the user get a better error message.
    return program_in_path?(program) if !program.include?('/')
    return File.executable?(program)
  end # def program_exists?