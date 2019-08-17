
        
            class ChangeTableComment2 < SilentMigration
      def change
        change_table_comment :horses, from: 'Sekitoba', to: 'Diomed'
      end
    end
    
      if ENV['RAILS_LOG_TO_STDOUT'].present?
    logger           = ActiveSupport::Logger.new(STDOUT)
    logger.formatter = config.log_formatter
    config.logger    = ActiveSupport::TaggedLogging.new(logger)
  end
    
        def find_app_tester(email: nil, app: nil)
      tester = app.get_beta_testers(filter: { email: email }, includes: 'apps,betaTesterMetrics,betaGroups').first
    
              @client = Faraday.new(hostname, options) do |c|
            c.response(:json, content_type: /\bjson$/)
            c.response(:xml, content_type: /\bxml$/)
            c.response(:plist, content_type: /\bplist$/)
            c.use(FaradayMiddleware::RelsMiddleware)
            c.adapter(Faraday.default_adapter)
            c.headers['Authorization'] = 'Bearer #{token.text}'
    
            return type_instance
      end
    
            resps = Spaceship::ConnectAPI.get_beta_groups(filter: filter, includes: includes, limit: limit, sort: sort).all_pages
        return resps.map(&:to_models).flatten
      end
    end
  end
end

    
      it 'renders a user's story successfully' do
    expect(get: '/ben/this-is-a-slug').to route_to(
      controller: 'stories',
      action: 'show',
      slug: 'this-is-a-slug',
      username: 'ben',
    )
  end
    
        shared_context 'when user/organization articles exist' do
      let(:organization) { create(:organization) }
      let!(:user_article) { create(:article, user_id: user.id) }
      let!(:organization_article) { create(:article, organization_id: organization.id) }
    end
    
      def self.send_to_buffer(text, buffer_profile_id_code)
    client = Buffer::Client.new(ApplicationConfig['BUFFER_ACCESS_TOKEN'])
    client.create_update(
      body: {
        text:
        text,
        profile_ids: [
          buffer_profile_id_code,
        ]
      },
    )
  end
    
          now = Time.current
      @user.onboarding_package_requested_again = true if @user.onboarding_package_requested
      @user.onboarding_package_requested = true
      @user.onboarding_package_form_submmitted_at = now
      @user.personal_data_updated_at = now
      @user.shipping_validated_at = now if user_params[:shipping_validated] == '1'
      if @user.save!
        format.html { redirect_to '/freestickers/edit' }
        format.json { render :show, status: :ok, location: @user }
      else
        format.html { render :edit }
        format.json { render json: @user.errors, status: :unprocessable_entity }
      end
    end
  end
    
      describe '#dependencies' do
    it_behaves_like :Default, description.gsub(/^#/, '').to_sym, []
    it_behaves_like :Mutator, description.gsub(/^#/, '').to_sym
  end
    
      def add_path(tar, tar_path, path)
    stat = File.lstat(path)
    if stat.directory?
      tar.mkdir(tar_path, stat.mode)
    elsif stat.symlink?
      tar.add_symlink(tar_path, File.readlink(path), stat.mode)
    else
      tar.add_file_simple(tar_path, stat.mode, stat.size) do |io|
        File.open(path) do |fd|
          chunk = nil
          size = 0
          while chunk = fd.read(16384) do
            size += io.write(chunk)
          end
          if size != stat.size
            raise 'Failed to add #{path} to the archive; expected to ' +
                  'write #{stat.size} bytes, only wrote #{size}'
          end
        end
      end # tar.tar.add_file_simple
    end
  end # def add_path
    
      def self.default_prefix
    npm_prefix = safesystemout('npm', 'prefix', '-g').chomp
    if npm_prefix.count('\n') > 0
      raise FPM::InvalidPackageConfiguration, '`npm prefix -g` returned unexpected output.'
    elsif !File.directory?(npm_prefix)
      raise FPM::InvalidPackageConfiguration, '`npm prefix -g` returned a non-existent directory'
    end
    logger.info('Setting default npm install prefix', :prefix => npm_prefix)
    npm_prefix
  end
    
        # Final format of manifest
    safesystem('pkgfmt', manifest_fn)
    
        # Remove the stuff we don't want
    delete_these = ['.depdb', '.depdblock', '.filemap', '.lock', '.channel', 'cache', 'temp', 'download', '.channels', '.registry']
    Find.find(staging_path) do |path|
      if File.file?(path)
        logger.info('replacing staging_path in file', :replace_in => path, :staging_path => staging_path)
        begin
          content = File.read(path).gsub(/#{Regexp.escape(staging_path)}/, '')
          File.write(path, content)
        rescue ArgumentError => e
          logger.warn('error replacing staging_path in file', :replace_in => path, :error => e)
        end
      end
      FileUtils.rm_r(path) if delete_these.include?(File.basename(path))
    end
    
        File.write(build_path('packlist'), files.sort.join('\n'))
    
        platforms.each do |platform|
      logger.info('Generating service manifest.', :platform => platform.class.name)
      platform.program = command.first
      platform.name = attributes[:pleaserun_name]
      platform.args = command[1..-1]
      platform.description = if attributes[:description_given?]
        attributes[:description]
      else
        platform.name
      end
      pleaserun_attributes.each do |attribute_name|
        attribute = 'pleaserun_#{attribute_name}'.to_sym
        if attributes.has_key?(attribute) and not attributes[attribute].nil?
          platform.send('#{attribute_name}=', attributes[attribute])
        end
      end
    
      # Helper for group lookup
  def gid2group(gid)
    begin
      grent = Etc.getgrgid(gid)
      return grent.name
    rescue ArgumentError => e
      # Invalid user id? No user? Return the uid.
      logger.warn('Failed to find group for gid #{gid}')
      return gid.to_s
    end
  end # def uid2user
end # class FPM::Target::Puppet
    
        begin
      json_test_code = [
        'try:',
        '  import json',
        'except ImportError:',
        '  import simplejson as json'
      ].join('\n')
      safesystem('#{attributes[:python_bin]} -c '#{json_test_code}'')
    rescue FPM::Util::ProcessFailed => e
      logger.error('Your python environment is missing json support (either json or simplejson python module). I cannot continue without this.', :python => attributes[:python_bin], :error => e)
      raise FPM::Util::ProcessFailed, 'Python (#{attributes[:python_bin]}) is missing simplejson or json modules.'
    end