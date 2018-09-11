
        
                  def datetime_selector(options, html_options)
            datetime = options.fetch(:selected) { value || default_datetime(options) }
            @auto_index ||= nil
    
            prefixes = /\blayouts/.match?(_implied_layout_name) ? [] : ['layouts']
        default_behavior = 'lookup_context.find_all('#{_implied_layout_name}', #{prefixes.inspect}, false, [], { formats: formats }).first || super'
        name_clause = if name
          default_behavior
        else
          <<-RUBY
            super
          RUBY
        end
    
          def self.digest_caches
        @details_keys.values
      end
    end
    
        def find(*args)
      find_all(*args).first || raise(MissingTemplate.new(self, *args))
    end
    
    [
  [Badge::Appreciated, 'Appreciated', BadgeType::Bronze, 1, 20],
  [Badge::Respected,   'Respected',   BadgeType::Silver, 2, 100],
  [Badge::Admired,     'Admired',     BadgeType::Gold,   5, 300],
].each do |id, name, level, like_count, post_count|
  Badge.seed do |b|
    b.id = id
    b.name = name
    b.default_icon = 'fa-heart'
    b.badge_type_id = level
    b.query = BadgeQueries.liked_posts(post_count, like_count)
    b.default_badge_grouping_id = BadgeGrouping::Community
    b.trigger = Badge::Trigger::None
    b.auto_revoke = false
    b.system = true
  end
end
    
            lounge.topic_id = post.topic.id
        unless lounge.save
          puts lounge.errors.full_messages
          puts 'Failed to set the lounge description topic!'
        end
    
    $stderr.puts <<DEPRECATION
WARNING: Ruby Sass's Git repository is moving, and the old repository will be
deled on 26 March 2019! Please update your Git URLs to point to the new
repository at https://github.com/sass/ruby-sass.
    
        # Flatten rules so that
    #
    #     foo
    #       bar
    #         color: red
    #
    # becomes
    #
    #     foo bar
    #       color: red
    #
    # and
    #
    #     foo
    #       &.bar
    #         color: blue
    #
    # becomes
    #
    #     foo.bar
    #       color: blue
    #
    # @param root [Tree::Node] The parent node
    def flatten_rules(root)
      root.children.each do |child|
        case child
        when Tree::RuleNode
          flatten_rule(child)
        when Tree::DirectiveNode
          flatten_rules(child)
        end
      end
    end
    
        # The content passed to this environment. If the content's environment isn't already
    # read-only, it's made read-only.
    #
    # @see BaseEnvironment#content
    #
    # @return {[Array<Sass::Tree::Node>, ReadOnlyEnvironment]?} The content nodes and
    #   the lexical environment of the content block.
    #   Returns `nil` when there is no content in this environment.
    def content
      # Return the cached content from a previous invocation if any
      return @content if @content_cached
      # get the content with a read-write environment from the superclass
      read_write_content = super
      if read_write_content
        tree, env = read_write_content
        # make the content's environment read-only
        if env && !env.is_a?(ReadOnlyEnvironment)
          env = ReadOnlyEnvironment.new(env, env.options)
        end
        @content_cached = true
        @content = [tree, env]
      else
        @content_cached = true
        @content = nil
      end
    end
  end
    
          def header_string(e, line_offset)
        unless e.is_a?(Sass::SyntaxError) && e.sass_line && e.sass_template
          return '#{e.class}: #{e.message}'
        end
    
          opts.on('-q', '--quiet', 'Silence warnings and status messages during conversion.') do |bool|
        @options[:for_engine][:quiet] = bool
      end
    
    Then(/^the specified stage files are created$/) do
  qa = TestApp.test_app_path.join('config/deploy/qa.rb')
  production = TestApp.test_app_path.join('config/deploy/production.rb')
  expect(File.exist?(qa)).to be true
  expect(File.exist?(production)).to be true
end
    
        def display_error_message(ex)
      unless options.backtrace
        Rake.application.options.suppress_backtrace_pattern = backtrace_pattern if backtrace_pattern
        trace '(Backtrace restricted to imported tasks)'
      end
    
          def each
        servers_by_key.values.each { |server| yield server }
      end
    
          before_action :set_content_type
      before_action :load_user
      before_action :authorize_for_order, if: proc { order_token.present? }
      before_action :authenticate_user
      before_action :load_user_roles
    
            def order
          @order ||= Spree::Order.includes(:line_items).find_by!(number: order_id)
          authorize! :update, @order, order_token
        end
    
            def option_type_params
          params.require(:option_type).permit(permitted_option_type_attributes)
        end
      end
    end
  end
