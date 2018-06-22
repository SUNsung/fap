
        
        BASE_URI = ENV['BASE_URI'] || 'https://github.com/jondot/awesome-react-native'
    
    def check_link(uri)
  HTTParty.head(uri, :verify => false).code.to_i.tap do |status|
    if (400..422).include?(status)
      if status != 403 && !uri.exclude?('udemy.com')
        raise 'Request had status #{status}'
      else
        putc('S')
      end
    end
  end
end
    
          if args.all? { |arg| arg.is_a?(Symbol) }
        options.assert_valid_keys([:type, :roles, :values, :ace, :cache_response])
      end
    
        @table_sort_info = {
      order: { attribute.to_sym => direction.to_sym },
      attribute: attribute,
      direction: direction
    }
  end
    
        def subscribe
      authorize @account, :subscribe?
      Pubsubhubbub::SubscribeWorker.perform_async(@account.id)
      redirect_to admin_account_path(@account.id)
    end
    
      def remove_avatar?
    staff?
  end
    
      def icon
    object.image
  end
    
        map = map.sort { |a, b| a[0].size <=> b[0].size }.to_h
    
    class NotificationMailerPreview < ActionMailer::Preview
  # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/mention
  def mention
    m = Mention.last
    NotificationMailer.mention(m.account, Notification.find_by(activity: m))
  end
    
      def test_font_helper_without_suffix
    assert_match %r(url\(['']?/assets/.*eot['']?\)), @css
  end
    
          File.open('bower.json', 'w') do |f|
        f.puts JSON.pretty_generate(spec)
      end
    end
  end
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
    
    