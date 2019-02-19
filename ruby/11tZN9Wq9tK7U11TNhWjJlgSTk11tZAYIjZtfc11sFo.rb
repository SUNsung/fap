
        
                unless post && post.id
          puts post.errors.full_messages if post
          puts creator.errors.inspect
          raise 'Failed to create description for trust level 3 lounge!'
        end
    
        Category.transaction do
      staff.group_names = ['staff']
      unless staff.save
        puts staff.errors.full_messages
        raise 'Failed to set permissions on the Staff category!'
      end
    
          if @custom_emoji.update(resource_params)
        log_action :update, @custom_emoji
        flash[:notice] = I18n.t('admin.custom_emojis.updated_msg')
      else
        flash[:alert] =  I18n.t('admin.custom_emojis.update_failed_msg')
      end
      redirect_to admin_custom_emojis_path(page: params[:page], **@filter_params)
    end
    
        web_subscription = ::Web::PushSubscription.create!(
      endpoint: subscription_params[:endpoint],
      key_p256dh: subscription_params[:keys][:p256dh],
      key_auth: subscription_params[:keys][:auth],
      data: data,
      user_id: active_session.user_id,
      access_token_id: active_session.access_token_id
    )
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
      class VagrantSSHCommandError < RuntimeError; end
    
          def call
        ask_question
        value_or_default
      end
    
          # Read each line as a path
      File.new(exclude_file, 'r').each_line do |line|
        # Handle each line as if it were an argument
        input.attributes[:excludes] << line.strip
      end
    end
    
        #self.name = [attributes[:gem_package_name_prefix], spec.name].join('-')
    self.license = (spec.license or 'no license listed in #{File.basename(gem_path)}')
    
        settings['prefix'] = staging_path(attributes[:prefix])
    FileUtils.mkdir_p(settings['prefix'])
    
      option '--postinstall-action', 'POSTINSTALL_ACTION',
    'Post-install action provided in package metadata. ' \
    'Optionally one of '#{POSTINSTALL_ACTIONS.join('', '')}'.' do |value|
    if !POSTINSTALL_ACTIONS.include?(value)
      raise ArgumentError, 'osxpkg-postinstall-action value of '#{value}' is invalid. ' \
        'Must be one of #{POSTINSTALL_ACTIONS.join(', ')}'
    end
    value
  end
    
      option '--publisher', 'PUBLISHER', 
    'Set the publisher name for the repository',
    :default => 'FPM'
    
        php_bin = attributes[:pear_php_bin] || '/usr/bin/php'
    logger.info('Setting php_bin', :php_bin => php_bin)
    safesystem('pear', '-c', config, 'config-set', 'php_bin', php_bin)
    
          base = staging_path(File.join(attributes[:prefix], '#{platform.platform}/#{platform.target_version || 'default'}'))
      target = File.join(base, 'files')
      actions_script = File.join(base, 'install_actions.sh')
      ::PleaseRun::Installer.install_files(platform, target, false)
      ::PleaseRun::Installer.write_actions(platform, actions_script)
    end
    
    # Support for self extracting sh files (.sh files)
#
# This class only supports output of packages.
#
# The sh package is a single sh file with a tar payload concatenated to the end.
# The script can unpack the tarball to install it and call optional post install scripts.
class FPM::Package::Sh < FPM::Package
    
        # Generate the package 'Prototype' file
    File.open('#{build_path}/Prototype', 'w') do |prototype|
      prototype.puts('i pkginfo')
      prototype.puts('i preinstall') if self.scripts['pre-install']
      prototype.puts('i postinstall') if self.scripts['post-install']