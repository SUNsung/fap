
        
          </body>
</html>
HTML
    
    def run_jekyll(args)
  args = args.strip.split(' ') # Shellwords?
  process = run_in_shell('ruby', Paths.jekyll_bin.to_s, *args, '--trace')
  process.exitstatus.zero?
end
    
        self.each_key { |k|
      if (k.downcase == key.downcase)
        self.store(k, value)
        stored = true
      end
    }
    
          when IAX_CTRL_ANSWER
        dprint('ANSWER')
        if self.state == :ringing
          self.state = :answered
          self.ring_finish = ::Time.now.to_i
        end
        self.client.send_ack(self)
    
              # Encodes the auth_time field
          #
          # @return [String]
          def encode_auth_time
            [auth_time].pack('N')
          end
    
                if OpenSSL::HMAC.digest('MD5', k1, decrypted) != checksum
              raise ::RuntimeError, 'RC4-HMAC decryption failed, incorrect checksum verification'
            end
    
              # Encodes the msg_type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_msg_type
            bn = OpenSSL::BN.new(msg_type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # Decodes the Rex::Proto::Kerberos::Model::Element from the input. This
          # method has been designed to be overridden by subclasses.
          #
          # @raise [NoMethodError]
          def decode(input)
            raise ::NoMethodError, 'Method designed to be overridden'
          end
    
    module Rex
  module Proto
    module Kerberos
      module Model
        # This class provides a representation of request time
        class LastRequest < Element
    
        execute 'INSERT INTO share_visibilities (user_id, shareable_id, shareable_type) ' \
            'SELECT post_visibility.user_id, photos.id, 'Photo' FROM photos ' \
            'INNER JOIN posts ON posts.guid = photos.status_message_guid AND posts.type = 'StatusMessage' ' \
            'LEFT OUTER JOIN share_visibilities ON share_visibilities.shareable_id = photos.id ' \
            'INNER JOIN share_visibilities AS post_visibility ON post_visibility.shareable_id = posts.id ' \
            'WHERE photos.public = false AND share_visibilities.shareable_id IS NULL ' \
            'AND post_visibility.shareable_type = 'Post''
  end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path in #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path in #{expected.inspect} but it had'
  end
end
    
          get :index, params: {conversation_id: @conv1.id}
      save_fixture(html_for('body'), 'conversations_read')
    end
  end
    
          it 'sets the flash error' do
        get :create, params: invalid_params
        expect(flash[:error]).not_to be_blank
      end
    
    # This bin wrapper runs the `pod` command in a OS X sandbox. The reason for this
# is to ensure that people can’t use malicious code from pod specifications.
#
# It does this by creating a ‘seatbelt’ profile on the fly and executing the
# given command through `/usr/bin/sandbox-exec`. This profile format is an
# undocumented format, which uses TinyScheme to implement its DSL.
#
# Even though it uses a undocumented format, it’s actually very self-explanatory.
# Because we use a whitelist approach, `(deny default)`, any action that is
# denied is logged to `/var/log/system.log`. So tailing that should provide
# enough information on steps that need to be take to get something to work.
#
# For more information see:
#
# * https://github.com/CocoaPods/CocoaPods/issues/939
# * http://reverse.put.as/wp-content/uploads/2011/08/The-Apple-Sandbox-BHDC2011-Slides.pdf
# * http://reverse.put.as/wp-content/uploads/2011/08/The-Apple-Sandbox-BHDC2011-Paper.pdf
# * https://github.com/s7ephen/OSX-Sandbox--Seatbelt--Profiles
# * `$ man sandbox-exec`
# * `$ ls /usr/share/sandbox`
    
    ENV['COCOAPODS_DISABLE_STATS'] = 'true'

    
          def plugins_string
        UI::ErrorReport.plugins_string
      end
    
          PluginManager.ui.info('Install successful')
    rescue ::Bundler::BundlerError => e
      raise PluginManager::InstallError.new(e), 'An error occurred went installing plugins'
    ensure
      FileUtils.rm_rf(uncompressed_path) if uncompressed_path && Dir.exist?(uncompressed_path)
    end
    
          def footer_content
        has_footer && @footer.formatted_data
      end
    
        post '/edit/' + CGI.escape('한글'), :page => 'k', :content => '바뀐 text',
         :format                            => 'markdown', :message => 'ghi'
    follow_redirect!
    assert last_response.ok?
    
        # make a backup of the option and sanitize it
    base_path_original = base_path.dup
    base_path = CGI.escape(base_path)
    
    # then let the user know if we changed the URL
    unless base_path_original == base_path
      puts <<MSG
Warning: your base-path has been sanitized:
  - original: '#{base_path_original}'
  - sanitized: '#{base_path}'
MSG
    end
      
    # and finally, let others enjoy our hard work:
    wiki_options[:base_path] = base_path
  end
  opts.on('--page-file-dir [PATH]', 'Specify the subdirectory for all pages. Default: repository root.', 
    'Example: setting this to 'pages' will make Gollum serve only pages at '<git-repo>/pages/*'.') do |path|
    wiki_options[:page_file_dir] = path
  end
  opts.on('--css', 'Inject custom CSS into each page. The '<git-repo>/custom.css' file is used (must be committed).') do
    wiki_options[:css] = true
  end
  opts.on('--js', 'Inject custom JavaScript into each page. The '<git-repo>/custom.js' file is used (must be committed).') do
    wiki_options[:js] = true
  end
  opts.on('--emoji', 'Parse and interpret emoji tags (e.g. :heart:).') do
    wiki_options[:emoji] = true
  end
  opts.on('--no-edit', 'Disable the feature of editing pages.')  do
    wiki_options[:allow_editing] = false
  end
  opts.on('--live-preview', 'Enable the live preview feature in page editor.') do
    wiki_options[:live_preview] = true
  end
  opts.on('--no-live-preview', 'Disable the live preview feature in page editor.') do
    wiki_options[:live_preview] = false
  end
  opts.on('--allow-uploads [MODE]', [:dir, :page], 'Enable file uploads.',
    'If set to 'dir', Gollum will store all uploads in the '<git-repo>/uploads/' directory.',
    'If set to 'page', Gollum will store each upload at the currently edited page.') do |mode|
    wiki_options[:allow_uploads]    = true
    wiki_options[:per_page_uploads] = true if mode == :page
  end
  opts.on('--mathjax', 'Enable MathJax (renders mathematical equations).',
    'By default, uses the 'TeX-AMS-MML_HTMLorMML' config with the 'autoload-all' extension.') do
    wiki_options[:mathjax] = true
  end
  opts.on('--irb', 'Launch Gollum in 'console mode', with a predefined API.') do
    options[:irb] = true
  end
  
  opts.separator ''
  opts.separator '  Minor:'
  
  opts.on('--h1-title', 'Use the first '<h1>' as page title.') do
    wiki_options[:h1_title] = true
  end
  opts.on('--show-all', 'Also show files in the file view. By default, only valid pages are shown.') do
    wiki_options[:show_all] = true
  end
  opts.on('--collapse-tree', 'Collapse the tree, when file view is opened. By default, the tree is expanded.') do
    wiki_options[:collapse_tree] = true
  end
  opts.on('--user-icons [MODE]', [:gravatar, :identicon, :none], 'Use specific user-icons for history view.',
    'Can be set to 'gravatar', 'identicon' or 'none'. Default: 'none'.') do |mode|
    wiki_options[:user_icons] = mode
  end
  opts.on('--mathjax-config [FILE]', 'Specify path to a custom MathJax configuration.',
    'If not specified, uses the '<git-repo>/mathjax.config.js' file.') do |file|
    wiki_options[:mathjax_config] = file || 'mathjax.config.js'
  end
  opts.on('--plantuml-url [URL]', 'Sets the PlantUML server endpoint.') do |url|
    wiki_options[:plantuml_url] = url
  end
  opts.on('--template-dir [PATH]', 'Specify custom mustache template directory.') do |path|
    wiki_options[:template_dir] = path
  end
  
  opts.separator ''
  opts.separator '  Common:'
  
  opts.on('--help', 'Display this message.') do
    puts opts
    exit 0
  end
  opts.on('--version', 'Display the current version of Gollum.') do
    puts 'Gollum ' + Gollum::VERSION
    exit 0
  end
  
  opts.separator ''
end
    
        def not_found(msg = nil)
      @message = msg || 'The requested page does not exist.'
      status 404
      return mustache :error
    end
    
      context 'same_line style' do
    let(:cop_config) { { 'EnforcedStyle' => 'same_line' } }
    
          it 'does not autocorrect the closing brace' do
        new_source = autocorrect_source(source)
        expect(new_source).to eq([source].join($RS))
      end
    end
    
    module RuboCop
  module AST
    # A node extension for `case` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `case` nodes within RuboCop.
    class CaseNode < Node
      include ConditionalNode
    
          # Returns the inverse keyword of the `if` node as a string. Returns `if`
      # for `unless` nodes and vice versa. Returns an empty string for ternary
      # operators.
      #
      # @return [String] the inverse keyword of the `if` statement
      def inverse_keyword
        if keyword == 'if'
          'unless'
        elsif keyword == 'unless'
          'if'
        else
          ''
        end
      end
    
          # A shorthand for getting the last argument of the node.
      # Equivalent to `arguments.last`.
      #
      # @return [Node, nil] the last argument of the node,
      #                     or `nil` if there are no arguments
      def last_argument
        arguments[-1]
      end
    
        # Initializes a new CategoryFeed.
    #
    #  +base+         is the String path to the <source>.
    #  +category_dir+ is the String path between <source> and the category folder.
    #  +category+     is the category currently being processed.
    def initialize(site, base, category_dir, category)
      @site = site
      @base = base
      @dir  = category_dir
      @name = 'atom.xml'
      self.process(@name)
      # Read the YAML data from the layout page.
      self.read_yaml(File.join(base, '_includes/custom'), 'category_feed.xml')
      self.data['category']    = category
      # Set the title for this page.
      title_prefix             = site.config['category_title_prefix'] || 'Category: '
      self.data['title']       = '#{title_prefix}#{category}'
      # Set the meta-description for this page.
      meta_description_prefix  = site.config['category_meta_description_prefix'] || 'Category: '
      self.data['description'] = '#{meta_description_prefix}#{category}'
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end