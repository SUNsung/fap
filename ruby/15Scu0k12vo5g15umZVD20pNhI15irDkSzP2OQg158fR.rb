
        
                    if placeholder_required?(html_options)
              raise ArgumentError, 'include_blank cannot be false for a required field.' if options[:include_blank] == false
              options[:include_blank] ||= true unless options[:prompt]
            end
    
              def render_collection
            @collection.map do |item|
              value = value_for_collection(item, @value_method)
              text  = value_for_collection(item, @text_method)
              default_html_options = default_html_options_for_collection(item, value)
              additional_html_options = option_html_attributes(item)
    
        def initialize(*) # :nodoc:
      @_action_has_layout = true
      super
    end
    
        attr_reader :paths
    
        it 'is turned off for existing instances of Huginn' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { nil }
      DefaultScenarioImporter.import(user)
    end
    
        it 'should work with nested hashes' do
      @agent.options['very'] = {'nested' => '$.value'}
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options).to eq({'auth_token' => 'token', 'color' => 'yellow', 'very' => {'nested' => '{{value}}'}, 'notify' => false, 'room_name' => 'test', 'username' => '{{username}}', 'message' => '{{message}}'})
    end
    
    describe ConvertWebsiteAgentTemplateForMerge do
  let :old_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title' }
    }
  end
    
        def initialize(name = nil, path = nil, type = nil)
      self.name = name
      self.path = path
      self.type = type
    
            css('.toplang', '#quickview', '.top').remove
    
        def set_email_domain_block
      @email_domain_block = EmailDomainBlock.find(params[:id])
    end
    
        describe '#' do
      context 'applies to format o' do
        it 'increases the precision until the first digit will be `0' if it is not formatted as complements' do
          format('%#o', 87).should == '0127'
        end
    
        t.wakeup
    t.value.should == 5
  end
end
    
      it 'raises a TypeError when passed nil' do
    lambda { srand(nil) }.should raise_error(TypeError)
  end
    
        $Kernel_trace_var_global = 'foo'
    captured.should == 'foo'
  end
    
        if res[2][IAX_IE_APPARENT_ADDR]
      r_fam, r_port, r_addr = res[2][IAX_IE_APPARENT_ADDR].unpack('nnA4')
      r_addr = r_addr.unpack('C*').map{|x| x.to_s }.join('.')
      dprint('REGACK: Registered from address #{r_addr}:#{r_port}')
    end
    
              # Encodes the ticket field
          #
          # @return [String]
          def encode_ticket
            ticket.encode
          end
    
                seq.to_der
          end
    
      if fast_forwards.include?(name)
    puts '#{name}: TEMP IGNORE'
    unavailable.push(Struct::Blog.new(name, web_url, nil))
    next
  end
    
        def validate_and_append_child(parent, child, line, root)
      case child
      when Array
        child.each {|c| validate_and_append_child(parent, c, line, root)}
      when Tree::Node
        parent << child
      end
    end
    
        # Parses the command-line arguments and runs the executable.
    # This does not handle exceptions or exit the program.
    #
    # @see #parse!
    def parse
      @opts = OptionParser.new(&method(:set_opts))
      @opts.parse!(@args)
    
          opts.on('--dasherize', 'Convert underscores to dashes.') do
        @options[:for_tree][:dasherize] = true
      end
    
          # @see Base#mtime
      def mtime(name, options)
        file, _ = Sass::Util.destructure(find_real_file(@root, name, options))
        File.mtime(file) if file
      rescue Errno::ENOENT
        nil
      end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
      class Blockquote < Liquid::Block
    FullCiteWithTitle = /(\S.*)\s+(https?:\/\/)(\S+)\s+(.+)/i
    FullCite = /(\S.*)\s+(https?:\/\/)(\S+)/i
    AuthorTitle = /([^,]+),([^,]+)/
    Author =  /(.+)/
    
          locations = Array.new
      while (data.code.to_i == 301 || data.code.to_i == 302)
        data = handle_gist_redirecting(data)
        break if locations.include? data.header['Location']
        locations << data.header['Location']
      end