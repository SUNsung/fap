
        
                    c.action do |args, opts|
              Jekyll::Commands::NewTheme.process(args, opts)
            end
          end
        end
    
        def arg_is_present?(args, deprecated_argument, message)
      deprecation_message(message) if args.include?(deprecated_argument)
    end
    
      def verify_payload?
    payload.present? && VerifySalmonService.new.call(payload)
  end
    
      private
    
      def set_locale
    I18n.locale = default_locale
    I18n.locale = current_user.locale if user_signed_in?
  rescue I18n::InvalidLocale
    I18n.locale = default_locale
  end
    
      # if rss_url already in existing opml file, use that; otherwise, do a lookup
  rss_url = nil
  if File.exist?(OUTPUT_FILENAME)
    xml = Nokogiri::XML(File.open(OUTPUT_FILENAME))
    existing_blog = xml.xpath('//outline[@htmlUrl='#{web_url}']').first
    if existing_blog
      rss_url = existing_blog.attr('xmlUrl')
      puts '#{name}: ALREADY HAVE'
    end
  end
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
        it 'generates a jasmine fixture', :fixture => true do
      get :bookmarklet
      save_fixture(html_for('body'), 'bookmarklet')
    end
    
          it_behaves_like 'on a visible post'
    end
    
        context 'on a post you can't see' do
      before do
        sign_in(eve, scope: :user)
      end
    
        streams = {
      liked:         Stream::Likes,
      mentioned:     Stream::Mention,
      followed_tags: Stream::FollowedTag,
      activity:      Stream::Activity
    }
    
      desc 'Install all spree gems'
  task install: :build do
    for_each_gem do |gem_path|
      Bundler.with_clean_env do
        sh 'gem install #{gem_path}'
      end
    end
  end
    
          @@order_attributes = [
        :id, :number, :item_total, :total, :ship_total, :state, :adjustment_total,
        :user_id, :created_at, :updated_at, :completed_at, :payment_total,
        :shipment_state, :payment_state, :email, :special_instructions, :channel,
        :included_tax_total, :additional_tax_total, :display_included_tax_total,
        :display_additional_tax_total, :tax_total, :currency, :considered_risky,
        :canceler_id
      ]