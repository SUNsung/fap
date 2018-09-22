
        
            def limit_reached_for(user_id, date)
      GivenDailyLike.find_for(user_id, date).pluck(:limit_reached)[0] || false
    end
    
    [
  [Badge::Promoter, 'Promoter', BadgeType::Bronze, 1, 0],
  [Badge::Campaigner, 'Campaigner', BadgeType::Silver, 3, 1],
  [Badge::Champion, 'Champion', BadgeType::Gold, 5, 2],
].each do |id, name, type, count, trust_level|
  Badge.seed do |b|
    b.id = id
    b.name = name
    b.default_icon = 'fa-user-plus'
    b.badge_type_id = type
    b.multiple_grant = false
    b.target_posts = false
    b.show_posts = false
    b.query = BadgeQueries.invite_badge(count, trust_level)
    b.default_badge_grouping_id = BadgeGrouping::Community
    # daily is good enough
    b.trigger = Badge::Trigger::None
    b.auto_revoke = true
    b.system = true
  end
end
    
    # User for the smoke tests
if ENV['SMOKE'] == '1'
  UserEmail.seed do |ue|
    ue.id = 0
    ue.email = 'smoke_user@discourse.org'
    ue.primary = true
    ue.user_id = 0
  end
    
            @v.update_rating({
          'CARTOON_FANTASY_VIOLENCE' => 1,
          'MATURE_SUGGESTIVE' => 2,
          'GAMBLING' => 0,
          'UNRESTRICTED_WEB_ACCESS' => 1,
          'GAMBLING_CONTESTS' => 0
        })
      end
    
      describe 'CI' do
    it 'crashes when running in non-interactive shell' do
      expect(FastlaneCore::Helper).to receive(:ci?).and_return(true)
      provider = { 'contentProvider' => { 'name' => 'Tom', 'contentProviderId' => 1234 } }
      allow(subject).to receive(:teams).and_return([provider, provider]) # pass it twice, to call the team selection
      expect { subject.select_team }.to raise_error('Multiple App Store Connect Teams found; unable to choose, terminal not interactive!')
    end
  end
end

    
          def self.category
        :testing
      end
    end
  end
end

    
          # splitting on comma allows us to support comma-separated lists of values
      # from the command line, even though the ConfigItem is not defined as an
      # Array type
      config_value = config_value.split(',') unless config_value.kind_of?(Array)
      Scan.config[config_key] = config_value.map(&:to_s)
    end
    
        # @return The version of the currently used Xcode installation (e.g. '7.0')
    def self.xcode_version
      return nil unless self.mac?
      return @xcode_version if @xcode_version && @developer_dir == ENV['DEVELOPER_DIR']
    
            plugins = fetch_plugins(params[:cache_path]).sort_by { |v| v.data[:overall_score] }.reverse
    
            # Halt the machine. This method should gracefully shut down the
        # operating system. This method will cause `vagrant halt` and associated
        # commands to _block_, meaning that if the machine doesn't halt
        # in a reasonable amount of time, this method should just return.
        #
        # If when this method returns, the machine's state isn't 'powered_off,'
        # Vagrant will proceed to forcefully shut the machine down.
        def halt
          raise BaseError, _key: :unsupported_halt
        end
    
    require 'log4r'
    
              # Determine if we require a local Vagrant environment. There are
          # two cases that we require a local environment:
          #
          #   * We're asking for ANY/EVERY VM (no names given).
          #
          #   * We're asking for specific VMs, at least once of which
          #     is NOT in the local machine index.
          #
          requires_local_env = false
          requires_local_env = true if names.empty?
          requires_local_env ||= names.any? { |n|
            !@env.machine_index.include?(n)
          }
          raise Errors::NoEnvironmentError if requires_local_env && !@env.root_path
    
            # This returns all the config classes for the various pushes.
        #
        # @return [Registry]
        def push_configs
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.configs[:push])
            end
          end
        end
    
        stdout.strip
  end
end
    
      def test_symlink_exists(path)
    exists?('L', path)
  end
    
        [stdout, stderr, status]
  end
    
        def sort_options(options)
      not_applicable_to_capistrano = %w(quiet silent verbose)
      options.reject! do |(switch, *)|
        switch =~ /--#{Regexp.union(not_applicable_to_capistrano)}/
      end
    
            def respond_to_missing?(method, _include_all=false)
          @properties.key?(method) || super
        end
    
    desc 'clean the whole repository by removing all the generated files'
task :clean do
  rm_f  'Gemfile.lock'
  rm_rf 'sandbox'
  rm_rf 'pkg'
    
            def scope
          if params[:product_id]
            Spree::Product.friendly.find(params[:product_id])
          elsif params[:variant_id]
            Spree::Variant.find(params[:variant_id])
          end
        end
      end
    end
  end
end

    
            def destroy
          authorize! :destroy, @product_property
          @product_property.destroy
          respond_with(@product_property, status: 204)
        end
    
            def option_types_params
          params[:product].fetch(:option_types, [])
        end
    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:stock_location_id])
        end
    
    Given /^I comment out lines that contain '([^']+)' in '([^']+)'$/ do |contains, glob|
  cd('.') do
    Dir.glob(glob).each do |file|
      transform_file(file) do |content|
        content.gsub(/^(.*?#{contains}.*?)$/) { |line| '# #{line}' }
      end
    end
  end
end
    
      def framework_version
    @framework_version ||= `rails -v`[/^Rails (.+)$/, 1]
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