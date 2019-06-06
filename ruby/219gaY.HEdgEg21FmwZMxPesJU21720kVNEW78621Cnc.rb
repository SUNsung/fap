
        
          def report_collection_enabled?
    SiteSetting.content_security_policy_collect_reports
  end
end

    
      def self.set(user, key, sequence, data)
    if d = find_draft(user, key)
      return if d.sequence > sequence
    
        langs.sort
  end
    
          Theme.where(id: Theme.transform_ids(theme_ids)).find_each do |theme|
        theme.cached_settings.each do |setting, value|
          extensions << build_theme_extension(value) if setting.to_s == THEME_SETTING
        end
      end
    
      def query
    @query ||= JavascriptCache.where(digest: params[:digest]).limit(1)
  end
    
          svg_sprite = 'window.__svg_sprite = #{SvgSprite.bundle(theme_ids).inspect};'
    
      preflight do
    processes = system_command '/bin/launchctl', args: ['list']
    
      # body
  xml.tag!('body') do
    xml.tag!('outline', text: TITLE, title: TITLE) do
      blogs.each do |blog|
        xml.tag!('outline', type: 'rss', text: blog.name, title: blog.name,
          xmlUrl: blog.rss_url, htmlUrl: blog.web_url)
      end
    end
  end
end
    
      find_files = ->(path) {
    Find.find(Pathname.new(path).relative_path_from(Pathname.new Dir.pwd).to_s).map do |path|
      path if File.file?(path)
    end.compact
  }
    
        private
    
        def log_status(status)
      puts bold status
    end
    
            def line_items_attributes
          { line_items_attributes: {
            id: params[:id],
            quantity: params[:line_item][:quantity],
            options: line_item_params[:options] || {}
          } }
        end
    
              def complete_service
            Spree::Api::Dependencies.storefront_checkout_complete_service.constantize
          end
    
          @@address_attributes = [
        :id, :firstname, :lastname, :full_name, :address1, :address2, :city,
        :zipcode, :phone, :company, :alternative_phone, :country_id, :state_id,
        :state_name, :state_text
      ]
    
      config.vm.provision :puppet do |puppet|
    puppet.manifests_path = 'test'
    puppet.manifest_file = 'vagrant.pp'
  end
end

    
        pax_slash = ret.rindex('/')
    if(pax_slash == nil)
      pax_slash = 0
    else
      pax_slash = ret.rindex('/', pax_slash-1)
      if(pax_slash == nil || pax_slash < 0)
        pax_slash = 0
      end
    end
    
      def write_scripts
    SCRIPT_MAP.each do |scriptname, filename|
      next unless script?(scriptname)
    
      def create_scripts
    if script?(:after_install)
      File.write(File.join(fpm_meta_path, 'after_install'), script(:after_install))
    end
  end
    
        desc 'Package #{@name}' unless ::Rake.application.last_description
    
      # mknod is __xmknod in glibc a wrapper around mknod to handle
  # various stat struct formats. See bits/stat.h in glibc source
  begin
    attach_function :mknod, :mknod, [:string, :uint, :ulong], :int
  rescue FFI::NotFoundError
    # glibc/io/xmknod.c int __xmknod (int vers, const char *path, mode_t mode, dev_t *dev)
    attach_function :xmknod, :__xmknod, [:int, :string, :uint, :pointer], :int
  end
    
    Before do
  gemfile = ENV['BUNDLE_GEMFILE'].to_s
  ENV['BUNDLE_GEMFILE'] = File.join(Dir.pwd, gemfile) unless gemfile.start_with?(Dir.pwd)
  @framework_version = nil
end
    
        def type_from_file_command
      @type_from_file_command ||=
        FileCommandContentTypeDetector.new(@filepath).detect
    end
  end
end

    
        def add_required_validations
      options = Paperclip::Attachment.default_options.deep_merge(@options)
      if options[:validate_media_type] != false
        name = @name
        @klass.validates_media_type_spoof_detection name,
          :if => ->(instance){ instance.send(name).dirty? }
      end
    end