end

    
            def new; end
    
            def mine
          if current_api_user.persisted?
            @shipments = Spree::Shipment.
                         reverse_chronological.
                         joins(:order).
                         where(spree_orders: { user_id: current_api_user.id }).
                         includes(mine_includes).
                         ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          else
            render 'spree/api/errors/unauthorized', status: :unauthorized
          end
        end
    
            def update
          authorize! :update, stock_location
          if stock_location.update_attributes(stock_location_params)
            respond_with(stock_location, status: 200, default_template: :show)
          else
            invalid_resource!(stock_location)
          end
        end
    
            def index
          authorize! :read, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
        end
    
      def self.source_root
    @source_root ||= File.expand_path('../templates', __FILE__)
  end
    
      module ClassMethods
    # +has_attached_file+ gives the class it is called on an attribute that maps to a file. This
    # is typically a file stored somewhere on the filesystem and has been uploaded by a user.
    # The attribute returns a Paperclip::Attachment object which handles the management of
    # that file. The intent is to make the attachment as much like a normal attribute. The
    # thumbnails will be created when the new file is assigned, but they will *not* be saved
    # until +save+ is called on the record. Likewise, if the attribute is set to +nil+ is
    # called on it, the attachment will *not* be deleted until +save+ is called. See the
    # Paperclip::Attachment documentation for more specifics. There are a number of options
    # you can set to change the behavior of a Paperclip attachment:
    # * +url+: The full URL of where the attachment is publicly accessible. This can just
    #   as easily point to a directory served directly through Apache as it can to an action
    #   that can control permissions. You can specify the full domain and path, but usually
    #   just an absolute path is sufficient. The leading slash *must* be included manually for
    #   absolute paths. The default value is
    #   '/system/:class/:attachment/:id_partition/:style/:filename'. See
    #   Paperclip::Attachment#interpolate for more information on variable interpolaton.
    #     :url => '/:class/:attachment/:id/:style_:filename'
    #     :url => 'http://some.other.host/stuff/:class/:id_:extension'
    #   Note: When using the +s3+ storage option, the +url+ option expects
    #   particular values. See the Paperclip::Storage::S3#url documentation for
    #   specifics.
    # * +default_url+: The URL that will be returned if there is no attachment assigned.
    #   This field is interpolated just as the url is. The default value is
    #   '/:attachment/:style/missing.png'
    #     has_attached_file :avatar, :default_url => '/images/default_:style_avatar.png'
    #     User.new.avatar_url(:small) # => '/images/default_small_avatar.png'
    # * +styles+: A hash of thumbnail styles and their geometries. You can find more about
    #   geometry strings at the ImageMagick website
    #   (http://www.imagemagick.org/script/command-line-options.php#resize). Paperclip
    #   also adds the '#' option (e.g. '50x50#'), which will resize the image to fit maximally
    #   inside the dimensions and then crop the rest off (weighted at the center). The
    #   default value is to generate no thumbnails.
    # * +default_style+: The thumbnail style that will be used by default URLs.
    #   Defaults to +original+.
    #     has_attached_file :avatar, :styles => { :normal => '100x100#' },
    #                       :default_style => :normal
    #     user.avatar.url # => '/avatars/23/normal_me.png'
    # * +keep_old_files+: Keep the existing attachment files (original + resized) from
    #   being automatically deleted when an attachment is cleared or updated. Defaults to +false+.
    # * +preserve_files+: Keep the existing attachment files in all cases, even if the parent
    #   record is destroyed. Defaults to +false+.
    # * +whiny+: Will raise an error if Paperclip cannot post_process an uploaded file due
    #   to a command line error. This will override the global setting for this attachment.
    #   Defaults to true.
    # * +convert_options+: When creating thumbnails, use this free-form options
    #   array to pass in various convert command options.  Typical options are '-strip' to
    #   remove all Exif data from the image (save space for thumbnails and avatars) or
    #   '-depth 8' to specify the bit depth of the resulting conversion.  See ImageMagick
    #   convert documentation for more options: (http://www.imagemagick.org/script/convert.php)
    #   Note that this option takes a hash of options, each of which correspond to the style
    #   of thumbnail being generated. You can also specify :all as a key, which will apply
    #   to all of the thumbnails being generated. If you specify options for the :original,
    #   it would be best if you did not specify destructive options, as the intent of keeping
    #   the original around is to regenerate all the thumbnails when requirements change.
    #     has_attached_file :avatar, :styles => { :large => '300x300', :negative => '100x100' }
    #                                :convert_options => {
    #                                  :all => '-strip',
    #                                  :negative => '-negate'
    #                                }
    #   NOTE: While not deprecated yet, it is not recommended to specify options this way.
    #   It is recommended that :convert_options option be included in the hash passed to each
    #   :styles for compatibility with future versions.
    #   NOTE: Strings supplied to :convert_options are split on space in order to undergo
    #   shell quoting for safety. If your options require a space, please pre-split them
    #   and pass an array to :convert_options instead.
    # * +storage+: Chooses the storage backend where the files will be stored. The current
    #   choices are :filesystem, :fog and :s3. The default is :filesystem. Make sure you read the
    #   documentation for Paperclip::Storage::Filesystem, Paperclip::Storage::Fog and Paperclip::Storage::S3
    #   for backend-specific options.
    #
    # It's also possible for you to dynamically define your interpolation string for :url,
    # :default_url, and :path in your model by passing a method name as a symbol as a argument
    # for your has_attached_file definition:
    #
    #   class Person
    #     has_attached_file :avatar, :default_url => :default_url_by_gender
    #
    #     private
    #
    #     def default_url_by_gender
    #       '/assets/avatars/default_#{gender}.png'
    #     end
    #   end
    def has_attached_file(name, options = {})
      HasAttachedFile.define_on(self, name, options)
    end
  end
end
    
        # resize to a new geometry
    # @param geometry [String] the Paperclip geometry definition to resize to
    # @example
    #   Paperclip::Geometry.new(150, 150).resize_to('50x50!')
    #   #=> Paperclip::Geometry(50, 50)
    def resize_to(geometry)
      new_geometry = Paperclip::Geometry.parse geometry
      case new_geometry.modifier
      when '!', '#'
        new_geometry
      when '>'
        if new_geometry.width >= self.width && new_geometry.height >= self.height
          self
        else
          scale_to new_geometry
        end
      when '<'
        if new_geometry.width <= self.width || new_geometry.height <= self.height
          self
        else
          scale_to new_geometry
        end
      else
        scale_to new_geometry
      end
    end