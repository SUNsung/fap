
        
          def self.source_dir; SOURCE_DIR; end
end
    
        # The URL template to render collection's documents at.
    #
    # Returns the URL template to render collection's documents at.
    def url_template
      @url_template ||= metadata.fetch('permalink') do
        Utils.add_permalink_suffix('/:collection/:path', site.permalink_style)
      end
    end
    
            def url_absolute(url)
          return true if Addressable::URI.parse(url).absolute?
          Jekyll.logger.warn 'Warning:', 'Your site URL does not seem to be absolute, '\
              'check the value of `url` in your config file.'
          false
        end
      end
    end
  end
end

    
              new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
    BASE_URI = ENV['BASE_URI'] || 'https://github.com/jondot/awesome-react-native'
    
          Homebrew.failed = true
      print '#{f}: ' if ff.size > 1
      puts missing.join(' ')
    end
  end
end

    
    module Homebrew
  module_function
    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
    # Capybara defaults to XPath selectors rather than Webrat's default of CSS3. In
# order to ease the transition to Capybara we set the default here. If you'd
# prefer to use XPath just remove this line and adjust any selectors in your
# steps to use the XPath syntax.
Capybara.default_selector = :css
    
    module NavigationHelpers
  def path_to(page_name)
    case page_name
    when /^person_photos page$/
      person_photos_path(@me.person)
    when /^the home(?: )?page$/
      stream_path
    when /^the mobile path$/
      force_mobile_path
    when /^the user applications page$/
      api_openid_connect_user_applications_path
    when /^the tag page for '([^\']*)'$/
      tag_path(Regexp.last_match(1))
    when /^its ([\w ]+) page$/
      send('#{Regexp.last_match(1).gsub(/\W+/, '_')}_path', @it)
    when /^the mobile ([\w ]+) page$/
      public_send('#{Regexp.last_match(1).gsub(/\W+/, '_')}_path', format: 'mobile')
    when /^the ([\w ]+) page$/
      public_send('#{Regexp.last_match(1).gsub(/\W+/, '_')}_path')
    when /^my edit profile page$/
      edit_profile_path
    when /^my profile page$/
      person_path(@me.person)
    when /^my acceptance form page$/
      invite_code_path(InvitationCode.first)
    when /^the requestors profile$/
      person_path(Request.where(recipient_id: @me.person.id).first.sender)
    when /^'([^\']*)''s page$/
      p = User.find_by_email(Regexp.last_match(1)).person
      {path:         person_path(p),
       # '#diaspora_handle' on desktop, '.description' on mobile
       special_elem: {selector: '#diaspora_handle, .description', text: p.diaspora_handle}
      }
    when /^'([^\']*)''s photos page$/
      p = User.find_by_email(Regexp.last_match(1)).person
      person_photos_path p
    when /^my account settings page$/
      edit_user_path
    when /^forgot password page$/
      new_user_password_path
    when %r{^'(/.*)'}
      Regexp.last_match(1)
    else
      raise 'Can't find mapping from \'#{page_name}\' to a path.'
    end
  end
    
        # the username that was just entered for registration
    expect(page).to have_field('profile_first_name', with: @username)
  end
end
    
          delete :destroy, params: {post_id: @message.id, id: like2.id}, format: :json
      expect(response.status).to eq(404)
      expect(response.body).to eq(I18n.t('likes.destroy.error'))
      expect(Like.count).to eq(like_count)
    end
  end
end

    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
        def post_render(post)
      OctopressFilters::post_filter(post)
    end
  end
end
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end
    
    namespace :gem do
  def version
    require 'spree/core/version'
    Spree.version
  end
    
              scope = scope.not_deleted unless params[:show_deleted]
          scope = scope.not_discontinued unless params[:show_discontinued]
        else
          scope = Product.accessible_by(current_ability, :read).active.includes(*product_includes)
        end
    
            def destroy
          @image = scope.images.accessible_by(current_ability, :destroy).find(params[:id])
          @image.destroy
          respond_with(@image, status: 204)
        end
    
            def find_line_item
          id = params[:id].to_i
          order.line_items.detect { |line_item| line_item.id == id } or
            raise ActiveRecord::RecordNotFound
        end
    
            def update
          authorize! params[:action], @payment
          if !@payment.editable?
            render 'update_forbidden', status: 403
          elsif @payment.update_attributes(payment_params)
            respond_with(@payment, default_template: :show)
          else
            invalid_resource!(@payment)
          end
        end
    
            def create
          @order = Spree::Order.find_by!(number: params.fetch(:shipment).fetch(:order_id))
          authorize! :read, @order
          authorize! :create, Shipment
          quantity = params[:quantity].to_i
          @shipment = @order.shipments.create(stock_location_id: params.fetch(:stock_location_id))
    
            def show
          @stock_movement = scope.find(params[:id])
          respond_with(@stock_movement)
        end