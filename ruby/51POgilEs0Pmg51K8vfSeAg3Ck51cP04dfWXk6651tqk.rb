
        
            before do
      hex = 'xxx'
      SecureRandom.stubs(:hex).returns(hex)
      @temp_folder = '#{Pathname.new(Dir.tmpdir).realpath}/discourse_theme_#{hex}'
      @ssh_folder = '#{Pathname.new(Dir.tmpdir).realpath}/discourse_theme_ssh_#{hex}'
    end
    
        def s3_bucket_name_with_prefix
      if Rails.configuration.multisite
        File.join(SiteSetting.s3_backup_bucket, MULTISITE_PREFIX, RailsMultisite::ConnectionManagement.current_db)
      else
        SiteSetting.s3_backup_bucket
      end
    end
    
          text.gsub!(/`[a-z_]+`/) do |m|
        if scope.is_staff?
          setting = m[1..-2]
          '<a href=\'#{settings_url}#{setting}\'>#{setting.gsub('_', ' ')}</a>'
        else
          m.gsub('_', ' ')
        end
      end
    end
    
          it 'allows an admin to insert images into a new user's post' do
        expect(post.errors).to be_blank
      end
    
          expect(settings.upload_type).to eq(upload)
      expect(settings.send(:uploads)[:upload_type]).to eq(upload)
    
        like_ratios_by_percentile = like_ratio_thresholds
    update_setting(:topic_post_like_heat_high, like_ratios_by_percentile[10])
    update_setting(:topic_post_like_heat_medium, like_ratios_by_percentile[25])
    update_setting(:topic_post_like_heat_low, like_ratios_by_percentile[45])
  end
    
    describe ConversationsController, :type => :controller do
  describe '#index' do
    before do
      @person = alice.contacts.first.person
      hash = {
        :author => @person,
        :participant_ids => [alice.person.id, @person.id],
        :subject => 'not spam',
        :messages_attributes => [ {:author => @person, :text => 'cool stuff'} ]
      }
      @conv1 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv1.id)
             .increase_unread(alice)
      Message.create(:author => @person, :created_at => Time.now + 200, :text => 'another message', :conversation_id => @conv1.id)
             .increase_unread(alice)
    
          it_behaves_like 'on a visible post'
    end
    
        # OS stats are not available on all platforms
    # TODO: replace exception logic with has_keys? when it is implemented in MetricStore
    def os_stats?(stats)
      stats.get_shallow(:os)
      true
    rescue LogStash::Instrument::MetricStore::MetricNotFound
      false
    end
    
      class RegexpExpression < Node
    def expr
      selector, operator_method, regexp = recursive_select(
        Selector,
        LogStash::Compiler::LSCL::AST::RegExpOperator,
        LogStash::Compiler::LSCL::AST::RegExp,
        LogStash::Compiler::LSCL::AST::String # Strings work as rvalues! :p
      ).map(&:expr)
    
    LogStash::Bundler.setup!
    
    module LogStash module PluginManager module PackFetchStrategy
  class Repository
    DEFAULT_PACK_URL = 'https://artifacts.elastic.co/downloads/logstash-plugins'
    PACK_EXTENSION = 'zip'
    
      it 'returns the config_hash' do
    expect(subject.config_hash).not_to be_nil
  end
    
      trap('INT') {
    [jekyllPid, compassPid, rackupPid].each { |pid| Process.kill(9, pid) rescue Errno::ESRCH }
    exit 0
  }
    
    end
    
        # Initializes a new CategoryIndex.
    #
    #  +base+         is the String path to the <source>.
    #  +category_dir+ is the String path between <source> and the category folder.
    #  +category+     is the category currently being processed.
    def initialize(site, base, category_dir, category)
      @site = site
      @base = base
      @dir  = category_dir
      @name = 'index.html'
      self.process(@name)
      # Read the YAML data from the layout page.
      self.read_yaml(File.join(base, '_layouts'), 'category_index.html')
      self.data['category']    = category
      # Set the title for this page.
      title_prefix             = site.config['category_title_prefix'] || 'Category: '
      self.data['title']       = '#{title_prefix}#{category}'
      # Set the meta-description for this page.
      meta_description_prefix  = site.config['category_meta_description_prefix'] || 'Category: '
      self.data['description'] = '#{meta_description_prefix}#{category}'
    end
    
        def cache(gist, file, data)
      cache_file = get_cache_file_for gist, file
      File.open(cache_file, 'w') do |io|
        io.write data
      end
    end
    
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
    
          Dir.chdir(code_path) do
        code = file.read
        @filetype = file.extname.sub('.','') if @filetype.nil?
        title = @title ? '#{@title} (#{file.basename})' : file.basename
        url = '/#{code_dir}/#{@file}'
        source = '<figure class='code'><figcaption><span>#{title}</span> <a href='#{url}'>download</a></figcaption>\n'
        source += '#{HighlightCode::highlight(code, @filetype)}</figure>'
        TemplateWrapper::safe_wrap(source)
      end
    end
  end
    
        def post_render(page)
      OctopressFilters::post_filter(page)
    end
  end
    
    
    
        def self.register_private_key(email_address)
      registration = client.new_account(:contact => 'mailto:#{email_address}', :terms_of_service_agreed => true)
      logger.info 'Successfully registered private key with address #{email_address}'
      true
    end
    
      def require_organization_owner
    unless organization.owner == current_user
      redirect_to organization_root_path(organization), :alert => 'This page can only be accessed by the organization's owner (#{organization.owner.name})'
    end
  end
    
    end

    
      def safe_params
    params.require(:http_endpoint).permit(:name, :url, :encoding, :format, :strip_replies, :include_attachments, :timeout)
  end
    
      def create
    scope = @server ? @server.ip_pool_rules : organization.ip_pool_rules
    @ip_pool_rule = scope.build(safe_params)
    if @ip_pool_rule.save
      redirect_to_with_json [organization, @server, :ip_pool_rules]
    else
      render_form_errors 'new', @ip_pool_rule
    end
  end
    
      def create
    @organization = Organization.new(params.require(:organization).permit(:name, :permalink))
    @organization.owner = current_user
    if @organization.save
      redirect_to_with_json organization_root_path(@organization)
    else
      render_form_errors 'new', @organization
    end
  end
    
      def update
    if @route.update(safe_params)
      redirect_to_with_json [organization, @server, :routes]
    else
      render_form_errors 'edit', @route
    end
  end
    
      def unsuspend
    @server.unsuspend
    redirect_to_with_json [organization, @server], :notice => 'Server has been unsuspended'
  end
    
      def history
    @current_page = params[:page] ? params[:page].to_i : 1
    @requests = @server.message_db.webhooks.list(@current_page)
  end