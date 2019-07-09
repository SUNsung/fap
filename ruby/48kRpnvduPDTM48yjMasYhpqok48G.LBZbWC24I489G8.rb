
        
        # == Schema Information
#
# Table name: application_requests
#
#  id       :integer          not null, primary key
#  date     :date             not null
#  req_type :integer          not null
#  count    :integer          default(0), not null
#
# Indexes
#
#  index_application_requests_on_date_and_req_type  (date,req_type) UNIQUE
#

    
      def report
    @report ||= JSON.parse(request.body.read)['csp-report'].slice(
      'blocked-uri',
      'disposition',
      'document-uri',
      'effective-directive',
      'original-policy',
      'referrer',
      'script-sample',
      'status-code',
      'violated-directive',
      'line-number',
      'source-file'
    )
  end
    
        delegate :base_url, to: :ContentSecurityPolicy
    
      def not_modified?
    cache_time =
      begin
        Time.rfc2822(request.env['HTTP_IF_MODIFIED_SINCE'])
      rescue ArgumentError
        nil
      end
    
      def lookup_user_api_user_and_update_key(user_api_key, client_id)
    if api_key = UserApiKey.where(key: user_api_key, revoked_at: nil).includes(:user).first
      unless api_key.allow?(@env)
        raise Discourse::InvalidAccess
      end
    
              instance.request = request_copy
          original_headers&.each do |k, v|
            instance.response.headers[k] = v
          end
    
        token = SecureRandom.hex(16)
    
        def add(path, content)
      @pages[path] = content
    end
    
        def html?
      mime_type.include? 'html'
    end
    
              node.before(%(<div class='pre-title'>#{node['title']}</div>)) if node['title']
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
            # Remove dead links (e.g. ngRepeat)
        css('a.type-hint').each do |node|
          node.name = 'code'
          node.remove_attribute 'href'
        end
    
        # Find all leaf-like paths (files, symlink, empty directories, etc)
    # Also trim the leading path such that '#{staging_path}/' is removed from
    # the path before returning.
    #
    # Wrapping Find.find in an Enumerator is required for sane operation in ruby 1.8.7,
    # but requires the 'backports' gem (which is used in other places in fpm)
    return Enumerator.new { |y| Find.find(staging_path) { |path| y << path } } \
      .select { |path| path != staging_path } \
      .select { |path| is_leaf.call(path) } \
      .collect { |path| path[staging_path.length + 1.. -1] }
  end # def files
    
        # Write +COMPACT_MANIFEST, without the 'files' section.
    File.open(staging_path('+COMPACT_MANIFEST'), 'w+') do |file|
      file.write(pkgdata.to_json + '\n')
    end
    
        npm_flags = []
    settings.each do |key, value|
      # npm lets you specify settings in a .npmrc but the same key=value settings
      # are valid as '--key value' command arguments to npm. Woo!
      logger.debug('Configuring npm', key => value)
      npm_flags += [ '--#{key}', value ]
    end
    
        # do channel-discover if required
    if !attributes[:pear_channel].nil?
      logger.info('Custom channel specified', :channel => attributes[:pear_channel])
      channel_list = safesystemout('pear', '-c', config, 'list-channels')
      if channel_list !~ /#{Regexp.quote(attributes[:pear_channel])}/
        logger.info('Discovering new channel', :channel => attributes[:pear_channel])
        safesystem('pear', '-c', config, 'channel-discover', attributes[:pear_channel])
      end
      input_package = '#{attributes[:pear_channel]}/#{input_package}'
      logger.info('Prefixing package name with channel', :package => input_package)
    end
    
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
    
        if File.exists?(params[:output])
      # TODO(sissel): Allow folks to choose output?
      logger.error('Puppet module directory '#{params[:output]}' already ' \
                    'exists. Delete it or choose another output (-p flag)')
    end