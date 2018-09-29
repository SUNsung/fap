
        
        class BuildEnvironment
  def initialize(*settings)
    @settings = Set.new(*settings)
  end
    
      def zsh_completion_caveats
    if keg && keg.completion_installed?(:zsh) then <<-EOS.undent
      zsh completion has been installed to:
        #{HOMEBREW_PREFIX}/share/zsh/site-functions
      EOS
    end
  end
    
          return false unless prune_time
    
      def describe_path(path)
    return 'N/A' if path.nil?
    realpath = path.realpath
    if realpath == path
      path
    else
      '#{path} => #{realpath}'
    end
  end
    
        dirs.each do |d|
      files = []
      d.find { |pn| files << pn unless pn.directory? }
      print_remaining_files files, d
    end
    
      SEARCHABLE_TAPS = OFFICIAL_TAPS.map { |tap| ['Homebrew', tap] } + [
    %w[Caskroom cask],
    %w[Caskroom versions]
  ]
    
    [
 [Badge::PopularLink, 'Popular Link', BadgeType::Bronze, 50],
 [Badge::HotLink,     'Hot Link',     BadgeType::Silver, 300],
 [Badge::FamousLink,  'Famous Link',  BadgeType::Gold,   1000],
].each do |id, name, level, count|
  Badge.seed do |b|
    b.id = id
    b.name = name
    b.badge_type_id = level
    b.multiple_grant = true
    b.target_posts = true
    b.show_posts = true
    b.query = BadgeQueries.linking_badge(count)
    b.badge_grouping_id = BadgeGrouping::Posting
    b.default_badge_grouping_id = BadgeGrouping::Posting
    # don't trigger for now, its too expensive
    b.trigger = Badge::Trigger::None
    b.system = true
  end
end
    
      smoke_user = User.seed do |u|
    u.id = 0
    u.name = 'smoke_user'
    u.username = 'smoke_user'
    u.username_lower = 'smoke_user'
    u.password = 'P4ssw0rd'
    u.active = true
    u.approved = true
    u.approved_at = Time.now
    u.trust_level = TrustLevel[3]
  end.first
    
            unless post && post.id
          puts post.errors.full_messages if post
          puts creator.errors.inspect
          raise 'Failed to create description for trust level 3 lounge!'
        end
    
          if staff.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('staff_category_description'),
          title: I18n.t('category.topic_prefix', category: staff.name),
          category: staff.name,
          archetype: Archetype.default
        )
        post = creator.create
    
    group :test do
  gem 'minitest'
  gem 'rr', require: false
  gem 'rack-test', require: false
end
    
    
    def initialize
      raise NotImplementedError, '#{self.class} is an abstract class and cannot be instantiated.' if self.class.abstract
    end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
        def initialize(options = {})
      @request_options = options.extract!(:request_options)[:request_options].try(:dup) || {}
      options[:max_concurrency] ||= 20
      options[:pipelining] = false
      super
    end
    
        after :each do
      ENV['SHELL'] = @shell
    end
    
    describe 'Kernel#taint' do
  it 'returns self' do
    o = Object.new
    o.taint.should equal(o)
  end
    
        it 'returns the time at which the file was created when passed ?C' do
      Kernel.test(?C, @tmp_file).should == @tmp_file.ctime
    end
    
    puts '\nUnable to find an RSS feed for the following blogs:'
puts '==================================================='
unavailable.each do |b|
  puts '#{b.name} | #{b.web_url}'
end
puts '==================================================='

    
    if profile_filename = ENV['PROFILE']
  require 'ruby-prof'
  reporter =
    case (profile_extname = File.extname(profile_filename))
    when '.txt'
      RubyProf::FlatPrinterWithLineNumbers
    when '.html'
      RubyProf::GraphHtmlPrinter
    when '.callgrind'
      RubyProf::CallTreePrinter
    else
      raise 'Unknown profiler format indicated by extension: #{profile_extname}'
    end
  File.open(profile_filename, 'w') do |io|
    reporter.new(RubyProf.profile { Pod::Command.run(ARGV) }).print(io)
  end
else
  Pod::Command.run(ARGV)
end

    
        pod 'Alamofire', path: '../Alamofire Example/Alamofire'
    
          def content_type
        case params[:format]
        when 'json'
          'application/json; charset=utf-8'
        when 'xml'
          'text/xml; charset=utf-8'
        end
      end
    
              if Spree::Cart::Update.call(order: @order, params: line_items_attributes).success?
            @line_item.reload
            respond_with(@line_item, default_template: :show)
          else
            invalid_resource!(@line_item)
          end
        end
    
            def create
          authorize! :create, Product
          params[:product][:available_on] ||= Time.current
          set_up_shipping_category
    
              if @shipment.inventory_units.any?
            @shipment.reload
          else
            @shipment.destroy!
          end