      def self.description
        'Modifies the services of the app created on Developer Portal'
      end
    
          def update_podspec(version = nil)
        new_version = version || @version_value
        updated_podspec_content = @podspec_content.gsub(@version_regex, '#{@version_match[:begin]}#{new_version}#{@version_match[:end]}')
    
        def fetch_app_platform(required: true)
      result = config[:app_platform]
      result ||= FastlaneCore::IpaFileAnalyser.fetch_app_platform(config[:ipa]) if config[:ipa]
      if required
        result ||= UI.input('Please enter the app's platform (appletvos, ios, osx): ')
        UI.user_error!('App Platform must be ios, appletvos, or osx') unless ['ios', 'appletvos', 'osx'].include?(result)
        UI.verbose('App Platform (#{result})')
      end
      return result
    end
  end
end

    
          #
      # Builds
      #
    
          module CertificateType
        IOS_DEVELOPMENT = 'IOS_DEVELOPMENT'
        IOS_DISTRIBUTION = 'IOS_DISTRIBUTION'
        MAC_APP_DISTRIBUTION = 'MAC_APP_DISTRIBUTION'
        MAC_INSTALLER_DISTRIBUTION = 'MAC_INSTALLER_DISTRIBUTION'
        MAC_APP_DEVELOPMENT = 'MAC_APP_DEVELOPMENT'
        DEVELOPER_ID_KEXT = 'DEVELOPER_ID_KEXT'
        DEVELOPER_ID_APPLICATION = 'DEVELOPER_ID_APPLICATION'
      end
    
      def define_categories
    cat_info = {
      'collabs': ['Collaborators Wanted', '#5AE8D9'],
      'cfp': ['Call For Proposal', '#f58f8d'],
      'forhire': ['Available For Hire', '#b78cf4'],
      'education': ['Education', '#5AABE8'],
      'jobs': ['Now Hiring', '#53c3ad'],
      'mentors': ['Offering Mentorship', '#A69EE8'],
      'mentees': ['Looking For Mentorship', '#88aedb'],
      'forsale': ['Stuff For Sale', '#d0adfb'],
      'events': ['Upcoming Event', '#f8b3d0'],
      'misc': ['Miscellaneous', '#6393FF'],
      'products': ['Products & Tools', '#5AE8D9']
    }
    @category = cat_info[@listing.category.to_sym][0]
    @cat_color = cat_info[@listing.category.to_sym][1]
  end
end

    
          cl_image_path(src,
                    type: 'fetch',
                    width: '1000',
                    height: '500',
                    crop: 'imagga_scale',
                    quality: 'auto',
                    flags: 'progressive',
                    fetch_format: 'auto',
                    sign_url: true)
    end
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
    
        obj = Helpers.new('HTTP_ACCEPT_LANGUAGE' => 'pt')
    assert_equal 'pt', obj.locale
    
      it 'allows until delay scheduling of AM mails' do
    ss = Sidekiq::ScheduledSet.new
    assert_equal 0, ss.size
    UserMailer.delay_until(5.days.from_now).greetings(1, 2)
    assert_equal 1, ss.size
  end
    
          @retry = Sidekiq::RetrySet.new
      @scheduled = Sidekiq::ScheduledSet.new
      @poller = Sidekiq::Scheduled::Poller.new
    end
    
      describe 'redis info' do
    it 'calls the INFO command which returns at least redis_version' do
      output = Sidekiq.redis_info
      assert_includes output.keys, 'redis_version'
    end
  end
end

    
      it 'should relay parameters through json' do
    assert Sidekiq::Client.enqueue(InlineWorkerWithTimeParam, Time.now.to_f)
  end
    
        ## Write the results to a file
    ## Requires railsexpress patched MRI build
    # brew install qcachegrind
    #File.open('callgrind.profile', 'w') do |f|
      #RubyProf::CallTreePrinter.new(result).print(f, :min_percent => 1)
    #end
  end
end
    
        pkg = klass.new
    pkg.cleanup_staging # purge any directories that may have been created by klass.new
    
          # major/minor
      header[TAR_MAJOR_START..TAR_MAJOR_END] = '0'.rjust(8, '0')
      header[TAR_MINOR_START..TAR_MINOR_END] = '0'.rjust(8, '0')
      header[TAR_MAJOR_END] = '\0'
      header[TAR_MINOR_END] = '\0'
    else
      header[TAR_UNAME_START..TAR_UNAME_END] = pad_string_to('root', 32)
      header[TAR_GNAME_START..TAR_GNAME_END] = pad_string_to('root', 32)
    end
    
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
    
        files = []
    Find.find('.') do |path|
      stat = File.lstat(path)
      next unless stat.symlink? or stat.file?
      files << path
    end
    ::Dir.chdir(cwd)
    
          if !attributes[:python_install_bin].nil?
        flags += [ '--install-scripts', File.join(prefix, attributes[:python_install_bin]) ]
      elsif !attributes[:prefix].nil?
        # prefix given, but not python_install_bin, assume PREFIX/bin
        flags += [ '--install-scripts', File.join(prefix, 'bin') ]
      end